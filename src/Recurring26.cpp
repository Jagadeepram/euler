//#include "Recurring26.h"
//#include <stdlib.h>
//#include <iostream>
//using namespace std;
//
//Recurring26::Recurring26()
//{
//    ctor
//  /  arr2StoreQ = NULL;
//    divident = 0;
//    arrIndex = 0;
//    resLen = 0;
//}
//
//Recurring26::~Recurring26()
//{
//    dtor
//    if(arr2StoreQ)
//        free(arr2StoreQ);
//}
//
//void Recurring26::output()
//{
//    Recurring26 *object= NULL;
//    object = (Recurring26*) malloc(sizeof(Recurring26));
//    cout << object->compute();
//    free(object);
//}
//void Recurring26::initCompute()
//{
//    int i=0;
//    / Create array for y number.
//    if(arr2StoreQ == NULL)
//        arr2StoreQ = (divStrctType*)malloc((sizeof(divStrctType))*(divident));
//
//    for ( i = 0;( (i < (divident -1)) && (arr2StoreQ != NULL)) ; i++)
//    {
//       arr2StoreQ[i].rem =0;
//       arr2StoreQ[i].x = 0;
//    }
//}
//void Recurring26::endCompute()
//{
//    / Free array for y number.
//    if(arr2StoreQ != NULL)
//       free(arr2StoreQ);
//}
//int Recurring26 :: isPresentElseAdd(int x,int rem)
//{
//    int i = 0;
//    divStrctType storeElement;
//
//    / Search for the element
//    for(i = 0; i < divident-1 ; i++ )
//    {
//        if(arr2StoreQ[i].x == x)
//        {
//
//cout << "Debug Element found i" << i << "\n";
//cout << "Debug Element found x" << x << "\n";
//cout << "Debug Element found rem " << rem << "\n";
//            resLen = arrIndex - i;
//cout << "Debug Element found resLen " << resLen << "\n";
//            return 0;
//        }
//    }
//    / No element present in the array. So store in index
//    storeElement.rem = rem;
//    storeElement.x = x;
//
//    if(arrIndex < divident-1)
//        arr2StoreQ[arrIndex++] = storeElement;
//    return 1;
//}
///
// Type = x/y Find the recurring decimal numbers.
//*/
//datatype Recurring26::compute()
//{
//    const int y = NUMBER;
//    int x = 1, check;
//    int debug=0;
//    noOfDecPoints = 0; /// Number of decimal points.
//    divident = y;
//    int rem = 1; /// Remainder of the divisions.
//    initCompute();
//    / Check for number of decimal points.
//    while(x < y && x!=0)
//    {
//        noOfDecPoints++;
//        x *= 10;
//    }
//    / Now noOfDecPoints contains number of decimal points.
//    do{
//        rem = x /y;
//cout << "Debug Rem" << rem << "\n";
//cout << "Debug X" << x << "\n";
//       check = isPresentElseAdd(x,rem);
//        x = x % y;
//        while(x < y && x!=0)
//            x *= 10;
//debug++;
//    }while(( x != 0) && (check != 0 ) && debug <= 10);
//
//    if(x != 0)
//        / Find the recurring number.
//        cout << resLen;
//    else
//        / Not a recurring number.
//        cout << 0;
//
//    endCompute();
//    return 0;
//}
