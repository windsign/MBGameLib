#ifndef MB_UNIQUESTRINGTABLE_H
#define MB_UNIQUESTRINGTABLE_H

#include <set>
#include <string>

namespace MB
{

class CUniqueStrings
{
public:
    CUniqueStrings();
    ~CUniqueStrings();

    void Clear();

    const char * Add(const char *s);
    bool IsExist(const char *s);

private:
    using StringSet =  std::set<std::string>;
    StringSet m_setStrings;
};





}

#endif