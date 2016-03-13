//
//  main.c
//
//
//  Created by Shana on 16/3/11.
// Input:a2b3c2    Output:aabbbcc

#include <stdio.h>
#include <string.h>

#define numCount 20

int main(int argc, const char * argv[]) {
    char src[numCount];
    
    printf("请输入源字符串：");
    gets(src);
    
    int num=strlen(src);
    
    char dst[numCount];
    
    for (int i=0; i<num; i++)       //奇数位为数字，偶数位为字母
    {
        static int reco=0;
        if (i%2==0||i==0)
        {
            dst[reco]=src[i];
            reco++;
        }
        else if(i%2!=0)
        {
            for (int j=1; j<((int)src[i]-'0'); j++) {       //循环下标为偶数的数字
                dst[reco]=src[i-1];
                reco++;
            }
        }
        
    }
    
    printf("解压后为：\n");
    puts(dst);
    
}
