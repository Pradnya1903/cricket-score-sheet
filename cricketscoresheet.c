#include<stdio.h>
struct cricketer
{
int runs,wickets;
char name[25];
}player[100];
void main()
{
int i,n;
printf("enter the no of cricket players \n");
scanf("%d",&n);
printf("enter player info as name , runs scored ,wickets taken\n");
for( i=0;i<n;i++)
{
scanf("%s%d%d",&player[i].name,&player[i].runs,&player[i].wickets);
}
printf("\n name\t\t runs\t wickets\n");
for(i=0;i<n;i++)
{
printf("%s\t\t%d\t\t\%d\n",player[i].name,player[i].runs,player[i].wickets);
}
}
