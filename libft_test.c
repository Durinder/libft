/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhallama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:15:44 by jhallama          #+#    #+#             */
/*   Updated: 2019/11/06 17:34:20 by jhallama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	ft_putchar2(char *s)
{
	write(1, s, 1);
}

void	ft_putstr2(char *s)
	{
		size_t	i;

		i = 0;
		while (s[i])
			printf("%c", s[i++]);
	}

void	ft_putchar3(unsigned int i, char *s)
{
	i = 15;
	write(1, s + i, 1);
}

char	ft_putchar4(char s)
{
	return (s);
}

char	ft_putchar5(unsigned int i, char s)
{
	i = 0;
//	write(1, s + i, 1);
	return (s + i);
}

void	ft_del(void *content, size_t size)
{
	(void)size;
	free(content);
}

void	ft_kek(t_list *elem)
{
	elem->content = "kek";
}

t_list	*ft_lol(t_list *elem)
{
	elem->content = "lol";
	return (elem);
}

int		main(void)
{
	char	ft_memset_string[] = "abcdefghijklmnopqrstuvwxyz";
	char	memset_string[] = "abcdefghijklmnopqrstuvwxyz";

	ft_memset(ft_memset_string + 1, '$', 6);
	memset(memset_string + 1, '$', 6);
	printf("ft_memset: %s\n", ft_memset_string);
	printf("   memset: %s\n", memset_string);

	char	ft_bzero_string[] = "abcdefghijklmnopqrstuvwxyz";
	char	bzero_string[] = "abcdefghijklmnopqrstuvwxyz";
	
	ft_bzero(ft_bzero_string, 5);
	bzero(bzero_string, 5);
	printf("ft_bzero: %s\n", ft_bzero_string);
	printf("   bzero: %s\n", bzero_string);

	char	ft_memcpy_dst[] = "abcdefghijklmnopqrstuvwxyz";
	char	ft_memcpy_src[] = "banaani";
	char	memcpy_dst[] = "abcdefghijklmnopqrstuvwxyz";
	char	memcpy_src[] = "banaani";

	ft_memcpy(ft_memcpy_dst, ft_memcpy_src, 5);
	memcpy(memcpy_dst, memcpy_src, 5);
	printf("ft_memcpy: %s\n", ft_memcpy_dst);
	printf("   memcpy: %s\n", memcpy_dst);

	int		ft_memcpy_int_dst[] = { 1, 2, 3, 4, 5 };
//	int		ft_memcpy_int_src[] = { 9, 9, 9 };
	int		memcpy_int_dst[] = { 1, 2, 3, 4, 5 };
//	int		memcpy_int_src[] = { 9, 9, 9 };

	ft_memcpy(ft_memcpy_int_dst, ft_memcpy_int_dst + 1, 8);
	memcpy(memcpy_int_dst, memcpy_int_dst + 1, 8);
	printf("ft_memcpy: %d", ft_memcpy_int_dst[0]);
	printf("%d", ft_memcpy_int_dst[1]);
	printf("%d", ft_memcpy_int_dst[2]);
	printf("%d", ft_memcpy_int_dst[3]);
	printf("%d\n", ft_memcpy_int_dst[4]);
	printf("   memcpy: %d", memcpy_int_dst[0]);
	printf("%d", memcpy_int_dst[1]);
	printf("%d", memcpy_int_dst[2]);
	printf("%d", memcpy_int_dst[3]);
	printf("%d\n", memcpy_int_dst[4]);

	char	ft_memccpy_dst[] = "abcdefghijklmnopqrstuvwxyz";
	char	ft_memccpy_src[] = "banaani";
	char	memccpy_dst[] = "abcdefghijklmnopqrstuvwxyz";
	char	memccpy_src[] = "banaani";

	printf("ft_memccpy: %s\n", ft_memccpy(ft_memccpy_dst, ft_memccpy_src, 110, 5));
	printf("   memccpy: %s\n", memccpy(memccpy_dst, memccpy_src, 110, 5));

	int		ft_memccpy_int_dst[] = { 1, 2, 3, 4, 5 };
	int		ft_memccpy_int_src[] = { 9, 9, 9 };
	int		memccpy_int_dst[] = { 1, 2, 3, 4, 5 };
	int		memccpy_int_src[] = { 9, 9, 9 };

	ft_memccpy(ft_memccpy_int_dst, ft_memccpy_int_src, 57, 4);
	memccpy(memccpy_int_dst, memccpy_int_src, 57, 4);
	printf("ft_memccpy: %d", ft_memccpy_int_dst[0]);
	printf("%d", ft_memccpy_int_dst[1]);
	printf("%d", ft_memccpy_int_dst[2]);
	printf("%d", ft_memccpy_int_dst[3]);
	printf("%d\n", ft_memccpy_int_dst[4]);
	printf("   memccpy: %d", memccpy_int_dst[0]);
	printf("%d", memccpy_int_dst[1]);
	printf("%d", memccpy_int_dst[2]);
	printf("%d", memccpy_int_dst[3]);
	printf("%d\n", memccpy_int_dst[4]);

	char	ft_memmove_dst[] = "abcdefghijklmnopqrstuvwxyz";
	char	ft_memmove_src[] = "banaani";
	char	memmove_dst[] = "abcdefghijklmnopqrstuvwxyz";
	char	memmove_src[] = "banaani";

	ft_memmove(ft_memmove_dst + 2, ft_memmove_src + 3, 4);
	memmove(memmove_dst + 2, memmove_src + 3, 4);
	printf("ft_memmove: %s\n", ft_memmove_dst);
	printf("   memmove: %s\n", memmove_dst);

	int		ft_memmove_int_dst[] = { 1, 2, 3, 4, 5 };
//	int		ft_memmove_int_src[] = { 9, 9, 9 };
	int		memmove_int_dst[] = { 1, 2, 3, 4, 5 };
//	int		memmove_int_src[] = { 9, 9, 9 };

	ft_memmove(ft_memmove_int_dst, ft_memmove_int_dst + 1, 8);
	memmove(memmove_int_dst, memmove_int_dst + 1, 8);
	printf("ft_memmove: %d", ft_memmove_int_dst[0]);
	printf("%d", ft_memmove_int_dst[1]);
	printf("%d", ft_memmove_int_dst[2]);
	printf("%d", ft_memmove_int_dst[3]);
	printf("%d\n", ft_memmove_int_dst[4]);
	printf("   memccpy: %d", memmove_int_dst[0]);
	printf("%d", memmove_int_dst[1]);
	printf("%d", memmove_int_dst[2]);
	printf("%d", memmove_int_dst[3]);
	printf("%d\n", memmove_int_dst[4]);

/*	char str1[50] = "I am going from Delhi to Gorakhpur";
	char str2[50] = "I am going from Gorakhpur to Delhi";

//Use of memmove
   printf( "Function:\tmemmove with overlap\n" );
   printf( "Orignal :\t%s\n",str1);
   printf( "Source:\t\t%s\n", str1 + 5 );
   printf( "Destination:\t%s\n", str1 + 11 );
   memmove( str1 + 11, str1 + 5, 29 );
   printf( "Result:\t\t%s\n", str1 );
   printf( "Length:\t\t%lu characters\n\n", strlen( str1 ) );

//Use of memcpy
   printf( "Function:\tmemcpy with overlap\n" );
   printf( "Orignal :\t%s\n",str2);
   printf( "Source:\t\t%s\n", str2 + 5 );
   printf( "Destination:\t%s\n", str2 + 11 );
   memcpy( str2 + 11, str2 + 5, 29 );
   printf( "Result:\t\t%s\n", str2 );
   printf( "Length:\t\t%lu characters\n\n", strlen( str2 ) );

	char str3[50] = "I am going from Delhi to Gorakhpur";
	char str4[50] = "I am going from Gorakhpur to Delhi";

//Use of ft_memmove
   printf( "Function:\tft_memmove with overlap\n" );
   printf( "Orignal :\t%s\n",str3);
   printf( "Source:\t\t%s\n", str3 + 5 );
   printf( "Destination:\t%s\n", str3 + 11 );
   ft_memmove( str3 + 11, str3 + 5, 29 );
   printf( "Result:\t\t%s\n", str3 );
   printf( "Length:\t\t%lu characters\n\n", strlen( str3 ) );

//Use of ft_memcpy
   printf( "Function:\tft_memcpy with overlap\n" );
   printf( "Orignal :\t%s\n",str4);
   printf( "Source:\t\t%s\n", str4 + 5 );
   printf( "Destination:\t%s\n", str4 + 11 );
   ft_memcpy( str4 + 11, str4 + 5, 29 );
   printf( "Result:\t\t%s\n", str4 );
   printf( "Length:\t\t%lu characters\n\n", strlen( str4 ) );
*/
	char	ft_memchr_str[] = "abcdefghijklmnopqrst";
	char	memchr_str[] = "abcdefghijklmnopqrst";

	printf("ft_memchr: %s\n", ft_memchr(ft_memchr_str, 'c', 20));
	printf("   memchr: %s\n", memchr(memchr_str, 'c', 20));

	char	memcmp_str1[] = "perkele";
	char	memcmp_str2[] = "perkeld";

	printf("ft_memcmp: %d\n", ft_memcmp(memcmp_str1, memcmp_str2, 7));
	printf("   memcmp: %d\n", memcmp(memcmp_str1, memcmp_str2, 7));
	int		memcmp_int_array1[] = {1, 2, 3, 4, 5};
	int		memcmp_int_array2[] = {1, 2, 3, 4, 7};

	printf("ft_memcmp: %d\n", ft_memcmp(memcmp_int_array1, memcmp_int_array2, 28));
	printf("   memcmp: %d\n", memcmp(memcmp_int_array1, memcmp_int_array2, 28));

	char	ft_strlen_str[] = "perkele";
//	int		ft_strlen_int_array[] = {1, 2, 3, 4, 5};

	printf("ft_strlen: %zu\n", ft_strlen(ft_strlen_str));
	printf("   strlen: %lu\n", strlen(ft_strlen_str));
//	printf("ft_strlen: %zu", ft_strlen(ft_strlen_int_array));
//	printf("   strlen: %lu", strlen(ft_strlen_int_array));

	char	ft_strdup_str[] = "perkele";

	printf("ft_strdup: %s\n", ft_strdup(ft_strdup_str));
	printf("   strdup: %s\n", ft_strdup(ft_strdup_str));

	char	ft_strcpy_dst[] = "perkele";
	char	ft_strcpy_src[] = "abba";
	char	strcpy_dst[] = "perkele";
	char	strcpy_src[] = "abba";

	printf("ft_strcpy: %s\n", ft_strcpy(ft_strcpy_dst, ft_strcpy_src));
	printf("   strcpy: %s\n",  strcpy(strcpy_dst, strcpy_src));

	char	ft_strncpy_dst[] = "perkele";
	char	ft_strncpy_src[] = "abba";
	char	strncpy_dst[] = "perkele";
	char	strncpy_src[] = "abba";

	printf("ft_strncpy: %s\n", ft_strncpy(ft_strncpy_dst, ft_strncpy_src, 3));
	printf("   strncpy: %s\n",  strncpy(strncpy_dst, strncpy_src, 3));

//	printf("ft_memcpy: %s\n", ft_memcpy("abba", "perkele", 3));
//	printf("   memcpy: %s\n", memcpy("abba", "perkele", 3));

	char	ft_strcat_s1[20] = "abba";
	char	ft_strcat_s2[5] = "lol";
	char	strcat_s1[20] = "abba";
	char	strcat_s2[5] = "lol";

	printf("ft_strcat: %s\n", ft_strcat(ft_strcat_s1, ft_strcat_s2));
	printf("   strcat: %s\n", strcat(strcat_s1, strcat_s2));

	char	ft_strncat_s1[20] = "abba";
	char	ft_strncat_s2[5] = "lol";
	char	strncat_s1[20] = "abba";
	char	strncat_s2[5] = "lol";

	printf("ft_strncat: %s\n", ft_strncat(ft_strncat_s1, ft_strncat_s2, 2));
	printf("   strncat: %s\n", strncat(strncat_s1, strncat_s2, 2));

	char	ft_strlcat_dst[40] = "abba";
	char	ft_strlcat_src[10] = "perkele";
	char	strlcat_dst[40] = "abba";
	char	strlcat_src[10] = "perkele";

	printf("ft_strlcat: %lu\n", ft_strlcat(ft_strlcat_dst, ft_strlcat_src, 10));
	printf("   strlcat: %lu\n", strlcat(strlcat_dst, strlcat_src, 10));
	
	printf("ft_strlcat_dst: %s\n", ft_strlcat_dst);
	printf("   strlcat_dst: %s\n", strlcat_dst);

	char	*ft_strchr_str = "this is bullshit ft_strchr_str is OK!";
	char	*ft_strchr_str2 = "";
	char	*ft_strchr_str3 = "perkele\0";

	printf("ft_strchr: %s\n", ft_strchr(ft_strchr_str, 'O'));
	printf("   strchr: %s\n", strchr(ft_strchr_str, 'O'));
	printf("ft_strchr: %s\n", ft_strchr(ft_strchr_str2, 'f'));
	printf("   strchr: %s\n", strchr(ft_strchr_str2, 'f'));
	printf("ft_strchr: %s\n", ft_strchr(ft_strchr_str3, '\0'));
	printf("   strchr: %s\n", strchr(ft_strchr_str3, '\0'));

	char	*ft_strrchr_str = "this is bullshit ft_strchr_str is OK! OK! OK!";
	char	*ft_strrchr_str2 = "";
	char	*ft_strrchr_str3 = "perkele\0";

	printf("ft_strrchr: %s\n", ft_strrchr(ft_strrchr_str, 'O'));
	printf("   strrchr: %s\n", strrchr(ft_strrchr_str, 'O'));
	printf("ft_strrchr: %s\n", ft_strrchr(ft_strrchr_str2, 'f'));
	printf("   strrchr: %s\n", strrchr(ft_strrchr_str2, 'f'));
	printf("ft_strrchr: %s\n", ft_strrchr(ft_strrchr_str3, '\0'));
	printf("   strrchr: %s\n", strrchr(ft_strrchr_str3, '\0'));


	char	*ft_strstr_str = "aasdfjkgl ! ft_strstr is OK! *this doesn't matter*";

	printf("ft_strstr: %s\n", ft_strstr(ft_strstr_str, "ft_strstr is OK!"));
	printf("   strstr: %s\n", strstr(ft_strstr_str, "ft_strstr is OK!"));

	printf("ft_strnstr: %s\n", ft_strnstr(ft_strstr_str, "ft_strstr is OK!", 20));
	printf("   strnstr: %s\n", strnstr(ft_strstr_str, "ft_strstr is OK!", 20));
	printf("ft_strnstr: %s\n", ft_strnstr(ft_strstr_str, "ft_strstr is OK!", 200));
	printf("   strnstr: %s\n", strnstr(ft_strstr_str, "ft_strstr is OK!", 200));
	printf("ft_strnstr: %s\n", ft_strnstr("AAAAAAAAAA", "AAAAAAAAAA", 10));
	printf("   strnstr: %s\n", strnstr("AAAAAAAAAA", "AAAAAAAAAA", 10));
	printf("ft_strnstr: %s\n", ft_strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", 9));
	printf("   strnstr: %s\n", strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", 9));
	printf("ft_strnstr: %s\n", ft_strnstr("123456789", "9", 8));
	printf("   strnstr: %s\n", strnstr("123456789", "9", 8));

	printf("ft_strcmp: %d\n", ft_strcmp("pekka", "pekkb"));
	printf("   strcmp: %d\n", strcmp("pekka", "pekkb"));
	printf("ft_strncmp: %d\n", ft_strncmp("pekka", "pekkb", 4));
	printf("   strncmp: %d\n", strncmp("pekka", "pekkb", 4));


	char	ft_atoi_str[] = " 	-123A";
	char	atoi_str[] = " 	-123$";

	printf("ft_atoi: %d\n", ft_atoi(ft_atoi_str));
	printf("   atoi: %d\n", atoi(atoi_str));
	printf("ft_atoi: %d\n", ft_atoi("1232147483648"));
	printf("   atoi: %d\n", atoi("1232147483648"));

	printf("ft_isalpha: %d\n", ft_isalpha('A'));
	printf("   isalpha: %d\n", isalpha('A'));
	printf("ft_isdigit: %d\n", ft_isdigit('0'));
	printf("   isdigit: %d\n", isdigit('0'));
	printf("ft_isalnum: %d\n", ft_isalnum('A'));
	printf("   isalnum: %d\n", isalnum('A'));
	printf("ft_isascii: %d\n", ft_isascii('n'));
	printf("   isascii: %d\n", isascii('n'));
	printf("ft_isprint: %d\n", ft_isprint('~'));
	printf("   isprint: %d\n", isprint('~'));
	printf("ft_toupper: %c\n", ft_toupper('a'));
	printf("   toupper: %c\n", toupper('a'));
	printf("ft_tolower: %c\n", ft_tolower('A'));
	printf("   tolower: %c\n", tolower('A'));




// PART 2


	void *ft_memalloc_string;

	if ((ft_memalloc_string = ft_memalloc(10)) != NULL)
	{
		printf("\n\nPART 2\n\nft_memalloc does something\n");
	}

	ft_memdel(&ft_memalloc_string);
	if (ft_memalloc_string)
		printf("ft_memdel is KO!\n");
	else
		printf("ft_memdel is OK!\n");


	char	*ft_strnew_string;

	ft_strnew_string = NULL;
	if ((ft_strnew_string = ft_strnew(10)) != NULL)
	{
		printf("ft_strnew allocated memory\n");
	}

	ft_strdel(&ft_strnew_string);
	if (ft_strnew_string)
		printf("ft_strdel is OK!\n");
	else
		printf("ft_strdel is KO!\n");

	char	ft_strclr_str[5] = "abcd";

	printf("ft_strclr string to clear is: %s\n", ft_strclr_str);
	ft_strclr(ft_strclr_str);
	printf("and now it is: %s\n", ft_strclr_str);

	char	*ft_striter_str = "ft_striter OK\n";
	ft_striter(ft_striter_str, &ft_putchar2);

	char	*ft_striteri_str = "ft_striteri KO\nft_striteri OK\n";
	ft_striteri(ft_striteri_str, &ft_putchar3);

	char	*ft_strmap_str = "ft_strmap OK\n";
	char	*ft_strmap_new_str = ft_strmap(ft_strmap_str, &ft_putchar4);
	printf("%s", ft_strmap_new_str);

	char	*ft_strmapi_str = "ft_strmapi OK\n";
	char	*ft_strmapi_new_str = ft_strmapi(ft_strmapi_str, &ft_putchar5);
	printf("%s", ft_strmapi_new_str);

	char *ft_strequ_s1 = "abc123";
	char *ft_strequ_s2 = "abc123";

	if (ft_strequ(ft_strequ_s1, ft_strequ_s2) == 1)
		printf("ft_strequ is OK\n");
	else
		printf("strings are not equal\n");

	char *ft_strnequ_s1 = "01234567";
	char *ft_strnequ_s2 = "0123456";

	if (ft_strnequ(ft_strnequ_s1, ft_strnequ_s2, 7) == 1)
		printf("ft_strnequ test1 is OK\n");
	else
		printf("ft_strnequ test1 is KO\n");
	if (ft_strnequ(ft_strnequ_s1, ft_strnequ_s2, 8) == 0)
		printf("ft_strnequ test2 is OK\n");
	else
		printf("ft_strnequ test2 is KO\n");

	char	*ft_strsub_str = "KO!ft_strsub is OKKO!";

	printf("%s\n", ft_strsub(ft_strsub_str, 3, 15));

	char	*ft_strjoin1 = "ft_strjoin ";
	char	*ft_strjoin2 = "is OK!";

	char	*ft_strjoined = ft_strjoin(ft_strjoin1, ft_strjoin2);

	printf("%s\n", ft_strjoined);

	char	*ft_strtrim_str = " \n \t TEST TEST \n \t";
	char	*ft_strtrim_str2 = "   ";

	if (strcmp(ft_strtrim(ft_strtrim_str), "TEST TEST") == 0)
		printf("ft_strtrim is OK!\n");
	else
		printf("ft_strim is KO\n");
	printf("%s\n", ft_strtrim(ft_strtrim_str));
	printf("the following should be empty:%s\n", ft_strtrim(ft_strtrim_str2));

	char	*ft_strsplit_str = "Hello world lul kek";

	char	**perkele123 = ft_strsplit(ft_strsplit_str, ' ');
	int		split_int = 0;
	while (perkele123[split_int] != '\0')
	{
		printf("ft_strsplit: %s\n", perkele123[split_int]);
	split_int++;
	}

	int	ft_itoa_int_min = -2147483648;
	int	ft_itoa_1234 = -1234;
	int ft_itoa_0 = -0;
	int	ft_itoa_int_max = 2147483647;

	printf("ft_itoa min int: %s\n", ft_itoa(ft_itoa_int_min));
	printf("ft_itoa -1234:   %s\n", ft_itoa(ft_itoa_1234));
	printf("ft_itoa -0:   %s\n", ft_itoa(ft_itoa_0));
	printf("ft_itoa max int: %s\n", ft_itoa(ft_itoa_int_max));

	ft_putstr("ft_putchar: "); ft_putchar('a'); ft_putchar('\n');

	ft_putstr("ft_putstr: perkele"); ft_putchar('\n');
	puts("   puts:   perkele");

	ft_putendl("ft_putendl: abba on paras!");
	puts("   puts:    abba on paras!");

	ft_putstr("ft_putnbr -2,147,483,648: "); ft_putnbr(-2147483648); ft_putchar('\n');
	ft_putstr("ft_putnbr -1,234        : "); ft_putnbr(-1234); ft_putchar('\n');
	ft_putstr("ft_putnbr  2,147,483,647:  "); ft_putnbr(2147483647); ft_putchar('\n');

	ft_putstr("ft_putchar_fd, 'l', 2: "); ft_putchar_fd('l', 2);

	ft_putstr_fd("\nft_putstr_fd: on fd 2", 2);
	ft_putendl_fd("\nft_putendl_fd: on fd 2", 2);
	ft_putstr("ft_putnbr_fd 100 on fd 2: "); ft_putnbr_fd(100, 2);
	ft_putstr("\nft_putnbr_fd -0 on fd 2: "); ft_putnbr_fd(-0, 2);
	ft_putstr("\nft_putnbr_fd -2147483648 on fd 2: "); ft_putnbr_fd(-2147483648, 2);
	ft_putstr("\nft_putnbr_fd 2147483647 on fd 2: "); ft_putnbr_fd(2147483647, 2);




	printf("\n\nBonus part\n\n\n");

	t_list	*ft_lstnew_link;

	ft_lstnew_link = ft_lstnew("perkele", 6);
	if (strcmp(ft_lstnew_link->content, "perkele") != 0)
		printf("ft_lstnew is OK! 1/2\n");

	t_list	*ft_lstnew_link2;

	ft_lstnew_link2 = ft_lstnew("perkele", 8);
	if (strcmp(ft_lstnew_link2->content, "perkele") == 0)
		printf("ft_lstnew is OK! 2/2\n");

	t_list	*ft_lstdel_list;
	char	ft_lstdel_list_str1[] = "perkele";

	ft_lstdel_list = ft_lstnew(ft_lstdel_list_str1, 8);

	ft_lstdelone(&ft_lstdel_list, &ft_del);
	if (ft_lstdel_list)
		printf("ft_lstdelone is KO!\n");
	else
		printf("ft_lstdelone is OK!\n");

	t_list	*ft_lstdel_list2_elem1;
	t_list	*ft_lstdel_list2_elem2;
	t_list	*ft_lstdel_list2_elem3;
	char	ft_lstdel_list2_str1[] = "abba";
	char	ft_lstdel_list2_str2[] = "on";
	char	ft_lstdel_list2_str3[] = "paras";
	
	ft_lstdel_list2_elem1 = ft_lstnew(ft_lstdel_list2_str1, 5);
	ft_lstdel_list2_elem2 = ft_lstnew(ft_lstdel_list2_str2, 3);
	ft_lstdel_list2_elem3 = ft_lstnew(ft_lstdel_list2_str3, 6);
	ft_lstdel_list2_elem1->next = ft_lstdel_list2_elem2;
	ft_lstdel_list2_elem2->next = ft_lstdel_list2_elem3;

	ft_lstdel(&ft_lstdel_list2_elem2, &ft_del);
	if (ft_lstdel_list2_elem1)
		printf("ft_lstdel is OK! 1/3\n");
	else
		printf("ft_lstdel is KO!\n");
	if (ft_lstdel_list2_elem2)
		printf("ft_lstdel is KO!\n");
	else
		printf("ft_lstdel is OK! 2/3\n");
	if (strcmp(ft_lstdel_list2_elem3->content, "") == 0)
		printf("ft_lstdel is OK! 3/3\n");
	else
		printf("ft_lstdel is KO!");

	t_list	*ft_lstadd_list_elem1;
	t_list	*ft_lstadd_list_elem2;
	t_list	*ft_lstadd_list_elem3;
	char	ft_lstadd_list_str1[] = "abba";
	char	ft_lstadd_list_str2[] = "onko";
	char	ft_lstadd_list_str3[] = "paras";

	ft_lstadd_list_elem1 = ft_lstnew(ft_lstadd_list_str1, 5);
	ft_lstadd_list_elem2 = ft_lstnew(ft_lstadd_list_str2, 5);
	ft_lstadd_list_elem3 = ft_lstnew(ft_lstadd_list_str3, 6);
	ft_lstadd_list_elem1->next = ft_lstadd_list_elem2;
	ft_lstadd_list_elem2->next = ft_lstadd_list_elem3;

	t_list	*ft_lstadd_list_elem0;
	char	ft_lstadd_list_str0[] = "lol";

	ft_lstadd_list_elem0 = ft_lstnew(ft_lstadd_list_str0, 4);
	ft_lstadd(&ft_lstadd_list_elem1, ft_lstadd_list_elem0);

	if ((strcmp(ft_lstadd_list_elem0->content, "lol") == 0) && strcmp(ft_lstadd_list_elem0->next->content, "abba") == 0)
		printf("ft_lstadd is OK!\n");
	else
		printf("ft_lstadd is KO!\n");

	
	ft_lstiter(ft_lstadd_list_elem0, &ft_kek);
	if (strcmp(ft_lstadd_list_elem0->content, "kek") == 0 && strcmp(ft_lstadd_list_elem0->next->content, "kek") == 0 && strcmp(ft_lstadd_list_elem0->next->next->content, "kek") == 0 && strcmp(ft_lstadd_list_elem0->next->next->next->content, "kek") == 0)
		printf("ft_lstiter is OK!\n");
	else
		printf("ft_lstiter is KO!\n");

	t_list	*ft_lstmap_list;

	ft_lstmap_list = ft_lstmap(ft_lstadd_list_elem0, &ft_lol);

	if (strcmp(ft_lstmap_list->content, "lol") == 0 && strcmp(ft_lstmap_list->next->content, "lol") == 0 && strcmp(ft_lstmap_list->next->next->content, "lol") == 0 && strcmp(ft_lstmap_list->next->next->next->content, "lol") == 0 && ft_lstmap_list->next->next->next->next == NULL)
		printf("ft_lstmap is OK!\n");
	else
		printf("ft_lstmap is KO!\n");

}
