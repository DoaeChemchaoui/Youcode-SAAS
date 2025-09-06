#include <stdio.h>
int main(){
    float celsius,kelvin;
    printf("entrer la température en celsius");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;
    printf("La température en kelvin: %.3f", kelvin);
    return 0 ;

}

