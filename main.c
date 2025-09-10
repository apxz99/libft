/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 17:22:45 by sarayapa          #+#    #+#             */
/*   Updated: 2025/09/10 21:45:24 by sarayapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

////memset
//int	main(void)
//{
//	char str[] = "Hello";
//	printf("str before memset : %s\n",str);
//	printf("str path memset : %p\n",str);
//	int j = -1;
//	while(str[++j])
//		printf("Value is '%c' Path is %p\n",str[j],(void*)&str[j] );
//
//	memset(str,'a',2);
//	printf("str after memset : %s\n",str);
//	printf("str path memset : %p\n",str);
//	int i = -1;
//	while(str[++i])
//		printf("Value is '%c' Path is %p\n",str[i],(void*)&str[i] );
//
//	char c = 'a';
//	while(c <= 'z' && c >= 'a')
//	{
//		printf(" | '%c':%p",c,&c); //=> Hex?
//		c++;
//	}
//
//	printf("\n %s\n",str + 2); //=> Hex?
//}
//
////ft_memset
//int	main(void)
//{ #memset
//	char str[] = "Hello";
//	printf("str before ft_memset : %s\n",str);
//	printf("str path ft_memset : %p\n",str);
//	int j = -1;
//	while(str[++j])
//		printf("Value is '%c' Path is %p\n",str[j],(void*)&str[j] );
//
//	ft_memset(str,'a',2);
//	printf("str after ft_memset : %s\n",str);
//	printf("str path ft_memset : %p\n",str);

//	int i = -1;
//	while(str[++i])
//		printf("Value is '%c' Path is %p\n",str[i],(void*)&str[i] );

//	char c = 'a';
//	while(c <= 'z' && c >= 'a')
//	{
//		printf(" | '%c':%p",c,&c); //=> Hex?
//		c++;
//	}

//	printf("\n %s\n",str + 2); //=> Hex?
//}

//bzero
//int	main()
//{
//	char *str = "ABCD";

//	bzero(str,2);

//	printf("%s",str);
//}
//
//int	main()
//{
//	char a[] = "1234";
//	memmove(a+3,"Hello",5);
//	printf("%s\n",a);

//	char c[] = "1234";
//	ft_memmove(c+3,"Hello",5);
//	printf("%s\n",c);
//}

//int    main()
//{
//    char a[] = "abc";
//    char b[] = "def";
//    printf("%zu", ft_strlcpy(a, b, 8));
//}
//int	main(void)
//{
//	char	a[] = "abc";
//	char	b[] = "def";
//	//printf("%zu", strlcat(a, b, 8));
//	printf("%zu", ft_strlcat(a, b, 8));
//}

//int main(void)
//{
//    char destination[20] = "Hello, ";
//    const char *source = "World!";
//    size_t total_length;

//    total_length = strlcat(destination, source, sizeof(destination));
//    printf("Concatenated string: %s\n", destination);
//    printf("Total length: %zu\n", total_length);
//    return (0);
//}

//int main(void)
//{
//    char destination[20] = "Hello, ";
//    const char *source = "World!";
//    size_t total_length;

//    total_length = ft_strlcat(destination, source, sizeof(destination));
//    printf("Concatenated string: %s\n", destination);
//    printf("Total length: %zu\n", total_length);
//    return (0);
//}

//int	main()
//{
//	printf("ft_strchr: %s\n",ft_strchr("Hello", 'e'));

//	printf("ft_strrchr :%s\n", ft_strrchr("Hello", 'e'));

//	char * pch;
//	char str[] = "Example string";
//	pch = (char*) ft_memchr (str, 'p', strlen(str));
//	if (pch!=NULL)
//		printf ("'p' found at position %ld.\n", pch-str+1);
//	else
//		printf ("'p' not found.\n");
//	return 0;

//  char buffer1[] = "DWgaOtP12df0";
//  char buffer2[] = "DWGAOTP12DF0";

//  int n;

//  n= ft_memcmp ( buffer1, buffer2, sizeof(buffer1) );

//  if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
//  else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
//  else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);

//  return 0;
//}

//int main ()
//{
//  char str[] ="This is a simple string";
//  char * pch;
//  pch = ft_strnstr (str,"simple", 18);
//  if (pch != NULL)
//    strncpy (pch,"sample",6);
//  puts (str);
//  return 0;
//}

//int main()
//{
//  printf("%s",ft_strndup("Hello", 4));
//}

//int main()
//{
//	char s[] = "Hello , 42 Bangkok";
//	char *str = ft_substr(s, 0, 5 );
//	printf("%s",str);
//}

//int main()
//{
//	char *str = ft_strjoin("Hello ", "word");
//	printf("%s",str);
//	free(str);
//}

//int	main()
//{
//	char *str = ft_strtrim("Hello","ll");
//	printf("%s",str);
//	free(str);
//}

//int main()
//{
//	int i = -1;
//    char **str = ft_split("abcxsdxasdxwadawdazawx", 'x');
//	while(str[++i])
//		printf("%s\n",str[i]);
//	free(str);
//}
//int main()
//{
//    // Initialize a variable
//    int a = 20;
//    int b = 10;

//    printf("Value of b before calling memcpy: %d\n", b);

//    // Use memcpy to copy the value of 'a' into 'b'
//    ft_memcpy(&b, &a, sizeof(int));

//    printf("Value of b after calling memcpy: %d\n", b);

//    return 0;
//
//int	main()
//{
//	printf("%s\n",ft_itoa(-234));
//	printf("%s\n",ft_itoa(234));
//}


//int	main()
//{
//	//printf("'a' = %d\n",ft_isalpha('a'));
//	//printf("'A' = %d\n",ft_isalpha('A'));
//	//printf("'2' = %d\n",ft_isalpha('2'));
//	//printf("\n");
//	printf("\n");
//}

//char my_func(unsigned int i, char c) {
//    if (i % 2 == 0 && c >= 'a' && c <= 'z')
//        return c - 32;
//    return c;
//}

//int	main()
//{
//	char *original_string = "Hello World!";
//	printf("%s\n", original_string);
//	printf("%s\n", ft_strmapi(original_string, my_func));
//	return (0);
//}

//void my_func(unsigned int i, char *c) {
//    if (i % 2 == 0 && c >= 'a' && c <= 'z')
//        return &c - 32;
//    return &c;
//}

//int	main()
//{
//	char *original_string = "Hello World!";
//	printf("%s\n", original_string);
//	ft_striteri(original_string, my_func);
//	return (0);
//}
//#include <unistd.h>

//int	main()
//{
//	char a = 'a';
//	ft_putchar_fd(a,1);s
//	ft_putchar_fd('\n',1);
//	ft_putstr_fd("asd",1);
//	ft_putchar_fd('\n',1);
//	ft_putnbr_fd(2323,1);
//	ft_putchar_fd('\n',1);
//	ft_putendln_fd("asd",1);
//	ft_putendln_fd("asd",1);
//	ft_putendln_fd("asd",1);
//	ft_putendln_fd("asd",1);
//}

//int	main()
//{
//	char s[] = {65, 66, 67, 68, 69, 0, 45};
//	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
//	char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
//	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
//	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

//	ft_memmove(s0, s ,7);
//	printf("%s", s0);
//}
int main()
{
	//printf("%d\n", ft_strncmp("test", "testss", 7));
	//printf("%d\n", ft_strncmp("test3", "test4", 4));
	//printf("%d\n", ft_strncmp("\200", "\0", 1));

//	char *str = ft_strchr("Hello", '\0');
//	char *temp = ft_strchr("", 'c');
//	printf("%s\n",str);
//	printf("%s\n",temp);
	//char	*dest = "Hello";

	//printf("%s\n", dest);
	//printf("%zu\n", ft_strlcpy(dest, "lad" , 3));
	//printf("%s\n", dest);
	//char	*dest;
	//dest = (char *)malloc(sizeof(*dest) * 15);
	//memset(dest, 0, 15);
	//memset(dest, 'r', 6);
	//dest[14] = 'a';
	//printf("%zu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
	//printf("%s\n", dest);
	//char	src[] = "lorem ipsum dolor sit amet";
	//char	*dest;

	//dest = src + 1;
	//ft_memmove(dest, src, 8);
	//printf("%s",dest);
	//printf("%s\n",ft_itoa(-10));
	//printf("%s\n",ft_itoa(10));
	//printf("%s\n",ft_itoa(543000));
	//printf("%s\n",ft_itoa(-2147483648LL));

	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	printf("%s",ft_strtrim(s1, " "));
}