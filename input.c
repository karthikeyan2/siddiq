#include<stdio.h>
int sum=0;
main()
{
int a[10];
int n,k,i;
printf("\n enter the value of n");
scanf("%d",&n);
printf("\n enter the value of k");
scanf("%d",&k);
for(i=0;i<n;i++)
{
printf("\n enter the array");
scanf("%d",&a[i]);
for(k=0;k<i;k++)
{
	sum=sum+a[i];
	printf("\n %d",sum);
}
}
return 0;
}
