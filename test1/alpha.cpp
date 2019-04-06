#include "Alpha.h"
#include "iostream"

using namespace std;

namespace bar {

    void Alpha::set(double v) {
        std::cout << "set double: valore " << v << std::endl;
        m_v = v;
    }

    Alpha::~Alpha() {
        cout << "Alpha : distuzione" << endl;
    }

    Alpha::operator double(){
        return m_v;
    }

    Beta::~Beta() {
        cout << "Beta : distuzione" << endl;
    }

}
