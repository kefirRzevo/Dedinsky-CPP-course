#include "include/myvector.h"

int main() {
  Vector v1(2., 2., 2.);
  Vector v2(1., 2., 3.);
  Vector v3 = v1 + v2;
  v3.PrintVector();
  return 0;
}
