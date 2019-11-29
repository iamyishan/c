#include <stdio.h>

void PrintN(int N)
{
    int i;
    for (i = 1; i <= N; i++)
    {
        printf("%d\n", i);
    }
    return;
}

PrintN1(N)
{
    if (N)
    {
        PrintN(N - 1);
        printf("%d\n", N);
    }
}

int main(int argc, char const *argv[])
{
    // PrintN (10);
    PrintN1(100);
    return 0;
}
