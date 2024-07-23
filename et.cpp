#include <iostream>

int main() {
    // Define the range
    int start = 3;
    int end = 7;

    // Calculate the sum using a loop
    int total_sum = 0;
    for (int num = start; num <= end; ++num) {
        total_sum += num;
    }

    // Output the result
    std::cout << total_sum << std::endl;

    return 0;
}
