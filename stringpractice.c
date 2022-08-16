/* stringpractice.c
 * source file for stringpractice, a program to develop my skills in using
 * C's string functions, defined in <string.h>.
 *
 * Programmer: Mark Crapser
 *
 * 08/14/2022
 * Use getchar() to create the string you want: "mark is great\0". How can I
 * print '\0'?
 *
 * I'm not understanding how to use getchar() to create a string.
 *
 * The issue: creating a '\0' terminated string with no '\n' from the keybd.
 *
 * 08/16/2022
 * Ok, a complicated situation: I can create the string that I want from the
 * console. It involves getchar() and some extra code. It is very capable.
 * But what are all those C string library functions for? I need to study
 * those. I can move back to my original problem -- can't remember the name.
 *
 * Why won't the string printf()?
 *
 * I have not changed to the do while structure!.
*/



#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 81   /* Maximum length of a string: 80 chars and a '\0' */





int main(int argc, char *argv[]) {

    char string[MAX_LENGTH], text[] = {'M', 'a', 'r', 'k'};
    int index, character;

    index = 0;
    while((character = getchar() != '\n') && index <= MAX_LENGTH - 2) {
        string[index] = character;
        ++index;
    }
    string[index] = '\0';

    index = 0;
    while(string[index] != '\0')
        ++index;
    printf("length = %i\n", index);

    printf("The string is \n");

    printf("%s\n", text);



    return(0);

}
