#include <stdlib.h>
#include <iostream>
#include "Problem4.h"
#include "PrimeNumber.h"

using namespace std;
Problem4::Problem4()
{
    //ctor
}

Problem4::~Problem4()
{
    //dtor
}
void Problem4::run()
{
    cout<<compute();
}
Problem4* Problem4:: Instance()
{
    static Problem4 *instance = NULL;
    if(!instance)
    {
        instance = (Problem4 *) malloc (sizeof(Problem4)) ;
    }
    return instance;
}
/**
Question:

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

/**
Answer:

The below solution is not a genuine logic to the question. but there are high chances of finding the answer.

Starting from last number, multiple two numbers with the scale of 5.
Example
9*9
9*8
..
9*5

and then decrease one operand.

8*9
8*8
...
8*5

continue this step until 5*9.
and then reduce the other operand and start from 9*8
*/

datatype Problem4::compute()
{
    datatype num1 = 999;
    datatype num2 = 999;
    int i,j,k, jump =15;

    while(num1 > 0)
    {
        for( k=0 ; k < jump ; k++)
        {
            for (i=0 ; i < jump ;i++)
                for( j= 0 ;j < jump; j++)
                {
                    if(IsPalindrom((num1-i)*(num2-j)))
                        return ((num1-i)*(num2-j));
                }
            num2 -= 1;
        }
        num1 -= 1;
    }
}

bool Problem4::IsPalindrom(datatype item)
{
    datatype number=0,backUp = item;
    int div;
    while(item)
    {
        div = item%10;
        item = item/10;
        number = number*10 + div;
    }
    if(number == backUp)
    {
        return true;
    }
    else
    {
        return false;
    }
}
