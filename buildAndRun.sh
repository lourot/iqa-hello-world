#!/usr/bin/env bash

set -e

IQA_VERSION=1.1.2
FILENAME=iqa_${IQA_VERSION}_src.tar.gz
if [ ! -f "$FILENAME" ] ; then
  echo -- Download IQA
  wget -c http://downloads.sourceforge.net/project/iqa/$IQA_VERSION%20Release/$FILENAME
fi

DIRNAME=iqa_${IQA_VERSION}
if [ ! -d "$DIRNAME" ] ; then
  echo -- Unpack IQA
  tar xvzf $FILENAME
fi

echo -- Build libiqa.a
cd $DIRNAME
make
cd ..

echo -- Compile example.o
g++ -I$DIRNAME/include -c example.cpp

echo -- Link example.bin
g++ example.o -L$DIRNAME/build/debug -liqa -o example.bin

echo -- Run example.bin
./example.bin
