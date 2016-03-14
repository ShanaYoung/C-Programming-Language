//
//  main.c
//  CountOfString
//
//  Copyright © 2016年 Shana. All rights reserved.
//
/*查找字符串中子串出现次数
 实现函数,给定 2 个字符串,求子串在字符串中出现次数。*/

#include <stdio.h>
#include <string.h>

int countOfString(const char *s1,const char *s2)
{
    int sum=0;
    while (strstr(s1, s2)!=NULL) {                 //判断有无出现
        sum++;                                       //有的话，次数加1
        s1=strstr(s1, s2)+1;                         //取出现位置首地址加1形成新的串，再判断
    }
    
    return sum;
}

int main()

{
    int chCount=100;
    char str1[chCount];
    char str2[chCount];
    printf("please enter the first string: ");
    gets(str1);
    
    printf("\nplease enter the second string: ");
    gets(str2);
    int count2=strlen(str2);
    int count1=strlen(str1);
    
    if (count2>count1)
    { printf("输入有误！\n"); return 0;}
    
    int count;
    count=countOfString(str1, str2);
    if (count!=0) {
        printf("出现次数为%d\n",count);
    }
    else printf("未找到！\n");
    
    return 0;
}
