/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:58:35 by ltrinchi          #+#    #+#             */
/*   Updated: 2023/10/20 13:19:12 by mdegraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inclds/JeanMiShell.h"

int g_val_rtn;

int	main(int ac, char **av, char **env)
{
	t_data	*data;

	(void)ac;
	(void)av;
	g_val_rtn = 0;
	data = malloc(sizeof(t_data));
	if (!data)
	{
		perror("Error:");
		return (EXIT_FAILURE);
	}
	data->lstenv = ft_set_lstenv(env);
	data->env_start = data->lstenv;
	ft_prompt(data);
	ft_free_data(data);
	return (0);
}
