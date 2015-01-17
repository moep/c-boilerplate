TARGET = main

CC     = gcc
CFLAGS = -std=c99 -Wall -I.
LD     = gcc -o
LFLAGS = -Wall -I. -lm

SRCDIR = src
OBJDIR = obj
BINDIR = bin

SOURCES  := $(wildcard $(SRCDIR)/*.c)
INCLUDES := $(wildcard $(SRCDIR)/*.h)
OBJECTS  := $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

$(BINDIR)/$(TARGET): $(OBJECTS)
	@$(LD) $@ $(LFLAGS) $(OBJECTS)
	@echo LD $<

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "CC $<"

.PHONEY: clean
clean:
	@rm $(OBJECTS)
	@rm $(BINDIR)/$(TARGET)
	@echo "Cleanup complete." 
