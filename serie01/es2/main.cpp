#include <fstream>
#include <iostream>

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

 // stampo contenuto del file
 cout << "stampo contenuto del file" << endl;

 ifstream inf;

 /* Reimpostiamo i valori, per essere certi che vengano letti dal file */
 lucky = 0;
 pi = 0;
 e = 0;
 string testo;
 inf.open("mydata");
 inf >> lucky;
 inf >> pi;
 inf >> e;
 /* Ignora il \n dopo i numeri */
 inf.ignore(1,'\n');
 getline(inf, testo);
 inf.close();
 cout << "lucky=" << lucky << ", pi=" << pi
     << ", e=" << e << ", testo=" << testo << endl;

}
