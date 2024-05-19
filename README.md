# Libft: Creating a C Library

## Description

This repository contains my implementation of the Libft project, a fundamental part of the 42 curriculum. The project involves creating a custom C library with a set of standard functions that will be used in future projects. This library is designed to replicate and enhance the functionality of standard C library functions.

## Features

- Standard C library functions
- String manipulation functions
- Memory management functions
- Linked list manipulation functions
- Additional utility functions

## Getting Started

### Prerequisites

- GCC or any C compiler
- Make

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/callmezaki/Libft-Creating_a_C_library.git
   cd Libft-Creating_a_C_library
   ```

2. Compile the library:

   ```bash
   make
   ```

3. Include the library in your projects:

   ```c
   #include "libft.h"
   ```

### Usage

Link the compiled library to your project:

```bash
gcc -L. -lft your_project.c -o your_project
```

## Project Structure

- `libft/`: Contains the source files for the library functions.
- `Makefile`: Defines the build process for the library.
- `README.md`: Project documentation.

## Contributing

Contributions are welcome! Please open an issue or submit a pull request for any changes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- [42 School](https://42.fr/en/homepage/) for providing the project framework.
- The 42 community for their support and collaboration.
