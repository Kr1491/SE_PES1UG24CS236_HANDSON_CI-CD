#include <assert.h>
#include <stdio.h>
#include "../src/calculator.h"

int main() {
    // Test Addition
    assert(add(2.0, 3.0) == 5.0);
    // Test Subtraction
    assert(subtract(5.0, 2.0) == 3.0);
    // Test Multiplication
    assert(multiply(4.0, 2.5) == 10.0);
    // Test Division
    assert(divide(10.0, 2.0) == 5.0);
    assert(divide(5.0, 0.0) == 0.0); // Edge case: division by zero

    printf("✅ All calculator test cases passed successfully!\n");
    return 0;
}