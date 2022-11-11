#include <iostream>
#include <string>

using namespace std;
/*
int sum(const int x, const int y) {
    return x + y;
}

double sum(const double x, const double y) {
    return x + y;
}*/

template <typename T, typename U>
U sum(const T a, const U b) {
    return a + b;
}

int main() {
    cout << sum<int, float>(4, 5.9) << endl;
    cout << sum<float, int>(4.6, 5.8) << endl;
    cout << sum<string, string>("feliz ", "cumpleaños") << endl;

    return 0;
}