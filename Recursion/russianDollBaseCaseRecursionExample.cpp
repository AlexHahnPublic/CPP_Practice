#include <iostream>

using namespace std;

void doll (int size){
    if (size == 0) //No doll can be smaller than zero so don't keep calling the function
        return; //return doesn't need a value to return, it can be used to exit a function
    cout<<size<<"\n";
    doll(size-1); //Decrements the size variable so that the next doll will be smaller
}

int main(){
    doll(30); //Starts with a doll bigger than zero
}

