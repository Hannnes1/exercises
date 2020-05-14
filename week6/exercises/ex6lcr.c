/*
 *
 *     Simulation of the LCR game
 *     See: https://en.wikipedia.org/wiki/LCR_(dice_game)
 *
 *
 *   See:
 *   - string_func.c
 *   - use_string_h.c
 *   - ptr_string.c
 */

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<memory.h>
#include <stdlib.h>
#include <zconf.h>
#include <time.h>

#define EQUALS(v1, v2) printf((v1) == (v2) ? "true\n" : "false\n")
#define STR_EQUALS(s1, s2) printf( strcmp(s1, s2) == 0 ? "true\n" : "false\n")

// -------- Declarations ---------------

#define MAX_NAME 10

typedef struct Player {    // A player has a name and chips
    char name[MAX_NAME];
    int n_chips;
} player_t;

const char *outcomes = "...LCR";  // Possible dice outcomes

// ------ Function declarations ------------------

// Roll dice according to rules for game. Get a dynamically allocated string.
char *roll_dice(int n_chips);

// Use result to remove chips from player
void remove_chips(const char *result, player_t *player);

// Index to player left of current
int get_player_left(int current_player, int n_players);

// Index to player right of current
int get_player_right(int current_player, int n_players);

// Distribute chips from current player to others (or throw away)
void distribute_chips(const char *result, player_t players[], int n_players, int current_player);

// Check if all but one player has chips
bool done(player_t players[], int n_players);

// IO
void display_state(player_t players[], int n_players);

/*
 *     Simulation starts here
 */
int main(void) {

    srand((unsigned) time( NULL));

    player_t players[] = {"Olle", 3, "Fia", 3, "Sven", 3};
    int current_player = 0;      // Index to current player
    int n_players = 3;

    printf("Simulation starts\n");

    // Run the simulation
    while (true) {
        char *result = roll_dice(players[current_player].n_chips);
        printf("%s got the result %s\n", players[current_player].name, result);
        distribute_chips(result, players, n_players, current_player);

        display_state(players, n_players);

        if (done(players, n_players)) {
            break;
        }
        free(result);
        current_player = get_player_left(current_player, n_players);
    }

    printf("Simulation ended\n");
}

// --------- Function definitions ---------

void distribute_chips(const char *result, player_t players[],
                      int n_players, int current_player) {
    // TODO
}

void remove_chips(const char *result, player_t *player) {
   // TODO
}

int get_player_left(int current_player, int n_players) {
    return (current_player + n_players - 1) % n_players;
}

int get_player_right(int current_player, int n_players) {
    return (current_player + 1) % n_players;
}

char *roll_dice(int n_chips) {
     // TODO
    return NULL;
}

bool done(player_t players[], int n_players) {
    int count = 0;
    for (int i = 0; i < n_players; i++) {
        if (players[i].n_chips > 0) {
            count++;
        }
    }
    return count == 1;
}


void display_state(player_t players[], int n_players) {
    for (int i = 0; i < n_players; i++) {
        printf("%s : %d ", players[i].name, players[i].n_chips);
    }
    printf("\n");
}



