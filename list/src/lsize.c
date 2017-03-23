/*
** lsize.c for  in /home/le-rou_c/lib/list/list/src
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 15:39:16 2017 Lucien Le Roux
** Last update Thu Mar 23 15:40:04 2017 Lucien Le Roux
*/

#include "list.h"

size_t lsize(t_list *head) {
  size_t len = 0;

  while (head) {
    len++;
    head = head->next;
  }
  return len;
}
