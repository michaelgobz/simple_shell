#include "builtins.h"

/**
  * __exit - exits from shell
  * @info: arguments passed
  * Return: int
  */
<<<<<<< HEAD
int __exit(info_t* info)
{
	char** args = info->tokens + 1;
=======
int __exit(info_t *info)
{
	char **args = info->tokens + 1;
>>>>>>> 8b70825ebe3631919673c8d90baf8e18057b3f2c

	if (*args)
	{
		if (_isnumber(*args) && atou(*args) <= INT_MAX)
		{
			info->status = atou(*args);
		}
		else
		{
			perrorl_default(*info->argv, info->lineno, *args,
<<<<<<< HEAD
				*info->tokens, "Illegal number", NULL);
=======
					*info->tokens, "Illegal number", NULL);
>>>>>>> 8b70825ebe3631919673c8d90baf8e18057b3f2c
			info->status = 2;

			return (info->status);
		}
	}
	if (info->file)
		close(info->fileno);

	exit(free_info(info));
}
