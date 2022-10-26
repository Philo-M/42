/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 09:36:31 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/30 16:50:26 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

char	*ft_cut_str_ini(int start, int end, char *src, char *dest);
char	*ft_ext_1(int essai, char *ext);
char	*ft_ext_2(int essai, char *ext);
char	*ft_ext_3(int essai, char *ext);
void	ft_cree_ext(char *src);
void	ft_fill(char *CU);
void	ft_ligne(char a, char b, char c);
char	*ft_extract(char *src, char *dest);

#endif
