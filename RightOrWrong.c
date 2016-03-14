//
//  main.c
//  RightOrWrong
//
//  Copyright © 2016年 Shana. All rights reserved.
//
/*判断字符串str是否是合法手机号
 1)  长度必须11位
 2）首数字必须是1
 3）必须全由数字组成*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int numCount=100;
    char phone[numCount];
    printf("请输入手机号：");
    gets(phone);
    
    int sum=0;
    int legal=1;
    if (phone[0]!='1')  legal=0;
    for (int i=1; i<strlen(phone); i++)
    {
        if (isnumber(phone[i])==1) {
            sum++;
        }
    }
    
    if (sum!=10) {
        legal=0;
    }
    
    if (legal==1) {
        printf("合法手机号！\n");
    }
    
    else printf("手机号不合法！\n");
    
    return 0;
}