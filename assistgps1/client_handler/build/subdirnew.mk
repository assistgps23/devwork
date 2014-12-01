HOME = /local/aaaaa/assistgps/client_handler/
TOPDIR  := $(HOME)
OBJDIR  := $(TOPDIR)obj/
BINDIR  := $(TOPDIR)bin/
NAME    := $(notdir $(SRCNAME))
EXE     := $(BINDIR)$(NAME)
SFILES  := cpp
OFILES  := o
CC      := g++
CFLAGS  := -c -Wall

SOURCES := $(wildcard *.$(SFILES))
OBJECTS := $(patsubst %$(SFILES), $(OBJDIR)%$(OFILES), $(SOURCES))

ALLFILES := $(SOURCES)

$(OBJDIR)%$(OFILES):    %$(SFILES)
	@$(CC) $(CFLAGS) $< -o $@



