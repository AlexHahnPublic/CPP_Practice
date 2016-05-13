#include <iostream>

using namespace std;

int main()
{
    int num;

    cout<<"Please input a number: ";
    cin>>num;
    cin.ignore();

    if (num !=3 && num > 0) {
        cout<<"Your number is positive AND not 3";
    }
    else if ( num <0 || num == 3) {
        cout<<"Your number is negative OR is 3";
    }
    cin.get();
}

