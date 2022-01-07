#include<stdio.h>
void bubble_sort(int [], int );
int main(){
	int A[20],n,i;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the elements of array:");
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	bubble_sort(A , n);
	printf("after sorting :\n");
	for(i=0;i<n;i++){
		printf("%d\t\n",A[i]);
	}
	return 0;
}
	
void bubble_sort(int A[], int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(A[j] > A[j+1]){
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
				}
			}
		}
	}

				

	
	
