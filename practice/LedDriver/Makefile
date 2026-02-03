CC = gcc
CFLAGS = -std=c99 -Wall -Werror -g

# Unity 프레임워크 경로 (실제 경로에 맞게 수정하세요)
UNITY_ROOT = ../../Unity

INC_DIRS = -I. \
           -I$(UNITY_ROOT)/src \
           -I$(UNITY_ROOT)/extras/fixture/src \
           -I$(UNITY_ROOT)/extras/memory/src

SRC_FILES = $(UNITY_ROOT)/src/unity.c \
            $(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
            $(UNITY_ROOT)/extras/memory/src/unity_memory.c \
            LedDriver.c \
            LedDriverTest.c \
            LedDriverTestRunner.c \
            AllTests.c

TARGET = LedDriverTest

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC_FILES)
	$(CC) $(CFLAGS) $(INC_DIRS) $(SRC_FILES) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean