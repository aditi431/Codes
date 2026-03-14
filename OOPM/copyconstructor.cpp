#include<iostream>
using namespace std;
class cube{

public :
int side;
cube(int x) // Parameterized Constructor

    {

        side = x;
    }
cube(cube &r){
    side = r.side;
}

void dis(){
    cout<<side<<endl;
}




};

int main(){
    cube c1(4);
    c1.dis();
cube c2(c1);
c2.dis();




}

