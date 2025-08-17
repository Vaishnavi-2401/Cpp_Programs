#include<iostream>

using namespace std;

class Student 
{
public:
    string name;
    int age;

    void display() 
    {
        cout << "Name : " << name << ", Age : " << age;
    }
};

int main() 
{
    Student s;

    s.name = "Vaishnavi";
    s.age = 23;

    s.display();

    return 0;
}