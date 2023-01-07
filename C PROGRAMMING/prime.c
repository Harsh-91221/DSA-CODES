#include<stdio.h>
//#include<conio.h>
void main()
{
    int num,i,flag=0;

    printf("PRIME NUMBERS BETWEEN  1 TO 300 ARE:");
    for(num=2;num<300;num++)
    {
        flag = 0;
        for(i=2;i<num/2;i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
           
        }
        
        if(flag==0)
        printf("%d\n",num);
    }
    getch();
}