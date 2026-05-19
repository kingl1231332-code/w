#include <stdio.h>

int main() {
    int i, j, sp;
    
    for(i = 'E'; i >= 'A'; i--) {
      
        for(sp = 5; sp > (i - 'A' + 1); sp--) {
            printf(" ");
        }
      
        for(j = 'A'; j <= i; j++) {
            printf("%c ", j);
        }
        printf("\n");
    }
}