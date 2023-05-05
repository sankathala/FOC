#include <stdio.h>
#include <conio.h>
int main()
{
 int num, remainder, total=0, temp;
 printf("Enter the number=");
 scanf("%d", &num);
 temp=num;
 {
 remainder=num%10;
 total=total+(remainder*remainder*remainder);
 num=num/10;
 }
 if(temp==total)
printf("This number is Armstrong number");
 else
printf("This number is not Armstrong number");
return 0;
}

