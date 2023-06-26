#include <iostream>
#include <map>
#include <string>

using namespace std;

class generic_form{
    
public:
    static const int form_fields = 26;
    static constexpr int field_lengths[form_fields] = {43, 13, 7, 6, 49, 17, 5, 15, 24, 23, 24, 90, 10, 25, 25, 36, 33, 36, 33, 5, 96, 92, 93, 84, 8, 48};
    map<string, string> child_map;
    const string values_array[form_fields];
    //= {"name", "dob", "age", "sex", "address", "city", "state", "zip", "home_phone", "cell_phone", "other_phone", "email", "email_list", "parent_1", "parent_2", "emergency_contact1_name", "emeergency_contact1_phone", "emergency_contact2_name", "emergency_contact2_phone", "medical_issues", "allergies", "medications", "diet", "special", "walk_home", "aproved_pickup_persons"};
    
    void set_map_value(string key, string value){
        child_map.insert(make_pair(key, value));
    }
    
    void check_value_length(vector<string> &record_values){
        int record_value_count = record_values.size();
        
        if(record_value_count > form_fields){
            cout << "There were more records then fields!!!";
        }
        int value_character_count;
        
        
        for(int i = 0; i < record_value_count; i++){
        value_character_count = record_values[i].size();
            if(value_character_count < field_lengths[i]){
                set_map_value(values_array[i], record_values[i]);
                
            } else {
                    cout << "Value Skipped" << endl;
                }
           }//End of for loop
        }//end of check_value_lengths meathod
    
};//End of Class Bracket
