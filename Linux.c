#include <stdio.h>

char a=176, b=219;
int main()
{
    // ����ʹ�õ���devc++�������������
    //�����������ޣ�û�취�޸Ĵ��Ŀ�ꡣ��
    printf("%c%c%c%c%c\n",b,a,a,a,b);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",a,a,b,a,a);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",b,a,a,a,b);
}