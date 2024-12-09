#include<stdio.h>
void main()
{
int a[10],i,n,in,pos;
printf("Enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the position of the element:");
scanf("%d",&pos);
printf("Enter the elements to be inserted:");
scanf("%d",&in);
for(i=n;i>=pos;i--)
{
a[i]=a[i-1];
}
a[pos-1]=in;
for(i=0;i<n+1;i++)
printf("%d\n",a[i]);
}
