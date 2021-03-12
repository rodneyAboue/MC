#----- Fichier genere automatiquement sous Linux ------
#----- jeu jan 11 10:46:34 CET 2007

#-----
INCDIR=.
CCFLAGS=-W -Wall -Werror -I$(INCDIR) -D_REENTRANT -pedantic
LDFLAGS=
DEPOPT=-MM
CCC=cc
#-----

#-------------  Appli  --------------

TARGET=recuitVoyageur

FILESrecuitVoyageur=recuitVoyageur.c \
	random.c \
	gnuplot.c \
	geo.c

LDFLAGSrecuitVoyageur=$(LDFLAGS) -lm

OBJECTSrecuitVoyageur=$(FILESrecuitVoyageur:.c=.o)

#-------------  Appli  --------------

all: $(TARGET)

#-------------  Appli  --------------

recuitVoyageur : $(OBJECTSrecuitVoyageur)
	$(CCC) $(OBJECTSrecuitVoyageur) \
		-o recuitVoyageur $(LDFLAGSrecuitVoyageur)
#------------------------------------

.c.o :
	$(CCC) $(CCFLAGS) -c $< \
		-o $*.o
 
dep :
	@echo "======== Mise a jour des dependances : .depend ========"
	@rm -f .depend
	@for i in *.c ; do \
	echo $$i ; \
	$(CCC) $(DEPOPT) $(CCFLAGS) $$i > .tmpdepend ; \
	OBJNAME=`echo $$i | sed -e s%\\\.c%.o% ` ; \
	cat .tmpdepend | \
	sed -e s%`basename $$i .c`\\\.o%$$OBJNAME%         >> .depend ; \
	echo  >> .depend ; \
	done
	@rm -f .tmpdepend
 
CLEANING=rm -f *.o core a.out $(TARGET) .depend
CONSEIL=echo Penser a faire : make -f makefile dep
 
clear :
	@$(CLEANING)
	@echo
	@$(CONSEIL)
	@echo
clean :
	$(CLEANING)
	@echo
	@$(CONSEIL)
	@echo

sinclude .depend

