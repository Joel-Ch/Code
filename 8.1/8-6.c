#include <stdio.h>
#include <stdlib.h>

int main(void)
{    
    int a = 7;

    printf("Enter an Integer\n");
    scanf("%i", &a);

    switch (a)
    {
        case 0 :  
            printf("Black");  
            break;
        case 1 :  
            printf("Brown"); 
            break;
        case 2 :  
            printf("Red");
            break;
        case 3 :  
            printf("Orange");  
            break;
        case 4 :  
            printf("Yellow"); 
            break;
        case 5 :  
            printf("Green");
            break;
        case 6 :  
            printf("Blue");  
            break;
        case 7 :  
            printf("Violet"); 
            break;
        case 8 :  
            printf("Grey");
            break;
        case 9 :   
            printf("White"); 
            break;
    }

}