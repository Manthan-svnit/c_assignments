/*CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY,
PRICE AND
AMOUNT. IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND
PRICE AS
INPUT AND CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT.*/

#include<stdio.h>

struct item
{
    char item_Name;
    int quantity;
    float prize;
    int amount;
}i1;
int cal(struct item i1)
{
  i1.amount = i1.prize * i1.quantity;
  return i1.amount;
}

int main()
{
    struct item i1;
    printf("Enter Item name: \n");
    scanf("%s",&i1.item_Name);
    printf("Enter Quantity: \n");
    scanf("%d",&i1.quantity);
    printf("Enter prize: \n");
    scanf("%f",&i1.prize);
    
    printf("Quantity:%d\t prize:%f \n",i1.quantity,i1.prize);
    int amount = cal(i1);
    printf("Amount = %d",amount);
    return 0;
}