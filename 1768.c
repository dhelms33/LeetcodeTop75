#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* mergeAlternately(char* word1, char* word2) {
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    
    // Allocate memory for the merged string
    char* merged = (char*)malloc((len1 + len2 + 1) * sizeof(char)); 
    int i = 0, j = 0, k = 0;
    
    // Loop through both words, alternating characters
    while (i < len1 && j < len2) {
        merged[k++] = word1[i++];
        merged[k++] = word2[j++];
    }
    
    // Append remaining characters from the longer string
    while (i < len1) {
        merged[k++] = word1[i++];
    }
    while (j < len2) {
        merged[k++] = word2[j++];
    }
    
    merged[k] = '\0'; // Null-terminate the string
    return merged;
}

int main() {
    char word1[] = "abc";
    char word2[] = "pqr";
    char* result = mergeAlternately(word1, word2);
    printf("%s\n", result);
    free(result); // Free the allocated memory
    return 0;
}
