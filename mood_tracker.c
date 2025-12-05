#include <stdio.h>
#include "mood_tracker.h"

char *LOG_FILE = "mood_logs.txt";   // File to store logs

// FUNCTION: Add today's mood
void addMoodEntry() {
    FILE *filePtr = fopen(LOG_FILE, "a"); 
    if (!filePtr) {
        printf("Error opening file!\n");
        return;
    }

    int todayMood;
    char todayDate[20];

    printf("Enter today's date (YYYY-MM-DD): ");
    scanf("%s", todayDate);

    printf("Enter your mood (1-5): ");
    scanf("%d", &todayMood);

    if (todayMood < 1 || todayMood > 5) {
        printf("Invalid mood value!\n");
        fclose(filePtr);
        return;
    }

    fprintf(filePtr, "%s %d\n", todayDate, todayMood);
    fclose(filePtr);

    printf("Mood saved successfully!\n");
    showMotivation(todayMood);
}

// FUNCTION: Motivation based on mood
void showMotivation(int rating) {
    printf("\nMotivation: ");
    switch (rating) {
        case 1: printf("Stay strong. Better days will come.\n"); break;
        case 2: printf("Take a break and breathe. You got this.\n"); break;
        case 3: printf("Keep going! One step at a time.\n"); break;
        case 4: printf("Great! Keep up the positive energy.\n"); break;
        case 5: printf("Excellent mood! Spread positivity!\n"); break;
    }
}

// FUNCTION: Load logs from file into array
int loadMoodData(MoodLog dailyLogs[]) {
    FILE *filePtr = fopen(LOG_FILE, "r");
    if (!filePtr) return 0;  

    int count = 0;
    while (fscanf(filePtr, "%s %d", dailyLogs[count].date, &dailyLogs[count].rating) != EOF) {
        count++;
    }

    fclose(filePtr);
    return count;
}

// FUNCTION: Display all logs
void showMoodHistory() {
    MoodLog dailyLogs[MAX];
    int n = loadMoodData(dailyLogs);

    if (n == 0) {
        printf("No logs found.\n");
        return;
    }

    printf("\n--- Mood History ---\n");
    for (int i = 0; i < n; i++) {
        printf("%s --> Mood: %d\n", dailyLogs[i].date, dailyLogs[i].rating);
    }
}

// FUNCTION: Display ASCII graph (# based on mood value)
void displayAsciiGraph() {
    MoodLog dailyLogs[MAX];
    int n = loadMoodData(dailyLogs);

    if (n == 0) {
        printf("No logs found.\n");
        return;
    }

    printf("\n--- ASCII Mood Graph ---\n");
    for (int i = 0; i < n; i++) {
        printf("%s: ", dailyLogs[i].date);
        for (int j = 0; j < dailyLogs[i].rating; j++) printf("#");
        printf("\n");
    }
}

// FUNCTION: Calculate longest streak of same mood value
void calculateMoodStreak() {
    MoodLog dailyLogs[MAX];
    int n = loadMoodData(dailyLogs);

    if (n == 0) {
        printf("No logs found.\n");
        return;
    }

    int longestStreak = 1;
    int streakCount = 1;

    for (int i = 1; i < n; i++) {
        if (dailyLogs[i].rating == dailyLogs[i - 1].rating) {
            streakCount++;
            if (streakCount > longestStreak) longestStreak = streakCount;
        } else {
            streakCount = 1;
        }
    }

    printf("\nYour longest mood streak: %d days\n", longestStreak);
}

// FUNCTION: Show last 7 days trend
void showWeeklyTrend() {
    MoodLog dailyLogs[MAX];
    int n = loadMoodData(dailyLogs);

    if (n == 0) {
        printf("No logs found.\n");
        return;
    }

    printf("\n--- Last 7-Day Mood Trend ---\n");
    int start = (n > 7) ? n - 7 : 0;

    for (int i = start; i < n; i++) {
        printf("%s: ", dailyLogs[i].date);
        for (int j = 0; j < dailyLogs[i].rating; j++) printf("#");
        printf("\n");
    }
}

// FUNCTION: Suggestion based on last mood entry
void suggestImprovement() {
    MoodLog dailyLogs[MAX];
    int n = loadMoodData(dailyLogs);

    if (n == 0) {
        printf("No logs found.\n");
        return;
    }

    int lastMood = dailyLogs[n - 1].rating;

    printf("\nSuggestion: ");
    switch (lastMood) {
        case 1: printf("Try talking to someone or journaling.\n"); break;
        case 2: printf("Go for a walk or listen to music.\n"); break;
        case 3: printf("Maybe try a new hobby.\n"); break;
        case 4: printf("Keep doing what makes you happy.\n"); break;
        case 5: printf("Use your positive mood to help others.\n"); break;
    }
}
