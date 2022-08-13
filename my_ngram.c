#include <stdio.h>
#include <string.h>

void writa (int *arr, char* str){
    for(int i = 0; i < strlen(str);i++){
        if(str[i] != '"')
        arr[str[i]] +=1;
    }
}
void print(int *arr, int size){
    for(int i = 0; i < size;i++){
        if(arr[i]>0)
        printf("%c-%d\n",i,arr[i]);
    }
}
int main(int ac, char *av[]){
    int array[127]= {0};
    int ind = 1;
    while(ind < ac){
       writa(array ,av[ind]);
           ind++;
    }print(array, 127);
    return 0;
}
