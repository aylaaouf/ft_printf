# ft_printf

## Overview

`ft_printf` is a custom implementation of the standard C library function `printf`. The goal of this project is to create a versatile and efficient version of `printf` that handles various conversion specifiers and flags, similar to the original function in the C Standard Library.

## Features

- Supports the following conversion specifiers:
  - **%c**: Character
  - **%s**: String
  - **%p**: Pointer address
  - **%d**: Signed decimal integer
  - **%i**: Signed decimal integer (alias of %d)
  - **%u**: Unsigned decimal integer
  - **%x**: Hexadecimal integer (lowercase)
  - **%X**: Hexadecimal integer (uppercase)
  - **%%**: Percent sign

## Getting Started

### Prerequisites

To use or test the `ft_printf` function, you need the following:

- **GCC Compiler**: Install using:
  ```bash
  sudo apt-get install gcc
