// OOPS - Classes and Object

    // C++ was initially called as C with classes by Bjarne Stroustrup

    // class => Extension of structures (in C)
    // Structures have limitations
    //      --> Memebers are public
    //      --> No methods
    // classes --> structures + more 
    // Classes can have methods and properties
    // Classes can make few members as private and few as public
    // Strucutre in C++ are typedef
    // You can declare objects along with the class declaration
    /*  EX:-
        class Employee{
            //Class defination
        } Sam, Samarth, Dev;
    */

    // sam.salary = 8 makes no sence if salary is private because the value of private variable can't be set directely.

    // Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary
{
 private: //By default members of a class are private so if we will not write private then also the code will work same as if we will write private.
    string s;

public:
    void read(void);
    void chk_bin(void);  //'chk' means check & 'bin' means binary
    void ones_compliment(void);
    void display(void);
};

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
        
    }
    
}

void binary :: ones_compliment(void){
    chk_bin();
    for (int i = 0; i < s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i) = '1';
        }
        else if(s.at(i)=='1'){
            s.at(i) = '0';
        }
    }
}

void binary :: display(void){
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}
