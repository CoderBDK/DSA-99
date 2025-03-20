#include <iostream>

using namespace std;

int main() {
    int a[] = {1,-4,4,9};
    int minValue = a[0];
    for (int i = 0; i < 4; ++i) {
        if(a[i] < minValue) {
            minValue = a[i];
        }
    }
    cout<<minValue;
    return 0;
}
