// The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section.

// Boundary Condition(s):
// 1 <= N <= 20

// Example Input/Output 1:
// Input:
// 5

// Output:
// 1----1
// 12---21
// 123--321
// 1234-4321
// 1234554321

// Example Input/Output 2:
// Input:
// 4

// Output:
// 1---1
// 12--21
// 123-321
// 12344321

// pattern explanation
// lets break down the above pattern into three parts
//     1.left hand.(reverse of the right part)
//     2.middle part.(hypen part)
//     3.right part.(reverse of the left part)
//youtube link for better understanding =https://www.youtube.com/watch?v=Jw5nZGIqmFA&t=24s
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int row = 1; row <= N; row++)  //row to print
    {
        for (int col = 1; col <= i; col++) //left hand side of pattern
        {
            printf("%d", col);
        }
        for (int hyphen = 1; hyphen <= N - row; hyphen++)   //hypen part"-"
        {
            printf("-");
        }
        for (int col = row; col >= 1; col--)  //right side of the pattern
        {
            printf("%d", col);
        }
        printf("\n");   //break the row and move to next part
    }
}
