#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    int i, length, palidrome = 0;

    printf("Enter a string: ");
    scanf("%s",str);

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            palidrome = 1;
            break;
        }
    }

    if (palidrome == 0)
        printf("This is a Palindrome\n");
    else
        printf("This is not a palindrome\n");

    return 0;
}
