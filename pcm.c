#include<stdio.h>
int main()
{
	int p,c,m;
	float avg;
	printf("Enter your marks of Physics:");
	scanf("%d",&p);
	printf("Enter your marks of Chemistry:");
	scanf("%d",&c);
	printf("Enter your marks of Math:");
	scanf("%d",&m);
	avg=(p+c+m)/3;
	printf("Your Average marks is:%f\n",avg);
	if(avg>=90)
	printf("Your grade is O...");
	else if(avg<90 && avg>=80)
    printf("Your grade is E...");
    else if(avg<80 && avg>=70)
    printf("Your grade is A...");
    else if(avg<70 && avg>=60)
    printf("Your grade is B...");
    else if(avg<60 && avg>=50)
	printf("Your grade is C...");
	else
	printf("You failed...");
	return 0;
	
}