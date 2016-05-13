#include <iostream>

using namespace std;

int main()
{
    int x;      // A normal integer
    int *p;     // A pointer to an integer

    p = &x;     // Read it, "assign the address of x to p"
    cout<<"Enter a number that we will store in the variable x\n";
    cin>>x;     // Put a value in x, we could also use *p here
    cin.ignore();
    cout<<"Now we return the value you stored not using the variable x but rather using th pointer *p which we earlier assigned the pointer to the same address as variable x (we got the address of variable x with p = &x;\n";
    cout<< *p <<"\n";   // Note the use of the * to get the value
    cin.get();
}


