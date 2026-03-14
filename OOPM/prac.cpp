#include<iostream>
using namespace std;
class Shape {
    float perimeter;

    public:

    Shape(float a, float b, float c){
        perimeter = a + b + c;
        
    }
    Shape(float l , float b){
        perimeter = 2*(l+b);
    }
    Shape(float r){
        perimeter = 2*3.14*r;

    }
    void displayPerimeter(){
        cout<<"Perimeter : "<<perimeter<<endl;
    }






};

int main(){
    Shape triangle(3,6,7);
    cout<<"Triangle : ";
    triangle.displayPerimeter();

    Shape rectangle(4,8);
    cout<<"Rectangle : " ;
    rectangle.displayPerimeter();

    Shape circle(3);
    cout<<"Circle : ";
    circle.displayPerimeter();
    
    



}