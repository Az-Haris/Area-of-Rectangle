#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float Length, Width, Area;
    printf("Enter Length Size and Press Enter = ");
    scanf("%f", &Length);
    printf("Enter Width Size and Press Enter = ");
    scanf("%f", &Width);
    Area = Length*Width;
    printf("Your Rectangle Area is = %f Square Unit", Area);
    getch();
    return 0;
}
