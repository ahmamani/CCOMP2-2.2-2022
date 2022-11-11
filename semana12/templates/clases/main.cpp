#include <iostream>
#include "Point.h"

using namespace std;

int main() {

    Point<float> pointFloat{2.5, 3.5};
    Point<int> pointInt{25, 5};

    cout << pointFloat.getX() << ", " << pointFloat.getY() << endl;
    cout << pointInt.getX() << ", " << pointInt.getY() << endl;

    return 0;
}