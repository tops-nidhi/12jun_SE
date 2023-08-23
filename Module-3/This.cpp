#include <iostream>
using namespace std;
class Operator
{
public:
    int n = 57;
    Operator(int n)
    {
        cout << "Value of the data member is: " << this->n << endl;
        cout << "Value of the parameter is: " << n << endl;
    }
};
int main()
{
    Operator op(83);
}