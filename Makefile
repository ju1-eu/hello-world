# Makefile für GitHub Actions mit Debug- und Release-Modus

# Verwendung:
# make
# make DEBUG=1 // für den Debug-Modus
# make DEBUG=0 // Release-Modus
# make clean

# Einstellung für Debug-Modus, standardmäßig auf 1 gesetzt
DEBUG ?= 1

# Compiler-Definition
CC = gcc
# Grundlegende Compiler Flags
CFLAGS = -Wall -Wextra -std=c11
# Linker Flags
LDFLAGS = -lm

# Findet alle .c-Dateien im Verzeichnis
SRCS = $(wildcard *.c)
# Erstellt eine Liste der ausführbaren Dateien, eine für jede .c-Datei
TARGETS = $(SRCS:.c=)

# Bedingte Einstellungen basierend auf dem DEBUG-Flag
ifeq ($(DEBUG), 1)
	CFLAGS += -g3
	TARGETS := $(addsuffix Debug, $(TARGETS))
else
	CFLAGS += -O2
	TARGETS := $(addsuffix Release, $(TARGETS))
endif

# Hauptziel
all: $(TARGETS)

# Regeln zum Erstellen der ausführbaren Programme
%Debug: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

%Release: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

# Clean up
clean:
	rm -f $(TARGETS) *Debug *Release
	rm -rf *.dSYM

# Test-Regel hinzugefügt, um das Testskript auszuführen
test: all
	./run_test.sh

# Spezielle Ziele, die keine Dateien sind
.PHONY: all clean test

