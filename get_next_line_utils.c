/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:56:25 by ncano-co          #+#    #+#             */
/*   Updated: 2026/11/11 12:59:44 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Hay que definir el buffer_size que vamos a tener (debemos tener uno por defecto o usar el que nos pasen por consola)
// read() nos va a devolver el numero de bytes leidos y el indicador de posición del fichero debe avanzar ese número de bytes
// Debe leer linea a linea y devolverlas una a una. La linea devuelta debe terminar con el \n exepto si ha llegado al final del archivo
