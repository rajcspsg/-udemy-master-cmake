#include <iostream>
#include "addition.h"
#include "division.h"
#include "print_result.h"

/* float addition(float , float);
float division(float , float);
void print_result(std::string, float);
*/

int main() {
    float num1, num2, result_add, result_div;

    std::cout << "Enter the first number" << std::endl;
    std::cin >> num1;
    std::cout << "Enter the second number" << std::endl;
    std::cin>>num2;

    result_add = addition(num1, num2);
    result_div = division(num1, num2);

    print_result("Addition", result_add);
    print_result("Division", result_div);

}
