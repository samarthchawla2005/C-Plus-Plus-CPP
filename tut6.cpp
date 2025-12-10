/*#include <iostream> is an example of System header file*/
#include <iostream>
/*#include "this.h"
This was an example of User header file*/

using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Operators in C++:"<<endl ;
    cout<<"Following are the type of operators in C++"<<endl ;

    //Arithmetic Operators
    cout<<"(1)Arithmetic Operator:-"<<endl ;

      cout<<"The value of a-b is:"<<a-b<<endl;
      cout<<"The value of a+b is:"<<a+b<<endl;
      cout<<"The value of a*b is:"<<a*b<<endl;
      cout<<"The value of a/b is:"<<a/b<<endl;
      cout<<"The value of a%b is:"<<a%b<<endl;
      cout<<"The value of a++ is:"<<a++<<endl;
      cout<<"The value of a-- is:"<<a--<<endl;
      cout<<"The value of ++a is:"<<++a<<endl;
      cout<<"The value of --a is:"<<--a<<endl;
      cout<<endl;
    //Assignment Operators => Used to assigne values to operators
    // int a=3, b=9;
    // char d='d';


    //Comparision Operators
    cout<<"(2)Comparision Operators:-"<<endl ;

      cout<<"The value of a==b is:"<<(a==b)<<endl;
      cout<<"The value of a>b is:"<<(a>b)<<endl;
      cout<<"The value of a<b is:"<<(a<b)<<endl;
      cout<<"The value of a>=b is:"<<(a>=b)<<endl;
      cout<<"The value of a<=b is:"<<(a<=b)<<endl;
      cout<<"The value of a!=b is:"<<(a!=b)<<endl;   //If Not equal to (!=) is true than 1 will get printed otherwise for false 0 will get printed.
      cout<<endl;

      //Logical Operators
      cout<<"(3)Logical Operators:-"<<endl ;
      cout<<"The value of logical and opertor ((a==b) && (a<b)) logical operator is:"<<((a==b) && (a<b))<<endl;      
      cout<<"The value of logical or opertor ((a==b) || (a<b)) logical operator is:"<<((a==b) || (a<b))<<endl;      
      cout<<"The value of logical not opertor (!(a==b)) logical operator is:"<<(!(a==b))<<endl;      

    
    return 0;
}