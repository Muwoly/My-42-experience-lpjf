/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:06:49 by lpenelon          #+#    #+#             */
/*   Updated: 2022/03/04 17:06:40 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	isalpha_test(void);
void	isdigit_test(void);
void	isalnum_test(void);
void	isascii_test(void);
void	isprint_test(void);
void	strlen_test(void);
void	memset_test(void);
void	bzero_test(void);
void	memcpy_test(void);
void	memmove_test(void);
void	strlcpy_test(void);
void	strlcat_test(void);
void	toupper_test(void);
void	tolower_test(void);
void	strchr_test(void);
void	strrchr_test(void);
void	strncmp_test(void);
void	memchr_test(void);
void	memcmp_test(void);
void	strnstr_test(void);
void	atoi_test(void);
void	calloc_test(void);
void	strdup_test(void);
void	substr_test(void);
void	strjoin_test(void);
void	strtrim_test(void);
void	split_test(void);
void	itoa_test(void);
void	strmapi_test(void);
void	striteri_test(void);
void	putchar_fd_test(void);
void	putstr_fd_test(void);
void	putendl_fd_test(void);
void	ft_putnbr_fd_test(void);

void	press_enter(void)
{
	printf("Press Enter to Continue");
	while (getchar() != '\n');
}

void	clear(void)
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

int	main(void)
{
	// clear();
	// isalpha_test();
	// press_enter();

	// clear();
	// isdigit_test();
	// press_enter();

	// clear();
	// isalnum_test();
	// press_enter();

	// clear();
	// isascii_test();
	// press_enter();

	// clear();
	// isprint_test();
	// press_enter();

	// clear();
	// strlen_test();
	// press_enter();

	// clear();
	// memset_test();
	// press_enter();

	// clear();
	// bzero_test();
	// press_enter();

	// clear();
	// memcpy_test();
	// press_enter();

	// // clear();
	// // memmove_test();
	// // press_enter();

	// clear();
	// strlcpy_test();
	// press_enter();

	// clear();
	// strlcat_test();
	// press_enter();

	// clear();
	// toupper_test();
	// press_enter();

	// clear();
	// tolower_test();
	// press_enter();

	// clear();
	// strchr_test();
	// press_enter();

	// clear();
	// strrchr_test();
	// press_enter();

	// clear();
	// strncmp_test();
	// press_enter();

	// clear();
	// memchr_test();
	// press_enter();

	// clear();
	// memcmp_test();
	// press_enter();

	// clear();	
	// strnstr_test();
	// press_enter();

	// clear();
	// atoi_test();
	// press_enter();

	// // clear();
	// // calloc_test();
	// // press_enter();

	// clear();
	// strdup_test();
	// press_enter();

	// clear();
	// substr_test();
	// press_enter();

	// clear();
	// strjoin_test();
	// press_enter();

	// clear();
	// strtrim_test();
	// press_enter();

	// clear();
	// split_test();
	// press_enter();

	clear();
	itoa_test();
	press_enter();

	// clear();
	// strmapi_test();
	// press_enter();

	// clear();
	// striteri_test();
	// press_enter();

	// clear();
	// putchar_fd_test();
	// press_enter();

	// clear();
	// putstr_fd_test();
	// press_enter();

	// clear();
	// putendl_fd_test();
	// press_enter();

	// clear();
	// ft_putnbr_fd_test();
	// press_enter();
}

void	strdup_test(void)
{
	printf("strdup:\n");
	char	src[50];

	strcpy(src, "That's a simple test");
	printf("%s\n", strdup(src));
	strcpy(src, "That's a simple test");
	printf("%s\n\n", ft_strdup(src));
	strcpy(src, "That's a simple test");
	printf("%s\n", strdup(src-3));
	strcpy(src, "That's a simple test");
	printf("%s\n\n", ft_strdup(src-3));
	strcpy(src, "That's a simple test");
	printf("%s\n", strdup(src+3));
	strcpy(src, "That's a simple test");
	printf("%s\n\n", ft_strdup(src+3));
}

void	calloc_test(void)
{
	char	*ptr1 = (char *) ft_calloc (10, sizeof(int));

	if (ptr1 == NULL)
		printf("Memory not allocated.\n");
	else
		printf("Memory allocated.\n");
}

void	isalpha_test(void)
{
	printf("isalpha:\n");
	printf("1st Real func / 2nd Your func\n");
	printf("a: %i %i\n", isalpha('a'), ft_isalpha('a'));
	printf("Z: %i %i\n", isalpha('Z'), ft_isalpha('Z'));
	printf("@: %i %i\n", isalpha('@'), ft_isalpha('@'));
	printf("0: %i %i\n", isalpha('0'), ft_isalpha('0'));
	printf("SPACE: %i %i\n", isalpha(' '), ft_isalpha(' '));
	printf("NULL: %i %i\n", isalpha(0), ft_isalpha(0));
	printf("DEL: %i %i\n", isalpha(127), ft_isalpha(127));
	printf("€: %i %i\n", isalpha(128), ft_isalpha(128));
	printf("é: %i %i\n\n", isalpha(233), ft_isalpha(233));
}

void	isdigit_test(void)
{
	printf("isdigit:\n");
	printf("1st Real func / 2nd Your func\n");
	printf("a: %i %i\n", isdigit('a'), ft_isdigit('a'));
	printf("Z: %i %i\n", isdigit('Z'), ft_isdigit('Z'));
	printf("@: %i %i\n", isdigit('@'), ft_isdigit('@'));
	printf("0: %i %i\n", isdigit('0'), ft_isdigit('0'));
	printf("SPACE: %i %i\n", isdigit(' '), ft_isdigit(' '));
	printf("NULL: %i %i\n", isdigit(0), ft_isdigit(0));
	printf("DEL: %i %i\n", isdigit(127), ft_isdigit(127));
	printf("€: %i %i\n", isdigit(128), ft_isdigit(128));
	printf("é: %i %i\n\n", isdigit(233), ft_isdigit(233));
}

void	isalnum_test(void)
{
	printf("isalnum:\n");
	printf("1st Real func / 2nd Your func\n");
	printf("a: %i %i\n", isalnum('a'), ft_isalnum('a'));
	printf("Z: %i %i\n", isalnum('Z'), ft_isalnum('Z'));
	printf("@: %i %i\n", isalnum('@'), ft_isalnum('@'));
	printf("0: %i %i\n", isalnum('0'), ft_isalnum('0'));
	printf("SPACE: %i %i\n", isalnum(' '), ft_isalnum(' '));
	printf("NULL: %i %i\n", isalnum(0), ft_isalnum(0));
	printf("DEL: %i %i\n", isalnum(127), ft_isalnum(127));
	printf("€: %i %i\n", isalnum(128), ft_isalnum(128));
	printf("é: %i %i\n\n", isalnum(233), ft_isalnum(233));
}

void	isascii_test(void)
{
	printf("isascii:\n");
	printf("1st Real func / 2nd Your func\n");
	printf("a: %i %i\n", isascii('a'), ft_isascii('a'));
	printf("Z: %i %i\n", isascii('Z'), ft_isascii('Z'));
	printf("@: %i %i\n", isascii('@'), ft_isascii('@'));
	printf("0: %i %i\n", isascii('0'), ft_isascii('0'));
	printf("SPACE: %i %i\n", isascii(' '), ft_isascii(' '));
	printf("NULL: %i %i\n", isascii(0), ft_isascii(0));
	printf("DEL: %i %i\n", isascii(127), ft_isascii(127));
	printf("€: %i %i\n", isascii(128), ft_isascii(128));
	printf("é: %i %i\n\n", isascii(233), ft_isascii(233));
}

void	isprint_test(void)
{
	printf("isprint:\n");
	printf("1st Real func / 2nd Your func\n");
	printf("a: %i %i\n", isprint('a'), ft_isprint('a'));
	printf("Z: %i %i\n", isprint('Z'), ft_isprint('Z'));
	printf("@: %i %i\n", isprint('@'), ft_isprint('@'));
	printf("0: %i %i\n", isprint('0'), ft_isprint('0'));
	printf("SPACE: %i %i\n", isprint(' '), ft_isprint(' '));
	printf("NULL: %i %i\n", isprint(0), ft_isprint(0));
	printf("DEL: %i %i\n", isprint(127), ft_isprint(127));
	printf("€: %i %i\n", isprint(128), ft_isprint(128));
	printf("é: %i %i\n\n", isprint(233), ft_isprint(233));
}

void	strlen_test(void)
{
	printf("strlen:\n");
	printf ("Real func / Your func\n");
	printf ("That's a simple test: %lu %zu\n", strlen("That's a simple test"), ft_strlen("That's a simple test"));
	printf (": %lu %zu\n", strlen(""), ft_strlen(""));
	printf (" : %lu %zu\n\n", strlen(" "), ft_strlen(" "));
}

void	memset_test(void)
{
	printf("memset:\n");
	char	str[50];

	strcpy(str, "That's a simple test");
	printf("%s\n", str);
	memset(str, '$', 7);
	printf("Should print: %s\n", str);
	strcpy(str, "That's a simple test");
	ft_memset(str, '$', 7);
	printf("It prints   : %s\n\n", str);
}

void	bzero_test(void)
{
	printf("bzero:\n");
	char	str[50];

	strcpy(str, "That's a simple test");
	printf("Should print nothing after this line\n");
	bzero(str, 10);
	printf("%s\n", str);
	strcpy(str, "That's a simple test");
	ft_bzero(str, 50);
	printf("%s\n\n", str);
}

void	memcpy_test(void)
{
	printf("memcpy:\n");
	char	src[50];
	char	dest[50];

	strcpy(src, "That's a simple test");
	printf("Should print: That's a s\n");
	memcpy(dest, src, 10);
	printf("%s\n", dest);
	strcpy(src, "That's a simple test");
	strcpy(dest, "\0");
	ft_memcpy(dest, src, 10);
	printf("%s\n", dest);
	strcpy(src, "That's a simple test");
	printf("Should print: That's a simple test\n");
	memcpy(dest, src, 30);
	printf("%s\n", dest);
	strcpy(src, "That's a simple test");
	strcpy(dest, "\0");
	ft_memcpy(dest, src, 30);
	printf("%s\n\n", dest);
	
	/*
	strcpy(src, "That's a simple test");
	printf("Should print: That's a s\n");
	memcpy(src + 3, src, 22);
	printf("%s\n", src);
	strcpy(src, "That's a simple test");
	strcpy(dest, "\0");
	ft_memcpy(src + 3, src, 22);
	printf("%s\n", src);
	*/
}

void	memmove_test(void)
{
	printf("memmove:\n");
	char	src[50];
	char	dest[50];

	strcpy(src, "That's a simple test");
	printf("Should print: That's a s\n");
	memmove(dest, src, 10);
	printf("%s\n", dest);
	strcpy(src, "That's a simple test");
	strcpy(dest, "\0");
	ft_memmove(dest, src, 10);
	printf("%s\n\n", dest);

	strcpy(src, "That's a simple test");
	strcpy(dest, "\0");
	printf("Should print: That's a simple test\n");
	memmove(dest, src, 30);
	printf("%s\n", dest);
	strcpy(src, "That's a simple test");
	strcpy(dest, "\0");
	ft_memmove(dest, src, 30);
	printf("%s\n\n", dest);

	strcpy(src, "That's a simple test");
	strcpy(dest, "\0");
	printf("Should print: ThaThat's a simple te\n");
	memmove(src + 3, src, 18);
	printf("%s\n", src);
	strcpy(src, "That's a simple test");
	strcpy(dest, "\0");
	ft_memmove(src + 3, src, 18);
	printf("%s\n\n", src);

	strcpy(src, "That's a simple test");
	strcpy(dest, "\0");
	printf("Should print: ThaThat's a simple test\n");
	memmove(src + 3, src, 25);
	printf("%s\n", src);
	strcpy(src, "That's a simple test");
	strcpy(dest, "\0");
	ft_memmove(src + 3, src, 25);
	printf("%s\n\n", src);

	strcpy(src, "That's a simple test");
	strcpy(dest, "\0");
	printf("Should print: t's a simple test\n");
	memmove(src, src + 3, 25);
	printf("%s\n", src);
	strcpy(src, "That's a simple test");
	strcpy(dest, "\0");
	ft_memmove(src, src + 3, 25);
	printf("%s\n\n", src);
}

void	strlcpy_test(void)
{
	printf("strlcpy:\n");
	char	src[200];
	char	dest[200];

	strcpy(src, "Hello dear");
	printf("Should print:\n");
	printf("%lu\n%s\n", strlcpy(dest, src, 15), dest);
	strcpy(dest, "\0");
	printf("It prints:\n");
	printf("%lu\n%s\n\n", ft_strlcpy(dest, src, 15), dest);

	strcpy(dest, "\0");
	printf("Should print:\n");
	printf("%lu\n%s\n", strlcpy(dest, src, 11), dest);
	strcpy(dest, "\0");
	printf("It prints:\n");
	printf("%lu\n%s\n\n", ft_strlcpy(dest, src, 11), dest);

	strcpy(dest, "\0");
	printf("Should print:\n");
	printf("%lu\n%s\n", strlcpy(dest, src, 5), dest);
	strcpy(dest, "\0");
	printf("It prints:\n");
	printf("%lu\n%s\n\n", ft_strlcpy(dest, src, 5), dest);

	strcpy(dest, "\0");
	printf("Should print:\n");
	printf("%lu\n%s\n", strlcpy(dest, src, 0), dest);
	strcpy(dest, "\0");
	printf("It prints:\n");
	printf("%lu\n%s\n\n", ft_strlcpy(dest, src, 0), dest);
}

void	strlcat_test(void)
{
	printf("strlcat:\n");
	char	src[200];
	char	dest[100];

	strcpy(src, ", how are you?");
	strcpy(dest, "Hello dear");
	printf("Should print:\n");
	printf("%lu\n%s\n", strlcat(dest, src, 50), dest);
	strcpy(dest, "Hello dear");
	printf("It prints:\n");
	printf("%lu\n%s\n\n", ft_strlcat(dest, src, 50), dest);

	strcpy(dest, "Hello dear");
	printf("Should print:\n");
	printf("%lu\n%s\n", strlcat(dest, src, 25), dest);
	strcpy(dest, "Hello dear");
	printf("It prints:\n");
	printf("%lu\n%s\n\n", ft_strlcat(dest, src, 25), dest);
	
	strcpy(dest, "Hello dear");
	printf("Should print:\n");
	printf("%lu\n%s\n", strlcat(dest, src, 16), dest);
	strcpy(dest, "Hello dear");
	printf("It prints:\n");
	printf("%lu\n%s\n\n", ft_strlcat(dest, src, 16), dest);

	strcpy(dest, "Hello dear");
	printf("Should print:\n");
	printf("%lu\n%s\n", strlcat(dest, src, 0), dest);
	strcpy(dest, "Hello dear");
	printf("It prints:\n");
	printf("%lu\n%s\n\n", ft_strlcat(dest, src, 0), dest);
}

void	toupper_test(void)
{
	printf("toupper:\n");
	printf("%c%c%c%c%c%c%c%c%c%c\n", toupper('4'), toupper(' '), toupper('t'), toupper('H'), toupper('e'), toupper(' '), toupper('k'), toupper('!'), toupper('N'), toupper('g'));
	printf("%c%c%c%c%c%c%c%c%c%c\n\n", ft_toupper('4'), ft_toupper(' '), ft_toupper('t'), ft_toupper('H'), ft_toupper('e'), ft_toupper(' '), ft_toupper('k'), ft_toupper('!'), ft_toupper('N'), ft_toupper('g'));
}

void	tolower_test(void)
{
	printf("tolower:\n");
	printf("%c%c%c%c%c%c%c%c%c%c\n", tolower('4'), tolower(' '), tolower('t'), tolower('H'), tolower('e'), tolower(' '), tolower('k'), tolower('!'), tolower('N'), tolower('g'));
	printf("%c%c%c%c%c%c%c%c%c%c\n\n", ft_tolower('4'), ft_tolower(' '), ft_tolower('t'), ft_tolower('H'), ft_tolower('e'), ft_tolower(' '), ft_tolower('k'), ft_tolower('!'), ft_tolower('N'), ft_tolower('g'));
}

void	strchr_test(void)
{
	printf("strchr:\n");
	char	*p1;
	char	str1[50];

	strcpy(str1, "Ultimate t4st");
	p1 = strchr(str1, 'U');
	printf("%s\n", p1);
	strcpy(str1, "Ultimate t4st");
	p1 = strchr(str1, 'm');
	printf("%s\n", p1);
	strcpy(str1, "Ultimate t4st");
	p1 = strchr(str1, 't');
	printf("%s\n", p1);
	strcpy(str1, "Ultimate t4st");
	p1 = strchr(str1, 'p');
	printf("%s\n", p1);
	strcpy(str1, "");
	p1 = strchr(str1, 'p');
	printf("%s\n\n", p1);

	strcpy(str1, "Ultimate t4st");
	p1 = ft_strchr(str1, 'U');
	printf("%s\n", p1);
	strcpy(str1, "Ultimate t4st");
	p1 = ft_strchr(str1, 'm');
	printf("%s\n", p1);
	strcpy(str1, "Ultimate t4st");
	p1 = ft_strchr(str1, 't');
	printf("%s\n", p1);
	strcpy(str1, "Ultimate t4st");
	p1 = ft_strchr(str1, 'p');
	printf("%s\n", p1);
	strcpy(str1, "");
	p1 = ft_strchr(str1, 'p');
	printf("%s\n\n", p1);
}

void	strrchr_test(void)
{
	printf("strrchr:\n");
	char	*p2;
	char	str2[50];

	strcpy(str2, "Ultimate t4st");
	p2 = strrchr(str2, 'U');
	printf("%s\n", p2);
	strcpy(str2, "Ultimate t4st");
	p2 = strrchr(str2, 'm');
	printf("%s\n", p2);
	strcpy(str2, "Ultimate t4st");
	p2 = strrchr(str2, 't');
	printf("%s\n", p2);
	strcpy(str2, "Ultimate t4st");
	p2 = strrchr(str2, 'p');
	printf("%s\n", p2);
	strcpy(str2, "");
	p2 = strrchr(str2, 'p');
	printf("%s\n\n", p2);

	strcpy(str2, "Ultimate t4st");
	p2 = ft_strrchr(str2, 'U');
	printf("%s\n", p2);
	strcpy(str2, "Ultimate t4st");
	p2 = ft_strrchr(str2, 'm');
	printf("%s\n", p2);
	strcpy(str2, "Ultimate t4st");
	p2 = ft_strrchr(str2, 't');
	printf("%s\n", p2);
	strcpy(str2, "Ultimate t4st");
	p2 = ft_strrchr(str2, 'p');
	printf("%s\n", p2);
	strcpy(str2, "");
	p2 = ft_strrchr(str2, 'p');
	printf("%s\n\n", p2);
}

void	strncmp_test(void)
{
	printf("strncmp:\n");
	printf("%i\n", strncmp("Ultimate t4st", "Ultimate t4st", 10));
	printf("%i\n\n", ft_strncmp("Ultimate t4st", "Ultimate t4st", 10));

	printf("%i\n", strncmp("Ultimate t4st", "Ultimate t4st", 50));
	printf("%i\n\n", ft_strncmp("Ultimate t4st", "Ultimate t4st", 50));

	printf("%i\n", strncmp("Ultimate 4st", "Ultimate t4st", 5));
	printf("%i\n\n", ft_strncmp("Ultimate 4st", "Ultimate t4st", 5));

	printf("%i\n", strncmp("Ultimate t4st", "Ultimate t4st", 13));
	printf("%i\n\n", ft_strncmp("Ultimate t4st", "Ultimate t4st", 13));

	printf("%i\n", strncmp("Ultimate t4st", "Ultimate t4st", 12));
	printf("%i\n\n", ft_strncmp("Ultimate t4st", "Ultimate t4st", 12));

	printf("%i\n", strncmp("Ultimate t4st", "Ultimate t4st", 0));
	printf("%i\n\n", ft_strncmp("Ultimate t4st", "Ultimate t4st", 0));

	printf("%i\n", strncmp("Ultimate t4s", "Ultimate t4st", 13));
	printf("%i\n\n", ft_strncmp("Ultimate t4s", "Ultimate t4st", 13));

	printf("%i\n", strncmp("Ultimate t4st", "Ultimate t4s", 13));
	printf("%i\n\n", ft_strncmp("Ultimate t4st", "Ultimate t4s", 13));

	printf("%i\n", strncmp("Ultimate t4st", "Ultimte t4st", 50));
	printf("%i\n\n", ft_strncmp("Ultimate t4st", "Ultimte t4st", 50));
	
	printf("%i\n", strncmp("Ultimte t4st", "Ultimate t4st", 50));
	printf("%i\n\n", ft_strncmp("Ultimte t4st", "Ultimate t4st", 50));
}

void	memchr_test(void)
{
	printf("memchr:\n");
	char	str3[50];

	strcpy(str3, "Ultimate t4st");
	printf("%s\n", memchr(str3, 'm', 4));
	strcpy(str3, "Ultimate t4st");
	printf("%s\n\n", ft_memchr(str3, 'm', 4));

	strcpy(str3, "Ultimate t4st");
	printf("%s\n", memchr(str3, 't', 50));
	strcpy(str3, "Ultimate t4st");
	printf("%s\n\n", ft_memchr(str3, 't', 50));

	strcpy(str3, "Ultimate t4st1");
	printf("%s\n", memchr(str3, '1', 14));
	strcpy(str3, "Ultimate t4st1");
	printf("%s\n\n", ft_memchr(str3, '1', 14));

	strcpy(str3, "Ultimate t4st");
	printf("%s\n", memchr(str3, '\0', 12));
	strcpy(str3, "Ultimate t4st");
	printf("%s\n\n", ft_memchr(str3, '\0', 12));

	strcpy(str3, "Ultimate t4st");
	printf("%s\n", memchr(str3, 'p', 50));
	strcpy(str3, "Ultimate t4st");
	printf("%s\n\n", ft_memchr(str3, 'p', 50));
}

void	memcmp_test(void)
{
	printf("memcmp:\n");
	printf("%i\n", memcmp("Ultimate t4st", "Ultimate t4st", 10));
	printf("%i\n\n", ft_memcmp("Ultimate t4st", "Ultimate t4st", 10));

	printf("%i\n", memcmp("Ultimate t4st", "Ultimate t4st", 50));
	printf("%i\n\n", ft_memcmp("Ultimate t4st", "Ultimate t4st", 50));

	printf("%i\n", memcmp("Ultimate 4st", "Ultimate t4st", 5));
	printf("%i\n\n", ft_memcmp("Ultimate 4st", "Ultimate t4st", 5));

	printf("%i\n", memcmp("Ultimate t4st", "Ultimate t4st", 13));
	printf("%i\n\n", ft_memcmp("Ultimate t4st", "Ultimate t4st", 13));

	printf("%i\n", memcmp("Ultimate t4st", "Ultimate t4st", 12));
	printf("%i\n\n", ft_memcmp("Ultimate t4st", "Ultimate t4st", 12));

	printf("%i\n", memcmp("Ultimate t4st", "Ultimate t4st", 0));
	printf("%i\n\n", ft_memcmp("Ultimate t4st", "Ultimate t4st", 0));

	printf("%i\n", memcmp("Ultimate t4s", "Ultimate t4st", 13));
	printf("%i\n\n", ft_memcmp("Ultimate t4s", "Ultimate t4st", 13));

	printf("%i\n", memcmp("Ultimate t4st", "Ultimate t4s", 13));
	printf("%i\n\n", ft_memcmp("Ultimate t4st", "Ultimate t4s", 13));

	printf("%i\n", memcmp("Ultimate t4st", "Ultimte t4st", 50));
	printf("%i\n\n", ft_memcmp("Ultimate t4st", "Ultimte t4st", 50));
	
	printf("%i\n", memcmp("Ultimte t4st", "Ultimate t4st", 50));
	printf("%i\n\n", ft_memcmp("Ultimte t4st", "Ultimate t4st", 50));
}

void	strnstr_test(void)
{
	printf("strnstr:\n");
	printf("%s\n", strnstr("Simple test", "test", 11));
	printf("%s\n\n", ft_strnstr("Simple test", "test", 11));

	printf("%s\n", strnstr("Simple test", "S", 11));
	printf("%s\n\n", ft_strnstr("Simple test", "S", 11));

	printf("%s\n", strnstr("Sim", "im", 2));
	printf("%s\n\n", ft_strnstr("Sim", "im", 2));

	printf("%s\n", strnstr("Sim", "imm", 2));
	printf("%s\n\n", ft_strnstr("Sim", "imm", 2));

	printf("%s\n", strnstr("Simple test", "t", 12));
	printf("%s\n\n", ft_strnstr("Simple test", "t", 12));

	printf("%s\n", strnstr("Simple test", "w", 12));
	printf("%s\n\n", ft_strnstr("Simple test", "w", 12));

	printf("%s\n", strnstr("Simple test", "", 12));
	printf("%s\n\n", ft_strnstr("Simple test", "", 12));

	printf("%s\n", strnstr("Simple tes test", "tes", 20));
	printf("%s\n\n", ft_strnstr("Simple tes test", "tes", 20));

	printf("%s\n", strnstr("", "t", 12));
	printf("%s\n\n", ft_strnstr("", "t", 12));
}

void	atoi_test(void)
{
	printf("atoi:\n");
	int		atoi_save;
	char	str[50];

	strcpy(str, "424242");
	atoi_save = atoi(str);
	printf("%i\n", atoi_save);
	strcpy(str, "424242");
	atoi_save = ft_atoi(str);
	printf("%i\n\n", atoi_save);

	strcpy(str, "That's a simple test");
	atoi_save =  atoi(str);
	printf("%i\n", atoi_save);
	strcpy(str, "That's a simple test");
	atoi_save =  ft_atoi(str);
	printf("%i\n\n", atoi_save);

	strcpy(str, "0525d52");
	atoi_save =  atoi(str);
	printf("%i\n", atoi_save);
	strcpy(str, "0525d52");
	atoi_save =  ft_atoi(str);
	printf("%i\n\n", atoi_save);

	strcpy(str, "-0525d52");
	atoi_save =  atoi(str);
	printf("%i\n", atoi_save);
	strcpy(str, "-0525d52");
	atoi_save =  ft_atoi(str);
	printf("%i\n\n", atoi_save);

	strcpy(str, "- 0525d52");
	atoi_save =  atoi(str);
	printf("%i\n", atoi_save);
	strcpy(str, "- 0525d52");
	atoi_save =  ft_atoi(str);
	printf("%i\n\n", atoi_save);
	
	strcpy(str, "   -0525d52");
	atoi_save =  atoi(str);
	printf("%i\n", atoi_save);
	strcpy(str, "   -0525d52");
	atoi_save =  ft_atoi(str);
	printf("%i\n\n", atoi_save);

	strcpy(str, "   0525d52");
	atoi_save =  atoi(str);
	printf("%i\n", atoi_save);
	strcpy(str, "   0525d52");
	atoi_save =  ft_atoi(str);
	printf("%i\n\n", atoi_save);

	strcpy(str, "2-525d52");
	atoi_save =  atoi(str);
	printf("%i\n", atoi_save);
	strcpy(str, "2-525d52");
	atoi_save =  ft_atoi(str);
	printf("%i\n\n", atoi_save);

	strcpy(str, "2147483647");
	atoi_save =  atoi(str);
	printf("%i\n", atoi_save);
	strcpy(str, "2147483647");
	atoi_save =  ft_atoi(str);
	printf("%i\n\n", atoi_save);

	strcpy(str, "2147483648");
	atoi_save =  atoi(str);
	printf("%i\n", atoi_save);
	strcpy(str, "2147483648");
	atoi_save =  ft_atoi(str);
	printf("%i\n\n", atoi_save);

	strcpy(str, "2147483649");
	atoi_save =  atoi(str);
	printf("%i\n", atoi_save);
	strcpy(str, "2147483649");
	atoi_save =  ft_atoi(str);
	printf("%i\n\n", atoi_save);
}

void	substr_test(void)
{
	char	str[50];

	strcpy(str, "That's an example");
	printf("String:\n%s\nSubstring / index 5 / len 20:\n%s\n\n", str, ft_substr(str, 5, 20));
	printf("String:\n%s\nSubstring / index 0 / len 13:\n%s\n\n", str, ft_substr(str, 0, 13));
	printf("String:\n%s\nSubstring / index 7 / len 50:\n%s\n\n", str, ft_substr(str, 7, 50));

}

void	strjoin_test(void)
{
	char	s1[50];
	char	s2[50];

	strcpy(s1, "That's an");
	strcpy(s2, " example");
	printf("Should print:\nThat's an example\n%s\n", ft_strjoin(s1, s2));
}

void	strtrim_test(void)
{
	char	s1[50];
	char	set[50];

	strcpy(s1, "abcdef");
	strcpy(set, "bdf");
	printf("Should print:\nace\n%s\n", ft_strtrim(s1, set));

	strcpy(s1, "abcdef");
	strcpy(set, "abc");
	printf("Should print:\ndef\n%s\n", ft_strtrim(s1, set));

	strcpy(s1, "lloo");
	strcpy(set, "ol");
	printf("Should print:\n\n%s\n", ft_strtrim(s1, set));

	strcpy(s1, "aaaaabbbbbcccccdddddeeeeefffff");
	strcpy(set, "abcef");
	printf("Should print:\nddddd\n%s\n", ft_strtrim(s1, set));
}

void	split_test(void)
{
	char	s[50];
	char	**ret;

	strcpy(s, "heythere");
	ret = ft_split(s, 't');
	printf("Should print:\nhey\nthere\n%s\n%s\n", ret[0], ret[1]);

	strcpy(s, "abcdeabcdeabcde");
	ret = ft_split(s, 'e');
	printf("Should print:\nabcd\neabcdeacbde\n%s\n%s\n", ret[0], ret[1]);
}

void	itoa_test(void)
{
	printf("%s\n", ft_itoa(-505));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(-1));
	printf("%s\n", ft_itoa(110));
	printf("%s\n", ft_itoa(999));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
}

void	strmapi_test(void)
{
}

void	striteri_test(void)
{
}

void	putchar_fd_test(void)
{
}

void	putstr_fd_test(void)
{
}

void	putendl_fd_test(void)
{
}

void	ft_putnbr_fd_test(void)
{
	ft_putnbr_fd(101, 1);
	printf("\n");
	ft_putnbr_fd(-505, 1);
	printf("\n");
	ft_putnbr_fd(-2147483647, 1);
	printf("\n");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
	ft_putnbr_fd(2147483646, 1);
	printf("\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
}
