#include <iostream>
using namespace std;

int N, X, A[100009];

int main() {
    cin >> N >> X;
    for(int i = 0; i < N; i++) cin >> A[i];
    int s = 0;
    int e = N - 1;
    do
    {
        int middle = s + (e - s) / 2;
        if (A[middle] >= X) {
            e = middle;
        } else {
            s = middle + 1;
        }
    } while ( s < e);

    cout << s + 1 << endl;
    return 0;
}