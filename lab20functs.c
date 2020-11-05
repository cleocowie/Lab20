/** lab20functs.c
* ===========================================================
* Name: Cleo Cowie, 28SEPT2020
* Section: T1/2
* Project: LAB20
* Purpose: 
* ===========================================================
*/

#include "lab20functs.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

double fToC(double degF){ 

    double degC;
    degC = ((degF - 32)*(5.0 / 9.0));
    return degC;
}

double cToK(double degC){ 
    double kelvin;
    kelvin = degC + 273.15; 
    return kelvin;
}

void printTable(double degFlow, double degFhigh, double degFstep){

   
    double i;


 fprintf(stdout, "\n\n");
    fprintf(stdout, "|-----------------------------|\n");
    fprintf(stdout, "|                             |\n");
    fprintf(stdout, "|   Temperature Conversions   |\n");
    fprintf(stdout, "|                             |\n");
    fprintf(stdout, "|-----------------------------|\n");
    fprintf(stdout, "|Farenheit| Celsius | Kelvin  |\n");
    fprintf(stdout, "|-----------------------------|\n");



     for (i = degFlow ; i<= degFhigh ; i=i+degFstep) {
        fprintf(stdout, "|%9.2lf|%9.2lf|%9.2lf|\n", i, fToC(i),cToK(fToC(i)));
    }

    fprintf(stdout, "|-----------------------------|\n");
}


double getInput(char title[], double min, double max){  
    double input;
    
    do {
        fprintf(stdout, "%s", title);
        fscanf(stdin,"%lf",&input);

        if ((input >=max) || (input <=min)) {

            fprintf(stdout, "Your input is outside of the range %.2lf to %.2lf.\n", min, max);
            fprintf(stdout, "Please re-enter.\n");
            
        }

        else {
            break;
        }
    } while (true);

        return input;
}

bool again(){
    char input;
    bool again;
    printf("Would you like to do this again?\n");
    fscanf(stdin," %c",&input);

    if (tolower(input) == 'y') {
        again = true;
    }
    else {
        again = false;
    }
    return again;
}
