#include <iostream>

using namespace std;

int glo = 6; //globalvariable

void sum(){
       int a;
       cout<< glo;
    }

int main(){
    int glo = 9; //localvariable //ASCII value of 9 is 57
    glo = 67;
    // int a=4;
    // int b=5;
    int a=14, b=15;
    float pi=3.14;
    char c = 'u';
    bool is_true = true;  //true=1
    bool is_false = false;  //false=0
    sum();
    cout<<glo<<is_true<<is_false;
    // cout<<"This is tutorial 4.\n Here the value of a is "<<a<<".\n The value of b is " <<b ;
    // cout<<"\n The Value of pi is:"<<pi;
    // cout<<"\n The Value of c is:"<<c;
    return 0;
}