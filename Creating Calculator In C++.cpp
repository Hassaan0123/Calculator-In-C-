#include <iostream>
using namespace std;
int main() {
    int num1,num2,result;
    string choice;
    cout <<"Enter Two Numbers: ";
    cin >>num1>>num2;
    cout<<"A & a -- Addition. \nS & s -- Subtraction. \nM & m -- Multiplication. \nD & d -- Division. \nR & r -- Modulus.\n";
    cin >> choice;
    if(choice == "a" || choice == "A")
    {
        result = num1 + num2;
        cout<<"Sum is: "<<result;
    }
    else if(choice == "s" || choice == "S")
    {
        result = num1 - num2;
        cout<<"Subtraction is: "<<result;
    }
    else if(choice == "m" || choice == "M")
    {
        result = num1 * num2;
        cout<<"Multiplication is: "<<result;
    }
    else if(choice == "d" || choice == "D")
    {
        result = num1 / num2;
        cout<<"Division is: "<<result;
    }
    else if(choice == "r" || choice == "R")
    {
        result = num1 % num2;
        cout<<"Modulus is: "<<result;
    }
    else{
        cout<<"Wrong Choice";
    }
    return 0;
}