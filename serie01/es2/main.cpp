#include <fstream>

int main() {
 using namespace std;
 int lucky{7};
 float pi{3.14};
 double e{2.71};
 ofstream outf;
 outf.open("mydata");
 outf << lucky << endl;
 outf << pi << endl;
 outf << e << endl;
 outf << "This is an example" << endl;
 outf.flush();
 outf.close();
}
