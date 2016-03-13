//
//  main.c
//  caculator
//
//
//  Copyright © 2016年 Shana. All rights reserved.
//

#include <stdio.h>

void calc(double a,double b, char c,double *ret)
{
    switch (c)
    {
        case '+' :*ret=a+b;break;
        case '-' :*ret=a-b;break;
        case'*' :*ret=a*b;break;
        case '/' :if (b==0) *ret=-9999999.;*ret=a/b;break;
            
        default:
            break;
    }
}


int main()
{
    double num1,num2;
    char ch;
    
    printf("           小型计算器\n");
    printf("请输入进行计算的数字和计算符号（例：2+3回车键）：\n");
    scanf("%lf%c%lf",&num1,&ch,&num2);
    double result;
    calc(num1, num2, ch, &result);
    printf("%.2lf%c%.2lf=%.2lf\n",num1,ch,num2,result);
    return 0;
}
