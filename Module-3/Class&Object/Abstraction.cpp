//Data Hiding
#include<iostream>
using namespace std;
class Abstract{
    int no;
public:
    Abstract(int no)
    {
        this->no = no;
    }
    void display()
    {
        cout<<"Value of no is: "<<no;
    }
};
int main()
{
    Abstract abs(83);
    abs.display();
    return 0;
}