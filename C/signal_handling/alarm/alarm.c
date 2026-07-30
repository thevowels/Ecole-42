#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void handle_alarm(int sig)
{
    (void) sig;
    printf("Alarm handled!\n");
}

int main(void)
{
    struct sigaction sa;

    sa.sa_handler = handle_alarm;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;

    sigaction(SIGALRM, &sa, NULL);

    alarm(3);


    printf("Waiting for Alarm...\n");

    pause();

    printf("Program finished!\n");

    return (0);
}