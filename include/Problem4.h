#ifndef PROBLEM4_H
#define PROBLEM4_H
/**
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
typedef long long int datatype ;

class Problem4 //: public Base
{
    public:
        static Problem4* Instance();
        Problem4();
        void run();
        datatype compute();
        virtual ~Problem4();
        bool IsPalindrom(datatype);
    protected:
    private:
};

#endif // PROBLEM4_H
