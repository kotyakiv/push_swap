/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numundig.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:18:14 by ykot              #+#    #+#             */
/*   Updated: 2022/03/15 13:07:53 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numundig(unsigned long long num, int base)
{
	int	i;

	i = 0;
	while (num)
	{
		num /= base;
		i++;
	}
	return (i);
}
