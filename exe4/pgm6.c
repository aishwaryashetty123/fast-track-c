#include <stdio.h>
#include <string.h>
 
// A function to check if a string str is palindrome
void isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
 
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome\n", str);
            return;
        }
    }
    printf("%s is palindrome\n", str);
}
 

int main()
{
    isPalindrome("madam");
    isPalindrome("hello");
    return 0;
}