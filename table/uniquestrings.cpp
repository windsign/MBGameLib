#include "uniquestrings.h"

namespace MB
{

CUniqueStrings::CUniqueStrings()
{
}
 
CUniqueStrings::~CUniqueStrings()
{
}

const char * CUniqueStrings::Add(const char *s)
{
    if (s == 0)
        return 0;
    std::pair<StringSet::iterator, bool> r = m_setStrings.insert(s);
    return (*r.first).c_str();
}
 
bool CUniqueStrings::IsExist(const char *s)
{
    return m_setStrings.find(s) != m_setStrings.end();
}

void CUniqueStrings::Clear()
{
    m_setStrings.clear();
}

}
