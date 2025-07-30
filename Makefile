CC = clang
CFLAGS = 
LDLIBS = -lcs50

# Find the root cs50 directory
ROOT_DIR := $(shell while [ ! -f Makefile ] && [ "$$PWD" != "/" ]; do cd ..; done; pwd)

# If we're not in cs50 root, find it by looking up the directory tree
ifeq ($(wildcard $(ROOT_DIR)/Makefile),)
    ROOT_DIR := $(shell dirname $(realpath $(lastword $(MAKEFILE_LIST))))
endif

# Get the target name from the first goal, removing any directory path
TARGET_BASE = $(basename $(notdir $(firstword $(MAKECMDGOALS))))
TARGET_PATH = $(firstword $(MAKECMDGOALS))

# If target contains a path, extract directory and filename
TARGET_DIR = $(dir $(TARGET_PATH))
TARGET_FILE = $(notdir $(TARGET_PATH))

.PHONY: all clean
.SUFFIXES:

all: $(TARGET_BASE)

# Rule to build targets with or without directory paths
%: %.c
	$(CC) -o $@ $< $(CFLAGS) $(LDLIBS)

# Pattern rule for subdirectory targets (e.g., algorithms/search)
%/%: %/%.c
	$(CC) -o $@ $< $(CFLAGS) $(LDLIBS)

clean:
	@find $(ROOT_DIR) -name "*.o" -delete
	@find $(ROOT_DIR) -type f -executable ! -name "*.c" ! -name "*.h" ! -name "Makefile" ! -path "*/.*" -delete
