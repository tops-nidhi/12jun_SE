#include <iostream>
using namespace std;
// Define the global variable
int no = 100;
int main()
{
    int no = 8; // define the local
    cout << "Value of the local variable no is: " << no << endl;
    cout << "Value of the global variable no is: " << ::no << endl;
    return 0;
}