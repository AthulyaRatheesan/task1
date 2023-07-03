#include <stdio.h>
#include <string.h>

int main() {
    char str[256];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    char result[256];
    int index = 0;
    for (int i = 0; i < len; i++) {
        char currentChar = str[i];
        int duplicate = 0;

        
        for (int j = 0; j < index; j++) {
            if (result[j] == currentChar) {
                duplicate = 1;
                break;
            }
        }

        
        if (!duplicate) {
            result[index++] = currentChar;
        }
    }

    result[index] = '\0'; 

    printf("String with duplicates removed: %s\n", result);

return 0;
}