// # CS532_Lab2
// # GitHub lu0106
// # SSH: git@github.com:lu0106/CS532_Lab2.git
// # HTTPS: https://github.com/lu0106/CS532_Lab2.git

#include <stdio.h>
#include <stdlib.h>

void Sort(int arr[], int N){

    int temp, currLoc, i;
	for (i=1; i<N; i++){
	    currLoc = i;
	    while (currLoc > 0 && arr[currLoc-1] > arr[currLoc]){
		    temp = arr[currLoc];
		    arr[currLoc] = arr[currLoc-1];
		    arr[currLoc-1] = temp;
		    currLoc--;
	    }
	}
}

int main(){

    int N;

    printf("Enter the Number of Array Elements: ");
    scanf("%d", &N);

    int array[N];
    int i = 0;
    int num = 0;

    for(i=0;i<N;i++){
        printf("Number %d of the Array: ", i+1 );
        scanf("%d", &num);
        array[i] = num;
    }

    printf("Given Array is: ");
    for(i=0;i<N;i++){
        printf("%d, ", array[i]);
    }
    printf("\n");

    Sort(array, N);

    printf("Sorted Array is: ");
    for(i=0;i<N;i++){
        printf("%d, ", array[i]);
    }
    printf("\n");

    return 0;
}
