#include <iostream>
#include <string>

#ifndef TODOITEM_H
#define TODOITEM_H


class TodoItem
{
public:
    TodoItem(std::string titolo, std::string descrizione, int importanza);
    TodoItem();
    void titolo(std::string titolo);
    void titolo();

private:
    std::string m_titolo;
    std::string m_descrizione;
    int m_importanza;
};

#endif // TODOITEM_H
