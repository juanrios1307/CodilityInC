cmake_minimum_required(VERSION 3.20)
project(Codility C)

set(CMAKE_C_STANDARD 99)

add_executable(Codility main.c Iterations.c Arrays.c TCFrogJmp.c TCTapeEquilibrium.c TCPermMissingElem.c ArrOddOcurrencies.c)
