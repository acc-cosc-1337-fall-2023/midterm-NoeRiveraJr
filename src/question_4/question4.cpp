#include "question4.h"

using std::string, std::cout, std::cin;
bool test_config()
{
    return true;
}


string decimal_to_hex(int decimalValue) 
{
    string hexString = "";
    while (decimalValue > 0) 
    {
        int remainder = decimalValue % 16;
        char hexDigit;
        if (remainder < 10) 
        {
            hexDigit = '0' + remainder;
        } 
        else 
        {
            hexDigit = 'A' + (remainder - 10);
        }
        hexString = hexDigit + hexString;
        decimalValue /= 16;
    }
    return hexString;
}

void display_menu()
{
    cout<<"Welcome to my decimal to hex program.\n";
    string hexValue;
    int decValue;
    int endProgram = 0;
    char userChoice = ' ';
    while(endProgram!=1)
    {
        cout<<"Please enter a decimal value to convert to hex: ";
        cin>>decValue;
        if(decValue >= 1 && decValue <=512)
        {
            hexValue = decimal_to_hex(decValue);
            cout<<"The hexadecimal value for "<<decValue<<" is: "<<hexValue<<"\n\n";
        }
        else
        {
            cout<<"You have entered an invalid input. Please try again.\n\n";
        }

        cout<<"If you would like to use this program again, type Y or y: ";
        cin>>userChoice;
        if(userChoice == 'Y' || userChoice == 'y')
        {
            cout<<"You have chosen to use the program again.\n\n";
        }
        else
        {
            cout<<"You have chosen to end the program, goodbye.\n";
            endProgram++;
        }
    }
}