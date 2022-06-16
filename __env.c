#include "builtins.h"

/**
  * __env - displays environment
  * @info: arguments passed
  * Return: int
  */
<<<<<<< HEAD
int __env(info_t* info)
{
	env_t* var;
=======
int __env(info_t *info)
{
	env_t *var;
>>>>>>> 8b70825ebe3631919673c8d90baf8e18057b3f2c

	info->status = EXIT_SUCCESS;

	for (var = info->env; var; var = var->next)
	{
		if (var->key)
			write(STDOUT_FILENO, var->key, _strlen(var->key));
		write(STDOUT_FILENO, "=", 1);
		if (var->val)
			write(STDOUT_FILENO, var->val, _strlen(var->val));
		write(STDOUT_FILENO, "\n", 1);
	}
	return (info->status);
}
<<<<<<< HEAD
=======

>>>>>>> 8b70825ebe3631919673c8d90baf8e18057b3f2c
