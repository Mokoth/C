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
    printf("Distance in miles: %lf", miles);
}
