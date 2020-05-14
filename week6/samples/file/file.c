/*
 *    File handling
 *
 *    This is reading char by char. Other options is reading line by line
 *    and then mask out different columns in line using sscanf.
 *
 *    NOTE: Must set working directory for CLion else will not be able to find files
 *
 *    Drop down (run) in toolbar > Edit Configurations > Select file > Browse
 *    working directory (should be like .../week6/samples/file)
 *

 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <wchar.h>
#include <locale.h>
#include <string.h>

#define DEBUG false

#define MAX 20
#define MAX_BUF 1000


FILE *open_file(const char *name, const char *mode);

// Get a dynamically allocated string of file content in file name
char *read_file(const char *name);

// Write a content to some file with name
void write_file(const char *name, const char *content);

/*
 *    Using file handling functions
 */
int main(void) {

    setlocale(LC_ALL, "");   // Use users settings for locale (language, encodings etc.)

    char *str = read_file("in.txt");
    printf("%s\n", str);

    char str2[] = "Denna text skall\nfinnas i filen out.txt";
    write_file("out.txt", str2);

    return 0;
}


char *read_file(const char *name) {
    FILE *in = open_file(name, "r");
    char buf[MAX_BUF];
    int ch;
    int i = 0;
    while ((ch = fgetc(in)) != EOF && i < MAX_BUF) {  // Read single char at the time
        buf[i] = (char) ch;
        i++;
    }
    if (i == MAX_BUF) {
        buf[i - 1] = '\0';
    } else {
        buf[i] = '\0';
    }
    fclose(in);
    // Allocate the exact space needed
    char *str = malloc((strlen(buf) + 1) * sizeof(char));
    strcpy(str, buf);
    return str;
}

void write_file(const char *name, const char *content) {
    FILE *out = open_file(name, "w");
    int i = 0;
    while (content[i] != '\0') {
        fputc(content[i], out);
        i++;
    }
    fclose(out);
}

FILE *open_file(const char *name, const char *mode) {
    FILE *f = fopen(name, mode);
    if (f == NULL) {
        printf("Couldn't open file %s!", name);
        exit(EXIT_FAILURE);
    }
    return f;
}

