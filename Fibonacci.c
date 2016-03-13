//
//  main.c
//  Fibonacci
//
//  Created by Shana on 16/3/12.
//Fibonacci数列1,1,2,3,5,8,13,21,......的前n项

#include <stdio.h>

int fibo(int n)
{
    if (n==1||n==2) {
        return 1;
    }
    else
        return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;
    printf("输入n：");
    scanf("%d",&n);
    
    int numFibo;
    printf("斐波那契数列前%d项为：",n);
    for (int i=1; i<=n; i++) {
        numFibo=fibo(i);
        printf("%d ",numFibo );
    }
    printf("\n");
    return 0;
}