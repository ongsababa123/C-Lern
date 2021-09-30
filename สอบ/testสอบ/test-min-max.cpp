#include <iostream>

using namespace std;

int main()
{
    int scores[] = {16, 3, 96, 49, 92, 41, 38, 24, 13, 55};
    int n = sizeof(scores) / sizeof(int);

    // find minimum score
    int min = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] < min) {
            min = scores[i];
        }
    }

    // find maximum score
    int max = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    return 0;
}