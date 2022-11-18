#include<stdio.h>

int main(){
	int list[5], n = 0;
	n = (sizeof(list)/4);

	for(int i = 0; i < n; i++){
		scanf("%d", &list[i]);
	}

	printf("Input: ");
	for(int i = 0; i < n-1; i++){
		printf("%d, ", list[i]);
	}
	printf("%d\n", list[n-1]);

	for(int i = 0; i < n; i++){
		int min = i;

		for(int j = i; j <= n; j++){
			if(list[j] < list[min]){
				min = j;
			}
		}

		if(min != i){
			int aux = list[min];
			list[min] = list[i];
			list[i] = aux;
		}
	}

	printf("Output: ");
	for(int i = 0; i < n-1; i++){
		printf("%d, ", list[i]);
	}
	printf("%d\n", list[n-1]);

}