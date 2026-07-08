/*************************************************************
 * Filename:        philly_encoder.cpp
 * Author:          Rachel Robertson
 * Date:            7/7/26
 * Last Modified:   7/7/26
 * Purpose:         Provides the Philly_Encoder struct to 
 *                  the driver containing 12 strings with
 *  wheel values used encoding and decoding purposes.
**************************************************************/
#include <iostream>
#include <cctype>
using namespace std;
const int WHEEL_SIZE = 27;

#ifndef PHILLY_ENCODER
#define PHILLY_ENCODER

/*      
    Default Wheels:
       1.   0 L O V T Z S M H N J R U I E W C D Q P K B Y G X F A 
       2.   O G N B Q 1 J C A X Z T K Y M H P E S D U R F L W I V 
       3.   O A J D W Q I Y C F X M U S G L B Z T H 2 R Z E N K P 
       4.   O A E V D Q U L I B S J 3 H N P F W M Y K G X C Z T R 
       5.   O Q P E X S Y J K V W B C Z A H U N F R I L T G 4 M D 
       6.   O H K W A E U M D G Z R J B Q T X C 5 S L Y F P N I V 
       7.   O V T Z S M H N J R U I E W C D Q P K B Y G X F A 6 L 
       8.   O G N B Q 7 J C A X Z T K Y M H P E S D U R F L W I V 
       9.   O A J D W Q I Y C F X M U S G L B Z T H 8 R V E N K P 
       10.  O A E V D Q U L I B S J 9 H N P F W M Y K G X C Z T R 
       11.  O Q P E X S Y J K V W B C Z A H U N F R I L T G @ M D 
       12.  O H K U M D W A E G Z R J B Q T X C * S L Y F P N I V 

*/

struct Philly_Encoder{
    string sW1 = "0LOVTZSMHNJRUIEWCDQPKBYGXFA";
    string sW2 = "OGNBQ1JCAXZTKYMHPESDURFLWIV";
    string sW3 = "OAJDWQIYCFXMUSGLBZTH2RZENKP";
    string sW4 = "OAEVDQULIBSJ3HNPFWMYKGXCZTR";
    string sW5 = "OQPEXSYJKVWBCZAHUNFRILTG4MD";
    string sW6 = "OHKWAEUMDGZRJBQTXC5SLYFPNIV";
    string sW7 = "OVTZSMHNJRUIEWCDQPKBYGXFA6L";
    string sW8 = "OGNBQ7JCAXZTKYMHPESDURFLWIV";
    string sW9 = "OAJDWQIYCFXMUSGLBZTH8RVENKP";
    string sW10 ="OAEVDQULIBSJ9HNPFWMYKGXCZTR";
    string sW11 ="OQPEXSYJKVWBCZAHUNFRILTG@MD";
    string sW12 ="OHKUMDWAEGZRJBQTXC*SLYFPNIV";


    //Getters
    string get_sW1(){
        return sW1;
    }
    string get_sW2(){
        return sW2;
    }
    string get_sW3(){
        return sW3;
    }
    string get_sW4(){
        return sW4;
    }
    string get_sW5(){
        return sW5;
    }
    string get_sW6(){
        return sW6;
    }
    string get_sW7(){
        return sW7;
    }
    string get_sW8(){
        return sW8;
    }
    string get_sW9(){
        return sW9;
    }
    string get_sW10(){
        return sW10;
    }
    string get_sW11(){
        return sW11;
    }
    string get_sW12(){
        return sW12;
    }

    // Setters
    void set_sW1(string value){
        sW1 = value;
    }
    void set_sW2(string value){
        sW2 = value;
    }
    void set_sW3(string value){
        sW3 = value;
    }
    void set_sW4(string value){
        sW4 = value;
    }
    void set_sW5(string value){
        sW5 = value;
    }
    void set_sW6(string value){
        sW6 = value;
    }
    void set_sW7(string value){
        sW7 = value;
    }
    void set_sW8(string value){
        sW8 = value;
    }
    void set_sW9(string value){
        sW9 = value;
    }
    void set_sW10(string value){
        sW10 = value;
    }
    void set_sW11(string value){
        sW11 = value;
    }
    void set_sW12(string value){
        sW12 = value;
    }


    /*
        Function Name:  reset()
        accepts:        one integer
        returns:        void
        description:    Returns wheels to original values
    */
    void reset(){
        sW1 = "0LOVTZSMHNJRUIEWCDQPKBYGXFA";
        sW2 = "OGNBQ1JCAXZTKYMHPESDURFLWIV";
        sW3 = "OAJDWQIYCFXMUSGLBZTH2RZENKP";
        sW4 = "OAEVDQULIBSJ3HNPFWMYKGXCZTR";
        sW5 = "OQPEXSYJKVWBCZAHUNFRILTG4MD";
        sW6 = "OHKWAEUMDGZRJBQTXC5SLYFPNIV";
        sW7 = "OVTZSMHNJRUIEWCDQPKBYGXFA6L";
        sW8 = "OGNBQ7JCAXZTKYMHPESDURFLWIV";
        sW9 = "OAJDWQIYCFXMUSGLBZTH8RVENKP";
        sW10 ="OAEVDQULIBSJ9HNPFWMYKGXCZTR";
        sW11 ="OQPEXSYJKVWBCZAHUNFRILTG@MD";
        sW12 ="OHKUMDWAEGZRJBQTXC*SLYFPNIV";
    }
    /*
        Function Name:  printLine()
        accepts:        one integer
        returns:        void
        description:    Prints the value of each wheel at a given index,
                        this variation is only used on start up to improove
        formatting for printing the initial wheel values
    */
    void printLine(int index){
        cout << "  " << sW1.at(index) << "  " << sW2.at(index) << "  " << sW3.at(index) << "  " << sW4.at(index) 
             << "  " << sW5.at(index) << "  " << sW6.at(index) << "  " << sW7.at(index) << "  " << sW8.at(index) 
             << "  " << sW9.at(index) << "  " << sW10.at(index) << "  " << sW11.at(index) << "  " << sW12.at(index) << endl;
    }

    /*
        Function Name:  printLine()
        accepts:        one integer
        returns:        void
        description:    Prints the value of each wheel at a given index
    */
    void printResultLine(int index){
        cout << sW1.at(index) << sW2.at(index) << sW3.at(index) << sW4.at(index) 
             << sW5.at(index) << sW6.at(index) << sW7.at(index) << sW8.at(index) 
             << sW9.at(index) << sW10.at(index) << sW11.at(index) << sW12.at(index) << endl;
    }

    /* Shifters:
        Each shifter takes a string which has a specific index checked against 
        all other values in a given wheel and selects the matching value to be placed
        at index 0 and places the values following the matched character at 1, 2 and so on
        so that all the values are shifted with the matched character at index 0.
    */

    /*
        Function Name:  shift_sW1()
        accepts:        one string
        returns:        void
    */
    void shift_sW1(string key){
        string shiftedWheel = "000000000000000000000000000";
        int startIndex = 0;
        int shiftVal;

        // Checks if the key is too short to shift the wheel
        if (key.size() < 1){
            cout << "Unexpected Error: encoded message is < 1 character long" << endl;
            return;
        }

        // Checks if the wheel is already alligned properlly
        if (key.at(0) == sW1.at(0)){
            return;
        }
        
        // Searches the wheel for the character in the first index of the key
        startIndex = sW1.find(key.at(0));
        

        if (startIndex != string::npos){
            // Search was sucessful
        }
        else{
            cout << "Unexpected error: No matching character for Wheel 1" << endl;
            return;
        }

        // Uses the starting index to fill a new wheel with a shifted version of the current wheel up till
        // the end of the indecies
        for (int i = 0; i<WHEEL_SIZE; i++){
            if (startIndex >= WHEEL_SIZE){
                startIndex = i;
                break;
            }
            shiftedWheel.at(i) = sW1.at(startIndex);

            // Must be incremented afterwards for the first index to be correct
            startIndex++;
        }

        // Finds the number of indecies that still need to be filled
        shiftVal = WHEEL_SIZE-startIndex;

        // Fills the remaining indecies on the new wheel begining with the first position
        // of the original wheel
        for (int i=0; i < shiftVal; i++){
            shiftedWheel.at(startIndex) = sW1.at(i);
            startIndex++;
        }

        sW1 = shiftedWheel;

    }

    /*
        Function Name:  shift_sW2()
        accepts:        one string
        returns:        void
    */
    void shift_sW2(string key){
        string shiftedWheel = "000000000000000000000000000";
        int startIndex = 0;
        int keyIndex = 1;
        int shiftVal;

        // Checks if the key is too short to shift the wheel
        if (key.size() < 2){
            cout << "Unexpected Error: encoded message is < 2 character long" << endl;
            return;
        }

        // Checks if the wheel is already alligned properlly
        if (key.at(keyIndex) == sW2.at(0)){
            return;
        }
        
        // Searches the wheel for the character in the second index of the key
        startIndex = sW2.find(key.at(keyIndex));
        

        if (startIndex != string::npos){
            // Search was sucessful
        }
        else{
            cout << "Unexpected error: No matching character for Wheel 2" << endl;
            return;
        }

        // Uses the starting index to fill a new wheel with a shifted version of the current wheel up till
        // the end of the indecies
        for (int i = 0; i<WHEEL_SIZE; i++){
            if (startIndex >= WHEEL_SIZE){
                startIndex = i;
                break;
            }
            shiftedWheel.at(i) = sW2.at(startIndex);

            // Must be incremented afterwards for the first index to be correct
            startIndex++;
        }

        // Finds the number of indecies that still need to be filled
        shiftVal = WHEEL_SIZE-startIndex;

        // Fills the remaining indecies on the new wheel begining with the first position
        // of the original wheel
        for (int i=0; i < shiftVal; i++){
            shiftedWheel.at(startIndex) = sW2.at(i);
            startIndex++;
        }

        sW2 = shiftedWheel;

    }

    /*
        Function Name:  shift_sW3()
        accepts:        one string
        returns:        void
    */
    void shift_sW3(string key){
        string shiftedWheel = "000000000000000000000000000";
        int startIndex = 0;
        int keyIndex = 2;
        int shiftVal;

        // Checks if the key is too short to shift the wheel
        if (key.size() < 3){
            cout << "Unexpected Error: encoded message is < 3 character long" << endl;
            return;
        }

        // Checks if the wheel is already alligned properlly
        if (key.at(keyIndex) == sW3.at(0)){
            return;
        }
        
        // Searches the wheel for the character in the third index of the key
        startIndex = sW3.find(key.at(keyIndex));

        if (startIndex != string::npos){
            // Search was sucessful
        }
        else{
            cout << "Unexpected error: No matching character for Wheel 3" << endl;
            return;
        }

        // Uses the starting index to fill a new wheel with a shifted version of the current wheel up till
        // the end of the indecies
        for (int i = 0; i<WHEEL_SIZE; i++){
            if (startIndex >= WHEEL_SIZE){
                startIndex = i;
                break;
            }
            shiftedWheel.at(i) = sW3.at(startIndex);

            // Must be incremented afterwards for the first index to be correct
            startIndex++;
        }

        // Finds the number of indecies that still need to be filled
        shiftVal = WHEEL_SIZE-startIndex;

        // Fills the remaining indecies on the new wheel begining with the first position
        // of the original wheel
        for (int i=0; i < shiftVal; i++){
            shiftedWheel.at(startIndex) = sW3.at(i);
            startIndex++;
        }

        sW3 = shiftedWheel;

    }

    /*
        Function Name:  shift_sW4()
        accepts:        one string
        returns:        void
    */
    void shift_sW4(string key){
        string shiftedWheel = "000000000000000000000000000";
        int startIndex = 0;
        int keyIndex = 3;
        int shiftVal;

        // Checks if the key is too short to shift the wheel
        if (key.size() < 4){
            cout << "Unexpected Error: encoded message is < 4 character long" << endl;
            return;
        }

        // Checks if the wheel is already alligned properlly
        if (key.at(keyIndex) == sW4.at(0)){
            return;
        }
        
        // Searches the wheel for the character in the fourth index of the key
        startIndex = sW4.find(key.at(keyIndex));


        if (startIndex != string::npos){
            // Search was sucessful
        }
        else{
            cout << "Unexpected error: No matching character for Wheel 4" << endl;
            return;
        }

        // Uses the starting index to fill a new wheel with a shifted version of the current wheel up till
        // the end of the indecies
        for (int i = 0; i<WHEEL_SIZE; i++){
            if (startIndex >= WHEEL_SIZE){
                startIndex = i;
                break;
            }
            shiftedWheel.at(i) = sW4.at(startIndex);

            // Must be incremented afterwards for the first index to be correct
            startIndex++;
        }

        // Finds the number of indecies that still need to be filled
        shiftVal = WHEEL_SIZE-startIndex;

        // Fills the remaining indecies on the new wheel begining with the first position
        // of the original wheel
        for (int i=0; i < shiftVal; i++){
            shiftedWheel.at(startIndex) = sW4.at(i);
            startIndex++;
        }

        sW4 = shiftedWheel;

    }

    /*
        Function Name:  shift_sW5()
        accepts:        one string
        returns:        void
    */
    void shift_sW5(string key){
        string shiftedWheel = "000000000000000000000000000";
        int startIndex = 0;
        int keyIndex = 4;
        int shiftVal;

        // Checks if the key is too short to shift the wheel
        if (key.size() < 5){
            cout << "Unexpected Error: encoded message is < 5 character long" << endl;
            return;
        }

        // Checks if the wheel is already alligned properlly
        if (key.at(keyIndex) == sW5.at(0)){
            return;
        }
        
        // Searches the wheel for the character in the fith index of the key
        startIndex = sW5.find(key.at(keyIndex));
        

        if (startIndex != string::npos){
            // Search was sucessful
        }
        else{
            cout << "Unexpected error: No matching character for Wheel 5" << endl;
            return;
        }

        // Uses the starting index to fill a new wheel with a shifted version of the current wheel up till
        // the end of the indecies
        for (int i = 0; i<WHEEL_SIZE; i++){
            if (startIndex >= WHEEL_SIZE){
                startIndex = i;
                break;
            }
            shiftedWheel.at(i) = sW5.at(startIndex);

            // Must be incremented afterwards for the first index to be correct
            startIndex++;
        }

        // Finds the number of indecies that still need to be filled
        shiftVal = WHEEL_SIZE-startIndex;

        // Fills the remaining indecies on the new wheel begining with the first position
        // of the original wheel
        for (int i=0; i < shiftVal; i++){
            shiftedWheel.at(startIndex) = sW5.at(i);
            startIndex++;
        }

        sW5 = shiftedWheel;

    }

    /*
        Function Name:  shift_sW6()
        accepts:        one string
        returns:        void
    */
    void shift_sW6(string key){
        string shiftedWheel = "000000000000000000000000000";
        int startIndex = 0;
        int keyIndex = 5;
        int shiftVal;

        // Checks if the key is too short to shift the wheel
        if (key.size() < 6){
            cout << "Unexpected Error: encoded message is < 6 character long" << endl;
            return;
        }

        // Checks if the wheel is already alligned properlly
        if (key.at(keyIndex) == sW6.at(0)){
            return;
        }
        
        // Searches the wheel for the character in the sixth index of the key
        startIndex = sW6.find(key.at(keyIndex));       

        if (startIndex != string::npos){
            // Search was sucessful
        }
        else{
            cout << "Unexpected error: No matching character for Wheel 6" << endl;
            return;
        }

        // Uses the starting index to fill a new wheel with a shifted version of the current wheel up till
        // the end of the indecies
        for (int i = 0; i<WHEEL_SIZE; i++){
            if (startIndex >= WHEEL_SIZE){
                startIndex = i;
                break;
            }
            shiftedWheel.at(i) = sW6.at(startIndex);

            // Must be incremented afterwards for the first index to be correct
            startIndex++;
        }

        // Finds the number of indecies that still need to be filled
        shiftVal = WHEEL_SIZE-startIndex;

        // Fills the remaining indecies on the new wheel begining with the first position
        // of the original wheel
        for (int i=0; i < shiftVal; i++){
            shiftedWheel.at(startIndex) = sW6.at(i);
            startIndex++;
        }

        sW6 = shiftedWheel;

    }

    /*
        Function Name:  shift_sW7()
        accepts:        one string
        returns:        void
    */
    void shift_sW7(string key){
        string shiftedWheel = "000000000000000000000000000";
        int startIndex = 0;
        int keyIndex = 6;
        int shiftVal;

        // Checks if the key is too short to shift the wheel
        if (key.size() < 7){
            cout << "Unexpected Error: encoded message is < 7 character long" << endl;
            return;
        }

        // Checks if the wheel is already alligned properlly
        if (key.at(keyIndex) == sW7.at(0)){
            return;
        }
        
        // Searches the wheel for the character in the seventh index of the key
        startIndex = sW7.find(key.at(keyIndex));

        if (startIndex != string::npos){
            // Search was sucessful
        }
        else{
            cout << "Unexpected error: No matching character for Wheel 7" << endl;
            return;
        }

        // Uses the starting index to fill a new wheel with a shifted version of the current wheel up till
        // the end of the indecies
        for (int i = 0; i<WHEEL_SIZE; i++){
            if (startIndex >= WHEEL_SIZE){
                startIndex = i;
                break;
            }
            shiftedWheel.at(i) = sW7.at(startIndex);

            // Must be incremented afterwards for the first index to be correct
            startIndex++;
        }

        // Finds the number of indecies that still need to be filled
        shiftVal = WHEEL_SIZE-startIndex;

        // Fills the remaining indecies on the new wheel begining with the first position
        // of the original wheel
        for (int i=0; i < shiftVal; i++){
            shiftedWheel.at(startIndex) = sW7.at(i);
            startIndex++;
        }

        sW7 = shiftedWheel;

    }

    /*
        Function Name:  shift_sW8()
        accepts:        one string
        returns:        void
    */
    void shift_sW8(string key){
        string shiftedWheel = "000000000000000000000000000";
        int startIndex = 0;
        int keyIndex = 7;
        int shiftVal;

        // Checks if the key is too short to shift the wheel
        if (key.size() < 8){
            cout << "Unexpected Error: encoded message is < 8 character long" << endl;
            return;
        }

        // Checks if the wheel is already alligned properlly
        if (key.at(keyIndex) == sW8.at(0)){
            return;
        }
        
        // Searches the wheel for the character in the eighth index of the key
        startIndex = sW8.find(key.at(keyIndex));

        if (startIndex != string::npos){
            // Search was sucessful
        }
        else{
            cout << "Unexpected error: No matching character for Wheel 8" << endl;
            return;
        }

        // Uses the starting index to fill a new wheel with a shifted version of the current wheel up till
        // the end of the indecies
        for (int i = 0; i<WHEEL_SIZE; i++){
            if (startIndex >= WHEEL_SIZE){
                startIndex = i;
                break;
            }
            shiftedWheel.at(i) = sW8.at(startIndex);

            // Must be incremented afterwards for the first index to be correct
            startIndex++;
        }

        // Finds the number of indecies that still need to be filled
        shiftVal = WHEEL_SIZE-startIndex;

        // Fills the remaining indecies on the new wheel begining with the first position
        // of the original wheel
        for (int i=0; i < shiftVal; i++){
            shiftedWheel.at(startIndex) = sW8.at(i);
            startIndex++;
        }

        sW8 = shiftedWheel;

    }

    /*
        Function Name:  shift_sW9()
        accepts:        one string
        returns:        void
    */
    void shift_sW9(string key){
        string shiftedWheel = "000000000000000000000000000";
        int startIndex = 0;
        int keyIndex = 8;
        int shiftVal;

        // Checks if the key is too short to shift the wheel
        if (key.size() < 9){
            cout << "Unexpected Error: encoded message is < 9 character long" << endl;
            return;
        }

        // Checks if the wheel is already alligned properlly
        if (key.at(keyIndex) == sW9.at(0)){
            return;
        }
        
        // Searches the wheel for the character in the ninth index of the key
        startIndex = sW9.find(key.at(keyIndex));

        if (startIndex != string::npos){
            // Search was sucessful
        }
        else{
            cout << "Unexpected error: No matching character for Wheel 9" << endl;
            return;
        }

        // Uses the starting index to fill a new wheel with a shifted version of the current wheel up till
        // the end of the indecies
        for (int i = 0; i<WHEEL_SIZE; i++){
            if (startIndex >= WHEEL_SIZE){
                startIndex = i;
                break;
            }
            shiftedWheel.at(i) = sW9.at(startIndex);

            // Must be incremented afterwards for the first index to be correct
            startIndex++;
        }

        // Finds the number of indecies that still need to be filled
        shiftVal = WHEEL_SIZE-startIndex;

        // Fills the remaining indecies on the new wheel begining with the first position
        // of the original wheel
        for (int i=0; i < shiftVal; i++){
            shiftedWheel.at(startIndex) = sW9.at(i);
            startIndex++;
        }

        sW9 = shiftedWheel;

    }

    /*
        Function Name:  shift_sW10()
        accepts:        one string
        returns:        void
    */
    void shift_sW10(string key){
        string shiftedWheel = "000000000000000000000000000";
        int startIndex = 0;
        int keyIndex = 9;
        int shiftVal;

        // Checks if the key is too short to shift the wheel
        if (key.size() < 10){
            cout << "Unexpected Error: encoded message is < 10 character long" << endl;
            return;
        }

        // Checks if the wheel is already alligned properlly
        if (key.at(keyIndex) == sW10.at(0)){
            return;
        }
        
        // Searches the wheel for the character in the tenth index of the key
        startIndex = sW10.find(key.at(keyIndex));

        if (startIndex != string::npos){
            // Search was sucessful
        }
        else{
            cout << "Unexpected error: No matching character for Wheel 10" << endl;
            return;
        }

        // Uses the starting index to fill a new wheel with a shifted version of the current wheel up till
        // the end of the indecies
        for (int i = 0; i<WHEEL_SIZE; i++){
            if (startIndex >= WHEEL_SIZE){
                startIndex = i;
                break;
            }
            shiftedWheel.at(i) = sW10.at(startIndex);

            // Must be incremented afterwards for the first index to be correct
            startIndex++;
        }

        // Finds the number of indecies that still need to be filled
        shiftVal = WHEEL_SIZE-startIndex;

        // Fills the remaining indecies on the new wheel begining with the first position
        // of the original wheel
        for (int i=0; i < shiftVal; i++){
            shiftedWheel.at(startIndex) = sW10.at(i);
            startIndex++;
        }

        sW10 = shiftedWheel;

    }

    /*
        Function Name:  shift_sW11()
        accepts:        one string
        returns:        void
    */
    void shift_sW11(string key){
        string shiftedWheel = "000000000000000000000000000";
        int startIndex = 0;
        int keyIndex = 10;
        int shiftVal;

        // Checks if the key is too short to shift the wheel
        if (key.size() < 11){
            cout << "Unexpected Error: encoded message is < 11 character long" << endl;
            return;
        }

        // Checks if the wheel is already alligned properlly
        if (key.at(keyIndex) == sW11.at(0)){
            return;
        }
        
        // Searches the wheel for the character in the eleventh index of the key
        startIndex = sW11.find(key.at(keyIndex));

        if (startIndex != string::npos){
            // Search was sucessful
        }
        else{
            cout << "Unexpected error: No matching character for Wheel 11" << endl;
            return;
        }

        // Uses the starting index to fill a new wheel with a shifted version of the current wheel up till
        // the end of the indecies
        for (int i = 0; i<WHEEL_SIZE; i++){
            if (startIndex >= WHEEL_SIZE){
                startIndex = i;
                break;
            }
            shiftedWheel.at(i) = sW11.at(startIndex);

            // Must be incremented afterwards for the first index to be correct
            startIndex++;
        }

        // Finds the number of indecies that still need to be filled
        shiftVal = WHEEL_SIZE-startIndex;

        // Fills the remaining indecies on the new wheel begining with the first position
        // of the original wheel
        for (int i=0; i < shiftVal; i++){
            shiftedWheel.at(startIndex) = sW11.at(i);
            startIndex++;
        }

        sW11 = shiftedWheel;

    }

    /*
        Function Name:  shift_sW12()
        accepts:        one string
        returns:        void
    */
    void shift_sW12(string key){
        string shiftedWheel = "000000000000000000000000000";
        int startIndex = 0;
        int keyIndex = 11;
        int shiftVal;

        // Checks if the key is too short to shift the wheel
        if (key.size() < 12){
            cout << "Unexpected Error: encoded message is < 12 character long" << endl;
            return;
        }

        // Checks if the wheel is already alligned properlly
        if (key.at(keyIndex) == sW12.at(0)){
            return;
        }
        
        // Searches the wheel for the character in the twelfth index of the key
        startIndex = sW12.find(key.at(keyIndex));

        if (startIndex != string::npos){
            // Search was sucessful
        }
        else{
            cout << "Unexpected error: No matching character for Wheel 12" << endl;
            return;
        }

        // Uses the starting index to fill a new wheel with a shifted version of the current wheel up till
        // the end of the indecies
        for (int i = 0; i<WHEEL_SIZE; i++){
            if (startIndex >= WHEEL_SIZE){
                startIndex = i;
                break;
            }
            shiftedWheel.at(i) = sW12.at(startIndex);

            // Must be incremented afterwards for the first index to be correct
            startIndex++;
        }

        // Finds the number of indecies that still need to be filled
        shiftVal = WHEEL_SIZE-startIndex;

        // Fills the remaining indecies on the new wheel begining with the first position
        // of the original wheel
        for (int i=0; i < shiftVal; i++){
            shiftedWheel.at(startIndex) = sW12.at(i);
            startIndex++;
        }

        sW12 = shiftedWheel;

    }

};

#endif