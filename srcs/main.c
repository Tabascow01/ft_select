
#include "ft_select.h"

int		main(int argc, char *argv[])
{
	t_arg	*arg;

	ft_printf("argc{%d}\n", argc);

	if (argc < 1)
		return (0);
	arg = NULL;
	ft_store_argv(arg, argv, argc);

	while (arg != NULL)
	{
		ft_printf("id{%d} - ent{%s}\n", arg->id, arg->ent);
		arg++;
	}
	ft_printf("End of ft_select\n");
	return (0);
}
