# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author F. de Sande
# @date 8 Jun 2020
# @brief A Makefile example for the Simple Makefile Tutorial
# 
# Use: make -f Makefile.4
#      make -f Makefile.4 clean
#
# To build the project 
#
# @see http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

FUENTES=$(wildcard *.cc) 
CC=g++
CFLAGS=-O0 -Wall
PROGRAMAS=$(FUENTES:.cc=)


all: $(PROGRAMAS)

%: %.cc $(DEPS)
	$(CC) -o $@ $< $(CFLAGS)

clean:
	rm -f $(PROGRAMAS)