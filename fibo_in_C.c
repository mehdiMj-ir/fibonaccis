#include <stdio.h>
int main()
{
    int n1=0,n2=1,n3,num;
    printf("enter the number of your elements: ");
    scanf("%d",&num);//cheack for if this num is an numeric
    printf("\n%d %d",n1,n2);//print n1 & n2

    for (int i=2;i<num;i++)
    {
        n3=n1+n2;
        printf("\n%d",n3);
        n1=n2;
        n2=n3;        
    }
    return 0;
} 