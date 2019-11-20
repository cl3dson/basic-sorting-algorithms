void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int elem[], int n){
    int i,j,min;

    for(i = 0; i < n-1 ;i++){
        min = i;

        for(j= i+1; j < n-1; j++){
            if(elem[j] < elem[min]){
                min = elem[j];
            }
        }

        swap(&elem[i],&elem[min]);
    }
}

void printElements(int elem[],int n){
    int i;
    for(i=0; i<n-1; i++){
        printf("%d ",elem[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {10,9,8,7,6,5};
    int n = sizeof(arr);
    selectionSort(arr,n);
    printElements(arr,n);
    return 0;
}