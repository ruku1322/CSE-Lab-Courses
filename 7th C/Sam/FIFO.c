#include <stdio.h>

int main() {
    int frames, pages,miss=0, i, j, k, flag = 0, Hit = 0, index = 0;
    
    printf("Enter number of frames: ");
    scanf("%d", &frames);

    printf("Enter number of pages: ");
    scanf("%d", &pages);

    int page_sequence[pages], frame[frames];

    printf("Enter the page sequence:\n");
    for(i = 0; i < pages; i++) {
        scanf("%d", &page_sequence[i]);
    }

    // Initialize all frames to -1
    for(i = 0; i < frames; i++) {
        frame[i] = -1;
    }

    printf("\nPage Replacement Process:\n");
    for(i = 0; i < pages; i++) {
        flag = 0;

        // Check if page is already in frame
        for(j = 0; j < frames; j++) {
            if(frame[j] == page_sequence[i]) {
                flag = 1;
                break;
            }
        }

        // If not present, replace the oldest page
        if(flag == 0) {
            frame[index] = page_sequence[i];
            index = (index + 1) % frames;
            Hit++;

            // Print current state of frames
            for(k = 0; k < frames; k++) {
                if(frame[k] != -1)
                    printf("%d ", frame[k]);
                else
                    printf("- ");
            }
            printf(" (Page Hit)\n");
        } 
        else {
            printf("No page Hit for %d\n", page_sequence[i]);
            miss++;
        }
    }
    float hit_per = ((Hit*100)/pages);
    float miss_per =( (miss*100)/pages);
    printf("\nTotal miss Page  = %d\n", miss);
    printf("\nTotal Hit Page  = %d\n", Hit);
    printf("\nPercentages of hit Page  = %.2f\n", hit_per);
    printf("\nPercentages of miss Page  = %.2f\n", miss_per);
    return 0;
}

/*
3
16
7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 
*/