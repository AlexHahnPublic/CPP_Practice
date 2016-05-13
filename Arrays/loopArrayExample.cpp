#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int array[8][8]; //Declare an 8x8 array

    for (x=0; x<8; x++){
        for(y=0; y<8; y++){
            array[x][y]=x*y;
        }
    }

    cout<<"Array Indices:\n";
    for (x=0; x<8; x++){
        for (y=0; y<8; y++){
            cout<<"["<<x<<"]["<<y<<"]="<< array[x][y] <<" ";
            cout<<"\n";
        }
    }
    cin.get();
}


