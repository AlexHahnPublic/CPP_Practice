#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    char str[10];

    //Create an instance of ofstream, and opens example.txt
    ofstream a_file ("example.txt");
    //Outputs to example.txt through a_file
    a_file<<"This text will now be inside of example.txt";
    //Close the file stream explicitly
    a_file.close();
    //Opens for reading the file
    ifstream b_file ("example.txt");
    //Reads one string from the file
    b_file>> str;
    //Should output 'This'
    cout<< str <<"\n";
    cin.get();  //Wait for the next keystroke
    //b_file is closed implicitly here (you can explicitly closed if desired
}


