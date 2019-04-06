#include <iostream>
#include <string>

#ifndef TODOITEM_H
#define TODOITEM_H


class TodoItem
{
public:
    TodoItem(const std::string &titolo, const std::string &descrizione, int importanza);
    void titolo(std::string titolo);
    void titolo();

private:
    std::string m_titolo;
    std::string m_descrizione;
    int m_importanza;
};

#endif // TODOITEM_H
