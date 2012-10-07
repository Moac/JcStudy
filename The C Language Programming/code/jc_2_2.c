/*
修改程序，使之能正常运行。
  Err0. stdio.h 应用 <> 括起来，而非 ()
  Err1. c = a*b 的结尾应有分号做本行结束标记
  Err2. printf 命令中的语句中应加入 %d,明确此处输出的数字为整型
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
