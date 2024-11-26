/*WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES
USING POINTERS.*/

#include<stdio.h>
void length(const char *str,int *lincluding,int *lexcluding)
{
    *lincluding = 0;
    *lexcluding = 0;
    while(*str !='\0')
    {
        (*lincluding) ++;
        if(*str !=' ')
        {
            (*lexcluding) ++;
        }
        str ++;
    }
}
int main()
{
    int lincluding,lexcluding;
    char str[100];
    printf("Enter string: \n");
    gets(str);

    length(str, &lincluding, &lexcluding);

    printf("Length of string including space:%d\n",lincluding);
    printf("Length of string excluding space:%d\n",lexcluding);

    return 0;
}