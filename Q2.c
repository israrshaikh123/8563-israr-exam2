#include<stdio.h>

void squar(int a)
{
    printf("The Squar of number is:- %d",a*a);
}
void main()


{
    int num=1;

    printf("Enter the number:- ");
    scanf("%d",&num);
    squar(num);


}