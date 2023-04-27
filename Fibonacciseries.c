#include <stdio.h>
#include <stdlib.h>
int fibbonc(int x);

int main()
{
    int x;
    printf("Enter the nth number");
    scanf("%d",&x);
    printf("The nth number's value is %d", fibbonc(x));
    return 0;
}
int fibbonc(int x){
    if(x==2 || x==3){
            return 1 ;
    }
    else{
        return fibbonc(x-2) + fibbonc(x-1);
    }
}
