/*
** lappend.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 16:06:41 2017 Lucien Le Roux
** Last update Thu Mar 23 16:10:38 2017 Lucien Le Roux
*/

#include "list.h"

void lappend(t_list *head, t_list *node) {
  if (head == NULL)
    return ;
  while (head->next) {
    head = head->next;
  }
  head->next = node;
}
