#include <vector>  //for std::vector
#include <string>
#include "todoitem.h"

#ifndef TODOLIST_H
#define TODOLIST_H


class TodoList
{

public:
    TodoList();
    void aggiungi();
    void modifica();
    void rimuovi();
    void lista();
private:
    std::vector<TodoItem> m_items;
};

#endif // TODOLIST_H
