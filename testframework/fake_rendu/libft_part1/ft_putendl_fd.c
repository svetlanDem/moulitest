#include <libft.h>
void	ft_putendl_fd(char const *s, int fd)
{
	(void)s;
	(void)fd;
	write(fd, "123", 1);
}
