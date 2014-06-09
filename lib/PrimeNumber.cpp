#include "PrimeNumber.h"

PrimeNumber::PrimeNumber()
{
    //ctor
}

PrimeNumber::~PrimeNumber()
{
    //dtor
}
bool PrimeNumber::IsPrime(int n)
{
    int i;
    for( i = 2 ; i < (n/2) ; i++)
    {
        if( n%i == 0)
        {
           return false;
        }
    }
    return true;
}
int PrimeNumber::NextPrime(int n)
{
    while(!IsPrime(++n));
    return n;
}
int PrimeNumber::NoOfPrimes(int n,int m)
{
    int i=0;
    int count = 0;
    for(i=n ; i<m;i++)
    {
        if(IsPrime(i))
            count++;
    }
    return count;
}
