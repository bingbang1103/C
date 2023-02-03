#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define height 10
int calcultate(int Long, int width);
int main()
{
    int m_Long;
    int m_width;
    int result;
    printf("请输入长度：");
    scanf("%d", &m_Long);
    printf("请输入宽度：");
    scanf("%d", &m_width);
    result = calcultate(m_Long, m_width);
    printf("长方体的体积为：");
    printf("%d", result);
    return 0;
}
int calcultate(int Long, int width)
{
    int  result = height * Long * width;
  
    return result;
}