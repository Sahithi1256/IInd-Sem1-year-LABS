#include<stdio.h>
int linear(int[], int, int);
int main(){
	int a[10],i,n,key,pos;
	printf("Enter the size");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&key);
	pos = linear(a,key,n);
	printf("%d\n",pos);

	
	}
int linear(int a[], int key, int n){
	int i;
	for(i=0;i<n;i++){
		if(key==a[i]){
			return i;
		}
	
	
	}
	return -1;
}
	
			
	
	

