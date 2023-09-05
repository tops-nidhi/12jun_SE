#include <iostream>
using namespace std;
class Overload
{
public:
    int sub(int a, int b)
    {
        return a - b;
    }
    int sub(int a, int b, int c)
    {
        return a - b - c;
    }
};
int main() // main function starts here.
{
    Overload over;
    cout << endl
         << over.sub(45, 89);
    cout << endl
         << over.sub(45, 8, 9);
    return 0;
}