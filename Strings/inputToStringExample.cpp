#include <iostream>

using namespace std;

int main()
{
    char string[256]; //A long string variable declaration

    cout<<"Please enter a long string: ";
    cin.getline ( string, 256, '\n');   //Input goes into the string var
    cout<<"Your long string was: "<< string <<endl;
    cin.get();
}




