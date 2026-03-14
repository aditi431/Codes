// Public,protected,private
#include<iostream>
using namespace std;

class Student{
    public:
    int rollno;
    string name;
    // Student(string n,int r,float m){
    //     name = n;
    //     rollno = r;
    //     marks =m;

    // }
    void printm(){
        cout<<marks<<endl;
    }
    void setmarks(float m){
        marks =m;
    }
    int getmarks(){
    
        return marks;
    }

    private:
    float marks;



};
int main(){

    //Student s1("Adii",5,93);
    Student s1;
    s1.setmarks(91);
    cout<<s1.getmarks()<<endl;
    //s1.printm();
    s1.setmarks(95);
    cout<<s1.getmarks();
    




}