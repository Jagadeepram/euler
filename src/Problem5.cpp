#include "Problem5.h"
#include <stdlib.h>
#include <iostream>
using namespace std;


Problem5::Problem5()
{
    //ctor
}

Problem5::~Problem5()
{
    //dtor
}
Problem5* Problem5:: Instance()
{
    static Problem5 *instance = NULL;
    if(!instance)
    {
        instance = (Problem5 *) malloc (sizeof(Problem5)) ;
    }
    return instance;
}

void Problem5::run()
{
    cout << compute();
}

datatype Problem5::compute()
{
    return 100;
}
