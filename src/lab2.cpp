#include "eecs230.h"

//
// Lab 2 programs
//
//int illegalStatements() {
    /* Start here! */
    //int double = 0;
    //double char = 2.5;
    //char mychar = 'd'; mychar += 12;
    //unsigned int a = -1;
    //int pi = 3.14;
    //short num = 1e9;
    //string mystring = 5;
    //return 0;
// }

void odd_or_even()
{
    int num;
    cout << "Enter a number.\n";
    cin >> num;


    if(num%2 == 0) //even
        cout << num << " is even and you are dumb for needing a computer to tell you this";
    else //odd
        cout << num << " is odd and you are a sad person";


}

void exercise2()
{
    string operation;
    int num1;
    int num2;
    cout << "enter an operation followed by two numbers (i.e. + 2 1)\n";
    cin >> operation;
    cin >> num1;
    cin >> num2;
    if(operation == "+") //plus
        dosomething;
    if(operation == "-") //minus
        dosomethingelse;
    if(operation == "*") //multiplication
        doanotherthing;
    if(operation == "/") //division
}

int main() {

    odd_or_even();

}

