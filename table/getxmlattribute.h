#ifndef MB_GETXMLATTRIBUTE
#define MB_GETXMLATTRIBUTE

#include "uniquestrings.h"
#include "tinyxml2.h"

namespace MB{

CUniqueStrings& GetUniqueStrings();

#define UNIQUE_STRING(s) GetUniqueStrings().Add(s)

bool GetAttribute(TiXmlElement *e, const char *attr, int &value);

void GetAttribute(TiXmlElement *e, const char *attr, short &value);

void GetAttribute(TiXmlElement *e, const char *attr, bool &value);

void GetAttribute(TiXmlElement *e, const char *attr, float &value);

void GetAttribute(TiXmlElement *e, const char *attr, const char *&value);

}

#endif