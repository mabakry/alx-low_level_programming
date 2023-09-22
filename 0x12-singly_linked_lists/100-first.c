#include <stdio.h>
#include "lists.h"


/**
 * print_before - print message before the main function is executed.
 */

__attribute__((constructor))
	void print_before(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
