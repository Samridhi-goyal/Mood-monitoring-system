# **MOOD MONITORING SYSTEM**

A simple C program that helps users log, track, and analyze daily mood patterns.  
This project is beginner-friendly and demonstrates important concepts in C programming.

---

## **📌 PROJECT OVERVIEW**

The Mood Monitoring System allows the user to:

- Log today's mood (1–5)
- View full mood history
- Display an ASCII mood graph
- Calculate longest mood streak
- View last 7-day mood trend
- Get mood-based suggestions

Each entry contains:
- Date (YYYY-MM-DD)
- Mood rating (1–5)

---

## **✨ FEATURES**

### **1. Add Mood Entry**
User inputs the date and mood rating.

### **2. View Mood History**
Displays all mood entries stored in the file.

### **3. ASCII Mood Graph**
Shows mood values visually using `#` symbols.

### **4. Mood Streak**
Calculates the longest continuous streak of the same mood.

### **5. Weekly Trend**
Shows the last 7 logged moods in a simple graph form.

### **6. Mood-Based Suggestions**
Provides suggestions based on the user's last mood.

---

## **🛠️ C CONCEPTS USED**

### **✔ Functions**
Each major operation (add, display, load, graph) is a separate function.

### **✔ Structures**
Stores each mood entry as a structure:
```c
typedef struct {
    char date[20];
    int rating;
} MoodLog;
