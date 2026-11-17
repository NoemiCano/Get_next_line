/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:56:21 by ncano-co          #+#    #+#             */
/*   Updated: 2026/11/17 13:00:29 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Hay que definir el buffer_size que vamos a tener (debemos tener uno por defecto o usar el que nos pasen por consola)
// read() nos va a devolver el numero de bytes leidos y el indicador de posición del fichero debe avanzar ese número de bytes
// Debe leer linea a linea y devolverlas una a una. La linea devuelta debe terminar con el \n exepto si ha llegado al final del archivo

char *get_next_line(int fd)
{
	
}

// Si hay un salto de línea, se debería devolver la línea actual. No hay que leer el archivo entero y luego procesar cada linea

// Se prohibe el uso de lseek
// Se prohib el uso de variables globales
// No se puede usar la libft
