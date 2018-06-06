# Makefile for GooeyButterCake

### Configuration Info

# Compiler
CC = g++

# Name of executable
OUTPUT_NAME = GooeyButterCake.out

# directory for source files
SRC=./src/

# directory for header files
INCLUDE=./include/

# directory for .o files
OBJ=./obj/

# Default compilation flags
FLAGS = -Wall -I$(INCLUDE) -std=c++11

# Extra warning flags, maybe use them later?
FLAGS += -Wextra

LIBS = -lSDL2

# List header files in /include/ here
_DEPS=GooeyButterCake.h Display.h
# Properly reformat headers
DEPS=$(patsubst %,$(INCLUDE)%,$(_DEPS))

# List object files needed to build properly
_OBJS=main.o GooeyButterCake.o Display.o
# Properly reformat
OBJS=$(patsubst %,$(OBJ)%,$(_OBJS))



### Build Rules

# default target; result of calling 'make'
default: debug

# debug target, no compiler optimization
debug: FLAGS += -g
debug: main

# release target, compiler optimization welcome
release: FLAGS += -O3
release: main

# main target, builds the program
main: $(OBJS) $(DEPS)
	$(CC) -o $(OUTPUT_NAME) $^ $(FLAGS) $(LIBS) 
    # the $(^) copies the dependencies from the previous line

# Builds object files
$(OBJ)%.o: $(SRC)%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(FLAGS) $(LIBS)

# cleans the build directory, i.e. delete .o files and executable
clean:
	rm -f $(OUTPUT_NAME) $(OBJ)*.o
