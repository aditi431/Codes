// Compile time polymorphism
// Function overloading is compile time polymorphism
#include<iostream>
using namespace std;
class Loading{
   public:
   void sum(string a,string b){ //diff datatype of parameter
    cout<<a+b<<endl;
   }
   void sum(int a,int b){
    cout<<a+b<<endl;
   } 
   void sum(int a,int b,int c){//diff no. of parameter
    cout<<a+b+c<<endl;
   }






};
int main(){
    Loading a;
    a.sum(5,8);
    a.sum(4,9,2);
    a.sum("adi","sha");





}
