#include "restaurant_billing.h"

int add_the_items_to_the_menu(appetizers_items **,soups_items **,main_course_vegetarian_items **, main_course_non_vegetarian_items **, desserts_items **, beverages_items **);
int change_the_prices_of_the_items(appetizers_items **,soups_items **,main_course_vegetarian_items **, main_course_non_vegetarian_items **, desserts_items **, beverages_items **);
int continue_with_same_items_and_prices(appetizers_items **,soups_items **,main_course_vegetarian_items **, main_course_non_vegetarian_items **, desserts_items **, beverages_items **);
int remove_the_items_to_the_menu(appetizers_items **,soups_items **,main_course_vegetarian_items **, main_course_non_vegetarian_items **, desserts_items **, beverages_items **);
int main()
{
    appetizers_items *appetizers_head = NULL;
    soups_items *soups_head = NULL;
    main_course_vegetarian_items *main_course_vegetarian_head = NULL;
    main_course_non_vegetarian_items *main_course_non_vegetarian_head = NULL;
    desserts_items *desserts_head = NULL;
    beverages_items *beverages_head = NULL;

    FILE *fptr = NULL;
    char item_name[50];
    int flag;

    fptr = fopen("appetizers.txt","r");
    if(fptr == NULL)
    {
        return 1;
    }
    flag = 0;
    while(!feof(fptr))
    {
        fgets(item_name,30,fptr);
        appetizers_items *new = malloc(sizeof(appetizers_items));
        for(int j=0; j<2; j++)
        {
            if(flag == 0)
            {
                strcpy(new->name_of_the_item,item_name);
                flag++;
            }
            else
            {
                fgets(item_name,30,fptr);
                int sum_of_item_price = 0, index = 0;
                while(item_name[index] != ' ')
                {
                    sum_of_item_price = (sum_of_item_price * 10) + item_name[index] - '0';
                    index++;
                }
                new->price_of_the_item = sum_of_item_price;
                new->link =NULL;
                flag = 0;
            }
        }
        if(appetizers_head == NULL)
        {
            appetizers_head = new;
        }
        else
        {
            appetizers_items *temp = appetizers_head;
            while(temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = new;
        }

    }

    fptr = fopen("soups.txt","r");
    if(fptr == NULL)
    {
        return 1;
    }
    flag = 0;
    while(!feof(fptr))
    {
        fgets(item_name,50,fptr);
        soups_items *new = malloc(sizeof(soups_items));
        for(int j = 0; j<2; j++)
        {
            if(flag == 0)
            {
                strcpy(new->name_of_the_item,item_name);
                flag++;
            }
            else
            {
                fgets(item_name,30,fptr);
                int sum_of_item_price = 0, index = 0;
                while(item_name[index] != ' ')
                {
                    sum_of_item_price = (sum_of_item_price * 10) + item_name[index] - '0';
                    index++;
                }
                new->price_of_the_item = sum_of_item_price;
                new->link = NULL;
                flag = 0;
            }
        }
        if(soups_head == NULL)
        {
            soups_head = new;
        }
        else
        {
            soups_items *temp = soups_head;
            while(temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = new;
        }

    }

    fptr = fopen("main_course_vegetarian.txt","r");
    if(fptr == NULL)
    {
        return 1;
    }
    flag = 0;
    while(!feof(fptr))
    {
        fgets(item_name,50,fptr);
        main_course_vegetarian_items *new = malloc(sizeof(main_course_vegetarian_items));
        for(int j=0; j<2;j++)
        {
            if(flag == 0)
            {
                strcpy(new->name_of_the_item,item_name);
                flag++;
            }
            else
            {
                fgets(item_name,30,fptr);
                int sum_of_item_price = 0, index = 0;
                while(item_name[index] != ' ')
                {
                    sum_of_item_price = (sum_of_item_price * 10) + item_name[index] - '0';
                    index++;
                }
                new->price_of_the_item = sum_of_item_price;
                new->link =NULL;
                flag = 0;
            }
        }
        if(main_course_vegetarian_head == NULL)
        {
            main_course_vegetarian_head = new;
        }
        else
        {
            main_course_vegetarian_items *temp = main_course_vegetarian_head;
            while(temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = new;
        }

    }

    fptr = fopen("main_course_non_vegetarian.txt","r");
    if(fptr == NULL)
    {
        return 1;
    }
    flag = 0;
    while(!feof(fptr))
    {
        fgets(item_name,50,fptr);
        main_course_non_vegetarian_items *new = malloc(sizeof(main_course_non_vegetarian_items));
        for(int j=0;j<2;j++)
        {
            if(flag == 0)
            {
                strcpy(new->name_of_the_item,item_name);
                flag++;
            }
            else
            {
                fgets(item_name,30,fptr);
                int sum_of_item_price = 0, index = 0;
                while(item_name[index] != ' ')
                {
                    sum_of_item_price = (sum_of_item_price * 10) + item_name[index] - '0';
                    index++;
                }
                new->price_of_the_item = sum_of_item_price;
                new->link =NULL;
                flag = 0;
            }
        }
        if(main_course_non_vegetarian_head == NULL)
        {
            main_course_non_vegetarian_head = new;
        }
        else
        {
            main_course_non_vegetarian_items *temp = main_course_non_vegetarian_head;
            while(temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = new;
        }

    }

    fptr = fopen("desserts.txt","r");
    if(fptr == NULL)
    {
        return 1;
    }
    flag = 0;
    while(!feof(fptr))
    {
        fgets(item_name,50,fptr);
        desserts_items *new = malloc(sizeof(desserts_items));
        for(int j=0;j<2;j++)
        {
            if(flag == 0)
            {
                strcpy(new->name_of_the_item,item_name);
                flag++;
            }
            else
            {
                fgets(item_name,30,fptr);
                int sum_of_item_price = 0, index = 0;
                while(item_name[index] != ' ')
                {
                    sum_of_item_price = (sum_of_item_price * 10) + item_name[index] - '0';
                    index++;
                }
                new->price_of_the_item = sum_of_item_price;
                new->link =NULL;
                flag = 0;
            }
        }
        if(desserts_head == NULL)
        {
            desserts_head = new;
        }
        else
        {
            desserts_items *temp = desserts_head;
            while(temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = new;
        }

    }

    fptr = fopen("beverages.txt","r");
    if(fptr == NULL)
    {
        return 1;
    }
    flag = 0;
    while(!feof(fptr))
    {
        fgets(item_name,50,fptr);
        beverages_items *new = malloc(sizeof(beverages_items));
        for(int j=0;j<2;j++)
        {
            if(flag == 0)
            {
                strcpy(new->name_of_the_item,item_name);
                flag++;
            }
            else
            {
                fgets(item_name,30,fptr);
                int sum_of_item_price = 0, index = 0;
                while(item_name[index] != ' ')
                {
                    sum_of_item_price = (sum_of_item_price * 10) + item_name[index] - '0';
                    index++;
                }
                new->price_of_the_item = sum_of_item_price;
                new->link =NULL;
                flag = 0;
            }
        }
        if(beverages_head == NULL)
        {
            beverages_head = new;
        }
        else
        {
            beverages_items *temp = beverages_head;
            while(temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = new;
        }

    }

    
    int num;
    while(1)
    {
        printf("1)Add the items to the menu\n2)change the prices of the items\n3)continue with the same items and prices\n4)Remove the items to the memu\nenter the youer choces numbers : " );
        scanf("%d",&num);
        printf("\n");
        switch(num)
        {
            case 1:
                add_the_items_to_the_menu(&appetizers_head,&soups_head,&main_course_vegetarian_head,&main_course_non_vegetarian_head,&desserts_head,&beverages_head);
                break;
            case 2:
                change_the_prices_of_the_items(&appetizers_head,&soups_head,&main_course_vegetarian_head,&main_course_non_vegetarian_head,&desserts_head,&beverages_head);
                break;
            case 3:
                continue_with_same_items_and_prices(&appetizers_head,&soups_head,&main_course_vegetarian_head,&main_course_non_vegetarian_head,&desserts_head,&beverages_head);
                break;
            case 4:
                remove_the_items_to_the_menu(&appetizers_head,&soups_head,&main_course_vegetarian_head,&main_course_non_vegetarian_head,&desserts_head,&beverages_head);
                break;
            default:
                printf("enter a valied input\n");
                break;
        }
    }
}