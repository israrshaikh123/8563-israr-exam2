#include<stdio.h>
void arrayrevers(int array2[6])
{
     

    
    printf("\nArray in reverse order:\n");
    for (int i = 6 ; i >= 0; i--) {
        printf("%d ", array2[i]); 
    }


}

void main()
{

 
    int array[6]={1,5,7,3,2,9},array2[6];


    for (int i = 0; i <6; i++)
    {
        printf("\narray[%d] = {%d}",i,array[i]);
    }

    arrayrevers(array2[6]);
   // printf("\nArray in Revers is");

    
}