#include <stdio.h>

void mello() {
    printf("mello");
}

void gello () {
    printf("gello\n");
    mello();
}

void hello () {
    printf("hello\n");
    gello();
}

int main() {
 
    printf("main\n");

    hello();    
    return 0;
}