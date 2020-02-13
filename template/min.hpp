#include <iostream>

template <class T>
T min(T a[], int n)
{
    T min_a = a[0];

    for (int i = 1; i < n; i++)
    {
        if (min_a > a[i])
        {
            min_a = a[i];
        }
    }
    return min_a;
}