/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/18 14:33:23 by rbakker        #+#    #+#                */
/*   Updated: 2019/12/19 19:08:41 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	printf("\noutput : %d \n", ft_printf("specifier = d |%.0d|", 0));
	printf("\noutput : %d \n", printf("specifier = d |%.0d|", 0));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%d|", 10));
	printf("\noutput : %d \n", printf("specifier = d |%d|", 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%10d|", 10));
	printf("\noutput : %d \n", printf("specifier = d |%10d|", 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%.d|", 10));
	printf("\noutput : %d \n", printf("specifier = d |%.d|", 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%.10d|", 10));
	printf("\noutput : %d \n", printf("specifier = d |%.10d|", 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%-10.5d|", 10));
	printf("\noutput : %d \n", printf("specifier = d |%-10.5d|", 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%010d|", 10));
	printf("\noutput : %d \n", printf("specifier = d |%010d|", 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%010.d|", 10));
	printf("\noutput : %d \n", printf("specifier = d |%010.d|", 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%.010d|", 10));
	printf("\noutput : %d \n", printf("specifier = d |%.010d|", 10));
printf("-------\n");	
	printf("\noutput : %d \n", ft_printf("specifier = d |%-d|", 10));
	printf("\noutput : %d \n", printf("specifier = d |%-d|", 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%-10d|", 10));
	printf("\noutput : %d \n", printf("specifier = d |%-10d|", 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%*d|", 10, 10));
	printf("\noutput : %d \n", printf("specifier = d |%*d|", 10, 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%*.d|", 10, 10));
	printf("\noutput : %d \n", printf("specifier = d |%*.d|", 10, 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%0*d|", 10, 10));
	printf("\noutput : %d \n", printf("specifier = d |%0*d|", 10, 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%-*d|", 10, 10));
	printf("\noutput : %d \n", printf("specifier = d |%-*d|", 10, 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%-.*d|", 10, 10));
	printf("\noutput : %d \n", printf("specifier = d |%-.*d|", 10, 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%0d|", 10));
	printf("\noutput : %d \n", printf("specifier = d |%0d|", 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%010d|", 10));
	printf("\noutput : %d \n", printf("specifier = d |%010d|", 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = d |%010.5d|", 10));
	printf("\noutput : %d \n", printf("specifier = d |%010.5d|", 10));



printf("\n\n\n-------\n");
printf("\noutput : %i \n", ft_printf("specifier = i |%i|", 10));
	printf("\noutput : %i \n", printf("specifier = i |%i|", 10));
printf("-------\n");
	printf("\noutput : %i \n", ft_printf("specifier = i |%10i|", 10));
	printf("\noutput : %i \n", printf("specifier = i |%10i|", 10));
printf("-------\n");
	printf("\noutput : %i \n", ft_printf("specifier = i |%.i|", 10));
	printf("\noutput : %i \n", printf("specifier = i |%.i|", 10));
printf("-------\n");
	printf("\noutput : %i \n", ft_printf("specifier = i |%.10i|", 10));
	printf("\noutput : %i \n", printf("specifier = i |%.10i|", 10));
printf("-------\n");
	printf("\noutput : %i \n", ft_printf("specifier = i |%-10.5i|", 10));
	printf("\noutput : %i \n", printf("specifier = i |%-10.5i|", 10));
printf("-------\n");
	printf("\noutput : %i \n", ft_printf("specifier = i |%010i|", 10));
	printf("\noutput : %i \n", printf("specifier = i |%010i|", 10));
printf("-------\n");
	printf("\noutput : %i \n", ft_printf("specifier = i |%010.i|", 10));
	printf("\noutput : %i \n", printf("specifier = i |%010.i|", 10));
printf("-------\n");
	printf("\noutput : %i \n", ft_printf("specifier = i |%.010i|", 10));
	printf("\noutput : %i \n", printf("specifier = i |%.010i|", 10));
printf("-------\n");	
	printf("\noutput : %i \n", ft_printf("specifier = i |%-i|", 10));
	printf("\noutput : %i \n", printf("specifier = i |%-i|", 10));
printf("-------\n");
	printf("\noutput : %i \n", ft_printf("specifier = i |%-10i|", 10));
	printf("\noutput : %i \n", printf("specifier = i |%-10i|", 10));
printf("-------\n");
	printf("\noutput : %i \n", ft_printf("specifier = i |%*i|", 10, 10));
	printf("\noutput : %i \n", printf("specifier = i |%*i|", 10, 10));
printf("-------\n");
	printf("\noutput : %i \n", ft_printf("specifier = i |%*.i|", 10, 10));
	printf("\noutput : %i \n", printf("specifier = i |%*.i|", 10, 10));
printf("-------\n");
	printf("\noutput : %i \n", ft_printf("specifier = i |%0*i|", 10, 10));
	printf("\noutput : %i \n", printf("specifier = i |%0*i|", 10, 10));
printf("-------\n");
	printf("\noutput : %i \n", ft_printf("specifier = i |%-*i|", 10, 10));
	printf("\noutput : %i \n", printf("specifier = i |%-*i|", 10, 10));
printf("-------\n");
	printf("\noutput : %i \n", ft_printf("specifier = i |%-.*i|", 10, 10));
	printf("\noutput : %i \n", printf("specifier = i |%-.*i|", 10, 10));
printf("-------\n");
	printf("\noutput : %i \n", ft_printf("specifier = i |%0i|", 10));
	printf("\noutput : %i \n", printf("specifier = i |%0i|", 10));
printf("-------\n");
	printf("\noutput : %i \n", ft_printf("specifier = i |%010i|", 10));
	printf("\noutput : %i \n", printf("specifier = i |%010i|", 10));
printf("-------\n");
	printf("\noutput : %i \n", ft_printf("specifier = i |%010.5i|", 10));
	printf("\noutput : %i \n", printf("specifier = i |%010.5i|", 10));


	
printf("\n\n\n-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = %% |%10%|"));
	printf("\noutput : %d \n", printf("specifier = %% |%10%|"));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = %% |%-10%|"));
	printf("\noutput : %d \n", printf("specifier = %% |%-10%|"));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = %% |%010%|"));
	printf("\noutput : %d \n", printf("specifier = %% |%010%|"));



printf("\n\n\n-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = c |%c|", 'a'));
	printf("\noutput : %d \n", printf("specifier = c |%c|", 'a'));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = c |%10c|", 'a'));
	printf("\noutput : %d \n", printf("specifier = c |%10c|", 'a'));
printf("-------\n");	
	printf("\noutput : %d \n", ft_printf("specifier = c |%-c|", 'a'));
	printf("\noutput : %d \n", printf("specifier = c |%-c|", 'a'));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = c |%-10c|", 'a'));
	printf("\noutput : %d \n", printf("specifier = c |%-10c|", 'a'));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = c |%*c|", 10, 'a'));
	printf("\noutput : %d \n", printf("specifier = c |%*c|", 10, 'a'));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = c |%-*c|", 10, 'a'));
	printf("\noutput : %d \n", printf("specifier = c |%-*c|", 10, 'a'));



printf("\n\n\n-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = s |%s|", "Hello World"));
	printf("\noutput : %d \n", printf("specifier = s |%s|", "Hello World"));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = s |%30s|", "Hello World"));
	printf("\noutput : %d \n", printf("specifier = s |%30s|", "Hello World"));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = s |%.s|", "Hello World"));
	printf("\noutput : %d \n", printf("specifier = s |%.s|", "Hello World"));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = s |%.30s|", "Hello World"));
	printf("\noutput : %d \n", printf("specifier = s |%.30s|", "Hello World"));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = s |%-30.5s|", "Hello World"));
	printf("\noutput : %d \n", printf("specifier = s |%-30.5s|", "Hello World"));
printf("-------\n");	
	printf("\noutput : %d \n", ft_printf("specifier = s |%-s|", "Hello World"));
	printf("\noutput : %d \n", printf("specifier = s |%-s|", "Hello World"));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = s |%-30s|", "Hello World"));
	printf("\noutput : %d \n", printf("specifier = s |%-30s|", "Hello World"));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = s |%*s|", 20, "Hello World"));
	printf("\noutput : %d \n", printf("specifier = s |%*s|", 20, "Hello World"));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = s |%*.s|", 20, "Hello World"));
	printf("\noutput : %d \n", printf("specifier = s |%*.s|", 20, "Hello World"));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = s |%-*s|", 20, "Hello World"));
	printf("\noutput : %d \n", printf("specifier = s |%-*s|", 20, "Hello World"));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = s |%-.*s|", 20, "Hello World"));
	printf("\noutput : %d \n", printf("specifier = s |%-.*s|", 20, "Hello World"));



printf("\n\n\n-------\n");
printf("\noutput : %d \n", ft_printf("specifier = x |%x|", 123));
	printf("\noutput : %d \n", printf("specifier = x |%x|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = x |%10x|", 123));
	printf("\noutput : %d \n", printf("specifier = x |%10x|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = x |%.x|", 123));
	printf("\noutput : %d \n", printf("specifier = x |%.x|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = x |%.10x|", 123));
	printf("\noutput : %d \n", printf("specifier = x |%.10x|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = x |%-10.5x|", 1235484));
	printf("\noutput : %d \n", printf("specifier = x |%-10.5x|", 1235484));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = x |%010x|", 123));
	printf("\noutput : %d \n", printf("specifier = x |%010x|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = x |%010.x|", 123));
	printf("\noutput : %d \n", printf("specifier = x |%010.x|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = x |%.010x|", 1243453));
	printf("\noutput : %d \n", printf("specifier = x |%.010x|", 1243453));
printf("-------\n");	
	printf("\noutput : %d \n", ft_printf("specifier = x |%-x|", 123));
	printf("\noutput : %d \n", printf("specifier = x |%-x|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = x |%-10x|", 10));
	printf("\noutput : %d \n", printf("specifier = x |%-10x|", 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = x |%*x|", 10, 123));
	printf("\noutput : %d \n", printf("specifier = x |%*x|", 10, 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = x |%*.x|", 10, 123));
	printf("\noutput : %d \n", printf("specifier = x |%*.x|", 10, 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = x |%0*x|", 10, 123));
	printf("\noutput : %d \n", printf("specifier = x |%0*x|", 10, 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = x |%-*x|", 10, 123));
	printf("\noutput : %d \n", printf("specifier = x |%-*x|", 10, 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = x |%-.*x|", 10, 123));
	printf("\noutput : %d \n", printf("specifier = x |%-.*x|", 10, 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = x |%0x|", 123));
	printf("\noutput : %d \n", printf("specifier = x |%0x|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = x |%010x|", 123));
	printf("\noutput : %d \n", printf("specifier = x |%010x|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = x |%010.5x|", 123));
	printf("\noutput : %d \n", printf("specifier = x |%010.5x|", 123));



printf("\n\n\n-------\n");
printf("\noutput : %d \n", ft_printf("specifier = X |%X|", 123));
	printf("\noutput : %d \n", printf("specifier = X |%X|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = X |%10X|", 123));
	printf("\noutput : %d \n", printf("specifier = X |%10X|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = X |%.X|", 123));
	printf("\noutput : %d \n", printf("specifier = X |%.X|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = X |%.10X|", 123));
	printf("\noutput : %d \n", printf("specifier = X |%.10X|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = X |%-10.5X|", 1235484));
	printf("\noutput : %d \n", printf("specifier = X |%-10.5X|", 1235484));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = X |%010X|", 123));
	printf("\noutput : %d \n", printf("specifier = X |%010X|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = X |%010.X|", 123));
	printf("\noutput : %d \n", printf("specifier = X |%010.X|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = X |%.010X|", 1243453));
	printf("\noutput : %d \n", printf("specifier = X |%.010X|", 1243453));
printf("-------\n");	
	printf("\noutput : %d \n", ft_printf("specifier = X |%-X|", 123));
	printf("\noutput : %d \n", printf("specifier = X |%-X|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = X |%-10X|", 10));
	printf("\noutput : %d \n", printf("specifier = X |%-10X|", 10));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = X |%*X|", 10, 123));
	printf("\noutput : %d \n", printf("specifier = X |%*X|", 10, 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = X |%*.X|", 10, 123));
	printf("\noutput : %d \n", printf("specifier = X |%*.X|", 10, 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = X |%0*X|", 10, 123));
	printf("\noutput : %d \n", printf("specifier = X |%0*X|", 10, 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = X |%-*X|", 10, 123));
	printf("\noutput : %d \n", printf("specifier = X |%-*X|", 10, 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = X |%-.*X|", 10, 123));
	printf("\noutput : %d \n", printf("specifier = X |%-.*X|", 10, 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = X |%0X|", 123));
	printf("\noutput : %d \n", printf("specifier = X |%0X|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = X |%010X|", 123));
	printf("\noutput : %d \n", printf("specifier = X |%010X|", 123));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = X |%010.5X|", 123));
	printf("\noutput : %d \n", printf("specifier = X |%010.5X|", 123));



printf("\n\n\n-------\n");
printf("\noutput : %d \n", ft_printf("specifier = u |%u|", -30));
	printf("\noutput : %d \n", printf("specifier = u |%u|", -30));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = u |%30u|", -30));
	printf("\noutput : %d \n", printf("specifier = u |%30u|", -30));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = u |%.u|", -30));
	printf("\noutput : %d \n", printf("specifier = u |%.u|", -30));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = u |%.30u|", -30));
	printf("\noutput : %d \n", printf("specifier = u |%.30u|", -30));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = u |%-30.5u|", -305484));
	printf("\noutput : %d \n", printf("specifier = u |%-30.5u|", -305484));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = u |%030u|", -30));
	printf("\noutput : %d \n", printf("specifier = u |%030u|", -30));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = u |%030.u|", -30));
	printf("\noutput : %d \n", printf("specifier = u |%030.u|", -30));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = u |%.030u|", 1243453));
	printf("\noutput : %d \n", printf("specifier = u |%.030u|", 1243453));
printf("-------\n");	
	printf("\noutput : %d \n", ft_printf("specifier = u |%-u|", -30));
	printf("\noutput : %d \n", printf("specifier = u |%-u|", -30));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = u |%-30u|", 30));
	printf("\noutput : %d \n", printf("specifier = u |%-30u|", 30));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = u |%*u|", 30, -30));
	printf("\noutput : %d \n", printf("specifier = u |%*u|", 30, -30));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = u |%*.u|", 30, -30));
	printf("\noutput : %d \n", printf("specifier = u |%*.u|", 30, -30));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = u |%0*u|", 30, -30));
	printf("\noutput : %d \n", printf("specifier = u |%0*u|", 30, -30));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = u |%-*u|", 30, -30));
	printf("\noutput : %d \n", printf("specifier = u |%-*u|", 30, -30));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = u |%-.*u|", 30, -30));
	printf("\noutput : %d \n", printf("specifier = u |%-.*u|", 30, -30));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = u |%0u|", -30));
	printf("\noutput : %d \n", printf("specifier = u |%0u|", -30));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = u |%030u|", -30));
	printf("\noutput : %d \n", printf("specifier = u |%030u|", -30));
printf("-------\n");
	printf("\noutput : %d \n", ft_printf("specifier = u |%030.5u|", -30));
	printf("\noutput : %d \n", printf("specifier = u |%030.5u|", -30));
}
