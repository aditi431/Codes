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

    


};
void change(Cricketer* c){
    
    c->avg=86.4;//(*c).avg=86.4;
}
int main(){
    Cricketer c1("Virat",34000,67.5);
    cout<<c1.avg<<endl;
    change(&c1);
    cout<<c1.avg<<endl;
    //Cricketer c2("Rohit",56000,78.9);
    // Cricketer* p1=&c1;
    // cout<<(*p1).runs<<endl;// c1.runs
    // (*p1).avg=56.4;

    /*   a->b = (*a).b   */
    

    







}