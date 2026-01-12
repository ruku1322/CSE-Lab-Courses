#include <stdio.h>

int main() {
    int p[10], at[10], bt[10], pr[10], ct[10], tat[10], wt[10], i, j, temp, n;
    float awt = 0, atat = 0, total_tat = 0, total_wt = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter process IDs: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    printf("Enter arrival times: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &at[i]);
    }

    printf("Enter burst times: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
    }

    printf("Enter priorities (lower value = higher priority): ");
    for (i = 0; i < n; i++) {
        scanf("%d", &pr[i]);
    }

    // Sorting based on Arrival Time first
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (at[i] > at[j] || (at[i] == at[j] && pr[i] > pr[j])) {
                // Swap Arrival Time
                temp = at[i]; at[i] = at[j]; at[j] = temp;

                // Swap Priority
                temp = pr[i]; pr[i] = pr[j]; pr[j] = temp;

                // Swap Burst Time
                temp = bt[i]; bt[i] = bt[j]; bt[j] = temp;

                // Swap Process ID
                temp = p[i]; p[i] = p[j]; p[j] = temp;
            }
        }
    }

    // Calculate Completion Time (CT)
    int time = 0;
    for (i = 0; i < n; i++) {
        if (time < at[i]) {
            time = at[i]; // Handling CPU idle time
        }
        ct[i] = time + bt[i]; // Completion Time
        time = ct[i]; // Update current time
    }

    // Calculate Turnaround Time (TAT) and Waiting Time (WT)
    for (i = 0; i < n; i++) {
        tat[i] = ct[i] - at[i]; // TAT = CT - AT
        wt[i] = tat[i] - bt[i]; // WT = TAT - BT
        total_tat += tat[i]; // Accumulate for average
        total_wt += wt[i];   // Accumulate for average
    }

    // Print the result
    printf("\nP\tAT\tBT\tPR\tCT\tTAT\tWT");
    for (i = 0; i < n; i++) {
        printf("\nP%d\t%d\t%d\t%d\t%d\t%d\t%d", p[i], at[i], bt[i], pr[i], ct[i], tat[i], wt[i]);
    }

    // Print average values
    printf("\n\nAverage Turnaround Time: %.2f", total_tat / n);
    printf("\nAverage Waiting Time: %.2f\n", total_wt / n);

    return 0;
}
