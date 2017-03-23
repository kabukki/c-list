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
* concat

### Getters
* at

### Informative functions
* size
* iter

### List alteration
* apply
* ...

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

## Stuff to come

More advanced lists, such as:
* Doubly linked lists
* ...

Release date: unknown

## About the lib

Written in C by Lucien LE ROUX, 2017
