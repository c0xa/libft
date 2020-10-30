/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:02:04 by tblink            #+#    #+#             */
/*   Updated: 2020/10/30 13:11:34 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_tolower.c"
#include "ft_toupper.c"
#include "ft_isprint.c"
#include "ft_isascii.c"
#include "ft_isalnum.c"
#include "ft_isdigit.c"
#include "ft_isalpha.c"
#include "ft_atoi.c"
#include "ft_strncmp.c"
#include "ft_strnstr.c"
#include "ft_strlen.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strlcpy.c"
#include "ft_strlcat.c"
// #include "ft_memset.c"


int main()
{
	printf("%s\n", "tolower");
	printf("%c ", ft_tolower(64));
	printf("%c\n", tolower(64));
	printf("%c ", ft_tolower(65));
	printf("%c\n", tolower(65));
	printf("%c ", ft_tolower(91));
	printf("%c\n", tolower(91));
	printf("%c ", ft_tolower(90));
	printf("%c\n", tolower(90));
	printf("%c ", ft_tolower(' '));
	printf("%c\n", tolower(' '));
	printf("%c ", ft_tolower('/'));
	printf("%c\n", tolower('/'));
	printf("%c ", ft_tolower('Z'));
	printf("%c\n", tolower('Z'));
	printf("%s\n", "-----------------");
	printf("%s\n", "toupper");
	printf("%c ", ft_toupper(96));
	printf("%c\n", toupper(96));
	printf("%c ", ft_toupper(97));
	printf("%c\n", toupper(97));
	printf("%c ", ft_toupper(123));
	printf("%c\n", toupper(123));
	printf("%c ", ft_toupper(122));
	printf("%c\n", toupper(122));
	printf("%c ", ft_toupper('1'));
	printf("%c\n", toupper('1'));
	printf("%c ", ft_toupper('/'));
	printf("%c\n", toupper('/'));
	printf("%c ", ft_toupper(' '));
	printf("%c\n", toupper(' '));
	printf("%s\n", "-----------------");
	printf("%s\n", "isprint");
	printf("%d ", ft_isprint('a'));
	printf("%d\n", isprint('a'));
	printf("%d ", ft_isprint('A'));
	printf("%d\n", isprint('A'));
	printf("%d ", ft_isprint('_'));
	printf("%d\n", isprint('_'));
	printf("%d ", ft_isprint(' '));
	printf("%d\n", isprint(' '));
	printf("%d ", ft_isprint('1'));
	printf("%d\n", isprint('1'));
	printf("%d ", ft_isprint(30));
	printf("%d\n", isprint(30));
	printf("%d ", ft_isprint(128));
	printf("%d\n", isprint(128));
	printf("%s\n", "-----------------");
	printf("%s\n", "isascii");
	printf("%d ", ft_isascii('\t'));
	printf("%d\n", isascii('\t'));
	printf("%d ", ft_isascii('A'));
	printf("%d\n", isascii('A'));
	printf("%d ", ft_isascii('_'));
	printf("%d\n", isascii('_'));
	printf("%d ", ft_isascii(' '));
	printf("%d\n", isascii(' '));
	printf("%d ", ft_isascii('1'));
	printf("%d\n", isascii('1'));
	printf("%d ", ft_isascii(30));
	printf("%d\n", isascii(30));
	printf("%d ", ft_isascii(128));
	printf("%d\n", isascii(128));
	printf("%s\n", "-----------------");
	printf("%s\n", "isalnum");
	printf("%d ", ft_isalnum(48));
	printf("%d\n", isalnum(48));
	printf("%d ", ft_isalnum(47));
	printf("%d\n", isalnum(47));
	printf("%d ", ft_isalnum(57));
	printf("%d\n", isalnum(57));
	printf("%d ", ft_isalnum(58));
	printf("%d\n", isalnum(58));
	printf("%d ", ft_isalnum(65));
	printf("%d\n", isalnum(65));
	printf("%d ", ft_isalnum(64));
	printf("%d\n", isalnum(64));
	printf("%d ", ft_isalnum(90));
	printf("%d\n", isalnum(90));
	printf("%d ", ft_isalnum(91));
	printf("%d\n", isalnum(91));
	printf("%d ", ft_isalnum(96));
	printf("%d\n", isalnum(96));
	printf("%d ", ft_isalnum(97));
	printf("%d\n", isalnum(97));
	printf("%d ", ft_isalnum(122));
	printf("%d\n", isalnum(122));
	printf("%d ", ft_isalnum(123));
	printf("%d\n", isalnum(123));
	printf("%s\n", "-----------------");
	printf("%s\n", "isalnum");
	printf("%d ", ft_isalnum(48));
	printf("%d\n", isalnum(48));
	printf("%d ", ft_isalnum(47));
	printf("%d\n", isalnum(47));
	printf("%d ", ft_isalnum(57));
	printf("%d\n", isalnum(57));
	printf("%d ", ft_isalnum(58));
	printf("%d\n", isalnum(58));
	printf("%d ", ft_isalnum(65));
	printf("%d\n", isalnum(65));
	printf("%d ", ft_isalnum(64));
	printf("%d\n", isalnum(64));
	printf("%d ", ft_isalnum(90));
	printf("%d\n", isalnum(90));
	printf("%d ", ft_isalnum(91));
	printf("%d\n", isalnum(91));
	printf("%d ", ft_isalnum(96));
	printf("%d\n", isalnum(96));
	printf("%d ", ft_isalnum(97));
	printf("%d\n", isalnum(97));
	printf("%d ", ft_isalnum(122));
	printf("%d\n", isalnum(122));
	printf("%d ", ft_isalnum(123));
	printf("%d\n", isalnum(123));
	printf("%s\n", "-----------------");
	printf("%s\n", "isdigit");
	printf("%d ", ft_isdigit(48));
	printf("%d\n", isdigit(48));
	printf("%d ", ft_isdigit(47));
	printf("%d\n", isdigit(47));
	printf("%d ", ft_isdigit(57));
	printf("%d\n", isdigit(57));
	printf("%d ", ft_isdigit(58));
	printf("%d\n", isdigit(58));
	printf("%s\n", "-----------------");
	printf("%s\n", "isalpha");
	printf("%d ", ft_isalpha(65));
	printf("%d\n", isalpha(65));
	printf("%d ", ft_isalpha(64));
	printf("%d\n", isalpha(64));
	printf("%d ", ft_isalpha(90));
	printf("%d\n", isalpha(90));
	printf("%d ", ft_isalpha(91));
	printf("%d\n", isalpha(91));
	printf("%d ", ft_isalpha(96));
	printf("%d\n", isalpha(96));
	printf("%d ", ft_isalpha(97));
	printf("%d\n", isalpha(97));
	printf("%d ", ft_isalpha(122));
	printf("%d\n", isalpha(122));
	printf("%d ", ft_isalpha(123));
	printf("%d\n", isalpha(123));
	printf("%s\n", "-----------------");
	printf("%s\n", "atoi");
	printf("%d ", ft_atoi("    9223372036854775808"));
	printf("%d\n", atoi("    9223372036854775808"));
	printf("%d ", ft_atoi("    -2034sd321"));
	printf("%d\n", atoi("    -2034sd321"));
	printf("%d ", ft_atoi("  -9223372036854775808"));
	printf("%d\n", atoi("  -9223372036854775808"));
	printf("%d ", ft_atoi("  +-+3412awsdw"));
	printf("%d\n", atoi("  +-+3412awsdw"));
	printf("%d ", ft_atoi("   /t21w212"));
	printf("%d\n", atoi("   /t21w212"));
	printf("%d ", ft_atoi("-2147483649"));
	printf("%d\n", atoi("-2147483649"));
	printf("%d ", ft_atoi("---++2131231"));
	printf("%d\n", atoi("---++2131231"));
	printf("%d ", ft_atoi("derfe3wd2w"));
	printf("%d\n", atoi("derfe3wd2w"));
	printf("%s\n", "-----------------");
	printf("%s\n", "strncmp");
	printf("%d ", ft_strncmp("1", "1", 1));
	printf("%d\n", strncmp("1", "1", 1));
	printf("%d ", ft_strncmp("1234", "1345", 4));
	printf("%d\n", strncmp("1234", "1345", 4));
	printf("%d ", ft_strncmp("1234", "1345", 1));
	printf("%d\n", strncmp("1234", "1345", 1));
	printf("%d ", ft_strncmp("123", "123", 12));
	printf("%d\n", strncmp("123", "123", 12));
	printf("%d ", ft_strncmp("878", "888", 10));
	printf("%d\n", strncmp("878", "888", 10));
	printf("%d ", ft_strncmp("123", "134", 3));
	printf("%d\n", strncmp("123", "134", 3));
	printf("%s\n", "-----------------");
	printf("%s\n", "strnstr");
	printf("%s ", ft_strnstr("1234", "1", 1));
	printf("%s\n", strnstr("1234", "1", 1));
	printf("%s\n", "-----------------");
	printf("%s\n", "strchr");
	printf("%s ", ft_strchr("12341", '1'));
	printf("%s\n", strchr("12341", '1'));
	printf("%s ", ft_strchr("12341", '6'));
	printf("%s\n", strchr("12341", '6'));
	printf("%s ", ft_strchr("12341", '4'));
	printf("%s\n", strchr("12341", '4'));
	printf("%s\n", "-----------------");
	printf("%s\n", "strrchr");
	printf("%s ", ft_strrchr("12341", '1'));
	printf("%s\n", strrchr("12341", '1'));
	printf("%s ", ft_strrchr("12341", '6'));
	printf("%s\n", strrchr("12341", '6'));
	printf("%s ", ft_strrchr("423", '4'));
	printf("%s\n", strrchr("423", '4'));
	printf("%s\n", "-----------------");
	printf("%s\n", "strlen");
	printf("%lu ", ft_strlen("12341"));
	printf("%lu\n", strlen("12341"));
	printf("%lu ", ft_strlen(""));
	printf("%lu\n", strlen(""));
	printf("%s\n", "-----------------");
	printf("%s\n", "strlcpy");
	char *str;
	str = (char*)malloc(15);
	*str = '1';
	printf("%lu ", ft_strlcpy(str, "2213456789765434567", 1));
	printf("%lu\n", strlcpy(str, "2213456789765434567", 1));
	printf("%s\n", "-----------------");
	printf("%s\n", "strlcat");
	printf("%lu ", ft_strlcat(str, "2213456789765434567", 1));
	printf("%lu\n", strlcat(str, "2213456789765434567", 1));
	printf("%s\n", "-----------------");
	printf("%s\n", "memset");
	printf("%s\n", "-----------------");
	return (0);
}
