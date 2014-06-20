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
// TODO: Study Febonaci series and Golden ratios.


// Others solutions.
//# include <iostream>
//# include <algorithm>
//# include <numeric>
//# include <vector>
//
//bool odd (int i) {
//   return i & 1;
//}
//int main () {
//   std :: vector <int> fib(30);
//   fib[0] = 1;
//   adjacent_difference (fib.begin(), fib.end()-1,fib.begin()+1,
//                  std :: plus<int>());
//   fib.erase (std :: remove_if (fib.begin(), fib.end(), odd),
//                     fib.end());
//   clock_t end(clock() - start);
//   std :: cout << accumulate (fib.begin(), fib.end(),
//                     0);
//   return 0;
//}


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
