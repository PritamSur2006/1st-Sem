#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter four numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    (a>=b && a>=c && a>=d)? printf("\n Max=%d",a):((b>=a && b>=c && b>=d)? printf("\n Max=%d",b):(c>=a && c>=b && c>=d)? printf("\n Max=%d",c): printf("\n Max=%d",d));
    return 0;
}
