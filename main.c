#include <stdio.h>
#include "mood_tracker.h"

int main() {
    int choice;

    while (1) {
        printf("\n=========== MOOD TRACKER ===========\n");
        printf("1. Log today's mood\n");
        printf("2. View mood history\n");
        printf("3. Show ASCII Mood Graph\n");
        printf("4. Mood Streak Score\n");
        printf("5. Weekly Mood Trend\n");
        printf("6. Suggest Improvement\n");
        printf("7. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addMoodEntry(); break;
            case 2: showMoodHistory(); break;
            case 3: displayAsciiGraph(); break;
            case 4: calculateMoodStreak(); break;
            case 5: showWeeklyTrend(); break;
            case 6: suggestImprovement(); break;
            case 7: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
