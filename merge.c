#include<stdio.h>
void main()
{
int a[10],b[10],c[20];
int i,j,n,m,k,size;
printf("enter the size of the first element:");
scanf("%d",&n);
printf("enter the size of the second element:");
scanf("%d",&m);
printf("enter the first array element:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the second array element:");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
printf("the first array elements are:");
for(i=0;i<n;i++)
{
printf("%d",&a[i]);
}
printf("the second elements are:");
for(i=0;i<m;i++)
{
printf("%d",&b[i]);
}
size=n+m;
for(i=0;i<n;i++)
{
c[i]=a[i];
}
for(i=0;i<m;i++)
{
c[n+1]=b[i];
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(c[i]>c[j])
{
k=c[i];
c[i]=c[j];
c[j]=k;
}
}
}
printf("the merged array is: \n");
for(i=0;i<size;i++)
{
printf("%d",c[i]);
}
}
