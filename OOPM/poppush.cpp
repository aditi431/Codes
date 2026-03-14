#include <iostream> 
#include<string>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "This is initial string : ";
    cout << s << endl;
    s.push_back('i');
    cout << "The new string is : ";
    cout << s << endl;
    s.pop_back();
    cout << "After pop_back operation, the string is : ";
    cout << s << endl;
    return 0;
}