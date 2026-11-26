# 📊 Student Result Analysis System

A menu-driven **Student Result Analysis System** built in C. This console application enables users to store student records, generate a sorted merit list, search for students efficiently by roll number, and calculate overall exam statistics.

---

## ✨ Features

* **Add Student Records:** Store student details including Roll Number, Name, and Marks using C Structures.
* **Merit List Generation:** Ranks all students from highest to lowest marks using the **Bubble Sort** algorithm.
* **Fast Roll Number Search:** Finds specific student records using **Binary Search**.
* **Result Analysis:** Computes total student count, average marks, highest score, and lowest score.

---

## 🛠️ Data Structures & Algorithms Used

* **Structures & Arrays:** `struct Student` array for structured data storage.
* **Bubble Sort:** Used to sort records in descending order by marks and ascending order by roll number.
* **Binary Search:** Provides fast \(O(\log n)\) lookup when searching by roll number.

---

## 🚀 Getting Started

### Prerequisites
Ensure you have a C compiler installed on your system.

### Compilation & Execution

1. **Clone the repository:**
   ```bash
   git clone https://github.com
   cd student-result-analysis
   ```

2. **Compile the code:**
   ```bash
   gcc main.c -o result_analysis
   ```

3. **Run the program:**
   * **Linux / macOS:**
     ```bash
     ./result_analysis
     ```
   * **Windows:**
     ```bash
     result_analysis.exe
     ```

---

## 💻 Usage Example

```text
--- RESULT ANALYSIS SYSTEM ---
1. Add Student
2. Show All & Merit List
3. Search by Roll No
4. Result Analysis
5. Exit
Enter choice: 1
Enter Roll No: 101
Enter Name: Aarav
Enter Marks: 92
Record Added!

--- RESULT ANALYSIS SYSTEM ---
Enter choice: 4

--- RESULT ANALYSIS ---
Total Students : 1
Average Marks  : 92
Highest Marks  : 92
Lowest Marks   : 92
```

---

## 🔮 Future Scope

* **Persistent Storage:** Integrate file handling to save records permanently across sessions.
* **Pass/Fail Metrics:** Display pass/fail counts and pass percentages in the analysis summary.
* **Multi-Word Names:** Update input handling to support full names with spaces.

---

## 🤝 Contributing

Contributions and suggestions are welcome! Feel free to fork this repository and submit a pull request.
