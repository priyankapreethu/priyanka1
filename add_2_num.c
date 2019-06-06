#include<stdio.h>
#include<conio.h>
void main()
{   int n1,n2,sum;
    int input();
    int add(int a,int b);
    void output(int res);
    n1,n2=getinput();
    sum=add(n1,n2);
    output(sum);
    

      
 }
int getinput()
{
	int num1,num2;
	printf("enter the two numbers\n");
	scanf("%d %d",&num1,&num2);
	return num1,num2;

}
int add(int n1,int n2)
{
	
	return(n1+n2);

}
void output(int sum)
{
	printf("sum of two numbers is"&sum);
}
