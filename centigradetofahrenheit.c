#include <stdio.h>
#include <math.h>

int main () {
    float c,F;
    printf("Enter the Centigrade value : ");
    scanf ("%f",&c);
    F =(c * 1.8) + 32;

    printf("Fahrentheit =%.2f\n",F);
    return 0;
}