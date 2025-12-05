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
```

### **✔ Header Files**
All declarations are stored in `mood_tracker.h` to keep the code modular.

### **✔ Modular Programming**
* `.c` files → logic/implementation  
* `.h` file → declarations, structure definitions

### **✔ File Handling**
Reads from and writes to `mood_logs.txt`.

### **✔ Arrays**
Stores up to 200 mood records in an array.

### **✔ Loops & Conditionals**
Used for processing entries, graphs, and suggestions.

---

## **📂 PROJECT STRUCTURE**

(To be added after you share the GitHub link.)

---

## **📝 SUMMARY**

This project helps users track their emotions, visualize patterns, and observe trends over time.  
It demonstrates modular programming, structures, file handling, and clean C coding practices—making it ideal for college submissions.

---
