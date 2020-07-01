#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Hello, World!\n");
    
    printf("enter the number=");
    scanf("%d%d",&a,&b);
    printf("%2d\t%2d",a,b);
    
    if(a>=b)
    {
        c=a/b;
        printf("\nQuotient is :%2d",c);
        c=a%b;
        printf("\nRemainder is :%2d",c);
    }
    return 0;
}

/*
Test Case=1
Input=5 2
Output=2 1

Test Case=2
Input=13  4 
Output=3  1 

Test Case=3
Input=78  16
Output=4  14

Test Case=4
Input=489  23
Output=21  6

Test Case=5
Input=54673  359
Output=152  105
*/