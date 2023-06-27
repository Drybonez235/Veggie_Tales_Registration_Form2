#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

class file_reader{
public:
    string records_path;
    vector<vector<string>> file_contents_vector;
   
    
    file_reader(string file_path){
        records_path = file_path;
        ifstream file_stream = file_stream_from_records(file_path);
        read_line_from_records_file(file_stream, file_contents_vector);
    }
    
    ifstream file_stream_from_records(string file_path){
        ifstream input_reader(file_path);
        return  input_reader;
    }
    
    void read_line_from_records_file(ifstream &file_object, vector<vector<string>>& form_responses){
        string line, record, temp;
        vector<string> row;
        
        while(file_object){
            row.clear();
            getline(file_object, line);
            
            stringstream s(line);
            while(getline(s, record, ',')) {
                row.push_back(record);
            }
            //Sends the records to the function
            form_responses.push_back(row);
        }
    }
};
