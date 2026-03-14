// User defined data type
#include <iostream>
using namespace std;
class Student
{ // student is new data type
public:
    string name;
    int rollno;
    float gpa;
    Student(){

    }

    Student(string name,int rollno,float gpa){
        this->name = name;
        this->rollno =rollno;
        this->gpa=gpa;

    }

    
};
void pnt(Student s)//pass by value
    {
        cout << s.name << " " << s.rollno << " " << s.gpa << " " << endl;
    }
int main()
{
    Student s1("Adi",8,9.8);
    
    Student s2;
    s2.name = "bannu";
    s2.rollno = 93;
    s2.gpa=9;
    pnt(s1);
    pnt(s2);
}
