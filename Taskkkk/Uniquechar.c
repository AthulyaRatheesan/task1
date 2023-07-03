#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char str[256];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    bool charSet[256] = { false };

    
    for (int i = 0; i < len; i++) {
        int index = (int)str[i];

        if (charSet[index]) {
            printf("There are duplicate characters in '%s'.\n", str);
            return 0;
        }

        charSet[index] = true;
    }

    printf("All characters in '%s' are unique.\n", str);

return 0;
}