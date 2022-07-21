# 0x12. C - Singly linked lists
### Concepts
* [Data Structures](https://alx-intranet.hbtn.io/concepts/120)
## Resources
### Read or watch:
* [Linked Lists](https://m.youtube.com/watch?v=udapt4FGY20&t=141s)
## General
* When and why using linked lists vs arrays
* How to build and use linked lists

**Data structure used for this project:**
```
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
```
