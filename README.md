# Calculator

A simple command-line calculator written in C++ that performs basic arithmetic operations.

## Features

- **Basic Operations**: Addition (+), Subtraction (-), Multiplication (*), Division (/)
- **Error Handling**: Input validation and division by zero protection
- **Modular Design**: Separated header files and implementation files for each operation
- **Cross-platform**: Works on any system with a C++ compiler

## Project Structure

```
calculator/
├── bin/           # Compiled executable
├── include/       # Header files
│   ├── add.h
│   ├── subtract.h
│   ├── multiply.h
│   └── divide.h
├── src/           # Source files
│   ├── add.cpp
│   ├── subtract.cpp
│   ├── multiply.cpp
│   └── divide.cpp
├── main.cpp       # Main program file
├── Makefile       # Build configuration
└── README.md      # This file
```

## Prerequisites

- C++ compiler (GCC 15 or later recommended)
- Make utility

## Installation & Usage

### Building the Project

1. Navigate to the calculator directory:
   ```bash
   cd calculator
   ```

2. Build the project:
   ```bash
   make build
   ```

### Running the Calculator

1. Run the calculator:
   ```bash
   make run
   ```
   
   Or run the executable directly:
   ```bash
   ./bin/calculator
   ```

2. Follow the prompts to:
   - Enter the first number
   - Enter the second number
   - Choose an operation (+, -, *, /)

### Example Usage

```
Enter first number: 10
Enter second number: 5
Enter operation (+, -, *, /, r): +
10 + 5 = 15
```

## Available Operations

| Operation | Symbol | Description |
|-----------|--------|-------------|
| Addition | + | Adds two numbers |
| Subtraction | - | Subtracts second number from first |
| Multiplication | * | Multiplies two numbers |
| Division | / | Divides first number by second |
| Power | ^ | Calculate the power of the first number using the second as an exponent |
| Radical | r | Calculates the radical of the first using the second as a index |

## Error Handling

The calculator includes robust error handling for:
- Invalid numeric input
- Invalid operation symbols
- Division by zero
- Input stream failures

## Development

### Adding New Operations

To add new operations (like square root as mentioned in the TODO):

1. Create a new header file in `include/` (e.g., `sqrt.h`)
2. Create the implementation in `src/` (e.g., `sqrt.cpp`)
3. Include the header in `main.cpp`
4. Add the case to the `calculate()` function switch statement

### Building from Source

The project uses a Makefile for easy building:

- `make build` - Compiles the project
- `make run` - Builds and runs the calculator
- `make clean` - Removes compiled files

## License

This project is open source and available under the MIT License.