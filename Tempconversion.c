#include <stdio.h>
#include <stdlib.h>
float TempConv(float Celsius);

int main()
{
    float Celsius;
    printf("Enter the value in Celsius");
    scanf("%f",&Celsius);
    printf("fehrenheit value is %f",TempConv(Celsius));
    return 0;
}

float TempConv(float Celsius){
    float ans=((Celsius)*9/5)+32;
    return ans;
}
