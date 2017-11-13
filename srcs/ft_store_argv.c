#include "ft_select.h"

static t_arg	*ft_init_lstarg()
{
	t_arg	*arg;
	arg = (t_arg *)ft_memalloc(sizeof(t_arg));
	arg->id = -1;
	arg->next = NULL;
	arg->prev = NULL;
	arg->ent = NULL;
	return (arg);
}

static	t_arg	ft_new_lstarg(t_arg *arg)
{
	t_arg new_arg;


	if (arg->id >= 0)
	{
		new_arg.id = arg->id + 1;
		new_arg.prev = arg;
		arg->next = &new_arg;
	}
	else
		new_arg.id = 0;
	return (new_arg);
}

int		ft_store_argv(t_arg *arg,char **argv, int argc)
{
	int		i;
	int		j;
	t_arg	begin;

	if (argv[0] == NULL || argc < 2)
		return (0);
	i = 1;
	j = 0;
	arg = ft_init_lstarg();
	begin = arg[0];
	while (i < argc)
	{
		arg[j] = ft_new_lstarg(arg);
		arg->ent = ft_strnew(ft_strlen(argv[i]));
		arg->ent = ft_strcpy(arg->ent, argv[i]);
		i++;
		j++;
	}
	while (arg->next != NULL)
	{
		ft_printf("arg-id{%d}\n",arg->id);
		arg++;
	}
	return (0);
}
