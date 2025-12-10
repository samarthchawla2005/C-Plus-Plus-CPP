#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count; //agar static nahi likhenge toh int count=0 likhna padega
    
    
    public:
        void setData(void){
            cout<<"Enter the id"<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
        }

        static void getCount(void){
            // cout<<id;    => This will throw an error as the static functions can only excess other static functions and static variables.
            cout<<"The value of count is : "<<count<<endl;
        }
};


//count is the static data member of the class Employee

int Employee::count; //static variable => its default value is zero.

/*int Employee::count=1000; //for default value 1000 */

int main(){
    Employee samarth,sam,dev;
    // Employee raj;    //This is created by me


/*  samarth.id = 1;         //This can't be done as id is private
    samarth.count = 1; */   //This can't be done as count is private

    samarth.setData();
    samarth.getData();
    Employee::getCount();

    sam.setData();
    sam.getData();
    Employee::getCount();

    dev.setData();
    dev.getData();
    Employee::getCount();
    
/*  
    raj.setData();
    raj.getData();
    Employee::getCount();
*/

    return 0;
}