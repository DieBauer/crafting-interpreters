
// Write functions to insert, find, and delete items from it. Test them.
#include <iostream>
#include <cstdlib>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

// Write functions to insert nodes at the front and back of the list.
// Doubly linked-list with insert, find and delete operations.
// Test them.

void insert_front(struct node **head, int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = *head;
    if (*head != NULL)
    {
        (*head)->prev = new_node;
    }
    *head = new_node;
}

void insert_back(struct node **head, int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = NULL;
    if (*head == NULL)
    {
        *head = new_node;
        return;
    }
    struct node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
}

// Write functions to insert nodes at the front and back of the list.
// Doubly linked-list with insert, find and delete operations.
// Test them.

void delete_front(struct node **head)
{
    if (*head == NULL)
    {
        return;
    }
    struct node *temp = *head;
    *head = (*head)->next;
    if (*head != NULL)
    {
        (*head)->prev = NULL;
    }
    free(temp);
}

void delete_back(struct node **head)
{
    if (*head == NULL)
    {
        return;
    }
    struct node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    if (temp->prev != NULL)
    {
        temp->prev->next = NULL;
    }
    free(temp);
}
