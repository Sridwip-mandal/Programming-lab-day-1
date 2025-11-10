/*write a c program which will take the information of 10 books having book id, book name, author name and prices then print it */
#include <stdio.h>

struct Book {
    int id;
    char name[100];
    char author[100];
    float price;
};

int main() {
    struct Book books[10];  
    int i;

    printf("Enter information for 10 books:\n\n");

    for (i = 0; i < 10; i++) {
        printf("Book %d:\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &books[i].id);
        getchar();  
        printf("Enter Book Name: ");
        fgets(books[i].name, sizeof(books[i].name), stdin);
        books[i].name[strcspn(books[i].name, "\n")] = '\0';

        printf("Enter Author Name: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        printf("Enter Book Price: ");
        scanf("%f", &books[i].price);
        getchar();  

        printf("\n");
    }

    printf("\n%-10s %-30s %-30s %-10s\n", "Book ID", "Book Name", "Author", "Price");
    printf("-------------------------------------------------------------------------------\n");

    for (i = 0; i < 10; i++) {
        printf("%-10d %-30s %-30s %-10.2f\n", 
               books[i].id, books[i].name, books[i].author, books[i].price);
    }

    return 0;
}

