#include<iostream>
using namespace std;
class Base{
public: 
    int no;
    int getdata()
    {
        cout<<"Enter value of no : ";
        cin>>no;
        return 0;
    }
};
class Derived : public Base
{
public: 
    void display()
    {
        cout<<"Value of the no is: "<<no;
    }
};
int main()
{
    Derived d1; //object creation
    d1.getdata();
    d1.display();
    return 0;
}