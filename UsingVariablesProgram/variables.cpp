#include <iostream>

using namespace std;

int main()
{
    int thisIsANumber;

    cout<<"Please enter a number bro: ";
    cin>>thisIsANumber;
    cin.ignore();
    cout<<"You entered: "<< thisIsANumber <<"\n";
    cin.get();
}
