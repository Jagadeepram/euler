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

///TODO: Extracted all prime numbers. Sort and get the maximum prime elements.
 void Problem5::addPrimeTable(vector<sPrime>& vPrime,sPrime& tPrime)
//void Problem5::addPrimeTable(sPrime prime)
{
    vector<sPrime>:: iterator iter;
    for (iter = vPrime.begin() ; iter != vPrime.end() ; iter++)
    {
        if((iter->primeNum == tPrime.primeNum))
        {
            if(iter->primeCount < tPrime.primeCount)
            {
///cout << " Replace " << iter->primeNum << " from " << iter->primeCount << " to " <<tPrime.primeCount << "\n";
               iter->primeCount =  tPrime.primeCount;
            }
            return ;
        }
    }
    vPrime.push_back(tPrime);
///cout << " Push " << tPrime.primeNum << " " << tPrime.primeCount << "\n";
}

datatype Problem5::compute()
{
    vector<sPrime> pNumber;
    vector<sPrime>::iterator iter;
    sPrime tempNumber;
    int compositeNum, primeNumItt;
    int prod = 1;
    for (int i=2 ; i <= 20 ; i++)
    {
        if(PrimeNumber::IsPrime(i))
        {
            tempNumber.num = i;
            tempNumber.primeNum = i ;
            tempNumber.primeCount = 1 ;
            addPrimeTable(pNumber,tempNumber);
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
                    addPrimeTable(pNumber,tempNumber);
                }
                primeNumItt = PrimeNumber::NextPrime(primeNumItt);
            }
        }
    }
    for (iter = pNumber.begin() ; iter != pNumber.end() ; iter++)
    {
///cout << iter->num<< " "<<iter->primeNum << "  " << iter->primeCount << "\n";

        for (int j =1 ; j <=iter->primeCount ; j++ )
            prod *= iter->primeNum;
    }
///cout << "Num" << prod << "\n";
    return prod;
}
