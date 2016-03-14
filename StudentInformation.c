//
//  main.c
//  StudentInformation
//
//  Copyright © 2016年 Shana. All rights reserved.
//
/*利用指向结构体的指针变量处理5名学生的信息
 其中学生信息包括学号，姓名、一门课的成绩；定义一个结构体数组并赋初始值
 定义一个指向结构体的指针变量，并指向结构体数组的首地址
 输出时，以p->成员名方式引用结构体变量成员。*/

#include <stdio.h>

#define numCount 5

struct stuInfo{
    int ID;
    char name[10];
    float score;
};

struct stuInfo student[numCount];
struct stuInfo *stu=student;


int main()
{
    printf("学生成绩管理\n");
    
    for (int i=0; i<numCount; i++)
    {
        printf("\n\n请输入第%d个学生信息\n",i+1);
        printf("学号：");
        scanf("%d",&stu->ID);
        rewind(stdin);
        
        printf("姓名：");
        gets(stu->name);
        
        printf("成绩：");
        scanf("%f",&stu->score);
        rewind(stdin);
        stu++;
        
    }
    
    printf("\n成绩录入结束。\n");
    
    stu-=numCount;
    
    for (int i=0; i<numCount; i++)
    {
        printf("学号：%d",stu->ID);
        printf("\n姓名：");
        puts(stu->name);
        printf("\n成绩：%.2f\n\n",stu->score);
        stu++;
    }
}