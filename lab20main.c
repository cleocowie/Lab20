/** lab20main.c
* ===========================================================
* Name: Cleo Cowie, 28SEPT2020
* Section: T1/2
* Project: LAB20
* Purpose: 
* ===========================================================
*/



#include <stdio.h>
#include <stdbool.h>
#include "lab20functs.h"

int main() {
    double minF =0.0, maxF=0.0, stepF=0.0;
    do{
        minF = getInput("Minimum Farenheit temperature: ", -459.67, 10706.0);
        maxF = getInput("Maximum Farenheit temperature: ", minF,10706.0);
        stepF = getInput("What step size: ", 0, (maxF - minF)/2);
        printTable(minF, maxF, stepF);
    }while(again());
    system("pause");
    return 0;
}