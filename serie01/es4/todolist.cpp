#include "todolist.h"
#include "todoitem.h"
#include <iostream> // for cin and cout
#include <vector>  //for std::vector

using namespace std;

void aggiungi(){

    string titolo;
    string descrizione;
    int importanza;

    cout << "Titolo: " << endl;
    cin >> titolo;
    cout << "Descrizione: " << endl;
    cin >> descrizione;
    cout << "Importanza: " << endl;
    cin >> importanza;

    TodoItem todoItem{titolo,descrizione,importanza};

}

void modifica(){
}

void rimuovi(){
}

void lista(){

}

TodoList::TodoList()
{

}
