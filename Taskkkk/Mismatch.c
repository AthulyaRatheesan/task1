#include <stdio.h>

int main() {
    int a[] = {1, 2, 4, 12, 6, 8};
    int b[] = {2, 6, 10, 12, 14, 17};

    int sizeA = sizeof(a) / sizeof(a[0]);
    int sizeB = sizeof(b) / sizeof(b[0]);

    printf("Numbers present in array 'a' but not in array 'b':\n");

    
    for (int i = 0; i < sizeA; i++) {
        int found = 0;

        
        for (int j = 0; j < sizeB; j++) {
            if (a[i] == b[j]) {
                found = 1;
                break;
            }
        }

        
        if (!found) {
            printf("%d\n", a[i]);
        }
    }

return 0;
}