#include <iostream>
#include <fstream>

using namespace std;

class html_generator{
public:
    string file_name;
    
    html_generator(vector<string> &values_vector, vector<int> &max_charactor_lengths){
        file_name = "filled_forms/"+values_vector[0]+".html";
        cout << file_name << endl;
        write_html(values_vector, max_charactor_lengths);
    }
    
    void write_html(vector<string> values_vector, vector<int> max_charactor_lengths){
        string variable_line, new_value;
        string span1 = "<span class=\"underscore\">";
        string span2 = "</span>";
        
        int string_length;
        ofstream output_writer(file_name, ios::trunc);
        
        for(int i = 0; i < values_vector.size(); i++ ){
            string_length = max_charactor_lengths[i] - values_vector[i].size();
            std::string var((string_length), '_');
            new_value = values_vector[i]+span1+var+span2;
            values_vector[i] = new_value;
        }
        string html1 = "<!DOCTYPE html>"
        "<html lang=\"en\">"
        "<head>"
        "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">"
        "<meta http-equiv=\"Content-Style-Type\" content=\"text/css\">"
        "<title> this doesn't matter</title>"
        "<meta name=\"Generator\" content=\"Cocoa HTML Writer\">"
        "<meta name=\"CocoaVersion\" content=\"2299.5\">"
        "<style  type=\"text/css\">"
        "#pdf_form{"
        "box-sizing: content-box;"
        "width: 9.5in;"
        "height: 14.00in;"
        "padding: 0.25in 1.0in 0.0in 1.0in;"
        "border: 1px solid black;"
        "}"
        "body {"
        "font-family: 'Times New Roman';"
        "text-indent: -1.0px;"
        "}"
        "h1 {"
        "margin: 0.0px 0.0px 10.0pt 0.0px;"
        "font: 18.0pt 'Times New Roman';"
        "text-align: center;"
        "}"
        "h2 {"
        "font: 14.0pt 'Times New Roman';"
        "margin: 0.0px 0.0px 0.5px 0.0px;"
        "}"
        "h3{"
        "font: 15.0pt 'Times New Roman';"
        "text-align: center;"
        "}"
        "p {"
        "margin: 0.0px 0.0px 16.1px 0.0px;"
        "font: 13.0pt 'Times New Roman';"
        "}"
        "#medical_release {"
        "width: 9.0in;"
        "border: solid 2pt black;"
        "}"
        "#medical_release p{"
        "font: 15.0pt 'Times New Roman';"
        "margin: 1.0pt 0.5pt 2.0pt 10.0pt;"
        "}"
        "#medical_info{"
        "margin: 0.0px 0.0px 16.1px 0.0px;"
        "}"
        "#medical_info p{"
        "font: 13.0pt 'Times New Roman';"
        "margin: 1.0pt 0.5pt 0.5pt 1.0pt;"
        "}"
        "#insurence p{"
        "font: 13.0pt 'Times New Roman';"
        "margin: 1.0pt 1.0pt 1.0pt 1.0pt;"
        "}"
        "#p_signature p{"
        "font: 13.0pt 'Times New Roman';"
        "margin: 1.0pt 1.0pt 1.0pt 1.0pt;"
        "}"
        "#c_signature p{"
        "font: 13.0pt 'Times New Roman';"
        "margin: 1.0pt 1.0pt 1.0pt 1.0pt;"
        "}"
        "div {"
        "padding: 1.0pt 0.0pt 5.0pt 0.0pt;"
        "}"
        ".underscore{"
        "visibility: hidden;"
        "}"
        "</style>"
        "</head>"
        "<body id=\"pdf_form\">"
        "<h1>Northwest Community Church<br>Permission Slip for Year-Round Activities<br></h1>"
        "<p>Child's Name: " + values_vector[0]  + "Birth Date: " + values_vector[1] + "Age: " + values_vector[2] + "Sex: " + values_vector[3]+ "</p>"
        "<p>Address: " + values_vector[4] + "City: "+values_vector[5]+"State: " + values_vector[6] + " Zip: "+values_vector[7]+"</p>"
        "<p>Home Phone: " +values_vector[8]+"Cell Phone: " +values_vector[9]  +"Other Phone: "+values_vector[10]+ "</p>"
        "<p>Email Address: " +values_vector[11]+"</p>"
        "<p>Added to NW Email List? " +values_vector[12]+ "How did you hear about NW? ______________________________________________</p>"
        "<p>Father's/Legal Guardian Name: " +values_vector[13]+ "Mother's/Legal Guardian Name: " +values_vector[14]+ "</p>"
        "<p>Other emergency contacts:</p>"
        "<p>Name " +values_vector[15]+ "Phone: "+values_vector[16]+"</p>"
        "<p>Name: " +values_vector[17] + "Phone: "+values_vector[18]+"</p>"
        "<div id=\"medical_release\">"
        "<p>PARENT: Do you give permission for your child to be treated for injuries or illnesses during this activity?</p>"
        "<p>If so, please write \"Yes.\" _____ Should Injury or illness occur we will make every effort to contact you,</p>"
        "<p>but we need your permission to treat minor problems and medical emergencies.</p>"
        "<p>MEDICAL RELEASE: Should emergency medical treatment be necessary during this activity, I hereby</p>"
        "<p>grant consent to approved church leaders and chaperones to seek the following medical treatment to my</p>"
        "<p>child: medical or surgical examination, any anesthetic, and treatment of any medical need diagnosed by a</p>"
        "<p>duly licensed physician or surgeon. Consent is given in advance of any specific diagnosis.</p>"
        "<p>PARENT/LEGAL GUARDIAN SIGNATURE:_________________________________Date:_________</p>"
        "</div>"
        "<div id=\"medical_info\">"
        "<h2>MEDICAL INFORMATION:</h2>"
        "<p>Does this child have any allergies, health problems that require medication or a special diet, or special considerations we should</p>"
        "<p>be aware of? " +values_vector[19]+ "If YES, provide a detailed explanation below.  List name of condition, name of medication, medication</p>"
        "<p>schedule of doses, and/or other needs.<br></p>"
        "</div>"
        "<p>Allergies: "+values_vector[20]+ " </p>"
        "<p>Medications: "+values_vector[21]+"</p>"
        "<p>Special Diet: "+values_vector[22]+"</p>"
        "<p>Special Considerations: "+values_vector[23]+"</p>"
            "<p>Child may walk home alone? " +values_vector[24]+ "Approved Pick Up Persons: "+values_vector[25]+"</p>"
            "<div id=\"insurence\">"
            "<p>INSURENCE INFORMATION: Northwest Community Church is covered with a major insurance carrier. However, please note:</p>"
            "<p>Church insurance will not pay for claims on individuals who are covered by other companies and plans. If you have no insurance,</p>"
            "<p>or yours will not pay for accident claims, then the church's insurance will take over the claim.</p>"
            "</div>"
            "<div id=\"p_signature\">"
            "<p>PARENT/LEGAL GUARDIAN SIGNATURE: ___________________________________________ Date:  ______________</p>"
            "<p>Your signature signifies approval and permission for your child to attend and participate in all activities at or sponsored by</p>"
            "<p> Northwest Community Church including, but not limited to:Safe Haven Program, Nursery, Sunday School Classes, Children's</p>"
            "<p>Church, Jr. Church, VTA, Open Court Basketball, Basketball Camp, Camp Hope, Soccer Camp, etc.</p>"
            "<p>Your signature also gives approval for the approved church leaders and chaperones to seek medical treatment in the event of a</p>"
            "<p>medical emergency. Your signature on this form also signifies that you are aware of the inherent risk of injury and approve of your</p>"
            "<p>child attending. Finally, by signing this, you also allow for pictures/videos of your child to be used in promotional materials for</p>"
            "<p>Northwest Community Church.</p>"
            "</div>"
            "<div id=\"c_signature\">"
            "<p>PARTICIPANT SIGNATURE:  ________________________________________________________ Date: _______________</p>"
            "<p>Your signature signifies that you agree to the rules, policies, and guidelines for this activity and that you will cooperate fully with</p>"
            "<p>church leaders.</p>"
            "</div>"
        "</div>"
            "<h3>Northwest Community Church - 5318 W. Diversey Avenue - Chicago, IL 60639 - 773.427.9300</h3>"
        "</body>"
        "</html>";
        output_writer << html1;
        output_writer.close();
    }
    
};
