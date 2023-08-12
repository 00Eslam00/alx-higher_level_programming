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
    int i = 0, j = 0, k = 0, l = 0;
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
    for (k = 0, l = i - 1; k < l; k++, l--)
    {
        if (array[k] != array[l])
        {
            free(array);
            return (0);
        }
    }
    free(array);
    return (1);
}