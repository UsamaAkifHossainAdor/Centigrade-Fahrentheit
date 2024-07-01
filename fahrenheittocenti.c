#include <stdio.h>
#include <math.h>

int main () {
    float F,C;
    printf("Enter the Fahrentheit value : ");
    scanf ("%f",&F);
    C = (F-32)/1.8;

    printf("Fahrentheit =%.2f\n",C);
    return 0;
}