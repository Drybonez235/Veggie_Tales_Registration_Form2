//g++ -std=c++20 Veggie_Tales_Form.cpp
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include "content.h"
#include "file_reader.h"

using namespace std;

const string file_path = "/Users/jonathanlewis/Documents/Xcode/Veggie_Tales_Registration_Form2/records.txt";

//vector<string> read_line_from_records_file(ifstream file_object);
int main(){
    file_reader file_1(file_path);
    
        
    cout << "end of the program" << endl;
    return 0;
}



