#include <stdio.h>

void main()
{
    int a, b;

    printf("Enter A number:- ");
    scanf("%d", &a);

    printf("Enter B Number:-");
    scanf("%d", &b);

    printf("\nBefor : a = %d", a);
    printf("\nBefor : b = %d", b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter : a = %d", a);
    printf("\nAfter : b = %d", b);
}
