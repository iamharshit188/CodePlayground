// Write a program to check whether user has entered a upper case character or not ?
#include <stdio.h>
int main()
{
    char input;
    printf("Enter a character, ch : ");
    scanf("%c", &input);
    if (input >= 'A' && input <= 'Z')
    {
        printf("You entered uppercase : %c", input);
    }
    else if (input >= 'a' && input <= 'z')
    {
        printf("You entered a lowercase character : %c", input);
    }
    else
    {
        printf("It is not an english alphabet : %c", input);
    }
}