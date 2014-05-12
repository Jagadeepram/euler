#include "Problem2.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
Problem2::Problem2()
{
    //ctor
}

Problem2::~Problem2()
{
    //dtor
}
Problem2* Problem2:: Instance()
{
    static Problem2 *instance = NULL;
    if(!instance)
    {
        instance = (Problem2 *) malloc (sizeof(Problem2)) ;
    }
    return instance;
}

void Problem2::run()
{
    cout << compute();
}

datatype Problem2::compute()
{
    datatype ret= 0;
    datatype a=0,b=1,c=a;
    while(c < TARGET_NUMBER_2)
    {
        if(c%2 == 0)
            ret+=c;
        c = a+b;
        a = b;
        b = c;
    }
    return ret;
}
