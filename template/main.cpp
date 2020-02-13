#include <iostream>
#include "min.hpp"

using namespace std;

int main() {
    int a[5] = {3, 4, 2, 7, 3};
    int c;
    c = min(a, 5);
    double b[] = {5.3, 2.4, 7.4, 3.4};
    double d;
    d = min(b, 4);
    cout << c << "   " << d << endl;
    return 0;
}