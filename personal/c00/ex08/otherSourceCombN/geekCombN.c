#include <unistd.h>
void putc(char c) {write(1, &c, 1); }
void puts(char *str) {
	for(; *str!='\0'; ++str) {
		putc(*str);
	}
}

// all combination r, arr[] len(arr)==n  
// data : temp array to stores current comb
void combUtil(int arr[], int data[], int start, int end, int index, int r){
	if(index == r) {
		for (int j=0; j<r; j++) {
			putc(data[j]+'0');
		}
		putc('\n');
		return;
	}
	for(int i=start; i<=end && (end-i+1)>=r-index; i++) {
		data[index] = arr[i];
		combUtil(arr, data, i+1, end, index+1, r);
	}
}

void printComb(int arr[], int n, int r) {
	int data[r];
	combUtil(arr, data, 0, n-1, 0, r);
}

int main() {
	int arr[] = {1,2,3,4,5};
	int r = 4;
	int n = sizeof(arr)/sizeof(arr[0]);
	printComb(arr, n, r);
	/* putc(n+'0'); */
	/* puts("Hello world"); */
	return 0;
}
