#include<stdio.h>
int main(){
    int angle1,angle2,angle3,sum;
    printf("\n Enter the Angles Of Traingle:-");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    sum=angle1+angle2+angle3;
    printf("The sum of Triangle is =%d",sum);
    if (sum==180)
    {
        printf("\nTriangle is Valid:");

    }
    else
    {
        printf("\nTriangle is Unvalid:");

    }
    return 0;

    
}
   
   