#include "math/matrix.h"
#include "math/load.h"
#include "math/functions.h"
#include "time/time.h"

int main(void) {
  Timer timer("Main running time");

  load::IdxLoader bd;
  bd.Label("/home/johny/neural-network/examples/train-labels.idx1-ubyte");
  bd.Image("/home/johny/neural-network/examples/train-images.idx3-ubyte");
} 