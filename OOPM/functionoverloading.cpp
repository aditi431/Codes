#include<iostream>
using namespace std;

    class Volume{

        public:
        int side;
        int h,l,b,r;

       void calVolume(int r,int h){
        this->r=r;
        this->h=h;
        int volume =3.14*r*r*h;
        cout<<"Volume of cylinder is : "<<volume<<endl;
        

       }
       void calVolume(int l,int b,int h){
        this->h=h;
        this->l=l;
        this->b=b;
        int vol=l*b*h;
        cout<<"Volume of cuboid is : "<<vol<<endl;
        
        

       }
       void calVolume(int side){
        this->side=side;
        int vol = side*side*side;
        cout<<"volume of cube is : "<<vol<<endl;
        
        

       }



    };

    int main(){
        
        Volume v;
        v.calVolume(3,4);
        
        v.calVolume(4,5,6);
        
        v.calVolume(3);
        
    }



                                                                                                                


