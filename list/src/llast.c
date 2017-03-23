/*
** llast.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 21:37:08 2017 Lucien Le Roux
** Last update Thu Mar 23 21:37:37 2017 Lucien Le Roux
*/

#include "list.h"

t_list *llast(t_list *head) {
  return lat(head, lsize(head) - 1);
}
