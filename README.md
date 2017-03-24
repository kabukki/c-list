# LibList

## What is it ?

LibMatrix is a custom C library that helps you easily manipulate lists.

The functions are inspired by the OCaml List module.

The library features simple tools and functions to use lists:

### Element creation/deletion
* node
* copy
* delete

### List manipulation
* swap
* append
* prepend
* insert
* concat

### Getters
* at
* last
* find

### Informative functions
* size
* iter

### List alteration
* apply
* sort
* merge
* rev

## How does it work ?

Each element of the list is represented by the following structure:

```C
typedef struct  s_list
{
  void          *data;
  struct s_list *next;
} t_list;
```

To create a node, simply call the `lnode` function with the data you want to store.

To delete the list, simply call the `ldelete` function passing the first element of the list as an argument.


## Example

```C
t_list *head = lnode("World !");

lappend(head, lnode("Hello"));
lswap(lat(head, 0), lat(head, 1));

liter(head, &print_string);
ldelete(head);
```

This will print :

```
Hello
World !
```

## Stuff to come

More advanced features, such as:
* Doubly linked lists
* List Sorting
* ...

Release date: unknown

## About the lib

Written in C by Lucien LE ROUX, 2017
