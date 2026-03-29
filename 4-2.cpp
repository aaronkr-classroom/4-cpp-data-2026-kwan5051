#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setw(10) << "Value" << setw(15) << "Result" << endl;
    cout << "------------------------------------------" << endl;

    for (int i = 1; i <= 100; ++i) {
        cout << setw(10) << i << setw(15) << i * i << endl;
    }

    return 0;
}