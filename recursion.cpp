#include<stdio.h>
int fibo(int n)
{
    if (n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
    return((fibo(n-1)+fibo(n-2)));  
    }
}
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("The %d th fibonaaci number is:%d",n,fibo(n));
    return 0;
}