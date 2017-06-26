/**
*实现一个算法，确定一个字符串的所有字符是否完全都不同。假使不允许使用额外的数据结构，又该如何处理？
**/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAXCODE 256   //ASCII 256(一个字节编码)  Unicode 65536(两个字节编码)

bool isUniqueChar(char *str)
{
    int len = strlen(str);
    bool isExist[MAXCODE];
    int i = 0;
    for(i = 0; i < MAXCODE; i++) isExist[i] = false;
    if(len > 256) return false;
    for(i = 0; i < len; i++)
    {
        int val = str[i];
        if(isExist[val])  return false;
        isExist[val] = true;
    }
    return true;
}
int main(void)
{
    char string[10] = "asdfgka";
    bool isTrue = isUniqueChar(string);
    printf("Is input string unique?\n");
    printf("%d\n", isTrue);
    return 0;
}
