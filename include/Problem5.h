#ifndef PROBLEM5_H
#define PROBLEM5_H


typedef long long int datatype ;

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
};

#endif // PROBLEM5_H
