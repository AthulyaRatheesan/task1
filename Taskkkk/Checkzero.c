#include <stdio.h>

int checkZeros(int numberList[], int n) {
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (numberList[i] == 0) {
            count++;
            
            if (count > 1) {
                return 0; 
            }
        }
    }
    
    if (count == 1) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int numberList[] = {1, 0, 2, 3, 0, 4};
    int n = sizeof(numberList) / sizeof(numberList[0]);
    
    int result = checkZeros(numberList, n);
    
    if (result) {
        printf("The array has one and only one zero.\n");
    } else {
        printf("The array does not have one and only one zero.\n");
    }
    
 return 0;
}