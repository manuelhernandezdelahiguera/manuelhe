/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelhe <manuelhe@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 15:46:56 by manuelhe          #+#    #+#             */
/*   Updated: 2024/07/27 20:45:07 by manuelhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int fila, int columna)
{
	if (fila <= 0 || columna <= 0)
		return ;
	int	i;
	int	j;

	i = 0;
	while (i < columna)
	{
		j = 0;
		while (j < fila)
		{
			if ((i == 0 || i == columna) && (j == 0))
				ft_putchar('A');
			else if ((j == 0 || j == columna) && (i == 0 || i == fila))
				ft_putchar('C');
			else if ((i == 0 || i == columna - 1) || (j == 0 || j == fila - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
