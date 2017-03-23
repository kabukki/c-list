/*
** delete_list.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 15:25:56 2017 Lucien Le Roux
** Last update Thu Mar 23 15:38:23 2017 Lucien Le Roux
*/

#include "list.h"

void ldelete(t_list *head) {
  t_list *tmp;

  while (tmp = head) {
    head = head->next;
    free(tmp);
  }
}
