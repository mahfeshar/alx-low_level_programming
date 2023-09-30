#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**********Functions**********/

/*Function to write the character c to stdout*/
int _putchar(char c);
/*function that prints all the elements of a list*/
size_t print_list(const list_t *h);
/*function that returns the number of elements in a linked list*/
size_t list_len(const list_t *h);
/*function that adds a new node at the beginning of a list*/
list_t *add_node(list_t **head, const char *str);
/*function that adds a new node at the end of a list*/
list_t *add_node_end(list_t **head, const char *str);
/*function that frees a list.*/
void free_list(list_t *head);

#endif
