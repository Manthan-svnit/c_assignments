//Implement a function named as Flip; which will take a number as input and flip its last N Digits
#include <stdio.h>
#include <math.h>
int Flip(int num, int N)
{
    int temp = num, digit, reverse=0;
    for(int i=0; i < N; i++)
    {
        digit = temp%10;
        reverse = reverse*10 + digit; 
        temp = temp/10;
    }
    return (temp * pow(10,N) + reverse);
}
int main()
{
    int num, N;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("Enter the number of digits from last to flip:\n");
    scanf("%d", &N);
    printf("%d after fliping last %d digits: %d\n", num, N, Flip(num,N));
    return 0;
}