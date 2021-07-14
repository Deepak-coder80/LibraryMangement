/***********************************************************************************
 * ######################### PROBLEM DETAILS #################################### *
 * AUTHOR : DEEPAK M S
 * AIM    : Create a structure containing book information like accession number, 
            name of book and name of author. The maximum number of books in the 
            library is1000. Also create and display a menu as follows: 
            (i) Add a new book. 
            (ii) Display book information in lexicographical order of book names. 
            (iii) Display the number of books of a particular author  .
            (Use separate function for sorting .)  

***********************************************************************************/


//header files
#include <stdio.h>
#include <string.h>

//struct for book
struct libraryMangement
{
   int access_number;
   char book_name[100];
   char book_author[100];
};


//function declartions
int optionSelector(); //options display functions
void displayBooks(struct libraryMangement book[],int n); //function for displaly books
void sortBooks(struct libraryMangement sort[],int n); //function for sortbooks
void bookOfAuthor(struct libraryMangement sort[],int n); //function for displaly book a particular author

//global variables
int i; //loop variable
int j; //another loop vaiable
int n; //size of books

//main function
int main(){
    //create book struct
    struct libraryMangement book[1000];
    //local variable declartion
    int option,noOfBooks;
    printf("****************************************\n");
    printf("\tLIBRARY MANAGEMENT SYSTEM\n");
    printf("****************************************\n");

    
        printf("There is No book in this Library yet. Please add books\n");
        printf("Enter the number of books you want to add:");
        scanf("%d",&noOfBooks);
        for(i=0;i<noOfBooks;i++){

            printf("Enter the %d book name:",i+1);
            scanf("%s",book[i].book_name);
            printf("Enter the name of author :");
            scanf("%s",book[i].book_author);
            printf("Enter the access Number of the book:");
            scanf("%d",&book[i].access_number);
             printf("\n------------------------------------------------\n");
        }
        //printf("\nEnterd books are:\n");

        do
        {
            option = optionSelector();
        
            switch (option)
            {
            case 1:
                sortBooks(book,noOfBooks);
                break;
            case 2:
                bookOfAuthor(book,noOfBooks);
                break;
            
            
            }
        } while (option != 0);
        
        


    return 0;
}

int optionSelector(){
    int choice;
    printf("\n------------------------------------------------\n");
    printf("\n\tEnter 1 for display Books: ");
    printf("\n\tEnter 2 for search book by author: ");
    printf("\n\tEnter 0 to exit: ");
    printf("\n\nEnter your choice here:");
    scanf("%d",&choice);
     printf("\n------------------------------------------------\n");

    return choice;

}

void displayBooks(struct libraryMangement book[],int n){
    for(i=0;i<n;i++){
        printf("\n------------------------------------------------\n");
        printf("\nbook No: %d",i+1);
        printf("\nAccess No : %d",book[i].access_number);
        printf("\nBook Name: %s",book[i].book_name);
        printf("\nBook Author : %s",book[i].book_author);
         printf("\n------------------------------------------------\n");
    }
}


void sortBooks(struct libraryMangement sort[],int n){
    struct libraryMangement temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(sort[i].book_name,sort[j].book_name)>0){
                temp = sort[i];
                sort[i]= sort[j];
                sort[j]=temp;
            }
        }
    }
    displayBooks(sort,n);
}

void bookOfAuthor(struct libraryMangement sort[],int n){
    char author[50];
    printf("\nEnter author name:");
    scanf("%s",author);

    for(i=0;i<n;i++){
        if(strcmp(sort[i].book_author,author)==0){
             printf("\n------------------------------------------------\n");
            printf("\nAccess No : %d",sort[i].access_number);
            printf("\nBook Name: %s",sort[i].book_name);
             printf("\n------------------------------------------------\n");
        }
    }


}