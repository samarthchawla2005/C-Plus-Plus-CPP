#include<iostream>
using namespace std;

int main(){
    //Array examples
    int marks[] = {23, 45, 56, 89};

    int mathsmarks[4] ;

    mathsmarks[0] = 2278;
    mathsmarks[1] = 738;
    mathsmarks[2] = 378;
    mathsmarks[3] = 578;

    cout<<"These are maths marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //We can change the value of an array.
    marks[2] = 455;
    cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of mark "<<i<<" is:"<<marks[i]<<endl;        
    }
    
    // HW:- Do same using while and do while loop

   //Pointers & Array

   int* p = marks;
   cout<<*(p++)<<endl;
   cout<<*(++p)<<endl;
//    cout<<"The value of *p is:"<<*p<<endl;
//    cout<<"The value of *(p+1) is:"<<*(p+1)<<endl;
//    cout<<"The value of *(p+2) is:"<<*(p+2)<<endl;
//    cout<<"The value of *(p+3) is:"<<*(p+3)<<endl;

    return 0;
}