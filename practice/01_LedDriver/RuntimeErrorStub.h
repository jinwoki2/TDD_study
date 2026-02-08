/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RuntimeErrorStub.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 00:18:17 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/09 00:18:47 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUNTIMEERRORSTUB_H
# define RUNTIMEERRORSTUB_H

void		RuntimeErrorStub_Reset(void);
const char	*RuntimeErrorStub_GetLastError(void);
int			RuntimeErrorStub_GetLastParameter(void);

#endif