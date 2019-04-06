#include <iostream>
#include "Alpha.h"

using namespace std;
int main() {
    cout << "************* Inizio **************" << endl;
    bar::Alpha ak;
    double v1 = ak;
    cout << "v1 = "<< v1 << endl;
    ak.set(4.5);
    cout << "ak = " << (double) ak << endl;
    ak.set(4);
    cout << "ak = " << (double) ak << endl;
    ak.set();
    cout << "ak = " << (double) ak << endl;
    bar::Beta bk;
    double v2 = bk;
    cout << "v2 = "<< v2 << endl;
    bk.set(4.5);
    cout << "bk = " << (double) bk << endl;
    bk.set(4);
    cout << "bk = " << (double) bk << endl;
    bk.set();
    cout << "bk = " << (double) bk << endl;
    if (dynamic_cast<bar::Alpha*>(&bk)) cout << "ok" << endl;
    if (dynamic_cast<bar::Beta*>(&ak)) cout << "ok2" << endl;
    bar::Alpha* ptr2{new bar::Beta};
    delete ptr2;
    cout << "************* Fine **************" << endl;
}
