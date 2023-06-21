#include <stdio.h>
#include <stdlib.h>
#include "fann.h"

int main() {
    const unsigned int num_input = 2;
    const unsigned int num_output = 1;
    const unsigned int num_layers = 3;
    const unsigned int num_neurons_hidden = 3;
    const float desired_error = (const float) 0.001;
    const unsigned int max_epochs = 500000;
    const unsigned int epochs_between_reports = 1000;

    // Create the artificial neural network
    struct fann *ann = fann_create_standard(num_layers, num_input, num_neurons_hidden, num_output);
    if (ann == NULL) {
        printf("Error creating neural network.\n");
        return 1;
    }

    // Set the activation function for the hidden and output layers
    fann_set_activation_function_hidden(ann, FANN_SIGMOID_SYMMETRIC);
    fann_set_activation_function_output(ann, FANN_SIGMOID_SYMMETRIC);

    // Train the network on the xor.data file
    if (fann_train_on_file(ann, "xor.data", max_epochs, epochs_between_reports, desired_error) == -1) {
        printf("Error training the network.\n");
        fann_destroy(ann);
        return 1;
    }

    // Save the network to the xor_float.net file
    if (fann_save(ann, "xor_float.net") == -1) {
        printf("Error saving the network.\n");
        fann_destroy(ann);
        return 1;
    }

    // Destroy the network to free the allocated resources
    fann_destroy(ann);

    return 0;
}
