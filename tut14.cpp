#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
}ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};
 


int main(){
enum Meal{breakfast, lunch, dinner};
Meal m1 = breakfast;
cout<<(m1==0);
Meal m2 = lunch;
cout<<(m2==1);
Meal m3 = dinner;
cout<<(m3==2);
// cout<<breakfast<<endl;
// cout<<lunch<<endl;
// cout<<dinner<<endl;
// union money m1;
// m1.rice = 34;
// m1.car = 'c';
// cout<<m1.rice;

/*ep samarth;
struct employee dev;
struct employee sam;
samarth.eId = 1;
samarth.favChar = 'c';
samarth.salary = 120000000;
cout<<"The value is:"<<samarth.eId<<endl;
cout<<"The value is:"<<samarth.favChar<<endl;
cout<<"The value is:"<<samarth.salary<<endl;*/

    return 0;
}