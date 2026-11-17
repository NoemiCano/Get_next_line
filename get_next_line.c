/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:56:21 by ncano-co          #+#    #+#             */
/*   Updated: 2026/11/17 17:25:16 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// read() nos va a devolver el numero de bytes leidos y el indicador de posición del fichero debe avanzar ese número de bytes. En caso de error, devuelve -1.
// Debe leer linea a linea y devolverlas una a una. La linea devuelta debe terminar con el \n exepto si ha llegado al final del archivo
// 	ssize_t read(int fd, void *buf, size_t nbytes);

# include "get_next_line.h"

char read_file(int fd, char *remaining)
{
}

char *extract_line(char *remaining)
{
}

char update_remaining(char *remaining)
{
}

char *get_next_line(int fd)
{
	static char	*remaining; //Lo que sobra de la lectura
	char		*line; // Linea a devolver

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	remaining = read_file(fd, remaining);
	if (!remaining)
		return (NULL);
	line = extract_line(remaining);
	remaining = update_remaining(remaining);
	return (line);
}

// Si hay un salto de línea, se debería devolver la línea actual. No hay que leer el archivo entero y luego procesar cada linea

// Se prohibe el uso de lseek
// Se prohib el uso de variables globales
// No se puede usar la libft
