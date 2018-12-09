/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 17:49:04 by ncollie           #+#    #+#             */
/*   Updated: 2018/12/08 17:50:13 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <strings.h>
# include <unistd.h>
# include "libft.h"
# define BUFF_SIZE 1

int		get_next_line(const int fd, char **line);
#endif
