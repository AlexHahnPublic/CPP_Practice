#include <iostream>

using namespace std;

int factorial(int input){
    if (input == 1){
        return 1;
    }
    else {
        return input*factorial(input-1);
    }
}

int main(){
    int ans;
    ans = factorial(5);
    cout<<ans;
}

