#include<fstream>
#include<iostream>
using namespace std;
int main() {
    string str;
    ofstream fout("input.txt");
    fout<<"Hello";
    fout.close();
    ifstream fin ("hello.cpp");
    fin>>str;
    cout<<str;
    fin.close();
}