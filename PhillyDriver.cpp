/*************************************************************
 * Filename:        PhillyDriver.cpp
 * Author:          Rachel Robertson
 * Date:            7/7/26
 * Last Modified:   7/7/26
 * Purpose:         Encodes and decodes messages based on a 
                    cipher wheel system by using strings.
**************************************************************/
#include "philly_encoder.h"

int main(){

    // Variables
    Philly_Encoder cryptoKey;
    string message;
    bool repeat = true;

    // Beginning of main loop
    do{
        // Prints current wheel values
        cout << "\nPossible values for each wheel:" << endl;

        cout << "_________________/@\\_________________" << endl;
        cout << "|1 |2 |3 |4 |5 |6 |7 |8 |9 |10|11|12|" << endl;
        
        for (int i = 1; i < WHEEL_SIZE; i++){
            cryptoKey.printLine(i);
        }
        
        cout << "_____________________________________" << endl;

        // Accepts message for encoding / decoding
        cout << "Please input the message you would like to encoded or decode. " << endl;
        getline(cin, message);
        cout << endl;

        // Changes all alphabetical characters to uppercase
        for (int i=0; i < message.size(); i++){
            if(isalpha(message.at(i))){
                message.at(i) = toupper(message.at(i));
            }
        }

        // Warns the user that the program only processes 12 characters at a time 
        if (message.size() > 12){
            cout << "\tWarning: the string entered is larger than 12 characters long." << endl;
            cout << "\tOnly the first 12 characters will be encoded / decoded in this pass.\n" << endl;
        }

        // Shifts each wheel to make the first value in each wheel match the input message
        cryptoKey.shift_sW1(message);
        cryptoKey.shift_sW2(message);
        cryptoKey.shift_sW3(message);
        cryptoKey.shift_sW4(message);
        cryptoKey.shift_sW5(message);
        cryptoKey.shift_sW6(message);
        cryptoKey.shift_sW7(message);
        cryptoKey.shift_sW8(message);
        cryptoKey.shift_sW9(message);
        cryptoKey.shift_sW10(message);
        cryptoKey.shift_sW11(message);
        cryptoKey.shift_sW12(message);

        // prints the first index value of each wheel (The input message)
        cout << "\nEncoded string: ";
        cryptoKey.printResultLine(0);

        // Prints all possible messages
        cout << "\nPossible decoded messages: " << endl;

        for (int i = 1; i < WHEEL_SIZE; i++){
            cryptoKey.printResultLine(i);
        }

        // Give the option to run the program again
        cout << "Would you like to decode another string? (Y/N)" << endl;
        cin >> message;
        cout << endl;

        // Changes all characters to uppercase
            for (int i=0; i < message.size(); i++){
                if(isalpha(message.at(i))){
                    message.at(i) = toupper(message.at(i));
                }
            }

        // Input validation
        while(!cin || ((message != "N") && (message != "Y"))){
            
            // Changes all characters to uppercase
            for (int i=0; i < message.size(); i++){
                if(isalpha(message.at(i))){
                    message.at(i) = toupper(message.at(i));
                }
            }
            cout << "Please enter either 'Y' or 'N' " << endl;
            cout << "Would you like to decode another string? (Y/N)" << endl;
            cin >> message;
            cout << endl;
        }

        // Ends the loop if the user selects n or N
        if (message == "N"){
            repeat = false;
        }

        // Returns program to original conditions
        cryptoKey.reset();
        cin.ignore();

    }while(repeat == true);

    cout << "Ending program..." << endl;

    return 0;
}