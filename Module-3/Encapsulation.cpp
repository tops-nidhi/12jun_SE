// Wrapping up the data
#include<iostream>
using namespace std;
class Encapsual{
    int no;
    string nm;
public:
    Encapsual(int no)
    {
        this->no = no;
    }
    void display()
    {
        cout<<"Enter your name: ";
        cin>>nm;
        cout<<nm<<"Your id is: "<<no;
    }
};
int main()
{
    Encapsual cap(83);
    cap.display();
    return 0;
}