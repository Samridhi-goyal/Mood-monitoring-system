#ifndef MOOD_TRACKER_H
#define MOOD_TRACKER_H

#define MAX 200   // Maximum number of logs

// Structure to store each day's mood log
typedef struct {
    char date[20];   // Format: YYYY-MM-DD
    int rating;      // Mood value: 1 to 5
} MoodLog;

// Global file to store logs
extern char *LOG_FILE;

// Function declarations
void addMoodEntry();
void showMoodHistory();
void displayAsciiGraph();
void calculateMoodStreak();
void showWeeklyTrend();
void suggestImprovement();
void showMotivation(int rating);
int loadMoodData(MoodLog dailyLogs[]);

#endif
