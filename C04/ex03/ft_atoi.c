/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:40:34 by vegret            #+#    #+#             */
/*   Updated: 2022/07/14 19:59:20 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_start_char(char *str, int *negative)
{
	int	result;

	result = 0;
	*negative = 1;
	while (str[result] == ' ' || str[result] == '\t' || str[result] == '\n'
		|| str[result] == '\r' || str[result] == '\v' || str[result] == '\f')
		result++;
	while (str[result] == '+' || str[result] == '-')
		if (str[result++] == '-')
			*negative *= -1;
	return (result);
}

int	ft_atoi(char *str)
{
	int	result;
	int	negative;
	int	i;

	result = 0;
	i = get_start_char(str, &negative);
	while (str[i] <= '9' && str[i] >= '0')
		result = result * 10 + (str[i++] - '0');
	return (result * negative);
}
