#include <stdio.h>
#include "../include/utils.h"
#include <stdbool.h>

int test_validate_validaddress() {
    char address[] = "123 Main St., Cairo";
    int expected = 1;
    int actual = utils_is_valid_address(address);
    int success = actual == expected;

    printf("\nValid address:\n");
    printf("actual: %d, expected: %d, success: %d\n",
           actual, expected, success);

    return success;
}

int test_validate_invalidaddress() {
    char address[] = "123 Main St. @ Cairo";
    int expected = 0;
    int actual = utils_is_valid_address(address);
    int success = actual == expected;

    printf("\nInvalid address:\n");
    printf("actual: %d, expected: %d, success: %d\n",
           actual, expected, success);

    return success;
}

int main()
{
    test_validate_validaddress();
    test_validate_invalidaddress();
}