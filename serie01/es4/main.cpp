#include <iostream>
#include "todoitem.h"
#include "todolist.h"

using namespace std;

bool isSelectionValid(string str){
    if (str.length()>1){
        return false;
    }
    return true;
}

int main()
{
    string input;
    TodoList todolist{};

    do{
        cout << "[A]ggiungi, [R]imuovi, [L]ista, [M]odifica, [E]sci" << endl;
        cin >> input;
    } while (!isSelectionValid(input));

    switch(input[0]){
        case 'A':
            todolist.aggiungi();
            break;
        case 'R':
            todolist.rimuovi();
            break;
        case 'L':
            todolist.lista();
            break;
        case 'M':
            todolist.modifica();
            break;
        case 'E':
            break;
    }



    return 0;
}
