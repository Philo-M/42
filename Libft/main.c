/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:15:24 by pmandel           #+#    #+#             */
/*   Updated: 2021/12/16 13:20:25 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/// -------------------------------------------------------------------------
/// ft_bzero : void	ft_bzero(void *s, size_t n)

// int	main(void)
// {
// 	char	*str;
// 	char	*str_ft;
// 	size_t	n = 3;

// 	str = strdup("hello");
// 	str_ft = strdup("olleh");
// 	printf("\n");
// 	printf("str est : %s\n", str);
// 	bzero((void *)str, n);
// 	printf("str est : %s\n", str);
// 	printf("str_ft est : %s\n", str_ft);
// 	ft_bzero((void *)str_ft, n);
// 	printf("str_ft est : %s\n", str_ft);

// 	str = strdup("");
// 	str_ft = strdup("");
// 	printf("\n");
// 	printf("str est : %s\n", str);
// 	bzero((void *)str, n);
// 	printf("str est : %s\n", str);
// 	printf("str_ft est : %s\n", str_ft);
// 	ft_bzero((void *)str_ft, n);
// 	printf("str_ft est : %s\n", str_ft);
// 	printf("\n");
// 	return(0);
// }


/// -------------------------------------------------------------------------
/// ft_isalnum : int ft_isalnum(int c)

// int	main(void)
// {
// 	char	c;

// 	printf("\n");

// 	c = 'b';
// 	printf("c : %d\n",c);
// 	printf("isalnum : %d\n", isalnum(c));
// 	printf("ft_isalnum : %d\n", ft_isalnum(c));

// 	printf("\n");
	
// 	c = '1';
// 	printf("c : %d\n",c);
// 	printf("isalnum : %d\n", isalnum(c));
// 	printf("ft_isalnum : %d\n", ft_isalnum(c));

// 	printf("\n");

// 	c = ')';
// 	printf("c : %d\n",c);
// 	printf("isalnum : %d\n", isalnum(c));
// 	printf("ft_isalnum : %d\n", ft_isalnum(c));

// 	printf("\n");

// 	return(0);
// }


/// -------------------------------------------------------------------------
/// ft_isalpha : int ft_isalpha(int c)

// int	main(void)
// {
// 	int	c;

// 	printf("\n");

// 	c = 'b';
// 	printf("c : %d\n",c);
// 	printf("isalpha : %d\n", isalpha(c));
// 	printf("ft_isalpha : %d\n", ft_isalpha(c));

// 	printf("\n");

// 	c = '1';
// 	printf("c : %d\n",c);
// 	printf("isalpha : %d\n", isalpha(c));
// 	printf("ft_isalpha : %d\n", ft_isalpha(c));

// 	printf("\n");

// 	c = ')';
// 	printf("c : %d\n",c);
// 	printf("isalpha : %d\n", isalpha(c));
// 	printf("ft_isalpha : %d\n", ft_isalpha(c));

// 	printf("\n");

// 	return(0);
// }


/// -------------------------------------------------------------------------
/// ft_isascii : int ft_isascii(int c)

// int	main(void)
// {
// 	int c;

// 	printf("\n");

// 	c = 68;
// 	printf("c : %d\n",c);
// 	printf("isascii : %d\n", isascii(c));
// 	printf("ft_isascii : %d\n", ft_isascii(c));

// 	printf("\n");

// 	c = 127;
// 	printf("c : %d\n",c);
// 	printf("isascii : %d\n", isascii(c));
// 	printf("ft_isascii : %d\n", ft_isascii(c));

// 	printf("\n");

// 	c = 128;
// 	printf("c : %d\n",c);
// 	printf("isascii : %d\n", isascii(c));
// 	printf("ft_isascii : %d\n", ft_isascii(c));

// 	printf("\n");

// 	return(0);
// }


/// -------------------------------------------------------------------------
/// ft_isdigit : int ft_isdigit(int c)

// int	main(void)
// {
// 	char	c;

// 	printf("\n");

// 	c = 'b';
// 	printf("c : %d\n",c);
// 	printf("isdigit : %d\n", isdigit(c));
// 	printf("ft_isdigit : %d\n", ft_isdigit(c));

// 	printf("\n");

// 	c = '1';
// 	printf("c : %d\n",c);
// 	printf("isdigit : %d\n", isdigit(c));
// 	printf("ft_isdigit : %d\n", ft_isdigit(c));

// 	printf("\n");

// 	return(0);
// }


/// -------------------------------------------------------------------------
/// ft_isprint : int ft_isprint(int c)

// int	main(void)
// {
// 	char	c;

// 	printf("\n");

// 	c = 30;
// 	printf("c : %d\n",c);
// 	printf("isprint : %d\n", isprint(c));
// 	printf("ft_isprint : %d\n", ft_isprint(c));

// 	printf("\n");

// 	c = 'b';
// 	printf("c : %d\n",c);
// 	printf("isprint : %d\n", isprint(c));
// 	printf("ft_isprint : %d\n", ft_isprint(c));

// 	return(0);
// }


/// -------------------------------------------------------------------------
/// ft_memcpy : void	*ft_memcpy(void *dest, const void *src, size_t n)

// int	main(void)
// {
// 	// char	src_c[6] = "hello";
// 	// char	dest_c[6] = "bobon";
// 	// char	src_c_ft[6] = "olleh";
// 	// char	dest_c_ft[6] = "nobob";
// 	// char	*src_c = '\0';
// 	// char	*dest_c = '\0';
// 	// char	*src_c_ft = '\0';
// 	// char	*dest_c_ft = '\0';
// 	// size_t	n = 3;


// 	memcpy((void *)0, (void *)0, 3);
// 	// ft_memcpy(NULL, NULL, 3);

// 	// printf("src_c est : %s\n", src_c);
// 	// printf("dest_c est : %s\n", dest_c);
// 	// printf("memcpy : %p\n", memcpy((void *)dest_c, (void *)src_c, n));
// 	// printf("src_c est : %s\n", src_c);
// 	// printf("dest_c est : %s\n", dest_c);
// 	// printf("\n");
// 	// printf("src_c_ft est : %s\n", src_c_ft);
// 	// printf("dest_c_ft est : %s\n", dest_c_ft);
// 	// printf("ft_memcpy : %p\n", ft_memcpy((void *)dest_c_ft, (void *)src_c_ft, n));
// 	// printf("src_c_ft est : %s\n", src_c_ft);
// 	// printf("dest_c_ft est : %s\n", dest_c_ft);
// 	return(0);
// }


/// -------------------------------------------------------------------------
/// ft_memmove : void	*ft_memmove(void *dest, const void *src, size_t n)

// int	main(void)
// {
// 	size_t	n = 5;

// 	// char	*src_c = NULL;
// 	char	src_c[10] = "";
// 	// char	dest_c[10] = "hello";
// 	// char	dest_c[6] = "hello";
// 	char	*dest_c;

// 	dest_c = src_c + 1;
// 	printf("src_c est : %s\n", src_c);
// 	printf("dest_c est : %s\n", dest_c);
// 	printf("memmove : %p\n", memmove((void *)dest_c, (void *)src_c, n));
// 	printf("src_c est : %s\n", src_c);
// 	printf("dest_c est : %s\n", dest_c);
// 	printf("\n");

// // 	// char	src_c_ft[1] = NULL;
// // 	char	src_c_ft[10] = "";
// // 	char	*dest_c_ft;
// // 	// char	dest_c_ft[6] = "nobob";

// // 	dest_c_ft = src_c_ft + 1;
// // 	printf("src_c_ft est : %s\n", src_c_ft);
// // 	printf("dest_c_ft est : %s\n", dest_c_ft);
// // 	printf("ft_memmove : %p\n", ft_memmove((void *)dest_c_ft, (void *)src_c_ft, n));
// // 	printf("src_c_ft est : %s\n", src_c_ft);
// // 	printf("dest_c_ft est : %s\n", dest_c_ft);
// 	return(0);
// }


/// -------------------------------------------------------------------------
/// ft_memset : void	*ft_memset(void *s, int c, size_t n)

// int	main(void) // 
// {
// 	char	str[6] = "hello";
// 	char	str_ft[6] = "olleh";
// 	 int	c = '-';
// 	size_t	n = sizeof(char) * 6;

// 	printf("str est : %s\n", str);
// 	printf("memset : %p\n", memset((void *)str, c, n));
// 	printf("str est : %s\n", str);
// 	printf("\n");
// 	printf("str_ft est : %s\n", str_ft);
// 	printf("ft_memset : %p\n", ft_memset((void *)str_ft, c, n));
// 	printf("str_ft est : %s\n", str_ft);
// 	return(0);
// }

// int	main(void)
// {
// 	int	str[] = {12, 34, 56};
// 	int	str_ft[] = {65, 43, 21};
// 	 int	c = 99;
// 	size_t	n = sizeof(int) * 2;
// 	int	j = -1;

// 	while (++j < 3)
// 		printf("str est : %d\n", str[j]);
// 	printf("memset : %p\n", memset((void *)str, c, n));
// 	j = -1;
// 	while (++j < 3)
// 		printf("str est : %d\n", str[j]);
// 	printf("\n");
// 	j = -1;
// 	while (++j < 3)
// 		printf("str_ft est : %d\n", str_ft[j]);
// 	printf("ft_memset : %p\n", ft_memset((void *)str_ft, c, n));
// 	j = -1;
// 	while (++j < 3)
// 		printf("str_ft est : %d\n", str_ft[j]);
// 	return(0);
// }


/// -------------------------------------------------------------------------
/// ft_strlcpy : size_t	ft_strlcpy(char *dst, const char *src, size_t size)

// int	main(void)
// {
// 	char	dst[20] = "abc";
// 	char	ft_dst[20] = "abc";
// 	char	src[] = "hello";
// 	size_t size = 3;

// 	printf("dst : %s\n", dst);
// 	printf("strlcpy : %lx\n", strlcpy(dst, src, size));
// 	printf("dst : %s\n\n", dst);

// 	printf("ft_dst : %s\n", ft_dst);
// 	printf("ft_strlcpy : %lx\n", ft_strlcpy(ft_dst, src, size));
// 	printf("ft_dst : %s\n", ft_dst);

// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_strlen : size_t	ft_strlen(const char *str)

// int	main(void)
// {
// 	char	*str = "bonjourtoi";

// 	printf("strlen : %d\n", strlen(str));
// 	printf("ft_strlen : %d\n", ft_strlen(str));
// 	return(0);
// }


/// -------------------------------------------------------------------------
/// ft_strlcat : size_t	ft_strlcat(char *dst, const char *src, size_t size)

// int	main(void)
// {
// 	char	dst[50] = "abcdefghijklmno";
// 	char	dst_ft[50] = "abcdefghijklmno";
// 	char	*src;
// 	size_t	size;

// 	src = "lorem ipsum dolor sit amet";
// 	size = 5 ;
// 	printf("Le size est : %ld$\n", size);
// 	printf("Le return est : %ld$\n", strlcat(dst, src, size));
// 	printf("Le ft_return est : %ld$\n", ft_strlcat(dst_ft, src, size));
// 	printf("Le dest est : %s$\n", dst);
// 	printf("Le ft_dest est : %s$", dst_ft);

// 	// char	*dest;

// 	// memset(dest, 'r', 15);
// 	// ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
// 	// write(1, "\n", 1);
// 	// write(1, dest, 15);


// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_toupper : int ft_toupper(int c)

// int	main (void)
// {
// 	int	c;

// 	c = 'a';
// 	printf("Le toupper est : %c", ft_toupper(c));
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_tolower : int ft_tolower(int c);

// int	main (void)
// {
// 	int	c;

// 	c = 'u';
// 	printf("Le tolower est : %c", ft_tolower(c));
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_strchr : char	*ft_strchr(const char *s, int c)

// int	main(void)
// {
// 	char	s[] = "abcf";
// 	// char	s[] = {1, 2, 3, 4, 5};
// 	int		c = '\0';
// 	size_t		len_m = sizeof(s);

// 	printf("len_m est : %ld\n", len_m);
// 	printf("Le strchr est : %p\n", strchr(s, c));
// 	printf("Le ft_strchr est : %p\n", ft_strchr(s, c));
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// char	*ft_strrchr(const char *s, int c)

// int	main(void)
// {
// 	char	s[6] = "abcdce";
// 	 int	c = 'c';

// 	printf("Le strchr est : %p\n", strchr(s, c));
// 	printf("Le ft_strchr est : %p\n", ft_strchr(s, c));
// 	printf("Le strrchr est : %p\n", strrchr(s, c));
// 	printf("Le ft_strrchr est : %p\n", ft_strrchr(s, c));
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_strncmp : int ft_strncmp(const char *s1, const char *s2, size_t n)

// int	main(void)
// {
// 	char	*str1 = "tevt\200";
// 	char	*str2 = "test\0";
// 	size_t	n = 6;

// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// 	printf("strncmp : %d\n", strncmp(str1, str2, n));
// 	printf("ft_strncmp : %d\n", ft_strncmp(str1, str2, n));
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_memchr : void	*ft_memchr(const void *s, int c, size_t n)

// int	main(void)
// {
// 	// unsigned char	str[] = "abcde";
// 	char str[] = {0, 1, 2 ,3 ,4 ,5};
// 	int	c = 4;
// 	int	n = 6;

// 	printf("sizeof(tab) est : %ld\n", sizeof(str));
// 	printf("Le memchr est : %s\n", (char *)memchr((void *)str, c, n));
// 	printf("L'adresse de memchr est : %p\n", memchr((void *)str, c, n));
// 	printf("Le ft_memchr est : %s\n", (char *)ft_memchr((void *)str, c, n));
// 	printf("L'adresse de ft_memchr est : %p\n", ft_memchr((void *)str, c, n));

// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_memcmp : int ft_memcmp(const void *s1, const void *s2, size_t n)

// int	main(void)
// {
// 	// unsigned char	str1[5] = "bonk";
// 	// unsigned char	str2[5] = "bonm";
// 	char			str1[] = {0, 0, 127, 0};
// 	char			str2[] = {0, 0, 42, 0};
// 	size_t			n = 4;

// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// 	printf("memcmp : %d\n", memcmp((void *)str1, (void *)str2, n));
// 	printf("ft_memcmp : %d\n", ft_memcmp((void *)str1, (void *)str2, n));
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_strnstr : char	*ft_strnstr(const char *big, const char *little, size_t len)

// int	main(void)
// {
// 	char	big[30] = "aaabcabcd";
// 	char	little[10] = "cd";
// 	size_t	len = 8;

// 	printf("strnstr : %s\n", strnstr(big, little, len));
// 	printf("ft_strnstr : %s\n", ft_strnstr(big, little, len));
// }


/// -------------------------------------------------------------------------
/// ft_atoi : int ft_atoi(const char *nptr)

// int	main(void)
// {
// 	char	*nptr;
	
// 	nptr = "2147483647";
// 	printf ("\nnptr est : %s\n", nptr);
// 	printf("le atoi de est : %d\n", atoi(nptr));
// 	printf("le ft_atoi est : %d\n", ft_atoi(nptr));

// 	nptr = "2147483648";
// 	printf ("\nnptr est : %s\n", nptr);
// 	printf("le atoi de est : %d\n", atoi(nptr));
// 	printf("le ft_atoi est : %d\n", ft_atoi(nptr));
	
// 	nptr = "-2147483648";
// 	printf ("\nnptr est : %s\n", nptr);
// 	printf("le atoi de est : %d\n", atoi(nptr));
// 	printf("le ft_atoi est : %d\n", ft_atoi(nptr));

// 	nptr = "-2147483649";
// 	printf ("\nnptr est : %s\n", nptr);
// 	printf("le atoi de est : %d\n", atoi(nptr));
// 	printf("le ft_atoi est : %d\n", ft_atoi(nptr));

// 	nptr = "";
// 	printf ("\nnptr est : %s\n", nptr);
// 	printf("le atoi de est : %d\n", atoi(nptr));
// 	printf("le ft_atoi est : %d\n", ft_atoi(nptr));
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_calloc : void *ft_calloc(size_t nmemb, size_t size)

// int	main(void)
// {
// 	size_t	nmemb;
// 	size_t	size;
// 	char	*str;
// 	char	*str_ft;
// 	size_t	i;

// 	printf("\n");

// 	nmemb = 2;
// 	size = 4;
// 	printf("nmemb est : %ld\n", nmemb);
// 	printf("size est : %ld\n", size);

// 	printf("\n");

// 	str = (char *)calloc(nmemb, size);
// 	if (str == NULL)
// 		printf ("c'est nul\n");
// 	printf("adresse calloc est : %p\n", str);
// 	printf("size of calloc est : %ld\n", sizeof(str));
// 	printf("contenu de str est : %s\n", str);
// 	i = 0;
// 	while ((++i - 1) < nmemb * size)
// 		str[i - 1] = 'a';
// 	printf("contenu de str est : %s\n", str);

// 	printf("\n");

// 	str_ft = (char *)ft_calloc(nmemb, size);
// 	if (str_ft == NULL)
// 		printf ("c'est nul\n");
// 	printf("adresse ft_calloc est : %p\n", str_ft);
// 	printf("size of ft_calloc est : %ld\n", sizeof(str_ft));
// 	printf("contenu de str_ft est : %s\n", str_ft);
// 	i = 0;
// 	while ((++i - 1) < nmemb * size)
// 		str_ft[i - 1] = 'a';
// 	printf("contenu de str_ft est : %s\n", str_ft);

// 	printf("\n");

// 	nmemb = 0;
// 	size = 4;
// 	printf("nmemb est : %ld\n", nmemb);
// 	printf("size est : %ld\n", size);

// 	printf("\n");

// 	str = (char *)calloc(nmemb, size);
// 	if (str == NULL)
// 		printf ("c'est nul\n");
// 	printf("adresse calloc est : %p\n", str);
// 	printf("size of calloc est : %ld\n", sizeof(str));
// 	printf("contenu de str est : %s\n", str);
// 	i = 0;
// 	while ((++i - 1) < nmemb * size)
// 		str[i - 1] = 'a';
// 	printf("contenu de str est : %s\n", str);

// 	printf("\n");

// 	str_ft = (char *)ft_calloc(nmemb, size);
// 	if (str_ft == NULL)
// 		printf ("c'est nul\n");
// 	printf("adresse ft_calloc est : %p\n", str_ft);
// 	printf("size of ft_calloc est : %ld\n", sizeof(str_ft));
// 	printf("contenu de str_ft est : %s\n", str_ft);
// 	i = 0;
// 	while ((++i - 1) < nmemb * size)
// 		str_ft[i - 1] = 'a';
// 	printf("contenu de str_ft est : %s\n", str_ft);

// 	printf("\n");

// 	nmemb = 2;
// 	size = 0;
// 	printf("nmemb est : %ld\n", nmemb);
// 	printf("size est : %ld\n", size);

// 	printf("\n");

// 	str = (char *)calloc(nmemb, size);
// 	if (str == NULL)
// 		printf ("c'est nul\n");
// 	printf("adresse calloc est : %p\n", str);
// 	printf("size of calloc est : %ld\n", sizeof(str));
// 	printf("contenu de str est : %s\n", str);
// 	i = 0;
// 	while ((++i - 1) < nmemb * size)
// 		str[i - 1] = 'a';
// 	printf("contenu de str est : %s\n", str);

// 	printf("\n");

// 	str_ft = (char *)ft_calloc(nmemb, size);
// 	if (str_ft == NULL)
// 		printf ("c'est nul\n");
// 	printf("adresse ft_calloc est : %p\n", str_ft);
// 	printf("size of ft_calloc est : %ld\n", sizeof(str_ft));
// 	printf("contenu de str_ft est : %s\n", str_ft);
// 	i = 0;
// 	while ((++i - 1) < nmemb * size)
// 		str_ft[i - 1] = 'a';
// 	printf("contenu de str_ft est : %s\n", str_ft);

// 	printf("\n");

// 	nmemb = 0;
// 	size = 0;
// 	printf("nmemb est : %ld\n", nmemb);
// 	printf("size est : %ld\n", size);

// 	printf("\n");

// 	str = (char *)calloc(nmemb, size);
// 	if (str == NULL)
// 		printf ("c'est nul\n");
// 	printf("adresse calloc est : %p\n", str);
// 	printf("size of calloc est : %ld\n", sizeof(str));
// 	printf("contenu de str est : %s\n", str);
// 	i = 0;
// 	while ((++i - 1) < nmemb * size)
// 		str[i - 1] = 'a';
// 	printf("contenu de str est : %s\n", str);

// 	printf("\n");

// 	str_ft = (char *)ft_calloc(nmemb, size);
// 	if (str_ft == NULL)
// 		printf ("c'est nul\n");
// 	printf("adresse ft_calloc est : %p\n", str_ft);
// 	printf("size of ft_calloc est : %ld\n", sizeof(str_ft));
// 	printf("contenu de str_ft est : %s\n", str_ft);
// 	i = 0;
// 	while ((++i - 1) < nmemb * size)
// 		str_ft[i - 1] = 'a';
// 	printf("contenu de str_ft est : %s\n", str_ft);

// 	printf("\n");

// 	nmemb = 1000000;
// 	size = 1000000;
// 	printf("nmemb est : %ld\n", nmemb);
// 	printf("size est : %ld\n", size);

// 	printf("\n");

// 	// str = (char *)calloc(nmemb, size);
// 	// if (str == NULL)
// 	// 	printf ("c'est nul\n");
// 	// printf("adresse calloc est : %p\n", str);
// 	// printf("size of calloc est : %ld\n", sizeof(str));
// 	// printf("contenu de str est : %s\n", str);
// 	// i = 0;
// 	// while ((++i - 1) < nmemb * size)
// 	// 	str[i - 1] = 'a';
// 	// printf("contenu de str est : %s\n", str);

// 	// printf("\n");

// 	// str_ft = (char *)ft_calloc(nmemb, size);
// 	// if (str_ft == NULL)
// 	// 	printf ("c'est nul\n");
// 	// printf("adresse ft_calloc est : %p\n", str_ft);
// 	// printf("size of ft_calloc est : %ld\n", sizeof(str_ft));
// 	// printf("contenu de str_ft est : %s\n", str_ft);
// 	// i = 0;
// 	// while ((++i - 1) < nmemb * size)
// 	// 	str_ft[i - 1] = 'a';
// 	// printf("contenu de str_ft est : %s\n", str_ft);

// 	// printf("\n");

// 	return (0);
// }


/// --------------------------------------------
/// ft_strdup : char	*ft_strdup(const char *s)

// int	main(void)
// {
// 	char	s[6] = "hello";
// 	char	*str = strdup(s);
// 	char	*str_ft = ft_strdup(s);

// 	printf("adresse s est : %p\n", s);
// 	printf("contenu s est : %s\n", s);
// 	printf("adresse str est : %p\n", str);
// 	printf("contenu str est : %s\n", str);
// 	printf("adresse str_ft est : %p\n", str_ft);
// 	printf("contenu str_ft est : %s\n", str_ft);

// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_substr : char	*ft_substr(char const *s, unsigned int start, size_t len)

// int	main(void)
// {
// 	char const	*s = "tripouille";
// 	unsigned int	start = 3;
// 	size_t	len = 2;
// 	char	*str;

// 	str = ft_substr(s, start, len);
// 	printf("s est : %s\n", s);
// 	printf("str est : %s\n", str);
// 	return (0);
// }

// int	main(void)
// {
// 	char	str[] = "lorem ipsum dolor sit amet";
// 	char	*strsub;
// 	char *bullshit;

// 	if (!(strsub = ft_substr(str, 400, 30)))
// 		printf("NULL");
// 	else
// 	{
// 		bullshit = (char *)&strsub[30];
// 		bullshit = "FULL BULLSHIT";
// 		if (strsub)
// 			printf("strsub est : %s", strsub);
// 		else
// 			printf("rip");
// 	}
// 	if (str == strsub)
// 		printf("\nA new string was not returned");
// 	(void)bullshit;

// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_strjoin : char	*ft_strjoin(char const *s1, char const *s2)

// int	main(void)
// {
// 	char	*s1 = "hel";
// 	char	*s2 = "lo";

// 	printf("le join est : %s", ft_strjoin(s1, s2));
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_strtrim : char *ft_strtrim(char const *s1, char const *set)

// int	main(void)
// {
// 	char	*s1 = "   xxx   xxx";
// 	char	*set = " x";

// 	printf("le trim est : %s", ft_strtrim(s1, set));

// 	return (0);
// }

/// -------------------------------------------------------------------------
/// ft_split : char	**ft_split(char const *s, char c)

// static int	ft_nb_of_words(const char *str, char c)
// {
// 	int	count;
// 	int	i;

// 	if ((char)(str[0]) == '\0')
// 		return (0);
// 	if (c == '\0')
// 		return (1);
// 	count = 0;
// 	i = 0;
// 	while (str[i] && str[i] == c)
// 		i++;
// 	if (str[i] == '\0')
// 		return (0);
// 	while (str[i])
// 	{
// 		if (str[i] == c && str[i + 1] != c && str[i + 1])
// 			count++;
// 		i++;
// 	}
// 	return (count + 1);
// }

// int	main(void)
// {
// 	char	*str = "--1-2--3---4----5-----42";
// 	char	c = '-';
// 	int	i;
// 	char	**strs = ft_split(str, c);

// 	// printf("ft_nb_words est : %d\n", ft_nb_of_words(str, c));
// 	i = 0;
// 	while (strs[i])
// 	{
// 		printf ("%s\n", strs[i]);
// 		i++;
// 	}
// 	// if (strs[0] == NULL)
// 	// 	printf("strs[0] est NULL");
// 	// else
// 	// 	printf("strs[0] n'est pas NULL");
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_itoa : char	*ft_itoa(int n)

// int	main(void)
// {
// 	int	n;
// 	char	*str;
	
// 	printf("\n");

// 	n = 10;
// 	str = ft_itoa(n);
// 	printf("n est : %d\n", n);
// 	printf("str est : %s\n", str);

// 	printf("\n");

// 	n = -10;
// 	str = ft_itoa(n);
// 	printf("n est : %d\n", n);
// 	printf("str est : %s\n", str);

// 	printf("\n");

// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_strmapi : char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))

// static char	ft_plusn(unsigned int n, char c)
// {
// 	// n = 4;
// 	c = c + n;
// 	return (c);
// }

// int	main(void)
// {
// 	char const *s = "021345";
// 	char	*str;

// 	str = ft_strmapi(s, ft_plusn);
// 	printf("str est : %s\n", str);
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_striteri : void ft_striteri(char *s, void (*f)(unsigned int, char*))

// static void	ft_printother(unsigned int n, char *str)
// {
// 	(void)n;
// 	// printf("1. str est : %s\n", str);

// 	if (*str >= 'a' && *str <= 'z')
// 		*str = *str - 32;
// 	else if (*str >= 'A' && *str <= 'Z')
// 		*str = *str + 32;
// }

// int	main(void)
// {
// 	char	*s = "aBcdE";
// 	char	*str;

// 	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
// 	ft_strlcpy(str, s, 6);
// 	printf("2. str est %s\n", str);
// 	ft_striteri(str, ft_printother);
// 	printf("3. str est %s\n", str);
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_putchar_fd : void	ft_putchar_fd(char c, int fd)

// int	main(void)
// {
// 	char	c = 'y';
// 	int		fd;
	
// 	fd = open("../z-old/ft_putchar_fd_test.txt", O_RDWR);
// 	ft_putchar_fd(c, fd);
// 	close(fd);
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_putstr_fd : void	ft_putstr_fd(char *s, int fd)

// int	main(void)
// {
// 	char	*s = "hello";
// 	int		fd;
	
// 	fd = open("../z-old/ft_putstr_fd_test.txt", O_RDWR);
// 	ft_putstr_fd(s, fd);
// 	close(fd);
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_putendl_fd : void	ft_putendl_fd(char *s, int fd)

// int	main(void)
// {
// 	char	*s = "hello";
// 	int		fd;
	
// 	fd = open("../z-old/ft_putendl_fd_test.txt", O_RDWR);
// 	ft_putendl_fd(s, fd);
// 	close(fd);
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_putnbr_fd : void	ft_putnbr_fd(int n, int fd)

// int	main(void)
// {
// 	int	n = 789745;
// 	int fd;

// 	fd = open("../z-old/ft_putnbr_fd_test.txt", O_RDWR);
// 	ft_putnbr_fd(n, fd);
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_lstnew : t_list *ft_lstnew(void *content)

// int	main(void)
// {
// 	t_list	*new;
// 	char	str[5] = "abcd";

// 	new = ft_lstnew((void *)str);
// 	printf("content : %s\n", (char *)(new->content));
// 	printf("adresse de next : %p\n", new->next);
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_lstadd_front : void ft_lstadd_front(t_list **alst, t_list *new)

//-Version 1

// int	main(void)
// {

// 	t_list	*lst;
// 	t_list	*element1;
// 	t_list	*element2;
// 	char	*str0;
// 	char	*str1;
// 	char	*str2;
// 	t_list	*new = ft_lstnew(strdup("mnoq"));

// 	// // lst = (t_list*)malloc(sizeof(t_list ));
// 	// // if (lst == NULL)
// 	// // 	return (0);
// 	str0 = ft_strdup("origin");
// 	str1 = ft_strdup("elem1");
// 	str2 = ft_strdup("elem2");
// 	lst = ft_lstnew((void *)str0);
// 	element1 = ft_lstnew((void *)str1);
// 	element2 = ft_lstnew((void *)str2);
// 	ft_lstadd_back(&lst, element1);
// 	ft_lstadd_back(&lst, element2);

// 	// t_list	*lst, *element1, *element2;

// 	// lst = ft_lstnew(ft_strdup("Bonjour"));
// 	// lst->next = ft_lstnew(ft_strdup("comment"));
// 	// lst->next->next = ft_lstnew(ft_strdup("va tu ?"));

// 	// element1 = lst->next;
// 	// element2 = lst->next->next;

// 	printf("lst : %p\n", lst);
// 	printf("(char *)lst->content : %s\n", (char *)lst->content);
// 	printf("lst->next : %p\n", lst->next);
// 	printf("element1 : %p\n", element1);
// 	printf("(char *)element1->content : %s\n", (char *)element1->content);
// 	printf("element1->next : %p\n", element1->next);
// 	printf("element2 : %p\n", element2);
// 	printf("(char *)element2->content : %s\n", (char *)element2->content);
// 	printf("element2->next : %p\n", element2->next);

// 	printf("\nApres ft_lstadd_front :\n\n");
// 	ft_lstadd_front(&lst, new);

// 	printf("new : %p\n", new);
// 	printf("(char *)new->content : %s\n", (char *)new->content);
// 	printf("new->next : %p\n", new->next);
// 	printf("lst->next : %p\n", lst);
// 	printf("(char *)lst->content : %s\n", (char *)lst->content);
// 	printf("lst->next->next : %p\n", lst->next);
// 	printf("element1 : %p\n", element1);
// 	printf("(char *)element1->content : %s\n", (char *)element1->content);
// 	printf("element1->next : %p\n", element1->next);
// 	printf("element2 : %p\n", element2);
// 	printf("(char *)element2->content : %s\n", (char *)element2->content);
// 	printf("element2->next : %p\n", element2->next);

// 	return (0);
// }

// printf("lst->next : %p\n", lst->next);
// printf("(char *)lst->content : %s\n", (char *)lst->next->content);
// printf("lst->next->next : %p\n", lst->next->next);



//-Version 2

// int	main(void)
// {

// 	t_list	**lst;
// 	t_list	*element1;
// 	t_list	*element2;
// 	char	*str1;
// 	char	*str2;
// 	t_list	*new = ft_lstnew(strdup("mnoq"));

// 	lst = (t_list**)malloc(sizeof(t_list *));
// 	if (lst == NULL)
// 		return (0);
// 	str1 = ft_strdup("elem1");
// 	str2 = ft_strdup("elem2");
// 	element1 = ft_lstnew((void *)str1);
// 	element2 = ft_lstnew((void *)str2);
// 	ft_lstadd_back(lst, element1);
// 	ft_lstadd_back(lst, element2);

// 	printf("new : %p\n", new);
// 	printf("(char *)new->content : %s\n", (char *)new->content);
// 	printf("*lst : %p\n", *lst);
// 	printf("element1 : %p\n", element1);
// 	printf("(char *)element1->content : %s\n", (char *)element1->content);
// 	printf("element1->next : %p\n", element1->next);
// 	printf("element2 : %p\n", element2);
// 	printf("(char *)element2->content : %s\n", (char *)element2->content);
// 	printf("element2->next : %p\n", element2->next);

// 	printf("\nApres ft_lstadd_front :\n\n");
// 	ft_lstadd_front(lst, new);

// 	printf("*lst : %p\n", *lst);
// 	printf("new : %p\n", new);
// 	printf("(char *)new->content : %s\n", (char *)new->content);
// 	printf("new->next : %p\n", new->next);
// 	printf("element1 : %p\n", element1);
// 	printf("(char *)element1->content : %s\n", (char *)element1->content);
// 	printf("element1->next : %p\n", element1->next);
// 	printf("element2 : %p\n", element2);
// 	printf("(char *)element2->content : %s\n", (char *)element2->content);
// 	printf("element2->next : %p\n", element2->next);

// 	return (0);
// }

// new : 0x5621c2f2f2c0
// (char *)new->content : mnoq
// *lst : 0x5621c2f2f340
// element1 : 0x5621c2f2f340
// (char *)element1->content : elem1
// element1->next : 0x5621c2f2f360
// element2 : 0x5621c2f2f360
// (char *)element2->content : elem2
// element2->next : (nil)

// Apres ft_lstadd_front :

// *lst : 0x5621c2f2f2c0
// new : 0x5621c2f2f2c0
// (char *)new->content : mnoq
// new->next : 0x5621c2f2f340
// element1 : 0x5621c2f2f340
// (char *)element1->content : elem1
// element1->next : 0x5621c2f2f360
// element2 : 0x5621c2f2f360
// (char *)element2->content : elem2
// element2->next : (nil)


//-Version 3

// int	main(void)
// {
// 	t_list	*alst = ft_lstnew(strdup("1234"));
// 	t_list	*new = ft_lstnew(strdup("mnoq"));

// 	printf("\n");
// 	printf("alst address : %p\n", alst);
// 	printf("&alst address : %p\n", &alst);
// 	printf("new address : %p\n", new);
// 	printf("&new address : %p\n", &new);
// 	printf("alst content : %s\n", (char *)alst->content);
// 	printf("new content : %s\n", (char *)new->content);
// 	printf("alst next address : %p\n", (char *)alst->next);
// 	printf("new next address : %p\n", (char *)new->next);
// 	// printf("alst next content : %s\n", (char *)alst->next->content);
// 	// printf("new next content : %s\n", (char *)new->next->content);

// 	ft_lstadd_front(&alst, new);

// 	printf("\n");
// 	printf("alst address : %p\n", alst);
// 	printf("&alst address : %p\n", &alst);
// 	printf("new address : %p\n", new);
// 	printf("&new address : %p\n", &new);
// 	printf("alst content : %s\n", (char *)alst->content);
// 	printf("new content : %s\n", (char *)new->content);
// 	printf("alst next address : %p\n", (char *)alst->next);
// 	printf("new next address : %p\n", (char *)new->next);
// 	printf("alst next content : %s\n", (char *)alst->next->content);
// 	printf("new next content : %s\n", (char *)new->next->content);

// 	printf("\n");
// 	return (0);
// }

// alst address : 0x5641164352c0
// &alst address : 0x7ffde22f40e8
// new address : 0x564116435300
// &new address : 0x7ffde22f40f0
// alst content : 1234
// new content : mnopq
// alst next address : (nil)
// new next address : (nil)

// alst address : 0x564116435300
// &alst address : 0x7ffde22f40e8
// new address : 0x564116435300
// &new address : 0x7ffde22f40f0
// alst content : mnopq
// new content : mnopq
// alst next address : 0x5641164352c0
// new next address : 0x5641164352c0
// alst next content : 1234
// new next content : 1234


/// -------------------------------------------------------------------------
/// ft_lstsize : int ft_lstsize(t_list *lst)

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*element1;
// 	t_list	*element2;
// 	t_list	*element3;
// 	t_list	*element4;
// 	char	*str0;
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	char	*str4;

// 	str0 = ft_strdup("origin");
// 	str1 = ft_strdup("elem1");
// 	str2 = ft_strdup("elem2");
// 	str3 = ft_strdup("elem3");
// 	str4 = ft_strdup("elem4");
// 	lst = ft_lstnew((void *)str0);
// 	element1 = ft_lstnew((void *)str1);
// 	element2 = ft_lstnew((void *)str2);
// 	element3 = ft_lstnew((void *)str3);
// 	element4 = ft_lstnew((void *)str4);
// 	ft_lstadd_front(&element4, element3);
// 	ft_lstadd_front(&element3, element2);
// 	ft_lstadd_front(&element2, element1);
// 	ft_lstadd_front(&element1, lst);

// 	printf("lstsize est : %d\n", ft_lstsize(lst));

// 	printf("lst content : %s\n", (char *)lst->content);
// 	printf("lst content : %s\n", (char *)lst->next->content);
// 	printf("lst content : %s\n", (char *)lst->next->next->content);
// 	printf("lst content : %s\n", (char *)lst->next->next->next->content);
// 	printf("lst content : %s\n", (char *)lst->next->next->next->next->content);
// 	// printf("lst content : %s\n", (char *)lst->next->next->next->next->next->content);
// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_lstlast : t_list *ft_lstlast(t_list *lst)

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*element1;
// 	t_list	*element2;
// 	t_list	*element3;
// 	t_list	*element4;

// 	t_list	*last;
// 	t_list	*tmp;
// 	char	*str0;
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	char	*str4;

// 	str0 = ft_strdup("origin");
// 	str1 = ft_strdup("elem1");
// 	str2 = ft_strdup("elem2");
// 	str3 = ft_strdup("elem3");
// 	str4 = ft_strdup("elem4");
// 	lst = ft_lstnew((void *)str0);
// 	element1 = ft_lstnew((void *)str1);
// 	element2 = ft_lstnew((void *)str2);
// 	element3 = ft_lstnew((void *)str3);
// 	element4 = ft_lstnew((void *)str4);
// 	// printf("lst : %p\n", lst);
// 	// printf("element1 : %p\n", element1);
// 	// lst = (t_list *)malloc(siszeof(t_list ));
// 	// if (lst == NULL)
// 	// 	return (0);
// 	// ft_lstadd_front(&lst, element4);
// 	// ft_lstadd_front(&lst, element3);
// 	// ft_lstadd_front(&lst, element2);
// 	// ft_lstadd_front(&lst, element1);
// 	// ft_lstadd_front(&element4, element3);
// 	// ft_lstadd_front(&element3, element2);
// 	// ft_lstadd_front(&element2, element1);
// 	// ft_lstadd_front(&element1, lst);
// 	lst->next = element1;
// 	element1->next = element2;
// 	element2->next = element3;
// 	element3->next = element4;

// 	// printf("(char *)lst : %s\n", (char *)lst);
// 	// printf("lst : %p\n", lst);
// 	// printf("(char *)lst->content : %s\n", (char *)lst->content);
// 	// printf("lst->content : %p\n", lst->content);
// 	// printf("(char *)lst->next : %s\n", (char *)lst->next);
// 	// printf("lst->next : %p\n", lst->next);
// 	// printf("element1 : %p\n", element1);

// 	// printf("\n");

// 	// printf("(char *)element1 : %s\n", (char *)element1);
// 	// printf("element1 : %p\n", element1);
// 	// printf("(char *)element1->content : %s\n", (char *)element1->content);
// 	// printf("element1->content : %p\n", element1->content);
// 	// printf("(char *)element1->next : %s\n", (char *)element1->next);
// 	// printf("element1->next : %p\n", element1->next);
// 	// printf("element2 : %p\n", element2);

// 	// printf("\n");
// 	printf("lst : %p\n", lst);
// 	printf("(char *)lst->content : %s\n", (char *)lst->content);
// 	printf("lst->next : %p\n", lst->next);
// 	// printf("(*lst) : %p\n", (lst));
// 	// printf("(char *)(*lst)->content : %s\n", (char *)(*lst)->content);
// 	// printf("(*lst)->next : %p\n", (*lst)->next);
// 	printf("element1 : %p\n", element1);
// 	printf("(char *)element1->content : %s\n", (char *)element1->content);
// 	printf("element1->next : %p\n", element1->next);
// 	printf("element2 : %p\n", element2);
// 	printf("(char *)element2->content : %s\n", (char *)element2->content);
// 	printf("element2->next : %p\n", element2->next);
// 	printf("element3 : %p\n", element3);
// 	printf("(char *)element3->content : %s\n", (char *)element3->content);
// 	printf("element3->next : %p\n", element3->next);
// 	printf("element4 : %p\n", element4);
// 	printf("(char *)element4->content : %s\n", (char *)element4->content);
// 	printf("element4->next : %p\n", element4->next);

// 	printf("\n");

// 	tmp = lst;
// 	while (tmp)
// 	{
// 		printf("tmp : %p\n", tmp);
// 		printf("(char *)tmp->content : %s\n", (char *)tmp->content);
// 		printf("tmp->next : %p\n", tmp->next);
// 		(tmp) = (tmp)->next;
// 	}

// 	printf("\n");

// 	last = ft_lstlast(lst);
// 	printf("le content du dernier element est : %s\n", (char *)(last->content));
	
// 	printf("lst : %p\n", lst);
// 	printf("(char *)lst->content : %s\n", (char *)lst->content);
// 	printf("lst->next : %p\n", lst->next);
// 	// printf("(*lst) : %p\n", (*lst));
// 	// printf("(char *)(*lst)->content : %s\n", (char *)(*lst)->content);
// 	// printf("(*lst)->next : %p\n", (*lst)->next);
// 	printf("element1 : %p\n", element1);
// 	printf("(char *)element1->content : %s\n", (char *)element1->content);
// 	printf("element1->next : %p\n", element1->next);
// 	printf("element2 : %p\n", element2);
// 	printf("(char *)element2->content : %s\n", (char *)element2->content);
// 	printf("element2->next : %p\n", element2->next);
// 	printf("element3 : %p\n", element3);
// 	printf("(char *)element3->content : %s\n", (char *)element3->content);
// 	printf("element3->next : %p\n", element3->next);
// 	printf("element4 : %p\n", element4);
// 	printf("(char *)element4->content : %s\n", (char *)element4->content);
// 	printf("element4->next : %p\n", element4->next);



// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_lstadd_back : void ft_lstadd_back(t_list **alst, t_list *new)

// int	main(void)
// {

// 	t_list	*lst;
// 	t_list	*element1;
// 	t_list	*element2;
// 	t_list	*element3;
// 	t_list	*element4;
// 	char	*str0;
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	char	*str4;

// 	str0 = ft_strdup("origin");
// 	str1 = ft_strdup("elem1");
// 	str2 = ft_strdup("elem2");
// 	str3 = ft_strdup("elem3");
// 	str4 = ft_strdup("elem4");
// 	lst = ft_lstnew((void *)str0);
// 	element1 = ft_lstnew((void *)str1);
// 	element2 = ft_lstnew((void *)str2);
// 	element3 = ft_lstnew((void *)str3);
// 	element4 = ft_lstnew((void *)str4);
// 	ft_lstadd_back(&lst, element1);
// 	ft_lstadd_back(&lst, element2);
// 	ft_lstadd_back(&lst, element3);
// 	ft_lstadd_back(&lst, element4);

// 	printf("lst : %p\n", lst);
// 	printf("(char *)lst->content : %s\n", (char *)lst->content);
// 	printf("lst->next : %p\n", lst->next);
// 	printf("element1 : %p\n", element1);
// 	printf("(char *)element1->content : %s\n", (char *)element1->content);
// 	printf("element1->next : %p\n", element1->next);
// 	printf("element2 : %p\n", element2);
// 	printf("(char *)element2->content : %s\n", (char *)element2->content);
// 	printf("element2->next : %p\n", element2->next);
// 	printf("element3 : %p\n", element3);
// 	printf("(char *)element3->content : %s\n", (char *)element3->content);
// 	printf("element3->next : %p\n", element3->next);
// 	printf("element4 : %p\n", element4);
// 	printf("(char *)element4->content : %s\n", (char *)element4->content);
// 	printf("element4->next : %p\n", element4->next);
// 	printf("(char *)element4->next : %s\n", (char *)element4->next);

// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_lstdelone : void	ft_lstdelone(t_list *lst, void (*del)(void*))

// static void	del(void *ptr)
// {
// 	if (ptr)
// 		free(ptr);
// }

// int	main(void)
// {

// 	t_list	*lst;
// 	t_list	*element1;
// 	t_list	*element2;
// 	t_list	*element3;

// 	char	*str0;
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;

// 	str0 = ft_strdup("origin");
// 	str1 = ft_strdup("elem1");
// 	str2 = ft_strdup("elem2");
// 	str3 = ft_strdup("elem3");


// 	lst = ft_lstnew((void *)str0);
// 	element1 = ft_lstnew((void *)str1);
// 	element2 = ft_lstnew((void *)str2);
// 	element3 = ft_lstnew((void *)str3);

// 	ft_lstadd_back(&lst, element1);
// 	ft_lstadd_back(&lst, element2);
// 	ft_lstadd_back(&lst, element3);

// 	printf("lst : %p\n", lst);
// 	printf("(char *)lst->content : %s\n", (char *)lst->content);
// 	printf("lst->next : %p\n", lst->next);
// 	printf("element1 : %p\n", element1);
// 	printf("(char *)element1->content : %s\n", (char *)element1->content);
// 	printf("element1->next : %p\n", element1->next);
// 	printf("element2 : %p\n", element2);
// 	printf("(char *)element2->content : %s\n", (char *)element2->content);
// 	printf("element2->next : %p\n", element2->next);
// 	printf("element3 : %p\n", element3);
// 	printf("(char *)element3->content : %s\n", (char *)element3->content);
// 	printf("element3->next : %p\n", element3->next);

// 	ft_lstdelone(element1, del);

// 	printf("lst : %p\n", lst);
// 	printf("(char *)lst->content : %s\n", (char *)lst->content);
// 	printf("lst->next : %p\n", lst->next);
// 	printf("element1 : %p\n", element1);
// 	printf("(char *)element1->content : %s\n", (char *)element1->content);
// 	printf("element1->next : %p\n", element1->next);
// 	printf("element2 : %p\n", element2);
// 	printf("(char *)element2->content : %s\n", (char *)element2->content);
// 	printf("element2->next : %p\n", element2->next);
// 	printf("element3 : %p\n", element3);
// 	printf("(char *)element3->content : %s\n", (char *)element3->content);
// 	printf("element3->next : %p\n", element3->next);

// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_lstclear : void	ft_lstclear(t_list **lst, void (*del)(void*))

// static void	del(void *ptr)
// {
// 	if (ptr)
// 		free(ptr);
// }

// int	main(void)
// {

// 	t_list	**lst;
// 	t_list	*element1;
// 	t_list	*element2;
// 	t_list	*element3;

// 	char	*str1;
// 	char	*str2;
// 	char	*str3;

// 	lst = (t_list **)malloc(sizeof(t_list *));
// 	str1 = ft_strdup("elem1");
// 	str2 = ft_strdup("elem2");
// 	str3 = ft_strdup("elem3");

// 	element1 = ft_lstnew((void *)str1);
// 	element2 = ft_lstnew((void *)str2);
// 	element3 = ft_lstnew((void *)str3);

// 	ft_lstadd_back(lst, element1);
// 	ft_lstadd_back(lst, element2);
// 	ft_lstadd_back(lst, element3);

// 	// printf("\n");
// 	printf("(*lst) : %p\n", (*lst));
// 	printf("(char *)(*lst)->content : %s\n", (char *)(*lst)->content);
// 	printf("(*lst)->next : %p\n", (*lst)->next);
// 	printf("element1 : %p\n", element1);
// 	printf("(char *)element1->content : %s\n", (char *)element1->content);
// 	printf("element1->next : %p\n", element1->next);
// 	printf("element2 : %p\n", element2);
// 	printf("(char *)element2->content : %s\n", (char *)element2->content);
// 	printf("element2->next : %p\n", element2->next);
// 	printf("element3 : %p\n", element3);
// 	printf("(char *)element3->content : %s\n", (char *)element3->content);
// 	printf("element3->next : %p\n", element3->next);

// 	ft_lstclear(&element1, del);
// 	printf("Apres fonction ft_lstclear\n");

// 	printf("(*lst) : %p\n", (*lst));
// 	printf("(char *)(*lst)->content : %s\n", (char *)(*lst)->content);
// 	printf("(*lst)->next : %p\n", (*lst)->next);
// 	printf("element1 : %p\n", element1);
// 	printf("(char *)element1->content : %s\n", (char *)element1->content);
// 	printf("element1->next : %p\n", element1->next);
// 	printf("element2 : %p\n", element2);
// 	printf("(char *)element2->content : %s\n", (char *)element2->content);
// 	printf("element2->next : %p\n", element2->next);
// 	printf("element3 : %p\n", element3);
// 	printf("(char *)element3->content : %s\n", (char *)element3->content);
// 	printf("element3->next : %p\n", element3->next);

// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_lstiter : void	ft_lstiter(t_list *lst, void (*f)(void *))

// static void	f(void *ptr)
// {
// 	char	*str;

// 	str = (char *)ptr;
// 	if (*str >= 'a' && *str <= 'z')
// 		*str = *str - 32;
// 	else if (*str >= 'A' && *str <= 'Z')
// 		*str = *str + 32;
// }

// int	main(void)
// {
// 	t_list	**lst;
// 	t_list	*element1;
// 	t_list	*element2;
// 	t_list	*element3;

// 	char	*str1;
// 	char	*str2;
// 	char	*str3;

// 	lst = (t_list **)malloc(sizeof(t_list *));
// 	str1 = ft_strdup("elem1");
// 	str2 = ft_strdup("elem2");
// 	str3 = ft_strdup("elem3");

// 	element1 = ft_lstnew((void *)str1);
// 	element2 = ft_lstnew((void *)str2);
// 	element3 = ft_lstnew((void *)str3);

// 	ft_lstadd_back(lst, element1);
// 	ft_lstadd_back(lst, element2);
// 	ft_lstadd_back(lst, element3);

// 	printf("\n");
// 	printf("(*lst) : %p\n", (*lst));
// 	printf("(char *)(*lst)->content : %s\n", (char *)(*lst)->content);
// 	printf("(*lst)->next : %p\n", (*lst)->next);
// 	printf("element1 : %p\n", element1);
// 	printf("(char *)element1->content : %s\n", (char *)element1->content);
// 	printf("element1->next : %p\n", element1->next);
// 	printf("element2 : %p\n", element2);
// 	printf("(char *)element2->content : %s\n", (char *)element2->content);
// 	printf("element2->next : %p\n", element2->next);
// 	printf("element3 : %p\n", element3);
// 	printf("(char *)element3->content : %s\n", (char *)element3->content);
// 	printf("element3->next : %p\n", element3->next);

// 	ft_lstiter(element2, &f);
// 	printf("Apres fonction ft_lstiter\n");

// 	printf("(*lst) : %p\n", (*lst));
// 	printf("(char *)(*lst)->content : %s\n", (char *)(*lst)->content);
// 	printf("(*lst)->next : %p\n", (*lst)->next);
// 	printf("element1 : %p\n", element1);
// 	printf("(char *)element1->content : %s\n", (char *)element1->content);
// 	printf("element1->next : %p\n", element1->next);
// 	printf("element2 : %p\n", element2);
// 	printf("(char *)element2->content : %s\n", (char *)element2->content);
// 	printf("element2->next : %p\n", element2->next);
// 	printf("element3 : %p\n", element3);
// 	printf("(char *)element3->content : %s\n", (char *)element3->content);
// 	printf("element3->next : %p\n", element3->next);

// 	return (0);
// }


/// -------------------------------------------------------------------------
/// ft_lstmap: t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))

// static void	*f(void *ptr)
// {
// 	char	*str;

// 	str = (char *)ptr;
// 	if (*str >= 'a' && *str <= 'z')
// 		*str = *str - 32;
// 	else if (*str >= 'A' && *str <= 'Z')
// 		*str = *str + 32;
// 	return ((void *)str);
// }

// static void	del(void *ptr)
// {
// 	if (ptr)
// 		free(ptr);
// }

// int	main(void)
// {
// 	t_list	**lst;
// 	t_list	*element1;
// 	t_list	*element2;
// 	t_list	*element3;
// 	t_list	**lst2;
// 	t_list	*lst2_debut;
// 	t_list	*tmp;

// 	char	*str1;
// 	char	*str2;
// 	char	*str3;

// 	lst = (t_list **)malloc(sizeof(t_list*));
// 	str1 = ft_strdup("elem1");
// 	str2 = ft_strdup("elem2");
// 	str3 = ft_strdup("elem3");

// 	element1 = ft_lstnew((void *)str1);
// 	element2 = ft_lstnew((void *)str2);
// 	element3 = ft_lstnew((void *)str3);

// 	ft_lstadd_back(lst, element1);
// 	ft_lstadd_back(lst, element2);
// 	ft_lstadd_back(lst, element3);

// 	printf("\n");
// 	tmp = *lst;
// 	while (tmp)
// 	{
// 		printf("tmp : %p\n", tmp);
// 		printf("(char *)tmp->content : %s\n", (char *)tmp->content);
// 		printf("tmp->next : %p\n", tmp->next);
// 		(tmp) = (tmp)->next;
// 	}

// 	lst2_debut = ft_lstmap(element2, &f, del);
// 	lst2 = &lst2_debut;

// 	printf("\n");
// 	printf("Apres fonction ft_lstmap / lst\n");

// 	tmp = *lst;
// 	while (tmp)
// 	{
// 		printf("tmp : %p\n", tmp);
// 		printf("(char *)tmp->content : %s\n", (char *)tmp->content);
// 		printf("tmp->next : %p\n", tmp->next);
// 		(tmp) = (tmp)->next;
// 	}

// 	printf("\n");
// 	printf("Apres fonction ft_lstmap / lst2\n");

// 	tmp = *lst2;
// 	while (tmp)
// 	{
// 		printf("tmp : %p\n", tmp);
// 		printf("(char *)tmp->content : %s\n", (char *)tmp->content);
// 		printf("tmp->next : %p\n", tmp->next);
// 		(tmp) = (tmp)->next;
// 	}

// 	return (0);
// }