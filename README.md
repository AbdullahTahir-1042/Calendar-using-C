Yearly Calendar Generator (C Program)
This program displays a full calendar for any given year, based on the starting day of January 1st. The program is written in C and prints each month with proper alignment under weekday headers (Sunday to Saturday).

🧾 How It Works
The user inputs:

A year (e.g., 2004)

The starting day of January 1st (e.g., Sunday)

The program then:

Prints all 12 months with correctly aligned days under weekdays.

Automatically accounts for leap years (e.g., 2004 includes February 29).

📥 Sample Input

Enter Year: 2004
Enter Day of 1st January: Sunday

📤 Sample Output

January
Sunday Monday Tuesday Wednesday Thursday Friday Saturday
1        2       3       4       5       6       7
...
February
Sunday Monday Tuesday Wednesday Thursday Friday Saturday
                         1       2       3       4
5        6       7       8       9       10      11
...
The output continues month by month till December, correctly accounting for leap years and weekday alignment.

🔧 Features
Supports any year

Handles leap years (adds Feb 29)

Neatly formats each month's calendar

Accepts custom starting weekday (e.g., Sunday, Monday, etc.)

🖥️ Compilation & Execution
✅ Compile

gcc calendar.c -o calendar
▶️ Run

./calendar
📝 Notes
Weekdays must be entered correctly (case-insensitive input like "Sunday", "monday", etc., should be supported depending on implementation).

Useful for understanding:
* Date alignment

* Loop and array usage

* Leap year logic
