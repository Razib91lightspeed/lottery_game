# 🎰 C++ Lottery Game

A simple C++ console-based lottery game where:

- The system generates:
  - 7 regular lottery numbers
  - 3 bonus numbers
- The user enters:
  - 7 regular numbers
  - 3 bonus numbers
- The program compares them and determines the prize.

---

## 📂 Project Structure

Main file:
- `main.cpp`

Header file (required):
- `lottery.h`

Expected helper functions (defined in lottery.h / lottery.cpp):

    randomNumber(int array[], int size)
    checkNumber(int number)
    printNumber(int array[], int size)
    printPrize(bool allmatch, bool nomatch, int matchcount, int bonuscount)

---

## ⚙️ How It Works

### 1️⃣ Random Number Generation

The program seeds the random generator using:

    srand(time(NULL));

Then generates:
- 7 regular lottery numbers
- 3 bonus numbers

Using:

    randomNumber(lottery, 7);
    randomNumber(lotteryB, 3);

Numbers are expected to be between **1 and 39**.

---

### 2️⃣ User Input

The user enters:

    7 regular numbers
    3 bonus numbers

Each input is validated using:

    checkNumber(user[i]);

---

### 3️⃣ Sorting

Before comparison, both system and user numbers are sorted:

    sort(lottery, lottery + 7);
    sort(user, user + 7);

This ensures proper comparison.

---

### 4️⃣ Matching Logic

The program checks:

- How many regular numbers match
- How many bonus numbers match
- Whether all numbers match
- Whether no numbers match

Counters used:

    matchcount
    bonuscount
    allmatch
    nomatch

---

### 5️⃣ Prize Determination

The result is printed using:

    printPrize(allmatch, nomatch, matchcount, bonuscount);

The prize logic depends on:
- Full match
- Partial match
- Bonus match
- No match

---

## 🧠 Algorithm Overview

    Generate random numbers
    Take user input
    Validate input
    Sort numbers
    Compare numbers
    Count matches
    Print prize result

---

## 🛠 How to Compile

Using g++:

    g++ main.cpp lottery.cpp -o lottery

Run:

    ./lottery

---

## 📌 Example Gameplay

    Enter a regular number between 1 and 39: 5
    Enter a regular number between 1 and 39: 12
    ...

Program Output:

    Regular Number: 3 7 12 18 25 30 39
    Bonus Number: 4 19 22

    User Regular Number: 5 12 14 18 21 33 39
    User Bonus Number: 4 10 22

    🎉 You matched 3 regular numbers and 2 bonus numbers!

---

## ⚠️ Important Notes

Current comparison logic checks numbers by index:

    if (user[i] == lottery[i])

This means:
- The numbers must match in the same sorted position.
- It does NOT check if the number exists anywhere in the array.

Improvement suggestion:
Use a nested loop or set-based comparison to check value existence instead of position matching.

---

## 🚀 Possible Improvements

- Prevent duplicate user input
- Ensure unique lottery numbers
- Use vectors instead of raw arrays
- Improve match detection logic
- Add graphical interface
- Add difficulty levels
- Store previous results in a file

---

## 📚 Concepts Used

- Arrays
- Loops
- Functions
- Sorting (STL algorithm)
- Boolean logic
- Random number generation
- Basic game logic

---

## 🎓 Learning Purpose

This project demonstrates:

- Structured programming
- Header file usage
- Function decomposition
- Basic algorithm design
- Comparison logic

---

## 🧑‍💻 Author

Lottery Game – C++ Console Application
Educational Project
