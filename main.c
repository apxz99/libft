/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 17:22:45 by sarayapa          #+#    #+#             */
/*   Updated: 2025/09/05 22:13:07 by sarayapa         ###   ########.fr       */
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
//	printf("%s",ft_strchr("Hello", 'e'));
//}

//int	main(void)
//{
//	printf("%s", ft_strrchr("Hello", 'e'));
//}
//int main ()
//{
//  char * pch;
//  char str[] = "Example string";
//  pch = (char*) ft_memchr (str, 'p', strlen(str));
//  if (pch!=NULL)
//    printf ("'p' found at position %ld.\n", pch-str+1);
//  else
//    printf ("'p' not found.\n");
//  return 0;
//}

//int main ()
//{
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

int main()
{
  printf("%s",ft_strndup("Hello", 4));
}