#include<iostream>
using namespace std;

/*int factorial(int n){
    if (n<=1)
    {
        return 1;
    }
else
    return n * factorial(n-1);
}
*/

//fibonacci 
int fib(int n){
    if (n<2)
    {
        return 1;
    }
    else
    {
        return fib(n-2) + fib(n-1) ;
    }
    
}

int main(){
    //Factorial of a number
    //6! = 6*5*4*3*2*1 = 720
    //n! = n*(n-1)! 
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    // cout<<"The factorial of "<< a <<" is "<< factorial(a)<<endl;

    //The Fibonacci Sequence
    cout<<"The term at fibonacci sequence at position "<< a <<" is "<< fib(a)<<endl;


    return 0;
}