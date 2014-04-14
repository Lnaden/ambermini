#  Amber configuration file, created with: ./configure --prefix /home/swails/testinstall --yacc /usr/bin/yacc

###############################################################################

# (1)  Location of the installation

BASEDIR=/home/swails/src/anteamber
BINDIR=/home/swails/src/anteamber/bin
LIBDIR=/home/swails/src/anteamber/lib
INCDIR=/home/swails/src/anteamber/include
DATDIR=/home/swails/src/anteamber/dat

###############################################################################


#  (2) If you want NAB to search additional libraries by default, add them
#      to the FLIBS variable here.  (External libraries can also be linked into
#      NAB programs simply by including them on the command line; libraries
#      included in FLIBS are always searched.)

FLIBS=  -larpack -llapack -lblas  -lgfortran -w 
FLIBSF= -larpack -llapack -lblas   
###############################################################################

#  (3)  Modify any of the following if you need to change, e.g. to use gcc
#        rather than cc, etc.

SHELL=/bin/sh

#  Set the C compiler, etc. 

#  The configure script should be fine, but if you need to hand-edit,
#  here is some info:

#   Example:  CC-->gcc; LEX-->flex; YACC-->yacc (built in byacc)
#     Note: If your lexer is "really" flex, you need to set
#     LEX=flex below.  For example, on some distributions,
#     /usr/bin/lex is really just a pointer to /usr/bin/flex,
#     so LEX=flex is necessary.  In general, gcc seems to need flex.

#   The compiler flags CFLAGS and CXXFLAGS should always be used.
#   By contrast, *OPTFLAGS and *NOOPTFLAGS will only be used with
#   certain files, and usually at compile-time but not link-time.
#   Where *OPTFLAGS and *NOOPTFLAGS are requested (in Makefiles,
#   makedepend and depend), they should come before CFLAGS or
#   CXXFLAGS; this allows the user to override *OPTFLAGS and
#   *NOOPTFLAGS using the BUILDFLAGS variable.

#   AMBERBUILDFLAGS provides a hook into all stages of the build process.
#   It can be used to build debug versions, invoke special features, etc.
#   Example:  make AMBERBUILDFLAGS='-O0 -g' sander
#
CC=gcc
CFLAGS= -D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE
CNOOPTFLAGS=
COPTFLAGS=-O3

CXX=g++
CPLUSPLUS=g++
CXXFLAGS=  
CXXNOOPTFLAGS=
CXXOPTFLAGS=-O3

LEX=   flex
YACC=  /usr/bin/yacc
AR=    ar rv
M4=    m4
RANLIB=ranlib

#  Set the C-preprocessor.  Code for a small preprocessor is in
#    ucpp-1.3;  it gets installed as $(BINDIR)/ucpp;

CPP=ucpp -l

#  These variables control whether we will use compiled versions of BLAS
#  and LAPACK (which are generally slower), or whether those libraries are
#  already available (presumably in an optimized form).

LAPACK=install
BLAS=install
F2C=skip

#  These variables determine whether builtin versions of certain components
#  can be used, or whether we need to compile our own versions.

UCPP=install
C9XCOMPLEX=skip

#  For Windows/cygwin, set SFX to ".exe"; for Unix/Linux leave it empty:
#  Set OBJSFX to ".obj" instead of ".o" on Windows:

SFX=
OSFX=.o
MV=mv
RM=rm
CP=cp

#  Information about Fortran compilation:

FC=gfortran
FFLAGS=  $(LOCALFLAGS) $(CUSTOMBUILDFLAGS) -I$(INCDIR) $(NETCDFINC)  $(AMBERBUILDFLAGS)
FNOOPTFLAGS= -O0
FOPTFLAGS= -O3
AMBERFFLAGS=$(AMBERBUILDFLAGS)
FREEFORMAT_FLAG= -ffree-form
LM=-lm
FPP=cpp -traditional -P
FPPFLAGS= -DBINTRAJ -DEMIL  $(CUSTOMBUILDFLAGS) $(AMBERBUILDFLAGS)
AMBERFPPFLAGS=$(AMBERBUILDFLAGS)
FCREAL8=-fdefault-real-8
NOFORTRANMAIN=-lgfortran -w

XHOME= /usr
XLIBS= -L/usr/lib64 -L/usr/lib
MAKE_XLEAP=skip_xleap

PREFIX=/home/swails/testinstall