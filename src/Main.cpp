/*
 * Main.cpp
 *
 *  Created on: 20 Jun 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	/*
	 * Remember that a null terminator is also placed within this array for us.
	 * BloodBorne is 10 characters long therefore the array length is 11 elements inc.
	 * the null terminator.
	 */
	char charArray[] = "BloodBorne";

	/*
	 * Get the size of the charArray, but remembering NOT to include the null terminator, as we
	 * only want the length of the actual important information contained within the array,
	 * namely 'BloodBorne' which is of course only 10 characters/elements.
	 * So thats why we have to say sizeof(charArray) - 1.
	 *
	 * 11 - 1 = 10.
	 */
	int charArrayLength = sizeof(charArray) - 1;

	/*
	 * Pointer to the mem address at the start of the charArray which by default points us at the first
	 * element in the array, could also be written as - 'char *pStartCharArray = & charyArray[0];
	 */
	char *pStartCharArray = charArray;

	cout << "Address value of the pointer which is pointing at the memory address of the first element in the array = " << &pStartCharArray << endl;		// By using the ampersand we are getting the address of where the pointer is stored
																																							// which in turn is pointing to the memory address of the first element in the array

	cout << "Address value of the actual start of the array using void notation= " << (void *)pStartCharArray << endl;		// Normally, as with string we would just be able to access
																															// the mem address by calling 'pStartCharArray' but this
																															// instead prints us out the actual whole array for convenience
																															// so instead, and in order to access the mem address, we have
																															// to use the void notation out front.


	cout << pStartCharArray << endl;



	/*
	 * Pointer to the end of the char array, we must once again minus one due to the zero based
	 * indexing of arrays, remember charArrayLength is set to 10, which means for a zero based
	 * index array that the array will run from 0 - 9, so to access the last index of the array
	 * as stated we must once again minus one.
	 */
	char *pEndCharArray = &charArray[charArrayLength - 1];

	cout << "Address value of the pointer which points to the memory address of the end of the array = " << &pEndCharArray << endl;
	cout << "Address value of the end of the array using void notation = " << (void *)pEndCharArray << endl;


	cout << "##########################################" << endl;


	int counter = 1;
	cout << &charArray << endl;		// Another example of printing the address of the first element of the array, it only prints the first element because that is all it knows.


	/*
	 * The condition in the while loop is directly comparing the hex value mem address and then
	 * increments to the next address of the next index position after completing the swap, the condition is then checked again
	 * at the beginning of the next iteration. This continues until the condition is met and the code block is NOT executed.
	 *
	 * At which point the string is reversed.
	 */
	while(pStartCharArray < pEndCharArray)
	{
		cout << "Loop " << counter << endl;

		cout << "Address value of pStartCharArray = " << (void *)pStartCharArray << " and contains " << *pStartCharArray << endl;
		cout << "Address value of pEndCharArray = " << (void *)pEndCharArray << " and contains " << *pEndCharArray << endl;


		char save = *pStartCharArray;
		*pStartCharArray = *pEndCharArray;
		*pEndCharArray = save;

		cout << charArray << endl;


		pStartCharArray++;
		pEndCharArray--;

		counter++;
	}

	cout << charArray << endl;



	return 0;
}


