#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of Employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of Employee is: " << id << endl;
    }
};

int main()
{
    /*  Employee Samarth, Sam, Dev, SRK ;
        Samarth.setId();
        Samarth.getId();

        Sam.setId();
        Sam.getId();

        Dev.setId();
        Dev.getId();

        SRK.setId();
        SRK.getId();
    */

    Employee mycompany[4];
    for (int i = 0; i < 4; i++)
    {
        mycompany[i].setId();
        mycompany[i].getId();
    } 

    return 0;
}
