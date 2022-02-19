CXX=g++
SRCS=src/adck.cpp
OUT_FILE=build/adck

all: adck

adck:
	@mkdir -p build
	@echo Building...
	@${CXX} ${SRCS} -o ${OUT_FILE} -Wall
	@echo Built adck into ${OUT_FILE}. Enjoy!