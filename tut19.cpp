#include<iostream>
using namespace std;

// int sum(int a, int b){
//     cout<<"Using function with 2 arguments"<<endl;
//     return a+b;
// }

int sum(float a, int b){        //If we change int to float then also we will get the same result
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

//Caluclating the volume of cyclinder
int volume(double r , int h){
    return(3.14*r*r*h);
}

//Caluclating the volume of cube
int volume(int a){
    return (a*a*a);
}

//Caluclating the volume of cuboid
int volume(int l , int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 3 & 6 is: "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 6 & 7 is: "<<sum(3,6,7)<<endl;
    cout<<"The volume of cyclinder of radius 8 and height 6 is: "<<volume(8,6)<<endl;
    cout<<"The volume of cube of side 3 is: "<<volume(3)<<endl;
    cout<<"The volume of cuboid of side 3, 6 & 7 is: "<<volume(3,6,7)<<endl;
    return 0;
}