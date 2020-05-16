// Rotate array

// Given a random integer array of size n, write a function that rotates the given array by d elements (towards left)
// Change in the input array itself. You don't need to return or print elements.
// Input format :

// Line 1 : Integer n (Array Size)
// Line 2 : Array elements (separated by space)
// Line 3 : Integer d

// Output Format :

// Updated array elements in a single line (separated by space)

// Constraints :

// 0 <= N <= 10^7
// 0 <= d <= N

// Sample Input 1:

// 7
// 1 2 3 4 5 6 7
// 2

// Sample Output 1:

// 3 4 5 6 7 1 2

// Sample Input 2:

// 7
// 1 2 3 4 5 6 7
// 0

// Sample Output 2:

// 1 2 3 4 5 6 7

#include <iostream>
using namespace std;

// arr - input array
// size - size of array
// d - array to be rotated by d elements

void Rotate(int arr[], int d, int size) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output.
     * Taking input and printing the output is handled automatically.
     */
    int *temp = new int[size];
    for(int i = 0; i < size; i++) {
        temp[(i+size-d)%size] = arr[i];
    }
    
    for(int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }

}	


int main() {

	int size;
	int d;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	cin >> d;
    
    Rotate(input,d,size);
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";
	return 0;

}


