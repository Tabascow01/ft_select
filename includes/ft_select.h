
#ifndef FT_SELECT_H
# define FT_SELECT_H

#include "../libft/includes/libft.h"

typedef struct		s_arg
{
	int				id;
	struct s_arg	*next;
	struct s_arg	*prev;
	char			*ent;
}					t_arg;

typedef struct		s_err
{
	int				id;
	struct s_err	*next;
	struct s_err	*prev;
	int				errno;
	char			*error;
}					t_err;


int		ft_store_argv(t_arg *arg, char **argv, int argc);
void	error();

#endif
