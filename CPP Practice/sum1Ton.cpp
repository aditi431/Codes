#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int cnt = 1;
    int sum = 0;
    while(cnt<=n){
        sum = sum + cnt;
        cnt += 1;
    }

    cout<<"The sum of "<<n<<" numbers is : "<<sum;
}