#include <iostream>

using namespace std;

void printnum(int begin){
    cout<<begin;
    if (begin<9) //The base case is when begin is = or > 9
    {
        printnum(begin+1);
    }
    cout<<begin; //Outputs the second begin, after the program has gone through and output
}

int main(){
    printnum(1);
}



