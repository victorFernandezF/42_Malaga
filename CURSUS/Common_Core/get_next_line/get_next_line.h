/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:51:49 by victofer          #+#    #+#             */
/*   Updated: 2022/10/10 18:37:01 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_EXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE=100
# endif

char	*get_next_line(int fd);

#endif