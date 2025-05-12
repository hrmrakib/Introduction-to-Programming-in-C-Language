#include <stdio.h>

// Local Variable
int sum () {
    int a = 10, b = 20;
    return a + b;
}

// Global Varible
int count = 1;

int increment () {
    count ++;
}

// Stattic Variable
void counter() {
    static int count = 0;
    count++;
    count++;
    printf("-----------%d", count);
}

int main() {

    int a = 10;

    // printf("int = %d", sum());
    counter();

    return 0;
}

