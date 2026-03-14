#include <iostream>
using namespace std;
int main()

{
    int  x;
    cout<<"Enter x:";
    cin>>x;
    try{
    if(x==0){
        throw(x);
    }
    if(x==100){
        throw('x');
    }
    if(x==1000){
        throw(5.4);
    }else{
        cout<<"valid";
    }


    }
    catch(...){
        cout<<"Error";
    }
    


}