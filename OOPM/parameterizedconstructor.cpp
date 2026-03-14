#include<iostream>
using namespace std;

class cube

{
    

public:
int side;
    cube(int x) // Parameterized Constructor

    {

        side = x;
    }
};

int main()

{

    cube c1(10);

    cout << c1.side<<endl;
    cube c2(20);
    cout << c2.side;
}