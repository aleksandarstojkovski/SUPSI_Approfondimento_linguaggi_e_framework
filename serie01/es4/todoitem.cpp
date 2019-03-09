#include "todoitem.h"

TodoItem::TodoItem(std::string titolo, std::string descrizione, int importanza)
    : m_titolo{titolo}, m_descrizione{descrizione}, m_importanza{importanza}
{
}
