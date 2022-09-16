#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    Date d1(16, 9 , 2022);
    d1.displayDate();

    Date d2(15, 30, 2001);
    d2.displayDate();

    return 0;
}