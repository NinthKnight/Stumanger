#include "stdafx.h"
int g_nVal = 0;

const int nVal2 = 9;

void Test()
{
    printf("%d \r\n", nVal2);
    g_nVal = 9;
}