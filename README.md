# Online-Quiz-Using-C

📄 README - PRIMO QUIZ GAME 🎮

🧑‍💻 Authors:

J. Sairaj

N. Deepak

Ratna Keshav

🏫 Institution:

Geethanjali College of Engineering and Technology

📅 Project Date:

24th May 2023

📌 Project Title:

PRIMO QUIZ - Programming for Problem Solving 2 (PPS-2) Project

📖 Description:

PRIMO QUIZ is a C-based console quiz application designed to test and evaluate a student's programming knowledge, primarily focused on PPS-1 and PPS-2 concepts. This quiz consists of two levels:

Warm-up Round

Challenge Round

It also features functionality to store the highest scores, reset the leaderboard, and offers help instructions for new users.

🧠 Quiz Structure:
1️⃣ Warm-up Round:

Total of 5 questions based on general C knowledge (PPS-1).

Minimum 3 correct answers required to qualify for the Challenge Round.

2️⃣ Challenge Round:

10 questions based on advanced C concepts (PPS-2).

Each correct answer is awarded 5 marks.

No negative marking for wrong answers.

🧾 Features:

✅ User registration (Name, Group, Roll No)

✅ Two-tier quiz structure with eligibility

✅ Grade allocation based on marks:

A: >40 marks

B: 35-40

C: 28-34

D: <28

FAIL: <20

✅ High score storage and retrieval

✅ Reset high score

✅ Help and Instructions section

🗃️ Files Used:

marks.txt: Stores and updates the high score

score.txt: (Used inside edit_score) For writing top scorer info

marks.bin: (Used inside show_record) For displaying the top score

⚠️ Note: File handling implementation has a few inconsistencies (marks.txt, marks.bin, score.txt used interchangeably), so be cautious during testing.

🧑‍💼 How to Run:
Using Turbo C++ or Dev-C++:

Open the main.c or copy-paste the code into your IDE.

Compile the code (Ctrl + F9 in Turbo C++).

Run the program (Ctrl + F10 in Turbo C++).

Follow the on-screen menu:

1: Start Quiz

2: Show High Score

3: Help

4: Quit

5: Reset Score

Linux / GCC Terminal:
gcc -o quiz quiz.c
./quiz

🚀 Future Improvements:

Add more question sets and randomization

Improve file structure and fix inconsistencies (marks.txt vs score.txt)

Use structs or databases for leaderboard instead of plain text

Add timer-based questions

Support for multiplayer or batch quiz

📞 Contact:

For suggestions or improvements, reach out to the authors via college or project contact channels.

🎉 Thank you for playing PRIMO QUIZ!

Keep coding and stay sharp! 💻✨