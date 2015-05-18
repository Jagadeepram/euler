#ifndef SPIRALRING_H
#define SPIRALRING_H

typedef enum
{
    NONE = 0,
    RIGHT,
    UP,
    LEFT,
    DOWN
} direction;
class SpiralRing
{
    public:
        direction dir;
        SpiralRing();
        virtual ~SpiralRing();
        void print();
    protected:
    private:
};

#endif // SPIRALRING_H
