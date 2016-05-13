#include <iostream> //For cout
#include <cstring> //For the string functions

using namespace std;

int main()
{
    char name[50];
    char lastName[50];
    char fullName[100]; //Big enough to hold both name and lastName

    cout<<"Please enter your name: ";
    cin.getline(name, 50);
    if (strcmp(name,"Alex")==0) //Strings are equal
        cout<<"That's my name too.\n";
    else    // Strings are NOT equal
        cout<<"That's not my name.\n";

    //Now let's find the length of the input name
    cout<<"Your name is "<< strlen(name) <<" letters long\n";
    cout<<"Enter your last name: ";
    cin.getline(lastName, 50);
    fullName[0]='\0';    //strcat searches for '/0' to cat after
    strcat(fullName, name); //Copy the (first) name into fullName
    strcat(fullName, " ");  //We want to separate the first and last name by a space
    strcat(fullName, lastName); //Copy last name onto the end of fullname
    cout<<"Your full name is "<< fullName <<"\n";
    cin.get();
}

