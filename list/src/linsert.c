/*
** linsert.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 18:25:30 2017 Lucien Le Roux
** Last update Fri Mar 24 10:59:18 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Insert a new node before a given node
 */
void linsert(t_list *target, t_list *node) {
  lswap(target, node);
  node->next = target->next;
}
