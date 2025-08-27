# Python Programming

This week marked the transition from C to Python, introducing higher-level programming concepts and demonstrating how the same algorithms can be implemented more concisely in a different language. I learned to appreciate Python's simplicity while understanding the trade-offs between convenience and control.

## Skills Learned

- **Python Syntax**: Indentation-based structure, dynamic typing, simplified I/O
- **Built-in Functions**: Using Python's rich standard library and built-in functions  
- **List Operations**: Python lists vs C arrays, list methods and comprehensions
- **String Handling**: Simplified string manipulation compared to C
- **Library Integration**: Using external libraries like Pillow for image processing
- **Code Translation**: Converting C programs to Python equivalents

## Key Projects

### Language Comparison Programs
- `agree.py` - User input validation using Python's string methods
- `compare.py` - Numeric comparison with simplified Python syntax
- `uppercase.py` - String case conversion using built-in methods
- `copy.py` - Demonstrates Python's simplified file/data copying

### Data Structures
- `dictionary.py` - Using Python dictionaries vs C structs/arrays
  - Shows key-value pair operations
  - Demonstrates Python's built-in hash table implementation

### Image Processing
- `blur.py` - Image blurring using the Pillow library
  - Applies convolution filters to images
  - Demonstrates external library integration
- `edge.py` - Edge detection algorithm implementation
  - Uses image processing techniques with Python libraries
  - Shows practical application of algorithms to real data

## How to Run

Run Python programs directly:
```bash
python3 agree.py
python3 compare.py
python3 uppercase.py
```

For image processing (requires Pillow):
```bash
pip3 install Pillow
python3 blur.py input.jpg output.jpg
python3 edge.py input.jpg edges.jpg
```

## Reflections

The transition to Python was both liberating and frustrating. After weeks of managing memory manually in C, Python's automatic memory management felt like magic. However, I initially missed the explicit control that C provided.

Python's conciseness was striking - programs that took 20+ lines in C could often be written in 5-10 lines in Python. The built-in functions and methods eliminated much of the boilerplate code I had grown accustomed to writing.

Working with the Pillow library for image processing showed me the power of Python's ecosystem. Tasks that would require significant C code became manageable with the right libraries.

## Future Work

I want to explore more Python libraries and understand when to choose Python vs C for different types of projects. The image processing algorithms were particularly interesting and I'd like to implement more computer vision techniques.