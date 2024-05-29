/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalsadi- <oalsadi-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:11:10 by oalsadi-          #+#    #+#             */
/*   Updated: 2024/05/18 18:11:10 by oalsadi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)//encabezado
//{	//inicializamos variables
	//si el file descriptor es menor a 0 o el buffer es menor a 1
		//retornamos NULL
	//contador de caracteres leidos
	//inicializamos un buffer
	//inicializamos una cadena
	//mientras el buffer sea mayor a 0
		//leemos el file descriptor
		//si no se leyo nada
			//liberamos memoria
			//retornamos NULL
		//si se leyo algo
			//guardamos en una cadena la linea leida
			//si se encontro un salto de linea
				//guardamos en una cadena la linea leida
				//liberamos memoria
				//retornamos la linea leida
		//si no se encontro un salto de linea
			//guardamos en una cadena la linea leida
		//leer asta encontrar un salto de linea o final del archivo
	//guardamos en una cadena la linea leida strncpy
	//si llegas al final del archivo o no se leyo nada
		//liberamos memoria
		//retornamos NULL
	//si se leyo algo
		//guardamos en una cadena la linea leida
		//liberamos memoria
		//retornamos la linea leida
//}

//encabezado de la funcion que encuentra el caracter de salto de linea

size_t	strlen(const *str)// encabezado buscamos la longitud de una cadena
//inicializamos un contador 
{
	size_t	len;

	len = 0;
	if(str[len] == NULL)
	{
		return (NULL);
	}
	else
	{
		len++;
	}
	return (len);
}
//si la cadena es diferente de NULL
	//Mientras sea asi
		// incrementamos el contador
	//retornamos el contador