#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main()
{
    // Your code starts here
    // char st[] = {'a', 'b', 'c', 'd', '\0'}; // '\0' is for termiantion of string known as null character
    // printf("First character is %c\n",st[0]);
    // atring having contig block of memory
    // for (int i = 0; i < sizeof(st) / sizeof(st[0]); i++)
    // {
    //     printf("%c", st[i]); // abcd NUL
    // }
    // printf("\n");
    // // several ways to initialize a string

    // // 1. Using Double Quotes (with \0 automatically added)
    // char str[] = "Hello";

    // //  2. Explicit Size with String Literal
    // char str[10] = "Hello"; //"Hello" goes in, rest filled with \0

    // // 3. Character-by-Character Initialization
    // char str[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // You must manually add '\0'

    // // 4-Using a Pointer (String constant)
    // char *str = "Hello";
    // // Efficient but risky if you accidentally try str[0] = 'h'; → ❌ undefined behavior

    // // 5. Uninitialized Fixed-Size Array
    // char str[20]; // empty string (contains garbage unless manually cleared)
    // // Needs manual str[0] = '\0'; if you want to initialize as empty string

    // best way to print the string
    // char string[] = "hello om-prakash mishra";
    // printf("%s", string);

    // 2 imp fun in c for string input and output

    // 1. gets() → (❌ Deprecated — Unsafe)
    // used to appropriately read a multi word string
    // char name[50];
    // gets(name);                  // ❌ Unsafe // yaha se input lega
    // printf("Hello, %s\n", name); // yha output dedega

    //  ⚠️ Problem:
    // It doesn't check buffer size, which can cause buffer overflows.
    // That’s why gets() is removed from the C11 standard.

    // 2. puts() → Safe and Recommended
    //  ✅ What it does:
    // Prints a string followed by a newline (\n automatically added).
    // Safer and simpler alternative to printf("%s\n", str);
    // char name2[] = "Ayush";
    // puts(name2); // Output: Ayush\n

    // standard library fn of string

    // 1. strlen(str)-Returns the length of the string (excluding '\0).
    // char str[] = "Ayush";
    // printf("%lu", strlen(str)); // Output: 5

    // 2. strcpy(dest, src)-Copies one string into another.
    // char src[] = "hello";
    // char dest[20];
    // strcpy(dest, src); // dest = "hello"

    // 3. strncpy(dest, src, n)-Copies up to n characters, safer version of strcpy.
    // strncpy(dest, src, 4); // Copies "hell" into dest

    // 4. strcat(dest, src)-Concatenates (appends) src to end of dest.
    // char dest[20] = "hello ";
    // char src[] = "world";
    // strcat(dest, src); // dest = "hello world"

    // 5. strcmp(str1, str2)-Compares two strings:Returns 0 if equal,< 0 if str1 < str2,> 0 if str1 > str2
    // strcmp("a", "b");  // returns negative

    // 6-strncmp(str1, str2, n)-Compares first n characters.

    // /7. strchr(str, ch)-Returns pointer to first occurrence of ch in str, or NULL.
    // char *ptr = strchr("Ayush", 'y');  // points to "yush"

    // taking input in string
    //  by %s

    char input[4];
    scanf("%3s", input); // reads max 3 chars, leaves room for \0
    fgets(input, sizeof(input), stdin);

    return 0;
}