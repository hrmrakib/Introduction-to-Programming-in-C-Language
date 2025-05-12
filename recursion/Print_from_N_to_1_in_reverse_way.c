#include <stdio.h>

void hello(int start, int end) {
    
    if(start == end) {
        return;
    }
    
    hello(start + 1, end);

    printf("%d\n", start);
}

int main() {
    int start, end;
    scanf("%d %d", &start, &end);

    hello(start, end);
    
    return 0;
}