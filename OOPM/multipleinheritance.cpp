#include<iostream>
using namespace std;
class Cricketer{
    public:
    int runs;
    int wickets;
    int average;



};
class Engineer{

public :
int experience;
string domain;



};

class phodu :public Engineer ,Cricketer{ // multiple inheritance
    public:




};

int main(){
    phodu p;// saurabh netravalkar
    p.domain = "CS";
    cout<<p.domain;
}