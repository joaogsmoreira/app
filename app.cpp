#include "math/matrix.h"
#include "math/load.h"
#include "time/time.h"

int main(void) {
    Timer timer("Multiplication Time");

    Matrix<float> a(1000, 1000, true);
    a = loadMatrixFromFile<float>("/home/johny/neural-network/examples/m1000x1000/matrixA.tabseparated");
    //std::cout << "Matrix A:" << std::endl;
    //a.print();

    Matrix<float> b(1000, 1000, true);
    b = loadMatrixFromFile<float>("/home/johny/neural-network/examples/m1000x1000/matrixB.tabseparated");
    //std::cout << "Matrix B:" << std::endl;
    //b.print();

    timer.start();
    Matrix<float> c = matrixMultiplier(a, b);
    timer.stop();
    //std::cout << "Matrix C:" << std::endl;
    //c.print();
    timer.print();
}