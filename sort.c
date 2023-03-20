#include <stdio.h>
int sort(int *a, int n){
    int sorted=0, i, j, temp;
    do{
        sorted=0;
        for(i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                sorted=1;
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        }
    while(sorted!=0);
    for(i=0; i<n-1; i++){
        printf("%d, ",a[i]);
    }
    printf("%d",a[n-1]);
}
int main(){
    int n;
    printf("Please enter the number of elemnts of the array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("\nEnter value: ");
        scanf("%d",&a[i]);
    }
    sort(a,n);
}