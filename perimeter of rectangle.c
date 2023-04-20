#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height , width;
    printf("Enter the height of the rectangle\n");
    scanf("%d", &height);

    printf("Enter the width of the rectangle\n");
    scanf("%d", &width);


    printf("The perimeter of the rectangle %d" , 2*(height+width));
    return 0;
}

