// const.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

// �޲κ� ����ֵ


#define  MY_VERSION "3.014"
void Test();

int main()
{
    //int nVersion = MY_VERSION;
    int nVal = 8;
    //nVal = 9; //�����޸�
    
    int* pnVal = (int*)&nVal;
    *pnVal = 9;
    printf("%d %d \r\n",*pnVal, nVal);

    printf("%d \r\n", nVal2);
    Test();

    g_nVal = 9;

    const int* pnVal1 = &nVal; //ָ�����ݲ��ܱ�
   // *pnVal1 = 4;
   // pnVal1 = &g_nVal;

    int const* pnVal2 = &nVal;
    //*pnVal2 = 4;
    //pnVal2 = &g_nVal;

    int * const pnVal3 = &nVal;
    *pnVal3 = 4;
    //pnVal3 = &g_nVal;


    int const * const pnVal4 = &nVal;

    //
    int nValTest = 0;
    const int* pnValTest = &nValTest;
    int* pnValTest0 = const_cast<int*>(pnValTest);

    double dblTest = 0.0f;
    const double* pdbnTest = &dblTest;
    double* pdblTest = const_cast<double*>(pdbnTest);

    char c = 9;
    int n = static_cast<char>(c);  //������������

    return 0;
}

