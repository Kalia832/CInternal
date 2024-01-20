#include<stdio.h>
#include<stdlib.h>
void quickSort(int*,int,int);
void swap(int*,int*);
int main(){
	int len,i=0,arrSum=0;
	int chk;
	scanf("%d",&len);
	int *arr=(int*)calloc(sizeof(int),len);
	while(i++<len){
		scanf("%d",&arr[i]);
		arrSum+=(arr[i]);
	}
	quickSort(arr,0,len-1);
	i=0;
	while(i++<len){
		chk=arr[i]*len;
		if(arrSum<chk){
			printf("\nFound The Beast:%d",arr[i]);
			exit(0);
		}
	}
}
void quickSort(int arr[],int f,int l){
	int up=f+1,dn=l,fix=arr[f];
	while(arr[dn]<fix)dn++;
	while(arr[up]>fix)up--;
	while(dn<up){
		swap(&arr[up],&arr[dn]);
		while(arr[dn]<fix)dn++;
		while(arr[up]>fix)up--;
	}
	if(up!=f)
		swap(&arr[up],&arr[f]);
	if(f<up-1){
		quickSort(arr,f,up-1);	
	}
	if(up+1<l){
		quickSort(arr,up+1,l);	
	}
}
void swap(int *elm1,int *elm2){
	int temp=*elm1;
	*elm1=*elm2;
	*elm2=temp;
}
