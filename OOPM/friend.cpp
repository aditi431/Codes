#include<iostream>
using namespace std;
class Demo {
    int a,b;
    public:
    void getdata();
        

    
    friend int sum(Demo);


};
void Demo :: getdata(){
    cout<<"Enter a , b: ";

        cin>>a>>b;
    

}

int sum(Demo aa){
    return(aa.a + aa.b);

}




int main(){
    Demo aa;
    aa.getdata();
    cout<<"Addition is : "<<sum(aa);




}