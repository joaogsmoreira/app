#include "math/math.h"
#include "time/time.h"

int main(void) {
    Timer timerA("A");
    Timer timerB("B");

    timerA.start();
    Matrix<int> a(3, 2);
    timerA.stop();
    timerA.print();
    std::cout << "Matrix A:" << std::endl;
    a.print();

    timerB.start();
    Matrix<int> b(2, 3);
    timerB.stop();
    timerB.print();
    std::cout << "Matrix B:" << std::endl;
    b.print();

    Matrix<int> c = matrix_multiplier(a, b);
    std::cout << "Matrix C:" << std::endl;
    c.print();
}