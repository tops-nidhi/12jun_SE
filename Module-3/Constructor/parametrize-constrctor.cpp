#include<iostream>
using namespace std;
class Construct
{
public: 
    
    Construct(int a, int b) //parametrize constructor
    {
        cout<<"Addition of the two digit is: "<<a+b;
    }
    
};
int main()
{
    Construct obj(56, 4);
    return 0;
}