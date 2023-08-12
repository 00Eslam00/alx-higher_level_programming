#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *is_palindrome - ispalindrome
 *@head: list
 *Return: number elements.
 */
int is_palindrome(listint_t **head)
{
    listint_t *aux = *head;
    int i = 0, j = 0, k = 0;
    int *array = NULL;

    if (head == NULL)
        return (0);
    if (*head == NULL)
        return (1);
    while (aux != NULL)
    {
        aux = aux->next;
        i++;
    }
    array = malloc(sizeof(int) * i);
    aux = *head;
    while (aux != NULL)
    {
        array[j] = aux->n;
        aux = aux->next;
        j++;
    }
    for (k = 0; k <= (i) / 2; k++)
    {
        if (array[k] != array[i-1-k])
        {
            free(array);
            return (0);
        }
    }
    free(array);
    return (1);
}