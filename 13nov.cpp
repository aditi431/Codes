#include<iostream>
using namespace std;
int main(){
int m1,m2,m3;
cout<<"Marks";
cin>>m1>>m2>>m3;
float per=(m1+m2+m3)/3;
if(per<44 || m1<33 || m2<33 || m3<33){




    cout<<per<<endl<<"Fail";

}else {

    cout<<per<<endl<<"pass";
}






}