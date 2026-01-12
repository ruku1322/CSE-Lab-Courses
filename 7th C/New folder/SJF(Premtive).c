#include <stdio.h>
#include <stdbool.h>

int main() {
    int p[10], at[10], bt[10], ct[10], tat[10], wt[10], rem_bt[10];
    int n, i, j, time = 0, completed = 0;
    float awt = 0, atat = 0, total_tat = 0, total_wt = 0;

   printf("Enter number of processes you want: ");
    scanf("%d", &n);

    printf("Enter %d process IDs: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    printf("Enter %d arrival times: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &at[i]);
    }

    printf("Enter %d burst times: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
        rem_bt[i] = bt[i];  // Initialize remaining burst time
    }

    // Sorting based on Arrival Time (Bubble Sort)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (at[j] > at[j + 1]) {
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
            }
        }
    }

    // SJF Preemptive Scheduling
    while (completed < n) {
        int idx = -1;
        int min_bt = 9999;  // A large number to find the process with the shortest remaining burst time

        // Find the process with the minimum remaining burst time
        for (i = 0; i < n; i++) {
            if (at[i] <= time && rem_bt[i] > 0 && rem_bt[i] < min_bt) {
                min_bt = rem_bt[i];
                idx = i;
            }
        }

        if (idx != -1) {
            rem_bt[idx]--;  // Decrease remaining burst time

            if (rem_bt[idx] == 0) {
                completed++;  // Process completed
                ct[idx] = time + 1;  // Set Completion Time
                tat[idx] = ct[idx] - at[idx];  // Turnaround Time = Completion Time - Arrival Time
                wt[idx] = tat[idx] - bt[idx];  // Waiting Time = Turnaround Time - Burst Time

                total_tat += tat[idx];  // Accumulate Turnaround Time
                total_wt += wt[idx];  // Accumulate Waiting Time
            }
        }

        time++;  // Increment time
    }

    // Print the result
    printf("\nP\tAT\tBT\tCT\tTAT\tWT\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", p[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    // Print average values
    printf("\nAverage Turnaround Time: %.2f", total_tat / n);
    printf("\nAverage Waiting Time: %.2f\n", total_wt / n);

    return 0;
}
