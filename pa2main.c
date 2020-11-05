/** pa2main.c
* ===========================================================
* Name: Cleo Cowie, 01OCT2020
* Section: T1/2
* Project: PA2
* Purpose: 
* ===========================================================
*/


#include <stdio.h>
#include "pa2functs.h"
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main (void) {
    int start;
    int end;
    int stepValue;
    bool alphabetic;
    char myStr[]="abc123";
    int length;
    length=strlen(myStr);
    int postage;
    int fiftyFive;
    int quarters;
    int twelve;
    int pennie;
    float reading[100];
    int datum;
    char myStr2[]="hello,this is a test.";

    printf("Enter start, end, and step value:\n");
    scanf("%d %d %d",&start,&end,&stepValue);
    displayRangeList(start,end,stepValue);
    alphabetic=checkCharArray(myStr,length);

    if (alphabetic==true) {
        printf("\"%s\" is completely numeric.\n",myStr);
    }
    else {
        printf("\"%s\" is not completely numeric.\n",myStr);
    }

    printf("Enter amount of postage (in cents): \n");
    scanf("%d", &postage);
    minStamps(postage,&fiftyFive,&quarters,&twelve,&pennie);
    printf("postage = %d, 55-cent stamp = %d, 25-cent stamp = %d, 12-cent stamps = %d, 1-cent stamps = %d \n",postage,fiftyFive,quarters,twelve,pennie);


    datum=getLightReadings(reading);
    printf("%d values read.\n",datum);


    analyzeLightReadings(reading,datum);

    convertLeet(myStr2);
    



    system("pause");
    return 0;
}