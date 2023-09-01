#include <iostream>
using namespace std;
class A
{
public:
    string anm;
    int aid;
    A(/* args */)
    {
        cout << "\n---------------------A--------------------\n";
        cout << "Enter your id: ";
        cin >> aid;
        cout << "\n Enter the name of student:";
        cin >> anm;
    }
};
class B
{
public:
    string Bnm;
    int Bid;
    B(/* args */)
    {
        cout << "\n---------------------B--------------------\n";
        cout << "Enter your id: ";
        cin >> Bid;
        cout << "\n Enter the nBme of student:";
        cin >> Bnm;
    }
};
class C
{
public:
    string cnm;
    int cid;
    C(/* args */)
    {
        cout << "\n---------------------C--------------------\n";
        cout << "Enter your id: ";
        cin >> cid;
        cout << "\n Enter the name of student:";
        cin >> cnm;
    }
};
class Tops : public A, B, C
{
public:
    Tops()
    {
        cout << "\n---------------------------TOPS-------------------------";
        cout << "\n---------------------------" << anm << "-------------------------";
        cout << "\nYour id is: " << aid;
        cout << "\n---------------------------" << Bnm << "-------------------------";
        cout << "\nYour id is: " << Bid;
        cout << "\n---------------------------" << cnm << "-------------------------";
        cout << "\nYour id is: " << cid;
    }
};
int main() // main function
{
    Tops t1; // creating object
}