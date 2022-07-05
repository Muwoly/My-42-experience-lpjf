#include "get_next_line.h"

int	main(void)
{
	int	fd;

	fd = open("dic.txt", O_RDONLY);
	if (fd == -1)
		return (1);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	if (get_next_line(fd) == NULL)
		printf("\nit's ok\n");
	close(fd);
	return (0);
}
