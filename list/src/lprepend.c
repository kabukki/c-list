/*
** prepend.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 18:16:12 2017 Lucien Le Roux
** Last update Thu Mar 23 21:15:01 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Adds node before the head of the list.
 * Returns the new head
 */
t_list *lprepend(t_list *head, t_list *node) {
  node->next = head;
  return node;
}
