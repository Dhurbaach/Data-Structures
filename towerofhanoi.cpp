#include <stdio.h>
void hanoi(int n,char source, char aux, char dest)
{
     if (n == 1)
    {
        printf("Move the 1 disk from %c to %c\n", source, dest);
    }
    else
    {
        hanoi( n-1,source,dest,aux);
        printf("Move %d disk from %c to %c\n", n, source, dest);
        hanoi(n-1,aux,source,dest);
    }
}
int main()
{
    int n;
    char source = 'A', aux = 'B', dest = 'C';
    printf("Enter the number of disks:\n");
    scanf("%d", &n);
    hanoi(n,source, aux, dest);
    return 0;
}