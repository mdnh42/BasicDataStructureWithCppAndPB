## Linked List Recap.

    - Node Value->address.
    -Head
    - NULL

    - Declare node
    - Declare Class for LinkedList
    - Declare head
    - Declare Constructor
    - Create new node
    - Insert At Head
    - Traverse
    - Search distinct value
    - Search all Occurrence value;

## Linked List Lenght

    - GetSize
    - int sz; [Declare node class]
    - sz = 0 [store contructor]
    - s++ [insert Function Updating]
    - s-- [delete function updating]

## Linked List Insert at Any Index

    -Declare a Function get Index and value
    - Check index is with in size?
    - and check index == 0 return insertHead Function with value;
    - declare node a head
    - declare currenct index = 0
    - check curr_index ! = index - 1 within while Loop
    - first's next and curreindex++;
    - node * newnode = CreateNewNode (value)
    - newnode->nxt = a ->nxt
    - a->nxt = newnode.


## Linked List Delete at Head
    - Check Head is NULL?
    - Node a head;
    - head a->nxt;
    - delete a;

##  Linked List Delete Any Index.

    - Check index size
    - index is equal to zero return headDelete Function
    - size decremenet
    - node a head
    - curr_index = 0;
    - check curr_index ! = index - 1 within while Loop
    - a = a->nxt;
    - cur_index++;
    - node b = a->nxt;
    - a->nxt = b->nxt;



