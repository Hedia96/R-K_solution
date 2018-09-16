#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
/*
AUTHOR :AYA HEDIA
9/2018
*/
/*
EXERCISE 2-1
 WRITE PROGRAM TO SHOW THE RANGE OF (INT,CHAR,LONG,SHORT)
 BOTH SIGNED AND UNSIGNED
 BY TWO METHODS :
 1-FROM STANDARD DECLERATION <FILE.H> EG <limits.h>,<floats.h>
 2-BY DIRECT COMPUTING

*/
int main()
{
    char x;
    signed char s_x;
    unsigned char un_x;
    printf("the Min range for signed char:%d\n",SCHAR_MIN);
    printf("the Max range for signed char:%d\n",SCHAR_MAX);
    printf("size of char by default:%d\nsize of signed char:%d\nsize of unsigned char:%d\n",sizeof(x),sizeof(s_x),sizeof(un_x));
    printf("unsigned  char Max %d", UCHAR_MAX);

    //*********DIRECT COMPUTING
    /*
    CHAR =X7X6X5X4 X3X2X1X0 = 8BITS
    COMPLEMENT BY CONVERT 0 TO 1 =~0 SO 1111 1111
    SIGNED BIT IS (X7) SO REMOVE THE SIGN BY RIGHT SHIFT
    0111 1111 AFTER THAT ADD 1  -127-1=-128
    */
    printf("Minimum Signed Char %d\n",-(char)((unsigned char) ~0 >> 1) - 1);
    printf("Maximum Signed Char %d\n",(char) ((unsigned char) ~0 >> 1));

    printf("Minimum Signed Short %d\n",-(short)((unsigned short)~0 >>1) -1);
    printf("Maximum Signed Short %d\n",(short)((unsigned short)~0 >> 1));

    printf("Minimum Signed Int %d\n",-(int)((unsigned int)~0 >> 1) -1);
    printf("Maximum Signed Int %d\n",(int)((unsigned int)~0 >> 1));

    printf("Minimum Signed Long %ld\n",-(long)((unsigned long)~0 >>1) -1);
    printf("Maximum signed Long %ld\n",(long)((unsigned long)~0 >> 1));

    /* Unsigned Maximum Values */

    printf("Maximum Unsigned Char %d\n",(unsigned char)~0);
    printf("Maximum Unsigned Short %d\n",(unsigned short)~0);
    printf("Maximum Unsigned Int %u\n",(unsigned int)~0
    // NOTE %u OR %d first show 42...5 but last one -1
    //‘%u' treats the integer as unsigned, whereas ‘%d' treats the integer as signed.
    printf("Maximum Unsigned Long %lu\n",(unsigned long)~0);
     //printf()
    return 0;



}
