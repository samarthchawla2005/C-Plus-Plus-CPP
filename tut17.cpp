#include<iostream>
using namespace std;

inline int product(int a, int b){
//Static variables are not recommended for inline function
/*  static int c=0; //This executes only once
    c = c + 1; //Next time when this function will run the value of  c will be retained 
    return a*b+c;
*/
    return a*b; 
}

float moneyReceived(int currentMoney, float factor=1.04){ //We will first write compolusory argument and then default arguments
    return currentMoney*factor;
}

// Added by me

/*
int division(int a, int b){
    if (a>b)
    {
       return a/b; 
    }

    if (b>a)
    {
       return b/a; 
    }  
    
}

int sum(int a, int b){
    return a+b;
}

int difference(int a, int b){
    if (a>b)
    {
        return a-b;
    }
    else
    {
        if (b>a)
        {
            return b-a;
        }
        
    }
}
*/

// int strlen(const char *p){}

int main(){
/* int a, b;
    cout<<"Enter the value of a & b"<<endl;
    cin>>a>>b;
*/
    // cout<<"The product of a & b is : "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<< money <<" rupees in your bank account, you will recive "<< moneyReceived(money) <<"Rs after 1 year\n";
    cout<<"FOR VIPs: If you have "<< money <<" rupees in your bank account, you will recive "<< moneyReceived(money, 1.1) <<"Rs after 1 year";

    //Added by me
    /*
    cout<<"The division of a & b is : "<<division(a,b)<<endl;
    cout<<"The sum of a & b is : "<<sum(a,b)<<endl;
    cout<<"The difference of a & b is : "<<difference(a,b)<<endl;
    */

    return 0;
}

