#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
printf("enter the number-->");
scanf("%d",&num);
if(num>0||num<0)
{
if(num % 2 ==0)
{
printf("\n\tEven");
}
else
{
	printf("\n\tOdd");
}
}
//testcase for character !

else
{
printf("\n\tCharacter are not allowed..!");
printf("\n\tEnter the valid input !");
}
return 0;
}
