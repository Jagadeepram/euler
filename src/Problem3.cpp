#include <stdlib.h>
#include <iostream>
#include "Problem3.h"
#include "PrimeNumber.h"

using namespace std;
Problem3::Problem3()
{
    //ctor
}

Problem3::~Problem3()
{
    //dtor
}
void Problem3::run()
{
    cout<<compute();
}
Problem3* Problem3:: Instance()
{
    static Problem3 *instance = NULL;
    if(!instance)
    {
        instance = (Problem3 *) malloc (sizeof(Problem3)) ;
    }
    return instance;
}

/**
Problem:

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

/**
Solution:

1) Check for the prime number starting from 2 which is divisible.
2) Store that prime number and divide the existing number by it.

3) Continue step 1 untill Number becomes 1.

Example:
35.
 5 is the first prime number and by dividing it gives 7.
 7 by it self a prime number.

**/
datatype Problem3::compute()
{
    datatype number = (61*53); // Set the number in question.
    datatype primeNum=1, bigNum = 1;
    while (number != 1)
    {
        primeNum = 2;
        while ( number%primeNum != 0)
        {
            primeNum = (int ) PrimeNumber::NextPrime((int)primeNum);
        }
        if(number % primeNum == 0)
        {
            number = number/primeNum;
            if(bigNum < primeNum)
                bigNum = primeNum ;
        }
    }
    return bigNum;
}
