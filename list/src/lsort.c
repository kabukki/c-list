/*
** lsort.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 21:53:30 2017 Lucien Le Roux
** Last update Thu Mar 23 22:52:30 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Bubble sort
 * O(n^2)
 */
static void lbubble_sort(t_list *head, int (*f)(void *, void *)) {
  t_list *sh = head;
  bool sorted;

  if (head == NULL)
    return ;
  do {
    sorted = true;
    head = sh;
    while (head->next) {
      if ((*f)(head->data, head->next->data) > 0) {
	lswap(head, head->next);
	sorted = false;
      }
      head = head->next;
    }
  } while (!sorted);
}

/*
 * Merge sort
 * O(n log n)
 */
static void lmerge_sort(t_list *head, int (*f)(void *, void *)) {
  t_list *left, *right;
  size_t len = lsize(head);

  if (head == NULL || len < 2)
    return ;

  // fill left
  left = head;
  // fill right
  right = lat(head, len / 2);

  // lmerge_sort left
  // lmerge_sort left
  // lmerge left, right, head ---> merge left & right INTO head, following the comparison function. (overwrite)
}

/*
 * Sorts the list
 * Returns the sorted list
 * Current implementation: bubble sort
 */
void lsort(t_list *head, int (*f)(void *, void *)) {
  lbubble_sort(head, f);
}
