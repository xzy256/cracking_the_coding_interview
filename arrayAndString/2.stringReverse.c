/**
*反转一个NULL结尾的字符串
**/
#include<stdio.h>
#include<string.h>

void stringReverse(char *str)
{
    int len = strlen(str);
    char temp;
    int i = 0;
    for(i = 0; i < len/2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}
int main(void)
{
    char string[10] = "asdfgk";
    stringReverse(string);
    return 0;
}
