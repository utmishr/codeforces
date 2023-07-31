#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        long long n;
        cin >> n;

        int maxCount = 0;
        int count = 0;

        for (int i = 1; i <= 10000; i++) {
            if (n % i == 0)
                count++;
            else
                count = 0;

            if (count > maxCount)
                maxCount = count;
        }
        cout << maxCount << endl;
        t--;
    }

    return 0;
}
