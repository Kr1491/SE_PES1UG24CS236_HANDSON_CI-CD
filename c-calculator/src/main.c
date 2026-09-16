#include <stdio.h>
#include "calculator.h"
int main() {
printf("C Calculator Demo\n");
printf("10 + 5 = %.2f\n"
, add(10, 5));
printf("10 - 5 = %.2f\n"
, subtract(10, 5));
printf("10 * 5 = %.2f\n"
, multiply(10, 5));
printf("10 / 5 = %.2f\n"
, divide(10, 5));
return 0;
}