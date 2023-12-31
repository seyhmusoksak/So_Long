/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soksak <soksak@42istanbul.com.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:42:58 by soksak            #+#    #+#             */
/*   Updated: 2024/01/05 14:29:49 by soksak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		read_map(argv[1]);
	}
	else
		write(1, "Usage : ./so_long <map_location>", 32);
}
