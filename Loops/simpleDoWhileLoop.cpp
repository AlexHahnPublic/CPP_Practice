#include <iostream>

using namespace std;

int main()
{
    int x;
    x = 0;
    do {
        //Print HelloWorld at least one time
        //even though the condition is false
        cout<<"Hello World!\n";
    } while ( x != 0 );
    cin.get();
}

