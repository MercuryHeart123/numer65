#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double x, L, R, fxL, fxR, fx1, x1, ox1, E;
  int i;

  L = 0.0;
  R = 10.0;
  E = 100;
  i = 1;

  while (E > 0.000001) {
    fxL = L - 0.5;
    fxR = R - 0.5;
    x1 = ((L * fxR) - (R * fxL)) / (fxR - fxL);
    fx1 = x1 - 0.5;
    if (fx1 * fxR > 0) {
      E = abs((x1 - ox1) / x1) * 100;
      ox1 = x1;
      R = x1;
    } else if (fx1 * fxR < 0) {
      E = abs((x1 - ox1) / x1) * 100;
      ox1 = x1;
      L = x1;
    } else {
      break;
    }
    i++;
  }

  cout << fixed << setprecision(6) << x1 << endl;

  return 0;
}