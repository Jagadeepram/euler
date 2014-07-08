#include "Base.h"
#ifndef PROBLEM3_H
#define PROBLEM3_H
/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
typedef long long int datatype ;

class Problem3 //: public Base
{
    public:
        static Problem3* Instance();
        Problem3();
        void run();
        datatype compute();
        virtual ~Problem3();
    protected:
    private:
};

#endif // PROBLEM3_H
