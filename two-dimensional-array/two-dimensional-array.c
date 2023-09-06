//
// Created by Fabian Zelaya on 9/6/23.
//

#include <stdio.h>

int main() {
    // Declare and initialize variables to represent the number of rows and columns.
    int rows = 3;
    int columns = 4;

    // Calculate the total number of elements by multiplying the number of rows and columns.
    int totalElements = rows * columns;

    // Display the result using printf:
    // The format string specifies how to format the output.
    // %d is a placeholder for an integer, and it's replaced by the values of rows, columns, and totalElements.
    printf("int arr[%d][%d]; can hold a total of %d elements.\n", rows, columns, totalElements);

    return 0;
}
//FZ