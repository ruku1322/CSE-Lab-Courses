#include <stdio.h>

int main() {
    int p[10], at[10], bt[10], ct[10], tat[10], wt[10], remaining_bt[10];
    int readyQueue[10], first = 0, last = 0;
    int i, j, n, time = 0, completed = 0, Q = 3;
    float total_tat = 0, total_wt = 0;

    // Input number of processes
    printf("Enter number of processes: ");
    scanf("%d", &n);

    // Input process IDs
    printf("Enter %d Process IDs: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    // Input arrival times
    printf("Enter %d Arrival Times: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &at[i]);
    }

    // Input burst times
    printf("Enter %d Burst Times: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
        remaining_bt[i] = bt[i]; // Initialize remaining burst time
    }

    // Sort based on Arrival Time (if same, sort by Burst Time)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (at[j] > at[j + 1] || (at[j] == at[j + 1] && bt[j] > bt[j + 1])) {
                // Swap Arrival Time
                int temp = at[j];
                at[j] = at[j + 1];
                at[j + 1] = temp;

                // Swap Burst Time
                temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;

                // Swap Process ID
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;

                // Swap Remaining Burst Time
                temp = remaining_bt[j];
                remaining_bt[j] = remaining_bt[j + 1];
                remaining_bt[j + 1] = temp;
            }
        }
    }



    readyQueue[last] = 0;
    i = 1;


    while (completed < n) {
        if (first <= last) {
            int index = readyQueue[first]; // Get first process in queue
            first++;

            int exec_time;
        if (remaining_bt[index] > Q) {
            exec_time = Q;
        } else {
            exec_time = remaining_bt[index];
        }
        time += exec_time;
        remaining_bt[index] -= exec_time;



            while (i < n && at[i] <= time) {
               last++;
                readyQueue[last] = i;
                i++;
            }


            if (remaining_bt[index] > 0) {
               last++;
                readyQueue[last] = index;
            } else {
                ct[index] = time; // Completion Time
                tat[index] = ct[index] - at[index]; // Turnaround Time
                wt[index] = tat[index] - bt[index]; // Waiting Time
                total_tat += tat[index]; // Accumulate for average
                total_wt += wt[index]; // Accumulate for average
                completed++;
            }
        } else {
            time++; // If no process in ready queue, increment time
        }
    }

    // Print the result
    printf("\nP\tAT\tBT\tCT\tTAT\tWT");
    for (i = 0; i < n; i++) {
        printf("\nP%d\t%d\t%d\t%d\t%d\t%d", p[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    // Print average values
    printf("\n\nAverage Turnaround Time: %.2f", total_tat / n);
    printf("\nAverage Waiting Time: %.2f\n", total_wt / n);

    return 0;
}



/*
5
1 2 3 4 5
2 1 4 0 6
6 3 2 5 4

*/
