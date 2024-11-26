/*IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS
LAST N DIGITS

FOR EXAMPLE FLIP(123, 2)= 132 ; (HERE N=2) FLIP(12345,3)= 12543 (HERE N=3).*/

#include<stdio.h>
#include<math.h>

int flip(int n,int num);
int main()
{
    int n,num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    printf("Enter number you want to reversed from last \n");
    scanf("%d",&n);
    int rev = flip(num,n);
    printf("Reversed Digit is %d",rev);
    return 0;
}
int flip(int n,int num)
{
    int lastNDigit,remainingDigit,reversedDigit;
    reversedDigit = 0;
    lastNDigit = num%(int)pow(10,n);
    remainingDigit = num/(int)pow(10,n);

    while(lastNDigit!=0)
    {
       reversedDigit = reversedDigit * 10 + lastNDigit % 10;
       lastNDigit = lastNDigit/10;

    }
    return (remainingDigit*(int)pow(10,n)+reversedDigit);
}