#include <stdio.h>
#include <stdlib.h>

int main()
{
    char S=0 ,U=0 ,M=0 ,D=0 ,A=0 ;
    float sum_first ,sum_second ,sum;
	float sub_first ,sub_second ,sub;
	float mul_first ,mul_second ,mul;
	float div_first ,div_second ,div;

    printf("WELCOME , calculate now\n");
    printf("write S to sum , U to subtract , M to multiply , D to divide ");
    scanf("%c" ,& A);
    switch (A)
    {
        case 'S' :
            printf("you will sum two  numbers\n");
            printf("please enter numbers to continue or 0 to exit\n");
            while ((sum_first>0 ||sum_first<0 ) && ( sum_second>0||sum_second<0))
                {
                    printf("\nenter the first number ");
                    scanf("%f" ,& sum_first);
                    printf("enter the second number ");
                    scanf("%f" ,& sum_second);
                    sum=sum_first+sum_second;
                    printf("sum= %.2f" , sum);
                }
            printf("you entered invalid number\n");
            break;
        case 'U' :
            printf("you will subtract two  numbers\n");
            printf("please enter numbers to continue or 0 to exit\n");
            while (( sub_first>0||sub_first<0 ) && ( sub_second>0||sub_second<0))
                {
                    printf("\nenter the first number ");
                    scanf("%f" ,& sub_first);
                    printf("enter the second number ");
                    scanf("%f" ,& sub_second);
                    sub=sub_first+sub_second;
                    printf("subtract= %f" , sub);
                }
            printf("you entered invalid number\n");
			break;
        case 'M' :
            printf("you will multiply two  numbers\n");
            printf("please enter numbers to continue or 0 to exit\n");
            while (( mul_first>0||mul_first<0 ) && ( mul_second>0||mul_second<0))
                {
                    printf("\nenter the first number ");
                   scanf("f" ,& mul_first);
                   printf("enter the second number ");
                   scanf("&f" ,& mul_second);
                   mul=mul_first*mul_second;
                   printf("multiply= &f" , mul);
                }
            printf("you entered invalid number\n");
            break;
         case 'D' :
            printf("you will divide two  numbers\n");
            printf("please enter numbers to continue or 0 to exit\n");
            while (( div_first>0||div_first<0 ) && ( div_second>0||div_second<0))
                {
                    printf("\nenter the first number ");
                    scanf("%f" ,& div_first);
                    printf("enter the second number ");
                    scanf("%f" ,& div_second);
                    div=div_first/div_second;
                    printf("divide= %f" , div);
                }
            printf("you entered invalid number\n");
            break;
	     default :
			 printf("there is something wrong\n you will exit\n");
    }
    return 0;
}
