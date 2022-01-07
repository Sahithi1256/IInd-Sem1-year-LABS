#include<stdio.h>
void insertion_sort(int[], int);
int main(){
	int a[20],n,i;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	printf("After sorting \n");
	for(i=0;i<n;i++){
		printf("%d\t\n",a[i]);
	}
	return 0;
}
void insertion_sort(int a[], int n){
	int i,j,key;
	for(i=1;i<n;i++){
		j = i;
		while(j>0 && a[j-1]>a[j]){
			
				key = a[j];
				a[j] = a[j-1];
				a[j-1] = key;
				j--;
			
		}
	}
}
							
	

