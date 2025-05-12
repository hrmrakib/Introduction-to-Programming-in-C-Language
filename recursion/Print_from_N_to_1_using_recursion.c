#include <stdio.h>

void hello(int start, int end) {
    printf("%d\n", end);

    if(end == start) {
        return;
    }

    hello(end - 1, start);
}

int main() {
    int start, end;
    scanf("%d %d", &start, &end);

    hello(start, end);
    
    return 0;
}