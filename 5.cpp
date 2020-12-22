#include <iostream>

int main() {
    int n, counter = 0;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        if ((i != 0) && ((a[i] >= 0) && (a[i-1] < 0) || (a[i] < 0) && (a[i-1] >= 0))) ++counter;
    }

    if (a[0] < a[1]) std::cout << "increasing\n";
    else std::cout << "decreasing\n";
    std::cout << counter;
}
