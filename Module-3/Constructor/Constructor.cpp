#include<iostream>
using namespace std;
class Construct
{
public: 
    int a, b;
    Construct() //default constructor
    {
        cout<<"Enter the value of the and b: ";
        cin>>a>> b;
    }
    void print()
    {
        cout<<"Addition of the a and b is: "<< a+b;
    }
};
int main()
{
    Construct obj;
    obj.print();
    return 0;
}