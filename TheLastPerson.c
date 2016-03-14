//
//  main.c
//  TheLastPerson
//
//  Copyright © 2016年 Shana. All rights reserved.
//
/*13个人围成一圈，从第1个人开始顺序报号1、2、3。凡报
 到“3”者退出圈子。找出最后留在圈子中的人原来的序号*/

#include <stdio.h>
#include <string.h>
#define peoCount 13


int main()
{
    int count=0;
    
    int index[peoCount],j=1;
    
    memset(index, 1, sizeof(index));
    
    int i=0;
    for (;;i++)
    {
        if (i==peoCount)  i=0;
        
        if (index[i]==0) continue;
        
        else if (count==peoCount-1)
        {printf("\n剩余者为%d号\n",i+1); break;}
        
        else if (j==4) j=1;
        
        index[i]=j;
        j++;
        
        if (index[i]==3)
        {
            index[i]=0;
            count++;
            printf("%d号退出圈子\n",i+1);
        }
    }
}
