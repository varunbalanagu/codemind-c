#include<stdio.h>
int main()
{
    int n,a,b,product=1,i,j,sum=0,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        temp=a;
        sum=0;
        while(temp>0)
        {
            b=temp%10;
            for(j=1;j<=b;j++)
            {
                
                product=product*j;
            }
            sum=sum+product;
            temp=temp/10;
            product=1;
        }
        if(sum==a)
        {
            printf("Strong
");
        }
        else
        {
            printf("Not Strong
");
        }
    }
}