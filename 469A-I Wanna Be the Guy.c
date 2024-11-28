#include <stdio.h>

int main() {
    int n, p, q;
    scanf("%d", &n);
    
    int completed[101] = {0}; 
    
    scanf("%d", &p);
    for (int i = 0; i < p; i++) {
        int level;
        scanf("%d", &level);
        completed[level] = 1; 
    }

   
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        int level;
        scanf("%d", &level);
        completed[level] = 1; 
    }

   
    for (int i = 1; i <= n; i++) {
        if (completed[i] == 0) {
           
            printf("Oh, my keyboard!\n");
            return 0; 
        }
    }

   
    printf("I become the guy.\n");
    return 0;
}
