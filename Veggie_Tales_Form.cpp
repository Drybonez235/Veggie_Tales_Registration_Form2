//g++ -std=c++20 Veggie_Tales_Form.cpp
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

const string records_path = "/Users/jonathanlewis/Documents/Xcode/Veggie_Tales_Registration_Form2/records.txt";
const int form_fields = 0;
const int max_line_on_form = 0;

//vector<string> read_line_from_records_file(ifstream file_object);
ifstream file_stream_from_records(string file_path);
void read_line_from_records_file(ifstream &file_object, vector<vector<string>>& form_responses);


int main(){
    
    vector<vector<string>> form_responses{};
    ifstream file_object = file_stream_from_records(records_path);
    read_line_from_records_file(file_object, form_responses);
    
    for(int i = 0; i < form_responses.size(); i++){
        for(int c=0; c < form_responses[i].size(); c++){
            cout << form_responses[i][c];
        }
    }

    cout << "end of the program" << endl;
    return 0;
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

bool check_row_length(vector<string> &single_row){
    
}
