CC = clang
CFLAGS = 
LDLIBS = -lcs50

# Find the root cs50 directory by looking for this Makefile
ROOT_DIR := $(shell cd $(dir $(realpath $(lastword $(MAKEFILE_LIST)))) && pwd)

.PHONY: all clean
.SUFFIXES:

# Remove built-in rules and suffixes
MAKEFLAGS += --no-builtin-rules
%:: %,v
%:: RCS/%,v
%:: RCS/%
%:: s.%
%:: SCCS/s.%

# Default rule - build the target if a .c file exists
%:
	@if [ "$@" = "GNUmakefile" ] || [ "$@" = "makefile" ] || [ "$@" = "Makefile" ]; then \
		exit 0; \
	fi; \
	SOURCE_FILE=$$(find $(ROOT_DIR) -name "$@.c" -type f | head -1); \
	if [ -n "$$SOURCE_FILE" ]; then \
		echo "Building $@ from $$SOURCE_FILE with CS50 library"; \
		$(CC) -o "$@" "$$SOURCE_FILE" $(CFLAGS) $(LDLIBS); \
	else \
		echo "Error: Cannot find $@.c in $(ROOT_DIR) or its subdirectories"; \
		exit 1; \
	fi

clean:
	@find $(ROOT_DIR) -name "*.o" -delete
	@find $(ROOT_DIR) -type f -executable ! -name "*.c" ! -name "*.h" ! -name "Makefile" ! -path "*/.*" -delete
