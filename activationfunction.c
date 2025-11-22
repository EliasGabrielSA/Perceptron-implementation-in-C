#include <math.h>

#define E 2.71828

float sigmoid(float x) {
    return 1.0 / (1.0 + pow(E, -x));
}

float tahn(float x) {
    return 2 / (1 + pow(E, -2x)) -1;
}

