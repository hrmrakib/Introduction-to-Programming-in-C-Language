#include <stdio.h>

void hello(int start, int end) {
    printf("%d\n", start);

    if(start == end) {
        return;
    }

    hello(start + 1, end);

    printf("I am here!\n");
}

int main() {
    int start, end;
    scanf("%d %d", &start, &end);

    hello(start, end);
    
    return 0;
}