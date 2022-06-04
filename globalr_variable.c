/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   globalr_variable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:57:26 by mfagri            #+#    #+#             */
/*   Updated: 2022/06/04 19:03:03 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	get_glo(int i)
{
	static int	j;

	if (i == 0)
		j = 0;
	else if (i == 1)
		j = 1;
	else
		return (j);
	return (j);
}

"
this function can be used instead of global variable.
 
if i==0
the function return 0
if i ==1
the function return 1
else
the function return the value stored in the static variable.

Static variables have a property of preserving their value even after they are out of their scope! Hence, static variables preserve their previous value in their previous scope and are not initialized again in the new scope. 
Syntax: 

static data_type var_name = var_value;
"