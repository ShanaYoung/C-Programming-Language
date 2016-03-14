//
//  main.c
//  countWords
//  Copyright © 2016年 Shana. All rights reserved.
//
/*输入一串小写字母（以"."为结束标志），统计出每个字母在该字符串中出现的次数(若某字母不出现，则不要输出)*/


#include <stdio.h>
#include <string.h>
int main()
{
    int num_Count[127];
    memset(num_Count, 0, sizeof(num_Count));
    char ch;
    printf("请任意输入（以.为结束标志）：");
    do{
        scanf("%c",&ch);
        int j=(int)ch;
        num_Count[j-1]++;
    }
    while(ch!='.');
    
    char printCh;
    for (int i=97-1; i<122; i++) {
        
        if(num_Count[i]!=0){ printCh=i; printf("%c有%d个\n",printCh+1,num_Count[i]);}
        
    }
    return 0;
}