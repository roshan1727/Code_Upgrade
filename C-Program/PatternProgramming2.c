// The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output sections.

// Boundary Condition(s):
// 2 <= N <= 32

// Example Input/Output 1:
// Input:
// 4

// Output:
// a
// B c
// D e F
// g H i J

// Example Input/Output 2:
// Input:
// 8

// Output:
// a
// B c
// D e F
// g H i J
// k L m N o
// P q R s T u
// V w X y Z a B
// c D e F g H i J


#include<stdio.h>
int main()
{
    int a,b=0,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        for(j=0;j<=i;b++,j++)
        {
            printf("%c",(b%2==0)?(b%26)+'a':(b%26)+'A');
        }
        printf("\n");
    }
}