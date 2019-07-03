##
## EPITECH PROJECT, 2018
## Makefile My_SH2
## File description:
## Makefile by Quentin Lavieville
##

make:
	make re -C ./generator/
	make re -C ./solver/

clean:
	make clean -C ./generator/
	make clean -C ./solver/

debug:
	make debug -C ./generator/
	make debug -C ./solver/

fclean:
	make fclean -C ./generator/
	make fclean -C ./solver/

re:
	make fclean
	make
