# 0x17. C - Doubly linked lists
## Resources
### Read or watch:
* [What is a Doubly Linked List](https://m.youtube.com/watch?v=k0pjD12bzP0&t=2s)
## General
* What is a doubly linked list
* How to use doubly linked lists

**Data used for this project:**
```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```
