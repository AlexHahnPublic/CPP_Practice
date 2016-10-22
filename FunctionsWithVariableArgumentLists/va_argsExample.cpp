#include <cstdarg>
#include <iostream>

using namespace std;

//This function will take the number of values to average followed by all of
//the number to average
double average (int num, ...){
    va_list arguments;  //A place to store the list of arguments
    double sum = 0;

    va_start (arguments, num);  //Initializing arguments to store all values after num
    for (int x = 0; x < num; x++)   //Loop until all numbers are added
        sum += va_arg(arguments, double);   //Adds the next value in argument list to sum
    va_end(arguments);  //Cleans up the list
    return sum/num; //Returns the average
}

int main(){
    //This computes the average of 123.123, 234.234, and -345.345
    cout<<average(3,123.123,234.234,-345.345)<<endl;
    //Here we compute the average of only 2 numbers 385.902 and 207.23
    cout<<average(2,385.902,207.23)<<endl;
}


