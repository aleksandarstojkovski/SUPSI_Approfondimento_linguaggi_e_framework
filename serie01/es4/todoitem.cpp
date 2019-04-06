#include "todoitem.h"

TodoItem::TodoItem(const std::string &titolo, const std::string &descrizione, int importanza)
    : m_titolo{titolo}, m_descrizione{descrizione}, m_importanza{importanza}
{
}
