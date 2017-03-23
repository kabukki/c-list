/*
** lcopy.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 18:22:18 2017 Lucien Le Roux
** Last update Thu Mar 23 18:39:40 2017 Lucien Le Roux
*/

#include "list.h"

t_list *lcopy(t_list *node) {
  t_list *newnode = malloc(sizeof(*newnode));

  if (newnode != NULL) {
    newnode->data = node->data;
    newnode->next = NULL;
  }
  return newnode;

}
