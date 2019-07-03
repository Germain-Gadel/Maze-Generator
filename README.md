# Maze-Generator
A maze generator and solver in C.

USAGE

Genarator

./generator/generator x y [perfect]

The perfect flags generates perfect mazes (only one path to the exit)

The start of the maze is the upper left corner and the end is the lower right corner.

Solver

./solver/solver maze

maze    a file containing a maze composed of starts (*) for the path and X for the walls

EXAMPLE

./generator/generator 100 100 perfect > maze; ./solver/solver maze
