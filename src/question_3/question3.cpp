#include "question3.h"

using std::string, std::cout, std::cin;
bool test_config()
{
    return true;
}

string gpa_to_letter_grade(double grade)
{
    string lgrade;
    if(grade <=4 && grade >=3.5)
    {
        lgrade = "A";
    }
    else if(grade <=3.49 && grade >=3)
    {
        lgrade = "B";
    }
    else if(grade <=2.99 && grade >=2)
    {
        lgrade = "C";
    }
    else if(grade <=1.99 && grade >=1)
    {
        lgrade = "D";
    }
    else
    {
        lgrade="F";
    }
    return lgrade;
}

void display_menu()
{
    cout<<"Welcome to my letter grade program.\n";
    string lgrade = "";
    double grade = 0.0;
    int endProgram = 0;
    char userChoice = ' ';
    while(endProgram!=1)
    {
        cout<<"Please enter a GPA grade in its numerical value: ";
        cin>>grade;
        lgrade = gpa_to_letter_grade(grade);
        cout<<"The letter grade for "<<grade<<" is: "<<lgrade<<"\n\n";

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