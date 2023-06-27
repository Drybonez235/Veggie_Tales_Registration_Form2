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
    
    vector<int> field_lengths = {43, 13, 7, 6, 49, 17, 5, 15, 24, 23, 24, 90, 10, 25, 25, 36, 33, 36, 33, 5, 96, 92, 93, 84, 8, 48};
   vector<string> values_array = {"name", "dob", "age", "sex", "address", "city", "state", "zip", "home_phone", "cell_phone", "other_phone", "email", "email_list", "parent_1", "parent_2", "emergency_contact1_name", "emeergency_contact1_phone", "emergency_contact2_name", "emergency_contact2_phone", "medical_issues", "allergies", "medications", "diet", "special", "walk_home", "aproved_pickup_persons"};
    
    file_reader file_1(file_path);
    cout << file_1.file_contents_vector[0][0] << endl;
    generic_form veggie_tales;
    veggie_tales.check_value_length_and_add_to_map(file_1.file_contents_vector[0], field_lengths, values_array);
   cout << veggie_tales.child_map["name"] << endl;
    
    cout << "end of the program" << endl;
    return 0;
}
