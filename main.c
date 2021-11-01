#include <stdio.h>
int main()
{
    int a[10];
    int b[10];
int num=0;
    for(int i=0;i<10;i++)
    {
        printf(" enter your %d th values\n",i);
        scanf("%d",&a[i]);}for(int i=0;i<10;i++){
        printf(" enter your %d th values\n",i);
        scanf("%d",&b[i]);}for(int i=0;i<10;i++){num=a[i]+b[i];
        printf("%d\n",num);
        num=0; }}

