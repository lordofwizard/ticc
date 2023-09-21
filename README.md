# Tic-C (Tic Tac Toe in C)

## Table of Contents
1. [Introduction](#introduction)
2. [Directory Structure](#directory-structure)
3. [License](#license)
4. [Usage](#usage)
5. [How to Build](#how-to-build)
6. [How to Play](#how-to-play)
7. [Contributing](#contributing)
8. [Acknowledgements](#acknowledgements)

---

## 1. Introduction

**Tic-C** is a console-based implementation of the classic game Tic Tac Toe, written in the C programming language. It provides a simple and interactive platform for two players to engage in the traditional 3x3 grid-based game.

## 2. Directory Structure

The directory structure of Tic-C is organized as follows:

```
├── LICENSE
├── Makefile
├── README.md
└── src
    └── main.c
```

- `LICENSE`: Contains the GPL3 license information.
- `Makefile`: Configuration file for building the application.
- `README.md`: Documentation and information about the application.
- `src/`: Source code directory.

## 3. License

Tic-C is released under the GNU General Public License v3.0. For more details, please refer to the [LICENSE](./LICENSE) file.

## 4. Usage

Tic-C is a command-line application that allows users to play Tic Tac Toe in the terminal. It provides a user-friendly interface for two players to take turns and compete against each other.

## 5. How to Build

To build Tic-C, follow these steps:

1. Clone the repository using the following command:

```bash
git clone https://github.com/lordofwizard/ticc.git
```

2. Open a terminal.
3. Navigate to the root directory of the project.
4. Run the following command:

```bash
make
```

This will compile the source code and generate the executable file.

## 6. How to Play

1. After building the application, run it using the following command:

```bash
./game
```

2. The game will start, and an empty 3x3 board will be displayed.
3. Players take turns to input their moves. Each move is specified by providing the row and column numbers (0-2) separated by a space.
4. For example, to place your mark in the top-right corner, you would enter `0 2`.
5. The game will continue until one player wins or the board is full (resulting in a draw).

## 7. Contributing

If you would like to contribute to Tic-C, feel free to fork the repository and submit a pull request with your changes. Please follow the existing code style and make sure to thoroughly test your contributions.

## 8. Acknowledgements

Tic-C was developed by [Advait (lordofwizard)](https://github.com/lordofwizard) and [Atharva](https://github.com/AtharvaWaghchoure), inspired by a shared passion for coding and classic games.

---
