/*
�޸ĳ���ʹ֮���������С�
  Err0. stdio.h Ӧ�� <> ������������ ()
  Err1. c = a*b �Ľ�βӦ�зֺ������н������
  Err2. printf �����е������Ӧ���� %d,��ȷ�˴����������Ϊ����
*/
#include<stdio.h>
int main()
{
    int a, b, c;
    a = 3, b = 5;
    c = a*b;
    printf("The product is:%d",c);
    return 0;
}
