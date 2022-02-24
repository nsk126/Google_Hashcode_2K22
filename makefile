# the compiler: gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS  = -g -Wall

# The build target 
TARGET = OnePizza

# Test file
TEST_FILE_1 = a_an_example.in.txt
TEST_FILE_2 = b_basic.in.txt
TEST_FILE_3 = c_coarse.in.txt
TEST_FILE_4 = d_difficult.in.txt
TEST_FILE_5 = e_elaborate.in.txt

# Output file
OP_1 = op1.txt
OP_2 = op2.txt
OP_3 = op3.txt
OP_4 = op4.txt
OP_5 = op5.txt

all: $(TARGET)
$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o build/$(TARGET) $(TARGET).cpp
	./build/$(TARGET) < tests/${TEST_FILE_1} > op/$(OP_1)
	./build/$(TARGET) < tests/${TEST_FILE_2} > op/$(OP_2)
	./build/$(TARGET) < tests/${TEST_FILE_3} > op/$(OP_3)
	./build/$(TARGET) < tests/${TEST_FILE_4} > op/$(OP_4)
	./build/$(TARGET) < tests/${TEST_FILE_5} > op/$(OP_5)
	
mnt:
	$(CC) $(CFLAGS) MnT.cpp -o build/MnT -lpthread
	./build/MnT
clean:
	$(RM) build/$(TARGET)
	$(RM) op/*
	