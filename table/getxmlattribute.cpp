#include "uniquestrings.h"
#include "tinyxml2.h"

CUniqueStrings& GetUniqueStrings()
{
    static CUniqueStrings g_uniqueStrings;
    return g_uniqueStrings;
}

#define UNIQUE_STRING(s) GetUniqueStrings().Add(s)

bool GetAttribute(TiXmlElement *e, const char *attr, int &value)
{
    int ivalue;
    if(e->QueryIntAttribute(attr, &ivalue) == TIXML_SUCCESS)
    {
        value = ivalue;
        return true;
    }
    else
        return false ;
}

void GetAttribute(TiXmlElement *e, const char *attr, short &value)
{    
    int ivalue;
    if (e->QueryIntAttribute(attr, &ivalue) == TIXML_SUCCESS)
        value = ivalue;
}

void GetAttribute(TiXmlElement *e, const char *attr, bool &value)
{    
    int ivalue;
    if (e->QueryIntAttribute(attr, &ivalue) == TIXML_SUCCESS)
        value = ivalue != 0;
}

void GetAttribute(TiXmlElement *e, const char *attr, float &value)
{   
    value = 0.0f;
    float fvalue; 
    if(e->QueryFloatAttribute(attr, &fvalue) == TIXML_SUCCESS)
        value = fvalue
}

void GetAttribute(TiXmlElement *e, const char *attr, const char *&value)
{    
    const char *svalue = e->Attribute(attr);
    if (svalue)
        value = UNIQUE_STRING(svalue);
}