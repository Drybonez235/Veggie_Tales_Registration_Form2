#include <iostream>
#include <map>
#include <string>

using namespace std;

class generic_form{
    
public:
    vector<string> record_value_names_ptr;
    vector<string> record_values_ptr;
    vector<int> field_lengths_ptr;

    
    generic_form(vector<string> &record_values, vector<int> &field_lengths, vector<string> &record_values_names){
    record_value_names_ptr = record_values_names;
        field_lengths_ptr = field_lengths;
        record_values_ptr = record_values;
        
    }
    
    void check_value_length(){
        
       int record_value_count = record_values_ptr.size();
        
        if(record_value_count > record_value_names_ptr.size()){
            cout << "There were more records then fields!!!";
        }
        
        int value_character_count;
        int value_character_limits;
        
        for(int i = 0; i < record_value_count; i++){
        value_character_count = record_values_ptr[i].size();
        value_character_limits = field_lengths_ptr[i];
            if(value_character_count < value_character_limits){
                
            } else {
                record_values_ptr[i] = "";
                }
           }//End of for loop
        }//end of check_value_lengths meathod
    
};//End of Class Bracket
