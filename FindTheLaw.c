//
//  main.c
//  FindTheLaw
//
//  Created by Shana on 16/3/12.

/*
输入两个数n，a，如果n==3， a == 2；
输出 2 + 22 + 222 的值。
如果n == 4， a == 3；
输出 3 + 33 + 333 + 3333的值
 */

#include<stdio.h>
int main()
{
    int a,n,sum=0;
    int bulk=1;
    printf("依次输入n和a：");
    scanf("%d %d",&n,&a);
    
    for (int i=n-1; i>=0; i--)
    {
        bulk*=10;
        sum+=i*a*bulk;
        
    }
    
    sum+=n*a;
    printf("%d\n",sum);
    
}
