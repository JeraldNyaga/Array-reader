#include <iostream>
using namespace std;

void printArray(int arg[],  int length){
	for(int n = 0 ; n<length; n++)
	cout<< arg[n]<<" "<<"\n";
}
int main(){
	int firstArray[] = {5 ,10 , 15};
	int secondArray[] = {2 , 4 , 6 , 8 , 10};
	
	printArray (firstArray , 2);
	printArray (secondArray, 5);
	
	return 0 ;


	// the output is 5, 10 
	//output is 2, 4 , 6, 8, 10
	
	//The fumction takes in the arrayname and the array size and outputs the values in the array depending on the size/ length entered in the function prototype
}
