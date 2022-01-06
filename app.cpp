#include <iostream>
#include "math/math.h"
#include "time/time.h"

#define ROWS     10
#define COLS     10

int main(void) {
    Timer t("matrix");
    t.start();
    Matrix<float> m(ROWS, COLS);
    t.stop();
    m.print();
    t.print();
}