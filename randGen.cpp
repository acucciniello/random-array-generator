//randGen.cpp
#include <iostream>
#include <stdlib.h>

int randomGen(int n, int * arrayPointer);

int main()
{
	int size; 
	// need to allocate memory for the pointer to point to an array
	int * pArray= new int [size];
	int stat;

	std::cout << "How many numbers would you like to output?" << std::endl;
	std::cin >> size;
	
	stat = randomGen(size, pArray);
	std::cout << stat << std::endl;
	delete [] pArray;

	return 0;
}

int randomGen(int n, int * arrayPointer)
{
	int i;
	for(i = 0; i < n; i++)
	{
		int randNum = rand();
		arrayPointer[i] = randNum;
		if(arrayPointer[i] <= 0 || arrayPointer[i] >= RAND_MAX )
		{
			return -1;
		}
	}
	return 1;
}
