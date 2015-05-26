#include "Problem5.h"
#include <stdlib.h>
#include <iostream>
#include "PrimeNumber.h"
using namespace std;

/**
Problem 5:

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

/**
Solution 1:

*/
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
    free(this);
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

///TODO: Extracted all prime numbers. Sort and get the maximum prime elements.
datatype Problem5::compute()
{
    vector<sPrime> pNumber;
    vector<sPrime>:: iterator iter;
    sPrime tempNumber;
    int compositeNum, primeNumItt;
    for (int i=2 ; i <= 20 ; i++)
    {
        if(PrimeNumber::IsPrime(i))
        {
            tempNumber.num = i;
            tempNumber.primeNum = i ;
            tempNumber.primeCount = 1 ;
            pNumber.push_back(tempNumber);
        }
        else
        {
            compositeNum = i;
            tempNumber.num = i;
            primeNumItt = 2;
            while (compositeNum != 1)
            {
                tempNumber.primeNum = primeNumItt ;
                tempNumber.primeCount = 0 ;
                while (compositeNum % primeNumItt == 0 )
                {
                    tempNumber.primeCount++;
                    compositeNum = compositeNum / primeNumItt;
                }
                if(tempNumber.primeCount != 0)
                {
                    pNumber.push_back(tempNumber);
                }
                primeNumItt = PrimeNumber::NextPrime(primeNumItt);
            }
        }
    }
    for (iter = pNumber.begin() ; iter != pNumber.end() ; iter++)
    {
        cout << iter->num<< " "<<iter->primeNum << "  " << iter->primeCount << "\n";
    }
    return 0;
}
