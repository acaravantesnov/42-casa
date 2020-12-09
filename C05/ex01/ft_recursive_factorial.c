/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertocaravantes <albertocaravantes@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:39:03 by albertocara       #+#    #+#             */
/*   Updated: 2020/12/09 15:04:54 by albertocara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if (nb != 1)
		return(nb * ft_recursive_factorial(nb -1));
	else if(nb == 1)
		return (1);
	return (0);
}
