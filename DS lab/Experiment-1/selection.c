#include<stdio.h>
void selection_sort(int[], int);
int main(){
	int a[20],n,i;
	printf("Enter the value ofn:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	selection_sort(a,n);
	printf("After sorting \n");
	for(i=0;i<n;i++){
		printf("%d\t\n",a[i]);
	}
	return 0;
}
void selection_sort(int a[], int n){
	int i,j,min,temp;
	for(i=0;i<n;i++){
		min = i;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min = j;
			}
		}
		if(i != min){
			temp = a[i];
			a[i] = a[min];
			a[min]= temp;
		}
	}
}
			
		
