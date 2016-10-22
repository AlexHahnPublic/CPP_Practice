#include <iostream>

using namespace std;

class Computer //Standard way of defining a class
{
    public:
        //This means that all of the functions below this (and any variables)
        //are accessible to the rest of the program. Note the use of the colon
        //(NOT semicolon...)
    Computer();
    //This is the constructor
    ~Computer();
    //This is the destructor
    void setspeed (int p);
    int readspeed();
    protected:
    //This means that all the variables under this, until a new type of
    //restriction is placed, will only be accessible to other functions in the
    //class. NOTE again the colon, NOT semicolon...
    int processorspeed;
};
//Do not forget the trailing semicolon

Computer::Computer()
{
    //Constructors can accept arguments, but this one does not
    processorspeed=0;
}

Computer::~Computer()
{
    //Destructors do not accept arguments
}

void Computer::setspeed(int p)
{
    //To define a function outside put the name of the class after the return
    //type and then two colons, and then the name of the function.
    processorspeed=p;
}

int Computer::readspeed()
{
    //The two colons simply tell the compiler that the function is part of the
    //calss
    return processorspeed;
}

int main()
{
    Computer compute;
    //To create an 'instance of the class, simply treat it like you would a
    //structure. (An instance is simply when you create an actual object from
    //the class, as opposed to having the definition of the class)
    compute.setspeed(100);
    //To call functions in the class, you put the name of the instance, a
    //period, and then the function name.
    cout<<compute.readspeed();
}





