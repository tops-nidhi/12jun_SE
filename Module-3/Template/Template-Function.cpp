#include<iostream>
using namespace std;
template <typename T>

class Template{
public:
    T add(T a, T b)
    {
        return (a +b);  // return statement is used to exit the function and pass back value. 
    }
};
int main() {
    // your code goes here
    Template <int> temp;
    Template <float> temp1;
    cout<<temp.add(5.5, 5)<<endl;
    cout<<temp1.add(5.5, 5)<<endl;

}