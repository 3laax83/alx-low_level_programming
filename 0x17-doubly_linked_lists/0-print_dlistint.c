#include "./lists.h"

/**
 * print_dlistint - function to count and print nodes
 * @h: pointer to head node
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
    int count = 0;
    if (!h)
        return (0);
    
    do
    {
        count++;
        printf("%d\n", h->n);
    } while (h && (h = h->next));
    
    return (count);
}