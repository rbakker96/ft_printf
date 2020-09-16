<p align="center">
  <img src="https://github.com/rbakker96/images/blob/master/codam_logo.png">
</p>

# ft_printf
***This project is pretty straight forward. You will recode printf. You will mainly learn how to use variadic arguments.***

---

### Project summary
> 1th ring Codam project

This project intended to get introduced to system administration. Learning points are to get aware of the importance of using scripts to automate tasks. In this case, the "docker" technology is used. During this project, a complete web server is the end goal. This server will run multiples services: Wordpress, phpMyAdmin, and a SQL-database.

---

### Technical considerations
> The project needs to comply with the following rules/functionalities.

- The prototype of ft_printf should be int ft_printf(const char *, ...);
- You have to recode the libc’s printf function
- It must not do the buffer management like the real printf
- It will manage the following conversions: cspdiuxX%
- It will manage any combination of the following flags: ’-0.*’ and minimum field width with all conversions
- It will be compared with the real printf
- You must use the command ar to create your librairy, using the command libtool is forbidden.

---

### Usage
> Create a main to compare the result of ft_printf with the real printf, for example

```javascript
// main.c
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("\n ft_printf output : %d \n", ft_printf("specifier = d |%.0d|", 0));
	printf("\n printf output : %d \n", printf("specifier = d |%.0d|", 0));
  printf("-------\n");
	printf("\n ft_ printf output : %d \n", ft_printf("specifier = d |%d|", 10));
	printf("\n printf output : %d \n", printf("specifier = d |%d|", 10));
  printf("-------\n");
}
``` 
> test_main.c is also provided with a variety of test cases

> Run the following commands in the terminal

```shell
$ git clone https://github.com/rbakker96/ft_printf.git ft_printf
$ cd ft_printf
$ cd make
$ gcc -Wall -Wextra -Werror main.c libftprintf.a
$ ./a.out 
```

---

### Used resources
> Most noteworthy resources used during this project

- <a href="http://www.cplusplus.com/reference/cstdio/printf/" target="_blank">Printf documentation</a>
- <a href="https://www.thegeekstuff.com/2017/05/c-variadic-functions/" target="_blank">C Variadic Function Implementation Explained</a>
- <a href="https://man7.org/linux/man-pages/man3/printf.3.html"_blank">Linux manual page</a>
