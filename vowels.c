#include<stdio.h>
#include<conio.h>
void main()
{
char st;
printf("\n enter the character");
scanf("%c",&st);
if(st == 'a'||st == 'e'||st == 'i'||st == 'o'||st == 'u'||st == 'A'||st == 'E'||st == 'I'||st == 'O'||st == 'U')
printf("\n %c is vowel",st);
else
printf("\n %c is consonant",st);
}
