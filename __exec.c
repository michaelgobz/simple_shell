#include "builtins.h"

/**
 * __exec - replace the running shell with a new program
 * @info: arguments passed
 * Return: int
 */
<<<<<<< HEAD
int __exec(info_t* info)
{
	char* exe, ** args = info->tokens + 1, ** env = NULL;
=======
int __exec(info_t *info)
{
	char *exe, **args = info->tokens + 1, **env = NULL;
>>>>>>> 8b70825ebe3631919673c8d90baf8e18057b3f2c

	if (!*args)
		return ((info->status = EXIT_SUCCESS));

	info->tokens = args;
	args = arrdup(args);

	if (_strchr(*args, '/') == -1)
	{
		free_list(&info->path);
		info->path = str_to_list(get_dict_val(info->env, "PATH"), ':');
		exe = search_path(info, info->path);
	}
	else
	{
		exe = _strdup(*args);
	}
	info->tokens -= 1;

	if (access(exe, X_OK) == 0)
	{
		env = dict_to_env(info->env);

		free_info(info);
		execve(exe, args, env);
		perrorl_default(*info->argv, info->lineno, "Not found",
<<<<<<< HEAD
			*info->tokens, *args, NULL);
=======
				*info->tokens, *args, NULL);
>>>>>>> 8b70825ebe3631919673c8d90baf8e18057b3f2c
		free(exe);
		free_tokens(&args);
		free_tokens(&env);
		exit(127);
	}
	perrorl_default(*info->argv, info->lineno, "Permission denied",
<<<<<<< HEAD
		*info->tokens, *args, NULL);
=======
			*info->tokens, *args, NULL);
>>>>>>> 8b70825ebe3631919673c8d90baf8e18057b3f2c
	free(exe);
	free_tokens(&args);
	free_info(info);
	exit(126);
}
