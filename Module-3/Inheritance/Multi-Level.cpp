#include<iostream>
using namespace std;
class Grand{
    public:
    int noh;
    Grand()
    {
        cout<<"Enter the number of HOUSE: "<<endl;
        cin>>noh;
    }
};
class Parent : public Grand{
    public :
    int balance;
    Parent()
    {
        cout<<"\n Enter the total bank Balance: ";cin>>balance;}
};
class Child : public Parent//inheritance
{
public:
    void showdata()
    {
        cout<<" Your total no of HOUSE is "<<noh<<endl<<"Total bank balance is: "<<balance;
    }
};
int main(){
    Child c1;//object creation
    c1.showdata(); //calling member function
    return 0;
}