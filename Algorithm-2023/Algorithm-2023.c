#include <stdio.h>
#include <stdlib.h>

int searchK(int k);
void testsearchK();

int main()
{
    testsearchK();

}

//searchK함수는 A에서 K값을 찾는다.
//return
//  -1: 못찾음
//  N: N이 k값이고 k값을 찾음
int searchK(int k)
{
    /*
    1. 배열을 임의의 숫자로 초기화한다
    2. k값을 순차적으로 찾는다.
    */
    int A[10] = { 5, 7, 3, 0, 80, 95, 42, 31, 23, 15 };
    int ret = -1;

    for (int i = 0; i < 10; i++)
    {
        if (A[i] == k)
        {
            ret = A[i];
            break;
        }
    }

    return ret;
}

void testsearchK()
{
    int fval = 15;
    int ret = -2;

    ret = searchK(fval);
    if (ret == fval)
    {
        printf("%d 값을 찾았습니다. \n", ret);
    }
    else
    {
        printf("%d 값을 찾지 못했습니다.\n", fval);
    }
}