#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int *b = &a;
    // & - Address of operator
    cout << "Address of a is " << &a << endl;
    cout << "Adress of a is " << b << endl;
    // * dereference operator
    cout << "Value of a is " << a << endl;
    cout << "Value of a is " << *b << endl;
}