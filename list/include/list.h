/*
** list.h for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 15:18:58 2017 Lucien Le Roux
** Last update Thu Mar 23 20:48:20 2017 Lucien Le Roux
*/

#ifndef LIST_H_
# define LIST_H_

# include <stdlib.h>
# include <stdio.h>

typedef struct	s_list
{
  void		*data;
  struct s_list *next;
} t_list;

/* Constructors / Destructors */
t_list	*lnode(void *data);
t_list	*lcopy(t_list *node);
void	ldelete(t_list *head);

/* List manipulation */
void	lswap(t_list *a, t_list *b);
void	lappend(t_list *head, t_list *node);
t_list	*lprepend(t_list *head, t_list *node);
// insert
void	lconcat(t_list *a, t_list *b);

/* List modification */
void	lapply(t_list *head, void *(*f)(void *));

/* Getters */
t_list	*lat(t_list *head, size_t n);

/* Informative fuctions */
void	liter(t_list *head, void (*f)(void *));
size_t	lsize(t_list *head);

/* Functions to display common data */
void	print_int(void *data);
void	print_string(void *data);

#endif /* LIST_H_ */
