/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertocaravantes <albertocaravantes@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:52:16 by albertocara       #+#    #+#             */
/*   Updated: 2020/12/09 15:04:54 by albertocara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if((nb == 0) && (power = 0))
	{
		return (1);
	}
	else
	{
		while(i <= power)
		{
			result = result * nb;
			i++;
		}
	}
	return (result);
}
