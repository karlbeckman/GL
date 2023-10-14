#Makefile for OpenGL on MacOS
CC=/usr/bin/clang++
LANG_STD=-std=c++14
COMPILER_FLAGS=-Wall -g -Wno-deprecated
INCLUDE_PATH=-I../../include
SRC_FILES=../Shader.cpp shader_class_test.cpp ../glad.c
LINKER_FLAGS=../../lib/libglfw.3.dylib -Wl,-rpath ../../lib
FRAMEWORK_FLAGS=-framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo -framework CoreFoundation

EXECUTABLE=app

.PHONY: build
build:
	$(CC) $(COMPILER_FLAGS) $(LANG_STD) $(INCLUDE_PATH) $(SRC_FILES) $(LINKER_FLAGS) -o $(EXECUTABLE) $(FRAMEWORK_FLAGS)

.PHONY: run
run: build
	./$(EXECUTABLE)

.PHONY: clean
clean: 
	rm -f $(EXECUTABLE)

