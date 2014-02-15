# Ici, le nom du programme exécutable à générer
# ex : PGM = personne
PGM = pendu.exe

# Ici, la liste des fichiers objets à considérer,
# séparés par des espaces
# ex : OBJS = personne.o main.o toto.o
OBJS = pendu.o pendu.h

#----------------------------------------
# Plus rien à modifier à partir d'ici
#----------------------------------------

CC = gcc
CFLAGS = -g -ansi -c -pedantic -Wall
LDFLAGS = -o $(PGM)

$(PGM): $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) $<

clean:
	/bin/rm -f $(PGM) $(OBJS) *~
