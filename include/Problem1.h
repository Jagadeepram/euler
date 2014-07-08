#ifndef PROBLEM1_H
#define PROBLEM1_H
#define TARGET_NUMBER_1 1000

class Problem1
{
    public:
        static Problem1* Instance();
        Problem1();
        void run();
        int compute();
        int computeShortMethod();
        virtual ~Problem1();
    protected:
    private:
};

#endif // PROBLEM1_H
