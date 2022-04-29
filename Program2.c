/*C program to get Process Id and Parent Process Id in Linux.*/

#include <stdio.h>
#include <unistd.h>

int main()
{
    int ipid, ippid;

    ipid = getpid(); /*process id*/
    ippid = getpid(); /*parent process id*/

    printf("Process ID: %d\n", ipid);
    printf("Parent Process ID: %d\n", ipid);

    return 0;
}
