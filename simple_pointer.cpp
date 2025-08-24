#include<iostream>

using namespace std;

int main() 
{
    int num = 42;
    int *ptr = &num;

    cout << "Value : " << num << endl;
    cout << "Address : " << &num << endl;
    cout << "Pointer points to : " << *ptr;
    
    return 0;
}