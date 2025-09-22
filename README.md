# CS50x - Week 2: Arrays

This repo contains my solutions for **Week 2** of Harvard's [CS50x](https://pll.harvard.edu/course/cs50-introduction-computer-science) course. The focus this week was on learning the basics of the **arrays**, including:

- Functions
- Variables and Scope
- Debugging (Step through and step into)
- Command Line Arguments

---

## ✅ Projects

### `scrabble`

In a file called `scrabble.c` in a folder called `scrabble`, implement a program in C that determines the winner of a short Scrabble-like game. The program should prompt for input twice: once for `Player 1` to input their word and once for `Player 2` to input their word. Then, depending on which player scores the most points, the program should either print `Player 1 wins!`, `Player 2 wins!`, or `Tie!` (in the event the two players score equal points).

### `readability`

In a file called `readability.c` in a folder called `readability`, implement a program that calculates the approximate grade level needed to comprehend some text. The program should print as output `Grade X` where `X` is the grade level computed, rounded to the nearest integer. If the grade level is 16 or higher (equivalent to or greater than a senior undergraduate reading level), the program should output `Grade 16+` instead of giving the exact index number. If the grade level is less than 1, the program should output `Before Grade 1`.

### `substitution`

In a file called `substitution.c` in a folder called `substitution`, the program should enable you to encrypt messages using a substitution cipher. At the time the user executes the program, they should decide, by providing a command-line argument, on what the key should be in the secret message they’ll provide at runtime.
