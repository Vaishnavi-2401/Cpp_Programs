#include<iostream>
#include<cmath>

using namespace std;

int main() 
{
    int num, sum = 0, temp, digit;

    cout << "Enter the Number : ";
    cin >> num;

    temp = num;

    while(temp != 0) 
    {
        digit = temp % 10;
        sum = sum + pow(digit, 3);
        temp = temp / 10;
    }

    if(sum == num)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not a Armstrong";
    }

    return 0;
}