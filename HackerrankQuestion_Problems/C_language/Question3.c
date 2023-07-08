#include <stdio.h>

int main() {
    char ch;
    char string[100];
    char sentence[100];
    
    // Read the character
    scanf("%c", &ch);
    scanf("\n"); 
    
    // Read the string
    scanf("%[^\n]%*c", string);
    
    // Read the sentence
    scanf("%[^\n]%*c", sentence);
    
    // Print the character
    printf("%c\n", ch);
    
    // Print the string
    printf("%s\n", string);
    
    // Print the sentence
    printf("%s\n", sentence);
    
    return 0;
}

