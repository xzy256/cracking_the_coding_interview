/**将字符串中的空格替换成%20,假定尾部有足够的空间存储新增的字符，
*  并且知道字符串的"真实长度"。
* 思路：先计算字符串中的空格数，计算出真实替换后的总长度，从字符串的尾部倒过来处理
**/
#include<stdio.h>
#include<string.h>

int countSpace(char *str)//计算字符串的空格数
{
    int len = strlen(str);
    int count = 0;
    int i;
    for(i = 0;i < len;i++)
    {
        if(str[i] == ' ')  count++;
        continue;
    }
    return count;
}
void replaceSpace(char *str, int len)
{
    int spaceNum = countSpace(str);
    int newLen = len + spaceNum * 2;//加上原来的空格就是3个bit位
    int i;
    for(i = len - 1;i >=0;i--)
    {
        if(str[i] == ' ')
        {
            str[--newLen] = '%';
            str[--newLen] = '2';
            str[--newLen] = '0';
        }else{
            str[--newLen] = str[i];
        }
    }
}
int main(void)
{
    char string[15] = "a b c";
    replaceSpace(string, 5);
    puts(string);
    return 0;

}
