/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertocaravantes <albertocaravantes@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:33:00 by albertocara       #+#    #+#             */
/*   Updated: 2020/12/09 14:38:29 by albertocara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while(i < nb)
	{
		result = result * (nb - i);
		i++;
	}
	return (result);
}
