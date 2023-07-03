#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "i am a doctor";
    char ch[] = "--";
    char result[100];  

    int j = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == ' ') {
            for (int k = 0; k < strlen(ch); k++) {
                result[j] = ch[k];
                j++;
            }
        } else {
            result[j] = string[i];
            j++;
        }
    }

    result[j] = '\0';  

    printf("Modified string: %s\n", result);

return 0;
}