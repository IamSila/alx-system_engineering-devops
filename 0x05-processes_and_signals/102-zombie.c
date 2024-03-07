/*
 * File: 102-zombie.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * infinite_while - Run an infinite while loop.
 *
 * Return: Always 0.
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - The entry point for the process.
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t process_id;
	char counter = 0;

	while (counter < 5)
	{
		process_id = fork();
		if (process_id > 0)
		{
			printf("Zombie process created, PID: %d\n", process_id);
			sleep(1);
			counter++;
		}
		else
			exit(0);
	}

	infinite_while();

	return (EXIT_SUCCESS);
}
