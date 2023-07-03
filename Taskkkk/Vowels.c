#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[256];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int vowels = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;

            if (vowels >= 3) {
                printf("The string is false.\n");
                return 0;
            }
        }
    }

    printf("The string is true.\n");
  return 0;
}