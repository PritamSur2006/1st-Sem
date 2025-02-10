#include<stdio.h>
int main()
{
    float km,m,cm,ft,inch;
    printf("\n Enter the Distance Kilometers:");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    ft=inch/12;
    printf("Distance in Meters=%f\n",m);
    printf("Distance in Centimters=%f\n",cm);
    printf("Distance in Feet=%f\n",ft);
    printf("Distance in Inch=%f\n",inch);
    return 0;
}