#include <iostream>
#include <fstream>
using namespace std;
// inserire la sequenza abcdefghijklmnopqrstuvwxyz
int main(void)
{
    ifstream inf;
    inf.open("test.txt");
    while(!inf.eof()){
        cout << char(inf.get()) <<endl;
    }
}
