#include <iostream>
#include "Problem1.h"
#include "Problem2.h"
#include "Problem3.h"
#include "Problem4.h"
#include "Problem5.h"
#include "SpiralRing.h"
#include "Recurring26.h"

using namespace std;

int main()
{
    SpiralRing *sr = new SpiralRing();
    sr->print();
    delete (sr);
    return 0;
}
