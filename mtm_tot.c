#include <stdio.h>

#define INVALID -1
void main()
{
printf("Enter size of input:\n");
int num_size;
scanf("%d",&num_size);
if (num_size<0)
{
 printf("Invalid Size");
 return INVALID;
}
printf("Enter numbers:\n");
int num=0;
int total_exponent=0;
while(num != EOF)
{
    if(scanf("%d",num) != 1)
        return INVALID;
    int temp_exponent=0;
    int current_num=num;
    while(1)
    {
        if(num%2==0)
        {
            num/=2;
            temp_exponent++;
            if (num==0)
                {
                    total_exponent+=temp_exponent;
                    printf("The number %d is a power of 2: %d= 2^%d\n",current_num,current_num,temp_exponent);
                    temp_exponent=0;
                    break;
                }
        }
        else break;

    }
}
printf("Total exponent sum is %d",total_exponent);
return 1;
}
