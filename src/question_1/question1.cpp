#include "question1.h"

using std::cout, std::cin;

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
    
}