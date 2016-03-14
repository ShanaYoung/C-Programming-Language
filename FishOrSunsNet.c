//
//  main.c
//  FishOrSunsNet
//  Copyright © 2016年 Shana. All rights reserved.
//
/*有一个人三天打鱼，两天晒网，编写一段程序，输入天数，问此人是打鱼还是晒网？*/

#include<stdio.h>
int main()
{
    int day_Count,judge;
    printf("输入天数：");
    scanf("%d",&day_Count);
    judge=day_Count%5;
    if(judge<=3&&judge>0)
        printf("不错，正在打鱼。\n");
    else printf("正在偷懒晒网。\n");
    return 0;
}
