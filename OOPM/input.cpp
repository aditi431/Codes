#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter array ";
    //cin>>str; ignores string after blank space
    cin.getline(str,100,'$');
    cout<<"Output "<<str;














}