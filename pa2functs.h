/** pa2functs.h
* ===========================================================
* Name: Cleo Cowie, 01OCT020
* Section: T1/2
* Project: PA2
* Purpose: 
* ===========================================================
*/

#ifndef PA2FUNCTS_H
#define PA2FUNCTS_H
#include <stdbool.h>

void displayRangeList(int start,int end, int stepValue);
bool checkCharArray(char myStr[] ,int stringLength);
void minStamps(int postage, int*fiftyFive, int*quarters, int*twelve, int*pennie);
int getLightReadings(float reading[]);
int analyzeLightReadings(float reading[],int number);
void convertLeet(char myStr2[]);

#endif //PA2FUNCTS_H