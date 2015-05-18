#include <iostream>
#include "SpiralRing.h"

using namespace std;

SpiralRing::SpiralRing()
{
    //ctor
    dir = RIGHT;
}

SpiralRing::~SpiralRing()
{
    //dtor
}

void SpiralRing :: print(void)
{
    cout << "The Square is as follows \n";
    int blockSize = 5;
    int number = 1;
    int lineLength = 1;
    int lineLenCopy = 1;
    int row,column;
    int arr[blockSize][blockSize] ;
    number = 1;
    lineLength = 1;
    lineLenCopy = 1;
    row = blockSize/2;
    column = blockSize/2;
    dir = NONE;
    for ( int i = 0 ; i < (blockSize*blockSize) ; i++)
    {
        if(i == 1 || (dir == RIGHT && lineLength == 0))
        {
            lineLenCopy +=1;
            row +=1 ;
            column +=1;
            dir = UP;
            column = row;
            lineLength = lineLenCopy;
cout << "UP\n";
        }
        else if(dir == RIGHT)
        {
            column ++;
        }
        else if (dir == UP)
        {
            row --;
            if(lineLength == 0)
            {
                dir = LEFT;
                lineLength = lineLenCopy;
cout << "LEFT\n";
            }
        }
        else if (dir == LEFT)
        {
            column --;
            if(lineLength == 0)
            {
                dir = DOWN;
                lineLength = lineLenCopy;
cout << "DOWN\n";
            }
        }
        else if (dir == DOWN)
        {
            row ++;
            if(lineLength == 0)
            {
               dir = RIGHT;
               lineLength = lineLenCopy;
cout << "RIGHT\n";
            }
        }
        lineLength --;
        cout << row << column <<" "<< i << "\n";
        arr[row][column]= number++;
    }
//    for (int i = 0 ; i < blockSize ; i++)
//    {
//        for (int j = 0; j < blockSize ; j++)
//        {
//            cout << number++ << " ";
//        }
//        cout << "\n";
//    }
}
