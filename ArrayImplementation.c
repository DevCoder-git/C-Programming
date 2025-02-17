#include<stdio.h>

void create(){
    int isize;
    printf("Enter the size of the array : ");
    scanf("%d",&isize);
    int arr[isize];
    printf("Enter the array elements : ");
    for(int i=0;i<isize;i++){
        scanf("%d",&arr[i]);
    }
}

void insert(int isize,int arr[]){
    int ipos,iele;
    printf("Enter the position of the element to be inserted : ");
    scanf("%d",&ipos);
    printf("Enter the element to be inserted : ");
    scanf("%d",&iele);
    for(int i=ipos;i>=ipos;i--){
        arr[i]=arr[i-1];
    }
    arr[ipos-1]=iele;
    isize+=1;
}

void search(int isize,int arr[]){
    int search_key,flag=0;
    printf("Enter the element to be searched : ");
    scanf("%d",&search_key);
    for(int i=0;i<=isize;i++){
        if(arr[i]==search_key){
            flag=1;
            printf("Found");
        }
    }
    if(flag!=1){
        printf("Not Found");
    }
}

void deletion(int isize,int arr[]){
    int ipos;
    printf("Enter the position of the element to be inserted : ");
    scanf("%d",&ipos);
    for(int i=ipos;i<=ipos;i++){
        arr[i]=arr[i+1];
    }
}

void display(int isize,int arr[]){
    for(int i=0;i<isize;i++){
        printf("%d",arr[i]);
    }
}

int main(){
    int ch;
    do{
        printf("                CHOICES");
        printf("1. Create");
        printf("2. Insertion");
        printf("3. Search");
        printf("4. Deletion");
        printf("5. Display");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            create();
            break;

            case 2:
            insert();
            break;

            case 3:
            search();
            break;

            case 4:
            deletion();
            break;

            case 5:
            display();
            break;
        }
    }while(ch<6);
}
