#include <math.h>

#define E 2.71828

float sigmoid(float x) {
    return 1.0 / (1.0 + pow(E, -x));
}

float tahn(float x) {
    return 2 / (1 + pow(E, -2x)) -1;
}

float relu (float x) {
    if (x > 0) {
        return x;
  } else return 0;

float leaky_relu(float x) {
    if (x < 0) {
        return x * 0.01;
    } else return x;
}

float softmax(float x) {
    return
}
