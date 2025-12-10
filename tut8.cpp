#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // int a = 34;
    // cout<<"The value of a was: "<<a;
    // a = 45;
    // cout<<"The value of a is: "<<a;

//constants in C++
    //const int m = 3.22;  //Constant value can never be changed 
    // cout<<"The value of m was: "<<m<<endl;
    // m = 45.62;  //Here we are getting an error for m = 45.62 as m is constant.
    // cout<<"The value of m is: "<<m<<endl;


//Manipulators in C++
    // int a=3, b=98, c= 385;
    // cout<<"The value of a without setw was: "<<a<<endl;
    // cout<<"The value of b without setw was: "<<b<<endl;
    // cout<<"The value of c without setw was: "<<c<<endl;
   

    // cout<<"The value of a was: "<<setw(4)<<a<<endl;
    // cout<<"The value of b was: "<<setw(4)<<b<<endl;
    // cout<<"The value of c was: "<<setw(4)<<c<<endl;
  

//Operators Precedence
    int a = 3, b = 4;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
    
    return 0;
}