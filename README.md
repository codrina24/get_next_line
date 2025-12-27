<img width="1339" height="611" alt="get_next_line_banner(1)" src="https://github.com/user-attachments/assets/75d2d4d5-abf4-4574-ae96-ba940216b6be" />

*This project has been created as part of the 42 curriculum by coholbur.*

# Get_next_line
Reads a file descriptor line by line

## Description

 Get_next_line is a C project that implements a function capable of reading a file descriptor line by line. The goal of this project is to simplify line-based input handling, memory management, static variables, and buffered reading.
 By calling get_next_line() repeatedly, the program returns one line at a time from a file or from standard input, without reading the entire content at once.

## Instructions
 The project must be compiled with a buffer size defined at compile time: 

`cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c` .

The function must also compile and work correctly without the -D BUFFER_SIZE flag, using a default value.

## Core idea

A static variable is used to store leftover data that has been read but not yet returned.

The function reads from the file descriptor using read() with a fixed buffer size (BUFFER_SIZE).

Data is appended to the static storage until a newline character (\n) is found or no more data can be read.

## Bonus part
 The bonus part of this project allows get_next_line to handle multiple file descriptors using a single static variable, while preserving the reading state of each descriptor independently.

## Resources

 - **Peer-to-peer learning** – was the most valuable resource; this project was developed with guidance and collaboration from other 42 students;
 - **Books** – Classic references to learn C from scratch and understand various programming notions;
 - **Tutorials and articles** – Consulted to better understand specific C concepts and function implementations.

### AI Assistance
AI tools were used to help:
- Create diagrams and schemas to visualize how functions work and how data flows.
- Provide examples of how to apply these concepts in practice.
- Design the banner for this README.

No AI was used to write the functions directly; all code logic and implementation are my own work and personal vision.
