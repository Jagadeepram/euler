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
/**
Create a table to prime factors
containing prime numbers and number
of its occurance for all number.

At the end get a number by multiplying
all common prime factors.
*/
/**
Solution:
1) Draw the table of prime factors for all the numbers.
2) Get the maximum prime factors from each and multiply.
*/
datatype Problem5::compute()
{

    // Get all the prime numbers
    // Find prime factors for each numbers.
}
