#include<iostream>
using namespace std;
int main(){
int a[3][3] , b[3][3],crr[3][3];
for(int r = 0; r<3 ; r++  ){
    for (int c = 0; c<3; c++){
        cout<<"enter "<<r<<","<<c<<"th value: ";
        cin>>a[r][c];
    }
}
for(int r = 0; r<3 ; r++  ){
    for (int c = 0; c<3; c++){
        cout<<"enter "<<r<<","<<c<<"th value: ";
        cin>>b[r][c];
    }
}
for(int r = 0; r<3 ; r++  ){
    for (int c = 0; c<3; c++){
        crr[r][c] = a[r][c] + b[r][c];
        cout<<crr[r][c]<<" ";
        
    }
      cout<<endl;
}


}




