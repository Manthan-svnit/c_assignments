/*WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS
PRESENT IN THE FILE.*/
#include<stdio.h>
#include<ctype.h>

int count(int v);
int main()
{
    FILE *fp;
    int vowel =0;
    fp = fopen("Test.txt","r");
    char ch;
    ch = fgetc(fp);    
    while(ch!=EOF)
    {
      printf("%c",ch);
      ch = fgetc(fp);
      ch = tolower(ch);
      if(ch == 'a' || ch=='e' ||ch == 'i' ||ch == 'o' ||ch == 'u')
      {
        vowel ++;
      }
    }
    printf("\n");
    fclose(fp);

    printf("Total number of Vowels is:%d",vowel);

    return 0;
}