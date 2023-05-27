#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    int a[10] = {-3, -9, -10, -248, -27, -283, -38, -9999, -999, -9999};
    int m1 = INT_MIN;
    int m2 = INT_MIN;
    for (int i = 0; i < 10; i++)
    {

        if (a[i] > m1)
        {
            m2 = m1;
            m1 = a[i];
        }
        else if (a[i] < m1 && a[i] > m2)
        {
            m2 = a[i];
        }
    }

    printf("Second largest element is %d", m2);

    return 0;
}