#include <stdio.h>

enum weekDays {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday} today;

/*enum NOMBRE-ENUM {
    NOMBRE = #-VALOR
    NOMBRE = #-VALOR
    NOMBRE = #-VALOR
} ¿APUNTADOR?;*/

int main(){
    // enum weekDays today;
    today = Monday;
    printf("Day %d", today + 1);
    return 0;
}