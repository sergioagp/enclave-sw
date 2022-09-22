PROJECT := minimal
BUILD_DIR ?= build

CFLAGS += -Wall -Wextra -g -Wno-format


SRCS = \
       main.c \
       boot/startup.s \
       boot/system.c\
       boot/syscalls.c \
       boot/sysmem.c \
       periph/uart.c \

INCLUDES +=   .\
              boot/\
              periph/\



include ./common.mk
