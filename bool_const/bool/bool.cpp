// bool.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

typedef int BOOL ;
#define TRUE 1
#define FALSE 0

BOOL TestFuc()
{
    return TRUE;
}

bool TestFunc1()
{
    return true; //false
}

int main()
{
    BOOL bRet = TestFuc();
    if (bRet)
    {
        printf("�ɹ�\r\n");
    }
    else
    {
        printf("ʧ�� \r\n");
    }


    bool bRetInCpp = TestFunc1();
    if (bRetInCpp)
    {
        printf("�ɹ�\r\n");
    }
    else
    {
        printf("ʧ�� \r\n");
    }

    printf("true:%d false:%d \r\n", true, false);

    int nSize = sizeof(bool);

    BOOL bVal = 4;
    bool bValIncpp = 4;

    return 0;
}

