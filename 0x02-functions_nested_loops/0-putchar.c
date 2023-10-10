#include <unistd.h>
#include <sys/syscall.h>

/*
 * main - main function
 *
 * Return: 0 when successful
 */
 /* function declaration */
int main(void)

{ 
const char msg[] = "_putchar\n";
syscall(SYS_write, 1, msg,
		sizeof(msg));
return (0);
}
