//
//  main.c
//  Cipher
//  Copyright © 2016年 Shana. All rights reserved.
//
/*输入一个字符串存入数组a，对字符串中的每个字符用加3的方法加密并存入数组b，
  再对b中的字符串解密存入数组c，最后依次输出数组a、b、c中的字符串。*/

#include <stdio.h>
#include <string.h>
int main()
{
    int num_Count=10;
    char clear_Ch[num_Count],cipher_Ch[num_Count],exch_Ch[num_Count];
    memset(clear_Ch, '0', sizeof(clear_Ch));
    memset(cipher_Ch, '0', sizeof(cipher_Ch));
    memset(exch_Ch, '0', sizeof(exch_Ch));
    printf("请输入需要加密的字符：");
    
    
    for (int i=0; i<num_Count; i++) {
        if(clear_Ch[i]=='\n') break;
        scanf("%c ",&clear_Ch[i]);
    }
    
    
    for (int j=0; j<num_Count; j++)
    {
        
        
        if(clear_Ch[j]>=97&&clear_Ch[j]<=119)        //a~w
            cipher_Ch[j]=clear_Ch[j]+3;
        
        else if(clear_Ch[j]>=120)                   //xyz
            cipher_Ch[j]=(clear_Ch[j]-120+97);
        
        else if (clear_Ch[j]>=65&&clear_Ch[j]<=87)     //A~W
            cipher_Ch[j]=clear_Ch[j]+3;
        
        
        else if (clear_Ch[j]>=88)                      //X Y Z
            cipher_Ch[j]=((clear_Ch[j]-88+65));
        
    }
    
    
    for (int k=0 ; k<num_Count; k++) {                                    //第三数组
        if((cipher_Ch[k]<=119&&cipher_Ch[k]>=100)||(cipher_Ch[k]>=68&&cipher_Ch[k]<=87))
            exch_Ch[k]=cipher_Ch[k]-3;
        
        else if(cipher_Ch[k]<=67)                   //ABC
            exch_Ch[k]=(90-(67-cipher_Ch[k]));
        
        else if (cipher_Ch[k]<=99)                   //abc
            exch_Ch[k]=(122-(99-cipher_Ch[k]));
    }
    
    
    
    
    for (int i=0; i<num_Count; i++) {
        printf("%c ",clear_Ch[i]);
    }printf("\n明文输出结束\n");
    
    for (int i=0; i<num_Count; i++) {
        printf("%c ",cipher_Ch[i]);
    }printf("\n密文输出结束\n");
    
    for (int i=0; i<num_Count; i++) {
        printf("%c ",exch_Ch[i]);
    }printf("\n密文翻译输出结束\n");
}