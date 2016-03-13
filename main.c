//
//  main.c
//  words count
//
//  Created by Shana on 16/3/12.
//  返回数组中最长单词的下标
//  Input:yes,i am a good man    Output:11

#include <stdio.h>

#include <stdio.h>

//maxCount用来装数组中最长单词的值
//wordCount用来装每个单词的值，自加，遇空格清零，清零前若比maxCount大则将值赋给maxCount
//findMax用来装最长单词的首字母值，等于目前运行到的指标数减去最长单词数
//

int indexOfLongestWord(const char *a,int n)
{
    int maxCount=0,wordCount=0;
    int findMax=0;
    
    for (int i=0; i<=n; i++)
    {
        
        if (*(a+i)==' '||i==n)
        {
            
            if(maxCount<wordCount)
            {
                maxCount=wordCount;
                findMax=i-maxCount;
            }
            wordCount=0;
            continue;
        }
        wordCount++;
    }
    return findMax;
}

int main()
{
    char chCount=100;
    char getCh[chCount];
    char ch;
    printf("please enter charcater: ");
    
    scanf("%c",&ch);
    int i=0;
    do{
        getCh[i]=ch;
        scanf("%c",&ch);
        i++;
    }while(ch!='\n');
    
    
    int count;
    count=i;
    
    int chMax;
    chMax=indexOfLongestWord(getCh, count);
    printf("the longest word's position is %d \n",chMax);
}
