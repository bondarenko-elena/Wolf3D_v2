#include "../includes/wolf3d.h"

char	**ft_tabledel_int(int **ret, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		free(ret[i]);
	free(ret);
	return (NULL);
}