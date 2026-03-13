#include <iostream>
using namespace std;
int main()
{
    int income;
    cout << "Enter income";
    cin >> income;

    if (income < 250000)
    {
        cout << "no tax";
    }
    else if (income >= 250000 && income <= 500000)
    {
        cout << "tax is" << endl
             << 5 * (income / 100) << endl;
    }
    else if (income >= 500000 && income <= 1000000)
    {

        cout << "tax is" << endl
             << 20 * (income / 100) << endl;
    }
    else if (income > 1000000)
    {

        cout << "tax is" << endl
             << 30 * (income / 100) << endl;
    }   
    else
    {
        cout << "invalid income";
    }
}
