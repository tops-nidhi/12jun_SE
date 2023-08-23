#include<iostream>
using namespace std;
class Copy
{
public: 
    int n;
    Copy(int no)
    {
        n = no;
    }
    Copy(Copy &c1)//define the copy constructor
    {
        n = ++c1.n;
    }
    void display()//display function to print value of object
    {
        cout<<"Value of the n is: "<<n<<endl;
    }
};
int main()
{
    // Create two objects using class constructor and call their functions
    Copy obj1(45);
    obj1.display();
    Copy obj2 = obj1;
    obj2.display();
    return 0;
}