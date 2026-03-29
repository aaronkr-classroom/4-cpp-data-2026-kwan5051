#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int max_val = 1000;
    long long max_square = (long long)max_val * max_val;

    int col1_width = (int)log10(max_val) + 2;      
    int col2_width = (int)log10(max_square) + 2;   

    cout << setw(col1_width) << "Val" << setw(col2_width) << "Square" << endl;
    cout << string(col1_width + col2_width, '-') << endl;

    for (int i = 1; i <= max_val; ++i) {
        cout << setw(col1_width) << i << setw(col2_width) << (long long)i * i << endl;
    }

    return 0;
}