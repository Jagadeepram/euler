#ifndef PrimeNumber_H
#define PrimeNumber_H


class PrimeNumber
{
    public:
        static bool IsPrime(int n);
        static int NextPrime(int n);
        static int NoOfPrimes(int n,int m);
        PrimeNumber();
        virtual ~PrimeNumber();
    protected:
    private:
};

#endif // PrimeNumber_H
