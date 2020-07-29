/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:09:16 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/16 17:33:35 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_reverse_alphabet(void)
{
	const char	b[26] = "abcdefghijklmnopqrstuvwxyz";
	char		c[26];
	int			d;

	d = 25;
	while (d >= 0)
	{
		c[25 - d] = b[d];
		d--;
	}
	write(1, c, 26);
}
