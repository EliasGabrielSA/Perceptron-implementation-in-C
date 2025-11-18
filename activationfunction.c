#include <math.h>

#define E 2.71828

float sigmoid(float x) {
    return 1.0 / (1.0 + pow(E, -x));
}