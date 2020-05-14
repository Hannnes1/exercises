/*
     A typical string problem

     Transform string from english to the "all-language"
     For all words, add "all" after first consonant. Example:

    "How are you?" -> "Hallow aralle you?"

    We assume all words are separated by exactly on space (' ')


    *** Advanced sample ***

 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


#define EQUALS(v1, v2) printf((v1) == (v2) ? "true\n" : "false\n")
#define STR_EQUALS(s1, s2) printf( strcmp(s1, s2) == 0 ? "true\n" : "false\n")

#define MAX_WORD_LEN 12

// Check if ch is a consonant
bool is_consonant(char ch);

// Index to first consonant from left (-1 if not found)
int index_of_first_consonant(const char *str);

// Convert single word to all-language (if no consonant unchanged)
// Result in dest.
void word_to_all(char *dest, const char *src);

// Split str (a long text) into words.
// Separator in str is a single ' ' (blank)
int split(char words[][MAX_WORD_LEN], const char *str);

// Convert a text into all-language
// Separator in str is a single ' ' (blank)
char *to_all(char *dest, const char *src);

int main(void) {
    char *str1 = "How are you?";
    char *all1 = "Hallow aralle you?";

    EQUALS(is_consonant('H'), true);
    EQUALS(is_consonant('a'), false);
    EQUALS(is_consonant('?'), false);

    EQUALS(index_of_first_consonant("How"), 0);
    EQUALS(index_of_first_consonant("are"), 1);
    EQUALS(index_of_first_consonant("you?"), -1);

    char dest[MAX_WORD_LEN];
    word_to_all(dest, "How");
    STR_EQUALS(dest, "Hallow");
    word_to_all(dest, "are");
    STR_EQUALS(dest, "aralle");
    word_to_all(dest, "you?");
    STR_EQUALS(dest, "you?");

    char words[20][MAX_WORD_LEN];
    EQUALS(split(words, "How are you?"), 3);

    char result[10 * MAX_WORD_LEN];
    to_all(result, str1);
    STR_EQUALS(result, all1);

    return 0;
}

char *to_all(char *dest, const char *src) {
    char words[20][MAX_WORD_LEN];
    //memset(words, 0, 20 * MAX_WORD_LEN);
    char tmp[MAX_WORD_LEN];
    int n_words = split(words, src);
    for (int i = 0; i < n_words; i++) {
        word_to_all(tmp, words[i]);
        strcpy(words[i], tmp);
        //memset(tmp, 0, MAX_WORD_LEN);   // Not needed
    }

    dest[0] = '\0';  // strncat needs!
    for (int i = 0; i < n_words - 1; i++) {
        strncat(dest, words[i], strlen(words[i]));
        strncat(dest, " ", 1);
    }
    strncat(dest, words[n_words - 1], strlen(words[n_words - 1]));
}

int split(char words[][MAX_WORD_LEN], const char *str) {
    // Use for debug
    //memset(words, 'X', 20 * MAX_WORD_LEN);  // strncat needs

    int i = 0;
    int k = 0;
    int start = i;
    int end;
    while (true) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i;
            strncpy(words[k], str + start, (size_t) (end - start));
            words[k][end - start] = '\0';
            if (str[i] == '\0') {
                break;
            }
            start = end + 1;
            k++;
        }
        i++;
    }
    return k + 1;
}

void word_to_all(char *dest, const char *src) {
    /*
     * Set dest[0] to \0 so that
     * strncat starts from index 0
     * (else possible find some other \0 and start there)
     */
    // memset(dest, 'X', MAX_WORD_LEN);  // Useful for debug
    dest[0] = '\0';
    int i = index_of_first_consonant(src);
    if (i >= 0) {
        strncat(dest, src, (size_t) i + 1);  // Always \0
        size_t len_pre = strlen(dest);
        strncat(dest, "all", 3);
        strncat(dest, src + i + 1, strlen(src) + 1 - len_pre);
    } else {
        strncpy(dest, src, strlen(src) + 1);
    }
}

int index_of_first_consonant(const char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (is_consonant(str[i])) {
            return i;
        }
        i++;
    }
    return -1;
}

bool is_consonant(char ch) {
    return isalpha(ch) && strchr("aeiouyåäöAEIOUYÅÄÖ", ch) == NULL;
}