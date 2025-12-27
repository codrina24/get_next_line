<img width="1339" height="611" alt="get_next_line_banner(1)" src="https://github.com/user-attachments/assets/75d2d4d5-abf4-4574-ae96-ba940216b6be" />

*This project has been created as part of the 42 curriculum by coholbur.*

# Get_next_line
Reads a file descriptor line by line

## Description

 Get_next_line is a C project that implements a function capable of reading a file descriptor line by line.The objective of this project is to highlight the importance of static variables, which are very useful for preserving state between function calls, simplifying line-based input, implementing buffered reading, and managing memory properly. 
 By calling get_next_line() repeatedly, the function returns one line at a time from a file or from standard input, without reading the entire content at once.

## Instructions
 The project must be compiled with a buffer size defined at compile time: 

`cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c` .

The function must also compile and work correctly without the -D BUFFER_SIZE flag, using a default value.

## Core Idea

A static variable holds data read from the file descriptor that hasn’t been returned yet (*pending data*).

The function reads from the file descriptor using the standard C library  `read()` function, with a fixed buffer size (BUFFER_SIZE).

Data is appended to the static buffer until a newline character (\n) is found or the end of the file (EOF) is reached.

### *Step* by *Step* until we get *Line* by *Line* 
 - **Setup**

Create `get_next_line.c`, `get_next_line_utils.c`, and `get_next_line.h`.

 - **Helper functions**
 
Implement `ft_strlen_next`, `ft_strchr_next`, `ft_strjoin_next`, `ft_strdup_next`, and `ft_substr_next` for string manipulation.

 - **Reading process**

Use `read()` in `ft_read` to read BUFFER_SIZE chunks.

Append to static buffer until a newline('\n') or EOF is reached.

 - **Get the lines**

Use `ft_obtain` to extract the next line and update the static buffer for the next calls.

 - **Main function**

Validate input, call `ft_read` and `ft_obtain`, **manage memory**, and return the line.

- **Return**
 
  Returns the next line read from the fd, including the newline character (`\n`) if present.
  
  Returns `NULL` if there is nothing left to read or if an error occurs.
  
  Each call returns one line at a time, preserving unread data in the static buffer for the next call, without losing the current reading position.

## Resources

 - **Peer-to-peer learning** – was the most valuable resource; this project was developed with guidance and collaboration from other 42 students;
 - **Books** – Classic references to learn C from scratch and understand various programming notions;
 - **Tutorials and articles** – Consulted to better understand the steps in the implementation of `get_next_line()`, including the use of static buffers.

### AI Assistance
AI tools were used to help:
- Create diagrams and schemas to visualize how functions work and how data flows.
- Provide examples of how to apply these concepts in practice.
- Design the banner for this README.

No AI was used to write the functions directly; all code logic and implementation are my own work and personal vision.
