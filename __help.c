#include "builtins.h"

/**
 * __help - display help for builtins commands
 * @info: shell info
 * Return: status
 */
<<<<<<< HEAD
int __help(struct info* info)
{
	const builtin_t* bp = NULL;
	char* const* args = info->tokens + 1;
	const char* desc = NULL;
=======
int __help(struct info *info)
{
	const builtin_t *bp = NULL;
	char * const *args = info->tokens + 1;
	const char *desc = NULL;
>>>>>>> 8b70825ebe3631919673c8d90baf8e18057b3f2c
	size_t len = 0;

	if (*args)
	{
		info->status = EXIT_FAILURE;
		while (*args)
		{
			bp = get_builtin(*args);
			if (bp)
			{
				write(STDOUT_FILENO, bp->name, _strlen(bp->name));
				write(STDOUT_FILENO, ": ", 2);
				write(STDOUT_FILENO, bp->help, _strlen(bp->help));
				write(STDOUT_FILENO, "\n", 1);
				for (desc = bp->desc; (len = _strlen(desc)); desc += len + 1)
				{
					write(STDOUT_FILENO, "    ", 4);
					write(STDOUT_FILENO, desc, len);
					write(STDOUT_FILENO, "\n", 1);
				}
				info->status = EXIT_SUCCESS;
			}
			args += 1;
		}
		if (info->status == EXIT_FAILURE)
			perrorl_default(*info->argv, info->lineno, "No topics match",
<<<<<<< HEAD
				*info->tokens, *(args - 1), NULL);
=======
					*info->tokens, *(args - 1), NULL);
>>>>>>> 8b70825ebe3631919673c8d90baf8e18057b3f2c
		return (info->status);
	}
	info->status = EXIT_SUCCESS;
	for (bp = get_builtins(); bp->name; bp += 1)
	{
		write(STDOUT_FILENO, bp->help, _strlen(bp->help));
		write(STDOUT_FILENO, "\n", 1);
	}
	return (info->status);
}
