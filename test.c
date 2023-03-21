#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int	fd2(char *str, char *arg)
{
	while (*str)
		write(2, str++, 1);
	if (arg)
		while (*arg)
			write(2, arg++, 1);
	write(2, "\n", 1);
	return (1);
}

int	ft_exec(char **av, int i, int tmp, char **env)
{
	av[i] = 0;
	dup2(tmp, 0);
	close(tmp);
	execve(av[0], av, env);
	return(fd2("error: cannot execute ", av[0]));
}

int	main(int ac, char **av, char **env)
{
	int	i = 0, pid = 0, fd[2], tmp = dup(0);

	(void)ac;
	while (av[i] && av[i] + 1)
	{
		av = &av[i] + 1;
		i = 0;
		while (av[i])
	}
}