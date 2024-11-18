#include "onnx_inference_engine.h"

int main() {
    OnnxInferenceEngine classifier("./xgbc_iris.onnx");

    // Define test samples (input data)
    const std::vector<std::vector<float>> input_data_2d = {
            {6.1, 2.8, 4.7, 1.2},
            {5.7, 3.8, 1.7, 0.3},
            {7.7, 2.6, 6.9, 2.3},
            {6.0, 2.9, 4.5, 1.5},
            {6.8, 2.8, 4.8, 1.4},
            {5.4, 3.4, 1.5, 0.4},
            {5.6, 2.9, 3.6, 1.3},
            {6.9, 3.1, 5.1, 2.3},
            {6.2, 2.2, 4.5, 1.5},
            {5.8, 2.7, 3.9, 1.2},
            {6.5, 3.2, 5.1, 2.0},
            {4.8, 3.0, 1.4, 0.1},
            {5.5, 3.5, 1.3, 0.2},
            {4.9, 3.1, 1.5, 0.1},
            {5.1, 3.8, 1.5, 0.3},
            {6.3, 3.3, 4.7, 1.6},
            {6.5, 3.0, 5.8, 2.2},
            {5.6, 2.5, 3.9, 1.1},
            {5.7, 2.8, 4.5, 1.3},
            {6.4, 2.8, 5.6, 2.2},
            {4.7, 3.2, 1.6, 0.2},
            {6.1, 3.0, 4.9, 1.8},
            {5.0, 3.4, 1.6, 0.4},
            {6.4, 2.8, 5.6, 2.1},
            {7.9, 3.8, 6.4, 2.0},
            {6.7, 3.0, 5.2, 2.3},
            {6.7, 2.5, 5.8, 1.8},
            {6.8, 3.2, 5.9, 2.3},
            {4.8, 3.0, 1.4, 0.3},
            {4.8, 3.1, 1.6, 0.2}
    };

    // Set input data and run inference
    classifier.setInput2D(input_data_2d);
    classifier.runInference();

    // Print the results
    classifier.printResults();
    return 0;
}
