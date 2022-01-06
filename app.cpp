#include <iostream>
#include "math/matrix.h"

#define ROWS     10
#define COLS     10

int main(void) {
    Matrix<float> m(ROWS, COLS);
    m.print();
}