#include <string>
#include <iostream>
int main() {

    using namespace std;
    const int THISYEAR{2018};
    string yourName;
    int birthYear;
    bool failed=false;

    cout << " What is your name? " << flush;
    // cin >> yourName; // supporta solo una parola
    getline(cin,yourName);

    do {
        cout << "What year were you born? " ;
        cin >> birthYear;
        if (cin.fail()){
            cin.clear();
            cin.ignore(10000,'\n');
            failed=true;
        } else {
            failed=false;
        }
    } while (failed);

    cout << "Your name is " << yourName
         << " and you are approximately "
         << (THISYEAR - birthYear)
         << " years old. " << endl;
}
