
#include <lzma.h>

typedef struct Node {// Nodes in list
    int value;
    struct Node *next;
} node_t;
typedef struct List {// The list
    int len;
    node_t *head;
} list_t;

node_t *remove(list_t *list, int value);

int main() {

    node_t n4 = {1, NULL};
    node_t n3 = {4, &n4};
    node_t n2 = {1, &n3};
    node_t n1 = {2, &n2};
    list_t head = {4, &n1};

    list_t *list = &head;

    remove(list, 1);

    return 0;
}

node_t *remove(list_t *list, int value) {
    node_t *pos = list->head;
    while (pos != NULL) {
        if (pos->next->value == value) {
            node_t *removed = pos->next;
            list->len - 1;
            pos->next = pos->next->next;
            return removed;
        }
        pos = pos->next;
    }
    return NULL;
}