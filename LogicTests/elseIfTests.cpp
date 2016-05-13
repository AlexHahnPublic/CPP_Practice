#include <iostream>

using namespace std;

int main()      //Standard part of C++ Program
{
    int age;    //declare a variable to use

    cout<<"Please input your age: ";    //prompt
    cin>>age;                           //store
    cin.ignore();                       //ignore enter stroke
    if ( age < 100 ) {
        cout<<"You're young n cute";
    }
    else if ( age == 100 ) {
        cout<<"Nice! You're 100!";
    }
    else {
        cout<<"You're old but still cute!";
    }
    cin.get();  //prevent console from closing if necessary
}



