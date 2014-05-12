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
    int i = 0;
    bool ret = false;
    for( i = 0 ; i < (n/2) ; i++)
    {
        if( n%i == 0)
        {
            ret = true;
            break;
        }
    }
    return ret;
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
