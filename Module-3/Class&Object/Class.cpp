#include<iostream>
using namespace std;
class Demo{
public:
    int no; //declare data member
    int getdata() // Member function 
    {
        cout<<"Enter the value of the no: "; //get the value
        cin>>no; //store the value
        return 0;
    }
    void display(){
        cout<<"Value of the no is: "<<no;//to print the value
    }
} ;
int main()
{
    Demo d1;
    d1.getdata();
    d1.display();  
    return 0;
}