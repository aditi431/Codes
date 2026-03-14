#include<iostream>
using namespace std;


class test


{


public:


test();        //default constructor


~test();     //destructor


};


test :: test()


{


cout<<"object is created"<<endl;


}


test :: ~test()


{


cout<<"object is destroyed"<<endl;


}


int main()


{


test t;




cout<<"we are in main()"<<endl;



cout<<"welcome"<<endl;


}

