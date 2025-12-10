#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
//This will not swap a & b
void swap(int a, int b){ //temp a   b
    int temp = a;        //4    4   5
    a = b;               //4    5   5
    b = temp;            //4    5   4
}

//Call by reference using pointers
void swapPointer(int* a, int* b) { //temp a   b
    int temp = *a;        //4    4   5
    *a = *b;               //4    5   5
    *b = temp;            //4    5   4
}

//Call by reference using C++ reference variable
// int & 
void swapReferenceVar(int &a, int &b) { //temp a   b
    int temp = a;        //4    4   5
    a = b;               //4    5   5
    b = temp;            //4    5   4
    // return a;
}

int main(){
    int x=4, y=5;
    // cout<<"The Sum of 4 & 5 is: "<< sum(x,y);
    cout<<"The value of x is: "<< x <<" and the value of y is: "<< y <<endl;
    // swap(x,y); //=> This didn't swap x & y
    // swapPointer(&x,&y); //=> This will swap x & y using pointer reference
    swapReferenceVar(x,y); //=> This will swap x & y using pointer reference
    //swapReferenceVar(x,y) = 766; //=> This will swap x & y using pointer reference
    cout<<"The value of x is: "<< x <<" and the value of y is: "<< y <<endl;

    return 0;
}