#include <stdio.h>

#define PIZZACOST 45
const char NEWLINE = '\n';

int main(){
    float costPizza;
    float numberOfSlices = 3;
    costPizza = PIZZACOST * numberOfSlices;
    
    printf("Total bill: %c%f", NEWLINE ,costPizza);
    return 0;
}