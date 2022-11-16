test: lipi-oper.o lipi-func.o test.o
	c++ lipi-func.o lipi-oper.o test.o  -o test

lipi-func.o: lipi-func.c++
	c++ -c lipi-func.c++
lipi-oper.o: lipi-oper.c++
	c++ -c lipi-oper.c++
test.o: test.c++
	c++ -c test.c++
clear:
	@echo "clearing..."
	@rm *.o
