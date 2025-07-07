#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main()
{
    // Your code starts here
    // FILE *ptr;
    // ptr = fopen("dummy.txt", "a");
    // //  Example: Write to a file
    // if (ptr == NULL)
    // {
    //     printf("File could not be opened\n");
    //     return 1; // error/failure.
    // }
    // fprintf(ptr, "Radhe Radhe \n"); // fprintf() writes just like printf(), but to a file
    // // or ye pehle file ko clean-up karega then write up hoga,
    // // but agr aisa nhi chahte toh use append (a) mode
    // fclose(ptr);

    // // Read from a file
    // FILE *fp = fopen("read.txt", "r");
    // if (fp == NULL)
    // {
    //     printf("File not found\n");
    //     return 1; // error/failure.
    // }

    // // char str[100];
    // // fgets(str, 100, fp);
    // // printf("File content is: %s", str);
    // // fclose(fp);

    // // fgetc() and fputc()?

    // // fgetc()
    // // char ch;
    // // while ((ch = fgetc(fp)) != EOF)
    // // {
    // //     printf("%c", ch); // print each character of my file
    // // }
    // // fclose(fp);

    // // fputc() — Write character by character
    // char message[] = "Radhe Radhe";
    // for (int i = 0; message[i] != '\0'; i++)
    // {
    //     fputc(message[i], ptr);
    // }
    // fclose(fp);

    // Combine Both: Copy File Character by Character
    FILE *source = fopen("read.txt","r");
    FILE *dest = fopen("copyOfRead.txt","w");

    if(source == NULL || dest == NULL){
        printf("one of the file is not exist\n");
        return 1; // error or failing in something
    }

    char ch;
    while((ch = fgetc(source)) != EOF){
        fputc(ch,dest);
    }
    fclose(source);
    fclose(dest);
    printf("Files copies successfully!!\n");
    return 0;
}

// fclose() closes the file (always do this!)