# Arrays and Strings

This week focused on arrays and string manipulation in C, teaching me how to work with collections of data and understand memory layout. I learned about the relationship between arrays and strings, and how to process command-line arguments.

## Skills Learned

- **Array Declaration**: Creating and initializing arrays of different types
- **Array Access**: Using indices to read and modify array elements
- **String Manipulation**: Understanding strings as character arrays, string functions
- **Memory Layout**: How arrays are stored in memory, pointer arithmetic basics
- **Command-line Arguments**: `argc` and `argv` for processing user input
- **String Functions**: `strlen()`, character processing, case conversion

## Key Projects

### Basic Array Operations
- `scores.c` - Simple array initialization and average calculation
- `scores_advanced.c` - Dynamic score processing with user input
- `length.c` - String length calculation and array traversal

### String Processing
- `uppercase.c` - Converting strings to uppercase character by character
- `string.c` - Basic string operations and character manipulation
- `greet.c` - String concatenation and formatting

### Command-line Programs
- `greet_args.c` - Processing command-line arguments for personalized greetings
- `hi.c`, `hi_string.c` - Different approaches to string handling
- `status.c` - Exit status demonstration with arrays

### Debugging Practice
- `buggy.c` - Intentionally buggy code to practice debugging array issues

## How to Run

Compile programs with array functionality:
```bash
make scores
./scores

make greet_args
./greet_args Alice Bob Charlie
```

For string processing:
```bash
make uppercase
./uppercase
```

## Reflections

Arrays initially confused me, especially the relationship between array names and pointers. I struggled with off-by-one errors and understanding that strings are just character arrays with null terminators. The `argc`/`argv` concept was tricky until I realized they're just an array of strings passed from the command line.

Working with string functions like `strlen()` helped me appreciate how much work happens "behind the scenes" in higher-level languages.

## Future Work

I want to explore more complex string algorithms and better understand pointer arithmetic, which will be crucial for the upcoming memory management topics.