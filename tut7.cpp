#include <iostream>

using namespace std;

int c = 45;

int main()
{

    //**********Build in Data Types**********
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;

    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;

    // c=a+b;

    // cout<<"The sum is = "<<c<<endl;
    // cout<<"The global c is:"<<::c;

    //**********Float, double and Long double literals**********
    /*  float d=34.4f; //34.4f is a float.
        long double e = 34.4L; //34.4l means long double.
        cout<<"The size of 34.4 is:"<<sizeof(34.4)<<endl;
        cout<<"The size of 34.4f is:"<<sizeof(34.4f)<<endl;
        cout<<"The size of 34.4F is:"<<sizeof(34.4F)<<endl;
        cout<<"The size of 34.4l is:"<<sizeof(34.4l)<<endl;
        cout<<"The size of 34.4L is:"<<sizeof(34.4L)<<endl;
        cout<<"The Value of d is: "<<d<<endl<<"The value of e is: "<<e; */

    //**********Reference variables**********
    // eg:-) Samarth --> Dev --> Sam --> Devu || All are same person
    // float x = 455;
    // float & y = x;    //& means ampersand
    // cout<<x<<endl;
    // cout<<y<<endl;

    //**********Type casting**********
    int m = 45;
    float n = 45.46;
    cout << "The value of m is:" << (float)m << endl;
    cout << "The value of m is:" << float(m) << endl;

    cout << "The value of n is:" << (int)n << endl;
    cout << "The value of n is:" << int(n) << endl;
    int o = int(n);

    cout << "The expression is:" << m + n << endl;
    cout << "The expression is:" << m + int(n) << endl;
    cout << "The expression is:" << m + (int)n << endl;

    return 0;
}