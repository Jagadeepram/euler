#include <iostream>
#include <stdlib.h>
#include "Base.h"

Base::Base()
{
    //ctor
}
Base::~Base()
{
    //dtor
}
Base* Base:: Instance()
{
    static Base *instance = NULL;
    if(!instance)
    {
        instance = (Base *) malloc (sizeof(Base)) ;
    }
    return instance;
}
