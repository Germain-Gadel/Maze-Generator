#!/bin/bash

make re

echo "10 by 10 maze generated random"
echo "./generator/generator 10 10"
./generator/generator 10 10

echo "-------------->Next test<---------------"
echo "10 by 10 maze generated perfect"
echo "./generator/generator 10 10 perfect"
./generator/generator 10 10 perfect
echo ""

echo "-------------->Next test<---------------"
echo "Solve 10 by 10 perfect maze"
echo "./generator/generator 10 10 perfect > maze; ./solver/solver maze"
./generator/generator 10 10 perfect > maze; ./solver/solver maze -c
echo ""

echo "-------------->Next test<---------------"
echo "100 by 100 maze generated perfect"
echo "./generator/generator 100 100 perfect"
./generator/generator 40 40 perfect
echo ""

echo "-------------->Next test<---------------"
echo "100 by 100 maze generated random"
echo "./generator/generator 100 100"
./generator/generator 40 40

echo "-------------->Next test<---------------"
echo "Solve 100 by 100 perfect maze"
echo "./generator/generator 100 100 perfect > maze; ./solver/solver maze"
./generator/generator 160 40 perfect > maze; ./solver/solver maze -c
#echo "\n"
echo "-------------- END ---------------"