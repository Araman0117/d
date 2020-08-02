
#ifndef DICT_H
# define DICT_H

typedef struct		s_dict
{
	struct s_dict	*next;
	void			*key;
	void			*value;
	int				triplet;
}					t_dict;
#endif
