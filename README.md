# Calculator

A simple command-line calculator written in C++ that performs basic arithmetic operations.

## Features

- **Basic Operations**: Addition (+), Subtraction (-), Multiplication (*), Division (/), Power (^), Radical (r)
- **Result Memory**: Automatically stores the last result in `ans` for reuse
- **Command 'ans'**: Simply type `ans` to recall the last result
- **Flexible Input**: Accepts input with or without spaces (e.g., `3+4` or `3 + 4`)
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
|   └── power.h
|   └── radical.h
|   └── calculate.h
|   └── utils.h
├── src/           # Source files
│   ├── add.cpp
│   ├── subtract.cpp
│   ├── multiply.cpp
│   └── divide.cpp
|   └── power.cpp
|   └── radical.cpp
|   └── calculate.cpp
|   └── utils.cpp
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

2. Follow the prompts to enter the operation to calculate or quit the interaction.

### Example Usage

```
Enter operation (e.g. 3.5 + 2 or 'q' to quit):
3.5 + 2
3.5 + 2 = 5.5
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

To add new operations (like log):

1. Create a new header file in `include/` (e.g., `log.h`)
2. Create the implementation in `src/` (e.g., `log.cpp`)
3. Include the header in `main.cpp`
4. Add the case to the `calculate()` function switch statement

### Building from Source

The project uses a Makefile for easy building:

- `make build` - Compiles the project
- `make run` - Builds and runs the calculator
- `make clean` - Removes compiled files

## License

This project is open source and available under the MIT License.