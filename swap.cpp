#include<iostream>
using namespace std;
int main(){



int e,f;
cout<<"enter e ";
cin>>e;
cout<<"enter f";
cin>>f;
cout<<"e is"<<e<<endl<<"f is"<<f<<endl;
int i;

i=e;
e=f;
f =i;
cout<<"after swapping e will"<<e<<endl<<" f will be"<<f<<endl;
}