#include<stdio.h>
int main()
{
int student[40],pos,i,value,size;
printf("Enter no. of elements in array of student:");
scanf("%d",&size);
printf("Enter %d elements are:",size);

for(i=0;i<size;i++)
scanf("%d",&student[i]);
printf("Enter the pos. where you want to enter the element:");
scanf("%d",&pos);
printf("enter the value into that position:");
scanf("%d",&value);

for(i=size-1;i>=pos-1;i--)
student[i+1] = student[i];
student[pos-1]=value;
printf("final array after insertion the value is");

for(i=0;i<=size;i++)
printf("%d",student[i]);
return 0;
}																																																																																						

