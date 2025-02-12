#include "restaurant_billing.h"

int appetizers_adding(appetizers_items **appetizers_head)
{
    char item_name[50];
    int price;

    printf("\nif you not adding the item press 0\n");
    printf("Enter item name: ");
    scanf(" %[^\n]", item_name); 
    if(item_name[0] - '0' == 0)
    {
        return 0;
    }

    
    
    printf("Enter price: ");
    scanf("%d", &price);          // Read the price

    // Check if the item already exists in the list
    appetizers_items *temp = *appetizers_head;
    while (temp != NULL) 
    {
        if ((strcmp(temp->name_of_the_item, item_name)) == 0) 
        {
            return 2; // Item already exists
        }
        temp = temp->link;
    }
    

    // Allocate memory for the new item
    appetizers_items *new = malloc(sizeof(appetizers_items));
    if (new == NULL) 
    {
        return false; // Memory allocation failed
    }

    // Initialize the new item
    strcpy(new->name_of_the_item, item_name);
    new->price_of_the_item = price;
    new->link = NULL;

    // Add the new item to the linked list
    if (*appetizers_head == NULL) 
    {
        *appetizers_head = new;  // If the list is empty, the new item becomes the head
    } else
    {
        temp = *appetizers_head;
        while (temp->link != NULL) 
        {
            temp = temp->link;  // Traverse to the end of the list
        }
        temp->link = new;  // Add the new item at the end
    }
    // No need to free 'new' because it is part of the linked list now.
    return true; // Item added successfully
}

int soups_adding(soups_items **soups_head)
{
    char item_name[50];
    int price;

    printf("\nif you not adding the item press 0\n");
    printf("Enter item name: ");
    scanf(" %[^\n]", item_name); 
    if(item_name[0] - '0' == 0)
    {
        return 0;
    }

    soups_items *temp = *soups_head;
    while(temp)
    {
        if(strcmp(temp->name_of_the_item, item_name) == 0)
        {
            return 2;
        }
        temp = temp->link;
    }
    
    printf("Enter price: ");
    scanf("%d", &price);    
    
    
    soups_items *new = malloc(sizeof(soups_items));
    if(new == NULL)
    {
        return false;
    }
    strcpy(new->name_of_the_item,item_name);
    new->price_of_the_item = price;
    new->link = NULL;
    if(*soups_head == NULL)
    {
        *soups_head = new;
    }
    else
    {
        temp = *soups_head;
        while(temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = new;
    }
    return true;
}
int main_course_vegetarian_adding(main_course_vegetarian_items **main_course_vegetarian_head)
{
    char item_name[50];
    int price;

    printf("\nif you not adding the item press 0\n");
    printf("Enter item name: ");
    scanf(" %[^\n]", item_name); 
    if(item_name[0] - '0' == 0)
    {
        return 0;
    }

    main_course_vegetarian_items *temp = *main_course_vegetarian_head;
    while(temp)
    {
        if(strcmp(temp->name_of_the_item, item_name) == 0)
        {
            return 2;
        }
        temp = temp->link;
    }

    printf("Enter price: ");
    scanf("%d", &price);    
    
    
    main_course_vegetarian_items *new = malloc(sizeof(main_course_vegetarian_items));
    if(new == NULL)
    {
        return false;
    }
    strcpy(new->name_of_the_item,item_name);
    new->price_of_the_item = price;
    new->link = NULL;
    if(*main_course_vegetarian_head == NULL)
    {
        *main_course_vegetarian_head = new;
    }
    else
    {
        temp = *main_course_vegetarian_head;
        while(temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = new;
    }
    return true;
}
int main_course_non_vegetarian_adding(main_course_non_vegetarian_items **main_course_non_vegetarian_head)
{
    char item_name[50];
    int price;

    printf("\nif you not adding the item press 0\n");
    printf("Enter item name: ");
    scanf(" %[^\n]", item_name); 
    if(item_name[0] - '0' == 0)
    {
        return 0;
    }

    main_course_non_vegetarian_items *temp = *main_course_non_vegetarian_head;
    while(temp)
    {
        if(strcmp(temp->name_of_the_item, item_name) == 0)
        {
            return 2;
        }
        temp = temp->link;
    }

    printf("Enter price: ");
    scanf("%d", &price);    
    
    
    main_course_non_vegetarian_items *new = malloc(sizeof(main_course_non_vegetarian_items));
    if(new == NULL)
    {
        return false;
    }
    strcpy(new->name_of_the_item,item_name);
    new->price_of_the_item = price;
    new->link = NULL;
    if(*main_course_non_vegetarian_head == NULL)
    {
        *main_course_non_vegetarian_head = new;
    }
    temp = *main_course_non_vegetarian_head;
    while(temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = new;
    return true;
}
int desserts_adding(desserts_items **desserts_head)
{
    char item_name[50];
    int price;

    printf("\nif you not adding the item press 0\n");
    printf("Enter item name: ");
    scanf(" %[^\n]", item_name); 
    if(item_name[0] - '0' == 0)
    {
        return 0;
    }

    desserts_items *temp = *desserts_head;
    while(temp)
    {
        if(strcmp(temp->name_of_the_item, item_name) == 0)
        {
            return 2;
        }
        temp = temp->link;
    }

    printf("Enter price: ");
    scanf("%d", &price);
    
    desserts_items *new = malloc(sizeof(desserts_items));
    if(new == NULL)
    {
        return false;
    }
    strcpy(new->name_of_the_item,item_name);
    new->price_of_the_item = price;
    new->link = NULL;
    if(*desserts_head == NULL)
    {
        *desserts_head = new;
    }
    else
    {
        temp = *desserts_head;
        while(temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = new;
    }
    return true;
}
int beverages_adding(beverages_items **beverages_head)
{
    char item_name[50];
    int price;

    printf("\nif you not adding the item press 0\n");
    printf("Enter item name: ");
    scanf(" %[^\n]", item_name); 
    if(item_name[0] - '0' == 0)
    {
        return 0;
    }

    beverages_items *temp = *beverages_head;
    while(temp)
    {
        if(strcmp(temp->name_of_the_item, item_name) == 0)
        {
            return 2;
        }
        temp = temp->link;
    }

    printf("Enter price: ");
    scanf("%d", &price);    
    
    
    beverages_items *new = malloc(sizeof(beverages_items));
    if(new == NULL)
    {
        return false;
    }
    strcpy(new->name_of_the_item,item_name);
    new->price_of_the_item = price;
    new->link = NULL;
    if(*beverages_head == NULL)
    {
        *beverages_head = new;
    }
    else
    {
        temp = *beverages_head;
        while(temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = new;
    }
    return true; 
}