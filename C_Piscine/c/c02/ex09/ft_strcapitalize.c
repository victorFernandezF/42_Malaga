/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:30:51 by victofer          #+#    #+#             */
/*   Updated: 2022/08/22 11:09:35 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	may;

	i = 0;
	while (str[i] != '\0')
	{	
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i];
		else if ((str[i] >= 48) && (str[i] <= 57))
			str[i] = str[i];
		else if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		else if ((str[i] >= 33) && (str[i] <= 47) && (str[i + 1] != ' '))
			str[i + 1] -= 32;
		else if ((str[i] >= 91) && (str[i] <= 95) && (str[i + 1] != ' '))
			str[i + 1] -= 32;
		else if (str[i] == ' ')
			if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
				str[i + 1] -= 32;
		i++;
	}
	return (str);
}
