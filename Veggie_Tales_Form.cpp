#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

const string records_path = "users/jonathanlewis/documents/Xcode/Veggie_Tales_Registration_Form2/records.txt";

vector<string> read_line_from_records_file(ifstream file_object);
ifstream file_stream_from_recrods(string file_path);

int main(){
    ifstream file_object = file_stream_from_recrods(records_path);
    
    cout << "maybe this will work" << endl;
    
    return 0;
}

ifstream * file_stream_from_recrods(string file_path){
    ifstream input_reader(file_path);
    return  input_reader;
}

vector<string> read_line_from_records_file(ifstream file_object){
    vector<string> string_vector = { };

    return string_vector;
}

void tokenize_values_from_record_line(){
    
}
