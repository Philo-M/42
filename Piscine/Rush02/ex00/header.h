/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:41:08 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/31 23:24:45 by rbicanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putchar(char c);
char	*ft_open_read(char *dico);
void	ft_putstr(char *str);
void	ft_putstr_space_after(char *str);
char	*ft_strcat(char *dest, char *src);
void	ft_display(char *str, char **dico, int index);
void	ft_display_1(char *str, char **dico);
void	ft_display_2(char *str, char **dico);
void	ft_display_3(char *str, char **dico, int index);
int		ft_check_dico(char *str, char **dico);
char	**ft_split(char *str, char *charset);
char	**ft_decoup(char *str);
int		ft_strslen(char **strs);
int		power(int nb, int pow);
char	*itoa(int nb);
void	ft_putstrs(char **strs);
char	*ft_strncpy(char *dest, char *src, int n);
char	*ft_strcpy(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
int		ft_display_for_check(char *str, char **dico);
int		ft_display_for_check_1(char *str, char **dico);
int		ft_display_for_check_2(char *str, char **dico);
int		ft_display_for_check_3(char *str, char **dico);
void	free_memory(char **tab);
void	trim(char *str);
int		param_error(char *input);
int		valid_row(char *str);
int		valid_dico(char *str);

#endif
