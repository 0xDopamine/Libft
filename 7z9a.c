#include<stdlib.h>
#include <stdio.h>
typedef struct      s_list 
{
    void            *content;
    struct s_list   *next; 
}                   t_list;

void afficher (void *content)
{
  //char *p = (char *)content;
    printf("%s\n", content);
}

t_list    *ft_lstnew(void *content)
{
    t_list    *lst;

    lst = (t_list *)malloc(sizeof(t_list));
    if (!lst)
        return (NULL);
    lst->content = content;
    lst->next = NULL;
    return (lst);
}
void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *curr;

    curr = lst;
    while (curr)
    {
        f(curr->content);
        curr = curr->next;
    }
}

int main() {
  t_list *lst;
  
  lst = ft_lstnew("amine");
  lst->next = ft_lstnew("zaml");
  lst->next->next = ft_lstnew("hmar");
  lst->next->next->next = ft_lstnew("mkelekh");
  ft_lstiter(lst, afficher);
}