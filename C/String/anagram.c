#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isAnagram(char str1[], char str2[]) {
    int count[256] = {0};  // ASCII characters count

    // If lengths differ, not an anagram
    if (strlen(str1) != strlen(str2))
        return 0;

    // Count frequency from str1
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)tolower(str1[i])]++;
    }

    // Subtract frequency using str2
    for (int i = 0; str2[i] != '\0'; i++) {
        count[(unsigned char)tolower(str2[i])]--;
    }

    // If all counts zero -> anagram
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0)
            return 0;
    }
    return 1;
}

void main() {
    char str1[50], str2[50];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (isAnagram(str1, str2))
        printf("\nThe strings are Anagrams\n");
    else
        printf("\nThe strings are NOT Anagrams\n");
}
