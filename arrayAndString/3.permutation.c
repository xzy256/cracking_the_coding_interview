/**给定两个字符串，确定其中一个字符串字符重排后，能否变成另一个字符串
*考虑：1.区分大小写  2.考虑空格
**/
#include<stdio.h>
#include<string.h>


int cmp(const void *a, const void *b){
    return *(char *)a - *(char *)b;//char换成int、double就是相应的类型比较，返回值都是int
}

int permutation(char *s1, char *s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int isequal = -1;
    if(len1 != len2) 
        return -1;
    qsort(s1, len1, sizeof(char), cmp);
    qsort(s2, len2, sizeof(char), cmp);
    return strcmp(s1, s2);//字符串比较函数
}

int main(void)
{
    char string1[] = "asdfg";//只能是数组形式，不能是指针形式，不然qsort报段错误
    char string2[] = "asdfg";
    int isequal = permutation(string1, string2);
    if(!isequal)  
        printf("input strings is equal\n");
    else    
        printf("input strings is not equal by permutation \n");
    return 0;

}
