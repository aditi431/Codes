// it is function having no return type
// its name is same as class name
// initialization become better
#include <iostream>
using namespace std;
class Student
{ // student is new data type
    public:
    string name;
    int rollno;
    float gpa;
    
    Student(){ // Default constructor

    }
    Student(string n){
        name =n;
    }


    Student(string s,int r){ // parameterised constructor
        name = s;        
        rollno = r;
        
    }
    Student(string n,int r,float g){
        name = n;
        rollno = r;
        gpa = g;
    }
    Student(int r,float g,string p){
        name =p;
        rollno=r;
        gpa=g;

    }

    
    
};
void print(Student s)//pass by value
    {
        cout << s.name << " " << s.rollno << " " << s.gpa << " " << endl;
    }
int main()
{
    
    Student s1("Aditi",5);
    s1.gpa=9.8;
    Student s2("bnnu",6);
    // s2.name = "bannu";
    // s2.rollno = 93;
    // s2.gpa=9;

    Student s3=s1;
    s3.name= "adi"; //deep copy

    Student s4(s2); // copy constructor
    s4.name="Arohi";//deep copy i.e original name is not effected

    Student s5("dibi");
    Student s6("Vidoy",89);
    Student s7("shreya",78,8);
    Student s8(8,7.8,"ditu");
    print(s1) ;
    print(s2) ;
    print(s3) ;
    print(s4) ;
    print(s5) ;
    print(s6) ;
    print(s7) ;
    print(s8) ;

    // cout << s1.name << " " << s1.rollno << " " << s1.gpa << " " << endl;
    // cout << s2.name << " " << s2.rollno << " " << s2.gpa << " " << endl;
    // cout << s3.name << " " << s3.rollno << " " << s3.gpa << " " << endl;
    // cout << s4.name << " " << s4.rollno << " " << s4.gpa << " " << endl;
    // cout << s5.name << " " << s5.rollno << " " << s5.gpa << " " << endl;
    // cout << s6.name << " " << s6.rollno << " " << s6.gpa << " " << endl;
    // cout << s7.name << " " << s7.rollno << " " << s7.gpa << " " << endl;
    // cout << s8.name << " " << s8.rollno << " " << s8.gpa << " " << endl;
}

