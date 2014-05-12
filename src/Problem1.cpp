#include "Problem1.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
Problem1::Problem1()
{
    //ctor
}

Problem1::~Problem1()
{
    //dtor
}
void Problem1::run()
{
    cout << compute();
}
int Problem1:: compute()
{
    int i = 0;
    int sum = 0;
    for (i = 0 ; i< TARGET_NUMBER_1 ; i++)
        if( (! (i%3)) || ( !(i%5)))
            sum+=i;
    return sum;
}
Problem1* Problem1:: Instance()
{
    static Problem1 *instance = NULL;
    if(!instance)
    {
        instance = (Problem1 *) malloc (sizeof(Problem1)) ;
    }
    return instance;
}
