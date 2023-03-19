#include <stdio.h>
void main(){
printf("Enter size of your 1st Array : ");
int size1;
scanf("%d", &size1);
printf("Enter size of your 2nd Array : ");
int size2;
scanf("%d", &size2);
int Array1[size1];
int Array2[size2];

// input of 1st array
printf("Input the numbers of 1st Array : ");
for(int i = 0; i < size1; i++){
    scanf("%d", &Array1[i]);
  }
// input of 2nd array
printf("Input the numbers of 2nd Array : ");
for(int i = 0; i < size2; i++){
    scanf("%d", &Array2[i]);
  }

int size = size1+size2;
int newArray[size];
for(int i = 0; i < size; i++){
    if(i < size1){
        newArray[i] = Array1[i];
    }else{
        newArray[i] = Array2[i-size1];
    }
}

// print in reverse order

for(int i = size-1; i >= 0; i--){
    printf("%d ", newArray[i]);
}

}