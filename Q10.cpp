/* Question:
.Write a C program to solve the following problem: Suppose that a disk drive has 5,000
cylinders, numbered 0 to 4999. The drive is currently serving a request at cylinder143,
and the previous request was at cylinder 125. The queue of pending requests, in FIFO
order,is:
86, 1470, 913, 1774, 948, 1509, 1022, 1750, 130
Starting from the current head position, what is the total distance (in cylinders)that the disk arm
moves to satisfy all the pending requests for each of the FCFS disk-scheduling algorithms?

Solution:
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int head,i,n1;
    printf("\nEnter head position");
    scanf("%d",&head);          //head points to current position
    printf("\nEnter number of requests");
    scanf("%d",&n1);
    int req[n1];                //req is the request list
    for(i=0;i<n1;i++)
    {
            scanf("%d",&req[i]);
    }
    int diff=req[0]-head;
    if(diff<0)
    {
              diff=diff*-1;
    }
    for(i=1;i<n1;i++)
    {
            if((req[i]-req[i-1])>0)
               diff=diff+(req[i]-req[i-1]);
            else
               diff=diff+(req[i-1]-req[i]);
    }
    printf("Seek time = %d\n",diff);
    getch();
}

