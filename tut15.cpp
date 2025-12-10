#include<iostream>
using namespace std;

//function Prototype
// type function-name (arguments);
// int sum(int a, int b); => Acceptable
// int sum(int a, b); => Not Acceptable
int sum(int, int); //=> Acceptable
void p();

int sum(int a, int b);

int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    // num1 & num2 are actual parameters
    cout<<"The Sum is "<<sum(num1, num2);
    p();
    return 0;
}

int sum(int a, int b){
    // a & b are formal parameters which will be taking value from actual prameters num1 & num2
    int c = a+b;
    return c;
}


void p(){
    cout<<"\nHello";
}