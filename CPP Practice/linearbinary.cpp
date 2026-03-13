// Linear Search - Through array traversal
//  Bianry Search - Array must be Sorted

#include<iostream>
using namespace std;

int LinearSearch(int arr[],int size,int element )
{
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }

return -1;


}

int BinarySearch(int arr[],int size,int element){
    int low=0, mid , high=size-1;
    while(low<=high){

    mid = (low + high)/2;

    if(arr[mid]==element){
        return mid;
           
    
    
    }
    else if(arr[mid]>element){
        high = mid-1;


    }else{
        low = mid +1;
    }




}

return -1;

}

int main(){
   // int arr[] = {23,5,6,2,7,8,9};
   int arr[] = {23,51,26,234,765,821,900};

    int size = sizeof(arr)/sizeof(int);
    int element = 67;
   // cout<<LinearSearch(arr,size,element);
   cout<<BinarySearch(arr,size,element);





}

