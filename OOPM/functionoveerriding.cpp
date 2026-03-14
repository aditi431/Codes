#include<iostream>
using namespace std;
class A{
public:
void display(){
    cout<<"Base class"<<endl;}
};
class B : public A{
    public : 
    void display(){
        cout<<"Derived class"<<endl;
        //A::display();// for calling display function of base class
    }
};
int main(){
    B aa;
    aa.display();
    aa.A::display();
}