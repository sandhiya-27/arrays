#include<stdio.h>
int main()
{
int a[3][3],i,j;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
printf("\nEnter value for 2D Array:");
scanf("%d",&a[i][j]);
}
printf("\n2D Array Elements are:");
for(i=0;i<3;i++)
{
printf ("\n");
for(j=0;j<3;j++)
printf ("%d\t",a[i][j]);
}
printf ("\nLeft Diagonal Elements are:");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
    if(i==j)
    printf("%d\t",a[i][j]);
}
printf ("\nRight Diagonal Elements are:");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
    if(i+j==2)
    printf("%d\t",a[i][j]);
}
return(0);
}
element-[0],[1]:1
element-[0],[2]:2
element-[0],[3]:3 
element-[1],[0]:4
element-[1],[1]:5
element-[1],[2]:6
element-[2],[0]:7
element-[2],[1]:8
element-[2],[2]:9

The matrix is 
1  2  3
4  5  6
7  8  9


