bool test_config();
#include<vector>
#include<iostream>

using std::vector;

const vector<double> recipe = {1.5, 1.0, 2.75}; //creates vector for main recipe of 48 cookies {sugar, butter, flour}
vector<double> get_cookie_ingredients(int cookies);
void display_menu();
