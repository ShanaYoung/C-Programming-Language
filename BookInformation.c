//
//  main.c
//  BookInformation
//  Copyright © 2016年 Shana. All rights reserved.
//
/*创建一个图书的结构体，存储图书的书名，价格，页数.
 在main函数中创建6本书的数组
 编写函数
 （1）从终端读入6本书的信息。
 void InputBookInfo(struct Book array[]);
 
 （2）按照价格降序排序。
 void SortByPrice(struct Book array[]);
 
 （3）输出页数最多的书的信息（假设每本书的页数都不一样）。
 void PrintTheMostPages(struct Book array[]);*/

#include <stdio.h>

#define numCount 6

struct Book
{
    char name[20];
    float price;
    int page;
}book[numCount];

void InputBookInfo(struct Book array[])     //书籍信息录入
{
    printf("图书管理系统\n");
    for (int i=0; i<numCount; i++) {
        printf("\n\n请输入第%d本书信息\n",i+1);
        printf("书名：");
        gets(array[i].name);
        
        printf("\n价格：");
        scanf("%f",&array[i].price);
        
        rewind(stdin);
        
        printf("\n页数：");
        scanf("%d",&array[i].page);
        rewind(stdin);
    }
}

void SortByPrice(struct Book array[])
{
    printf("\n书本经过价格降序排序后为：");
    int varout,varin;
    for (varout=1; varout<numCount; varout++)     //插入排序
    {
        float key=array[varout].price;
        varin=varout-1;
        while (varin>=1&&key>array[varin].price) {
            array[varin+1]=array[varin];
            varin--;
        }
        array[varin+1].price=key;
    }
    
    for (int i=0; i<numCount; i++) {
        printf("\n书名：");
        puts(array[i].name);
        printf("价格：%.2f￥\n",array[i].price);
        printf("页数：%d\n",array[i].page);
    }
}

void PrintTheMostPages(struct Book array[])
{
    int max=0;
    for (int i=0; i<numCount; i++) {
        if (max<array[i].page) {
            max=array[i].page;
        }
    }
    
    printf("\n页数最多的书籍信息：\n");
    
    for (int i=0; i<numCount; i++) {
        if (max==array[i].page) {
            printf("\n书名：");
            puts(array[i].name);
            printf("价格：%.2f￥\n",array[i].price);
            printf("页数：%d\n",array[i].page);
        }
    }
}


int main()
{
    InputBookInfo(book);
    char chStop;
    
    printf("请输入任意键，再按回车键继续...\n");
    scanf("%c",&chStop);              //从键盘接收一个字符，用于暂停程序进程，输入后程序继续，
                                      //否则程序一次性运行完毕，展示内容太多，不易观察
    rewind(stdin);
    
    SortByPrice(book);
    printf("请输入任意键，再按回车键继续...\n");
    scanf("%c",&chStop);
    rewind(stdin);
    
    PrintTheMostPages(book);
    
    return 0;
}
