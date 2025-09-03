/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 17:22:45 by sarayapa          #+#    #+#             */
/*   Updated: 2025/09/04 05:18:12 by sarayapa         ###   ########.fr       */
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
//

//int    main()
//{
//    char a[] = "abc";
//    char b[] = "def";
//    printf("%zu", ft_strlcpy(a, b, 8));

//}
int	main()
{
	char a[] = "abc";
	char b[] = "def";
	printf("%zu", strlcat(a, b, 8));
}