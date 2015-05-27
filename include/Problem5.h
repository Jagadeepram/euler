#ifndef PROBLEM5_H
#define PROBLEM5_H
#include <vector>

typedef long long int datatype ;

typedef struct
{
    int num;
    int primeNum;
    int primeCount;
} sPrime;

class Problem5 //: public Base
{
    public:
        static Problem5* Instance();
        Problem5();
        void run();
        datatype compute();
        virtual ~Problem5();
    protected:
    private:
        void addPrimeTable(std::vector<sPrime>&,sPrime&);

};

#endif // PROBLEM5_H
