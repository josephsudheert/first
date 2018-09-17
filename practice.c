#if 0
/* Factors of positive number */
#include<stdio.h>
int main()
{
    int number,i_val;
    printf("Enter a positive number: ");
    scanf("%d",&number);

    if(number <= 0.0)
    {
        if(number == 0.0){
            printf("\n your entered 0 \n\n");
            return 0;
        }
        else{
            printf("\n your entered negative number\n\n");
            return 0;
        }
    }
    printf("\n");

    for(i_val=1;i_val <= number;++i_val)
    {
        if(number%i_val == 0)
            printf("%d ",i_val);
    }
    printf("\n");
    return 0;
}


#include<stdio.h>
int main()
{
    unsigned short var = 0xCFCF;
    unsigned short replace = 0xBB;
    unsigned short test;
    test = ((var & 0x00CF) | (replace<<8));
    printf("\n %X \n\n",test);
    return 0;
}
#endif

#include<stdio.h>
int main()
{
    int a={2,3,4,5,6};
    printf("%d",(a+2));
//    printf("%d",*a+2);
    return 0;
}
