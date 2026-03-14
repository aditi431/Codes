#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float avg;

    Cricketer(string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;

    }

    void print(){
        cout<<"Name is : "<<name<<endl<<"Runs are : "<<runs<<endl<<"Average is : "<<avg<<endl;
    }

    int matches(){
        return runs/avg;
    }


};
int main(){
    Cricketer c1("Virat",34000,67.5);
    Cricketer c2("Rohit",56000,78.9);

    c1.print();
    c2.print();
    cout<<"Virat matches : " <<c1.matches()<<endl;
    cout<<"Rohit matches : "<<c2.matches();








}