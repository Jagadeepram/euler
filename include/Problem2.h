#ifndef PROBLEM2_H
#define PROBLEM2_H
#define TARGET_NUMBER_2 4000000
typedef long long int datatype ;
class Problem2
{
    public:
        static Problem2* Instance();
        void run();
        datatype compute();
        Problem2();
        virtual ~Problem2();
    protected:
    private:
};

#endif // PROBLEM2_H
