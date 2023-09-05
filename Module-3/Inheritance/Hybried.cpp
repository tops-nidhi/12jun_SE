#include<iostream>
using namespace std;
class A
{
public: 
    A()
    {
        cout<<"This is class A.\n";
    }
};
class B : virtual public A{
public: 
    B()
    {
        cout<<"This is class B.";
    }
};
class C : virtual public A
{
public: 
    C()
    {
        cout<<endl<<"This class C.";
    }
};
class D : public B, C
{
public: 
    D()
    {
        cout<<endl<<"This is class D.";
    }
};
int main(void)  //main function
{
    D obj1;//object of the derived class.
}