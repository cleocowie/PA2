/** pa2functs.c
* ===========================================================
* Name: Cleo Cowie, 28SEPT2020
* Section: T1/2
* Project: LAB17
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


void displayRangeList(int start,int end, int stepValue) {
    int i;

    for (i = start ; i<=end ; i=i+stepValue) {
        printf("%d\n",i);
    }

    return;
}

bool checkCharArray(char myStr[],int stringLength){
    bool alphabetic;
    int i;
    char c;
    int count=0;


    for (i = 0; i<stringLength; i++) {
        c=myStr[i];

        if (isdigit(c)){
            count=count+1;
        }
        
    }

    if (count==stringLength) {
        alphabetic=true;
    }
    else {
        alphabetic=false;
    }
    return alphabetic;
}


void minStamps(int postage, int*fiftyFive, int*quarters, int*twelve, int*pennie) {
    int rem1;
    int rem2;
    int rem3;
    *fiftyFive=(postage/55);
    rem1=(postage % 55);
    *quarters=(rem1/25);
    rem2=(rem1 % 25);
    *twelve=(rem2/12);
    rem3=(rem2 % 12);
    *pennie=rem3;
    return;
}

int getLightReadings(float reading[]) {
    int i=0;
    float inputValue=0.0;
    printf("Enter a value (negative value to end): \n");
    
    while (inputValue>=0) {
        scanf("%f", &inputValue);

        if (inputValue<0) {
            break;
        }

        reading[i]=inputValue;
        i=i+1;
        
    }

    

    return i;
}

int analyzeLightReadings(float reading[],int number){
    int middle;
    int i;
    int returnValue=0;
    float avg;
    float sum=0.0;
    middle=((number/2));
    

    for (i = 0; i<number ; i++) {
        sum=sum+reading[i];
    }

    avg=(sum/number);

    if (fabs(avg-reading[middle])<0.0001) {
        returnValue=0;
    }

    else if (avg>reading[middle]) {
        returnValue=1;
    }

    else  {
        returnValue=-1;
    }

    if (returnValue==0) {
        printf("the avg is %f, which is equal to the middle value, so the functions returns 0\n",avg);
    }

    if (returnValue==1) {
        printf("the avg is %f, avg greater than middle value, function returns 1\n",avg);
    }

    if (returnValue==-1) {
        printf("the avg is %f, which is less than the middle value, so the function returns -1\n",avg);
    }

    return returnValue;
}

void convertLeet(char myStr2[]) {
    int length;
    length=strlen(myStr2);
    int i;
    char c;

    for (i = 0; i<length ; i++) {

        c=myStr2[i];

        switch (c)
        {
        case 's':
            myStr2[i]='5';
            break;
        case 't':
            myStr2[i]='7';
            break;
        case 'c':
            myStr2[i]='(';
            break;
        case 'e':
            myStr2[i]='3';
            break;
        case 'o':
            myStr2[i]='0';
            break;
        case 'a':
            myStr2[i]='@';
            break;
        case 'd':
            myStr2[i]=')';
            break;
        default:
            break;
        }
    }

    printf("Leet string is, \"%s\"\n",myStr2);

    return;
}
