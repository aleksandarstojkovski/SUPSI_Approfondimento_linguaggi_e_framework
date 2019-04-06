#include "todolist.h"
#include "todoitem.h"
#include <iostream> // for std::cin and std::cout
#include <vector>  //for std::vector

using namespace std;

void TodoList::aggiungi(){

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
    m_items.push_back(todoItem);

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
