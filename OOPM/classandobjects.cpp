// User defined data type
#include <iostream>
using namespace std;
class Student
{ // student is new data type
public:
    string name;
    int rollno;
    float gpa;
    void add(int a,int b);
    
    
}s1,s2;

void Student :: add(int a,int b){
    rollno= a;
    gpa =b;
    cout<<a+b;


}
void pnt(Student s)//passing objects to functions ,pass by value
    {
        cout << s.name << " " << s.rollno << " " << s.gpa << " " << endl;
    }
int main()
{
    
    s1.name = "Aditi";
    s1.rollno=5;
    s1.gpa= 9.8;
    s2.name = "bannu";
    s2.rollno = 93;
    pnt(s1);

   s1.add(45,54);
}
