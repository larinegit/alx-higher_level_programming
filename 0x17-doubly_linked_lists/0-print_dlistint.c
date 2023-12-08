#include <stdio.h>
#include <stddef.h>

typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h) {
    size_t node_count = 0;
    const dlistint_t *current = h;

    while (current != NULL) {
        printf("%d\n", current->n);
        node_count++;
        current = current->next;
    }

    return node_count;
}
