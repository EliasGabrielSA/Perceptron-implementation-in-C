#include <stdio.h>
#include <stdlib.h>
#include <sigmoid.c>
#include <activationfunction.c>

int main(void) {
    FILE *fptr;
    float *inputs;
    float *weights;
    char path[] = "C:\\scripts\\Perceptron_implementation_in_C\\input.txt";
    
    if (fptr = fopen(fopen(path, "r")) == NULL) {
        exit();
    }

    //allocating initial memory for inputs layers and weights 
    inputs = malloc(capacity * sizeof(float));
    if (inputs == NULL) {
        printf("Error while allocating memory\n");
        return 1;
    }

    weights = malloc(capacity * sizeof(float));
    if (weight == NULL) {
        printf("Error while allocating memory\n")
        return 1;
    }
    
    int capacity = 10, count = 0;

    //reading from file
    while (fscanf(fptr, "%f %f\n", &value, &w) == 2) {
        //realoc in case of bigger files
        if (count == capacity) {
            capacity *= 2;

            float *tmp_inputs  = realloc(inputs,  capacity * sizeof(float));
            float *tmp_weights = realloc(weights, capacity * sizeof(float));

            if (tmp_inputs == NULL || tmp_weights == NULL) {
                printf("Error while allocating memory.\n");
                free(inputs);
                free(weights);
                return 1;
            }

            inputs  = tmp_inputs;
            weights = tmp_weights;
        }]

        //store pair
        inputs[count]  = value;
        weights[count] = w;

        count++;
    }
    fclose(fptr);
    
    float output = perceptron(inputs, weights, 1);

    printf("Perceptron output: %f\n", output);

    free(inputs);
    free(weights);
    
    return 0;
}
