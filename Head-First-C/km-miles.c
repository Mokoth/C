#include <stdio.h>
// Program to convert distance in km to miles
// The distance will be entered by user

int main(){
    double km;
    double miles;

    // conversion ratio
    double conversionRatio = 0.621;

    // taking distance input from user
    printf("Enter distance in Km: ");
    scanf("%lf", &km);

    //compute distance in miles
    miles = km * conversionRatio;
    printf("Distance in miles: %lf \n", miles);

    // Converting Celsius to F
    double celsius;
    double fahrenheit;

    // taking celsius input from user
    printf("Enter temp in Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 1.8) + 32;
    printf("Temp in F is: %.2lf", fahrenheit);
}
