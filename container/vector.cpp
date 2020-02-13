#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;
    vector<int> v2;

    v1.push_back(5);
    //   v1.push_back(2);
    // v2.push_back(6);
    cout << (v1 < v2) << endl;
    if (v2.empty()) {
        cout << "empty!" << endl;
    }
    return 0;
}