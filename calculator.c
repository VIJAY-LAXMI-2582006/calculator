//calculator(sum,sub,division,multiplication,remainder)
# include <stdio.h>
int main(){
    while (1) {
        int num1, num2;
    // assigning values by user
    printf("enter number1:");
    scanf("%d", &num1);
    printf("enter number2:");
    scanf("%d",&num2);
    printf("---------------------------------------\n");
    //sum
    int sum=num1+num2;
    //sub
    int sub=num1-num2;
    //division
    float div=num1/num2;
    //multiply
    int mul=num1*num2;
    //remainder
    int rem=num1%num2;
    //printing output
    printf("---------------------------------------\n");
    printf("the sum of the two numbers are: %d\n",sum);
    printf("---------------------------------------\n");
    printf("the difference between this two number is: %d\n",sub);
    printf("---------------------------------------\n");
    printf("the quotient is: %f\n",div);
    printf("---------------------------------------\n");
    printf("the product of this two number is: %d\n",mul);
    printf("---------------------------------------\n");
    printf("the remainder of the two numbers are: %d\n",rem);
    printf("---------------------------------------\n");
    }
    return 0;
}