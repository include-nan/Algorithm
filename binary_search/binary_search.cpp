#include <iostream>
using namespace std;
int search(int a[], int length, int num) {
    int low = 0;
    int high = length - 1;
    int mid;
    while (low <= high) {
        mid = (high + low) / 2;
        if (num < a[mid])
            high = mid;
        else if (num > a[mid])
            low = mid;
        else if (num == a[mid])
            return mid;
    }
    return -1;
}
int main() {
    int a[] = {-2, 2, 3, 4, 7, 9, 67};
    int ans = search(a, 7, 4);
    if (ans != -1) cout << ans + 1 << endl;
    return 0;
}