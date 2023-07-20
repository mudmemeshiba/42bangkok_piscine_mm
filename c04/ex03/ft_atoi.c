/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pputrasr <pputrasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 09:24:39 by pputrasr          #+#    #+#             */
/*   Updated: 2023/05/22 15:23:09 by pputrasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	ans;
	int	op;
	int	i;

	ans = 0;
	op = 1;
	i = 0;
	while (((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' '))
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			op = op * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans = ans * 10 + str[i] - '0';
		i++;
	}
	return (ans * op);
}
