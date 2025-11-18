float perceptron(float *input_layer, float *weight, int length, float bias) {
    float sum = 0.0;

    float *p_input = input_layer;
    float *p_weight = weight;

    for (int i = 0; i < length; i++) {
        sum += (*p_input) * (*p_weight);
        p_input++; 
        p_weight++;
    }

    float result = sigmoid(sum + bias);

    return (result > 0) ? result : 0;
}


