#include<iostream>
using namespace std;
class Operate
{
    public:
    int no = 100;
    void display()
    {
        cout<<"Value of the no is: "<<no;
    }
    // Operate operator ++()
    // {
    //     ++no;
    //     // return no;
    // }
    Operate operator +(Operate &obj2)
    {
        Operate obj3;
        obj3.no = no + obj2.no;
        return obj3;
    }
};
int main(){
    Operate op, op2, op3;
    op3 = op + op2;
    op3.display();
    // ++op;
    // cout<<"\n\tOperator Overloading";
    // op.display();
}