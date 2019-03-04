#include <fstream>
#include <iostream>

int main() {
 using namespace std;
 int lucky{7};
 float pi{3.14};
 double e{2.71};
 ofstream outf;
 outf.open("mydata");
 outf << lucky;
 outf << pi;
 outf << e;
 outf << "This is an example" << endl;
 outf.flush();
 outf.close();

 // stampo contenuto del file
 cout << "stampo contenuto del file" << endl;

 ifstream intf;
 intf.open("mydata");
 while(intf.good()){
     cout << intf.rdbuf() << endl;
 }

}
