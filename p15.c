#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int c=0,count[26]={0};
gets(str);
while(str[c]!='\0')
{
if(str[c]>='a' && str[c]<='z')
count[str[c]-'a']++;
c++;
}
for(c=0;c<26;c++)
{
if(count[c]!=0)
printf("%coccurs %d times in the string\n",c+'a',count[c]);
}
getch();
}
