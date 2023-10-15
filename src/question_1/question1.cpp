#include "question1.h"

using std::cout, std::cin, std::string;

bool test_config()
{
    return true;
}

vector<double> get_cookie_ingredients(int cookies)
{
    vector<double> ingredients = {0.0,0.0,0.0};

    for(int i =0; i < ingredients.size(); i++)
    {
        ingredients[i] = cookies * (recipe[i] / 48);
    }

    return ingredients;
}

void display_menu()
{
    cout<<"Welcome to my cookie recipe program.\n";
    int cookies = 0;
    int endProgram = 0;
    char userChoice = ' ';
    while(endProgram!=1)
    {
        cout<<"Please enter the number of cookies you would like to bake: ";
        cin>>cookies;
        if(cin.fail())
        {
            cout<<"You have entered an invalid integer, please try again.\n";
        }
        else
        {
            vector<double> ingredients = get_cookie_ingredients(cookies);
            cout<<"The ingredients needed for "<<cookies<<" cookies are:\n";
            cout<<"Cups of Sugar: "<<ingredients[0]<<"\n";
            cout<<"Cups of Butter: "<<ingredients[1]<<"\n";
            cout<<"Cups of Flour: "<<ingredients[2]<<"\n\n";        
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