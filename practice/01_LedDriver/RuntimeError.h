/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RuntimeError.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 00:12:47 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/09 00:45:58 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUNTIMEERROR_H
# define RUNTIMEERROR_H

void	RuntimeError(const char *message, int parameter, \
						const char *file, int line);

# ifndef RUNTIME_ERROR
# define RUNTIME_ERROR(description, parameter)\
			RuntimeError(description, parameter, __FILE__, __LINE__)
# endif

#endif

