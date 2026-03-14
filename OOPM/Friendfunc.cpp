/*We know that the private section of a class is accesible only
and 


*/


#include<iostream>
using namespace std;
class abc{
    int a,b;
    public:
    void getdata();
        
        friend int sum(abc);
    



};

void abc::getdata(){
cout<<"Enter a and b";
cin>>a>>b;
}
int sum(abc a1){
    cout<<"Addition : "<<a1.a+a1.b;
}
int main(){
    abc a1;
    a1.getdata();
    sum( a1);




}