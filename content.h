#include <iostream>
#include <map>
#include <string>

using namespace std;

class generic_form{
    
public:
    map<string, string> child_map;
    
    generic_form(){
    
    }
    
    void set_map_value(string key, string value){
        child_map.insert(make_pair(key, value));
    }
    
    void check_value_length_and_add_to_map(vector<string> &record_values, vector<int> &field_lengths, vector<string> &record_values_names){
        int record_value_count = record_values.size();
        
        if(record_value_count > record_values_names.size()){
            cout << "There were more records then fields!!!";
        }
        
        int value_character_count;
        int value_character_limits;
        
        for(int i = 0; i < record_value_count; i++){
        value_character_count = record_values[i].size();
        value_character_limits = field_lengths[i];
            if(value_character_count < value_character_limits){
                set_map_value(record_values_names[i], record_values[i]);
                
            } else {
                    cout << "Value Skipped" << endl;
                }
           }//End of for loop
        }//end of check_value_lengths meathod
    
};//End of Class Bracket
