/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RuntimeErrorStub.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 00:26:01 by jinwoki2          #+#    #+#             */
/*   Updated: 2026/02/09 00:31:32 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RuntimeErrorStub.h"

static const char	*message = "No Error";
static int			parameter = -1;
static const char	*file = 0;
static int			line = -1;

void	RuntimeErrorStub_Reset(void)
{
	message = "No Error";
	parameter = -1;
}

void	RuntimeError(const char *m, int p, const char *f, int l)
{
	message = m;
	parameter = p;
	file = f;
	line = l;
}

const char	*RuntimeErrorStub_GetLastError(void)
{
	return (message);
}

int	RuntimeErrorStub_GetLastParameter(void)
{
	return (parameter);
}
