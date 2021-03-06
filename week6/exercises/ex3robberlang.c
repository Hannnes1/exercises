/*
 *   The Robber language, see https://en.wikipedia.org/wiki/R%C3%B6varspr%C3%A5ket
 *   and https://rolandjohansson.se/the-robber-language/
 *
 *
 *   See:
 *   - string_func.c
 *   - use_string_h.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define EQUALS(v1, v2) printf((v1) == (v2) ? "true\n" : "false\n")
#define STR_EQUALS(s1, s2) printf( strcmp(s1, s2) == 0 ? "true\n" : "false\n")

#define VOWELS "aeiouyåäöAEIOUYÅÄÖ"
#define SEPARATOR ",.!?;:"
#define SPACE " \n\t\r"

#define SIZE 200

void to_robber(char *dest, const char *src);

char *to_robber2(const char *src);


int main() {
    char *robber1 = "HoHelola dodagogenon";
    char *robber2 = "NoNejoj, sosovovmomororgogonon";
    char *robber3 = "HoHelollolrore enon fofågogelol i hohanondodenon änon totio i soskokogogenon";

    char dest[SIZE];  // If text too long problems ...(better allocate dynamically)

    char *str = "Hela dagen";
    to_robber(dest, str);
    STR_EQUALS(dest, robber1);

    str = "Nej, sovmorgon";
    to_robber(dest, str);
    STR_EQUALS(dest, robber2);

    str = "Hellre en fågel i handen än tio i skogen";
    to_robber(dest, str);
    STR_EQUALS(dest, robber3);

    // ------- Same using dynamic allocation ---------

    str = "Hela dagen";
    char *result = to_robber2(str);
    STR_EQUALS(result, robber1);
    free(result);

    str = "Nej, sovmorgon";
    result = to_robber2(str);
    STR_EQUALS(result, robber2);
    free(result);

    str = "Hellre en fågel i handen än tio i skogen";
    result = to_robber2(str);
    STR_EQUALS(result, robber3);
    free(result);
}


// Version with dest allocated by callee
void to_robber(char *dest, const char *src) {
    int new_i = 0;
    int i = 0;
    while (src[i] != 0) {
        dest[new_i++] = src[i++];
        if (!strchr(VOWELS, src[i - 1]) && !strchr(SEPARATOR, src[i - 1]) && !strchr(SPACE, src[i - 1])) {
            dest[new_i++] = 'o';
            dest[new_i++] = src[i - 1];
        }
    }
}

// Function allocates dynamically
char *to_robber2(const char *src) {
    int consonants = 0;
    for (int i = 0; src[i] != 0; i++) {
        if (!strchr(VOWELS, src[i - 1]) && !strchr(SEPARATOR, src[i - 1]) && !strchr(SPACE, src[i - 1])) {
            consonants++;
        }
    }

    char *str = malloc(sizeof(char) * strlen(src) + consonants * 2);

    int new_i = 0;
    int i = 0;
    while (src[i] != 0) {
        str[new_i++] = src[i++];
        if (!strchr(VOWELS, src[i - 1]) && !strchr(SEPARATOR, src[i - 1]) && !strchr(SPACE, src[i - 1])) {
            str[new_i++] = 'o';
            str[new_i++] = src[i - 1];
        }
    }
    return str;
}

