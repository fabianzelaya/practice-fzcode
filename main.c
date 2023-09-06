#include <stdio.h>

int main() {
    // arr[3][4];

    int rows = 3;
    int columns = 4;

    int totalElements = rows * columns;

    printf("int arr[%d][%d]; can hold a total of %d elements.", rows, columns, totalElements);

    return 0;
}
