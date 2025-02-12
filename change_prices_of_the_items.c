#include "restaurant_billing.h"
int appetizers_change_prices(appetizers_items **appetizers_head)
{
    if(*appetizers_head == NULL)
    {
        //printf("appetizers menu is empty\n");
        return 2;
    }
    appetizers_items *temp = *appetizers_head;
    int numbers = 1;
    while(temp)
    {
        printf("%d)%s  %d\n",numbers,temp->name_of_the_item,temp->price_of_the_item);
        numbers++;
        temp = temp->link;
    }
    start:
    printf("if go back press 0\n");
    printf("enter a item number : ");
    int item_number;
    scanf("%d",&item_number);
    if(item_number == 0)
        return 0;

    temp = *appetizers_head;
    for(int index = 1; index < item_number; index++)
    {
        if(temp)
            temp = temp->link;
        else
        {
            printf("****The given input is not in the list. please provide a vaild input****\n");
            goto start;
        }
    }
    char item_name[50];
    strcpy(item_name,temp->name_of_the_item);
    FILE *fptr = NULL;
    FILE *temp_fptr = NULL;
    fptr = fopen("appetizers.txt","a+");
    temp_fptr = fopen("temp.txt","w");
    fseek(fptr,0,SEEK_SET);
    char item_check[30];
    char new_prices[30];
    int len_str;
    while(!feof(fptr))
    {
        fgets(item_check,30,fptr);
        if(!(strcmp(item_name,item_check)))
        {
            fputs(item_check,temp_fptr);
            printf("enter the new price : ");
            scanf("%s",new_prices);
            temp->price_of_the_item = atoi(new_prices);
            fputs(new_prices,temp_fptr);
            fputc(' ',temp_fptr);
            fputc('\n',temp_fptr);
            fgets(item_check,30,fptr);
        }
        else
        {
            fputs(item_check,temp_fptr);
        }
    }
    fclose(fptr);
    fclose(temp_fptr);

    remove("appetizers.txt");
    rename("temp.txt", "appetizers.txt");
    return true;

}

int soups_change_prices(soups_items **soups_head)
{
    if(*soups_head == NULL)
    {
        //printf("appetizers menu is empty\n");
        return 2;
    }
    soups_items *temp = *soups_head;
    int numbers = 1;
    while(temp)
    {
        printf("%d)%s  %d\n",numbers,temp->name_of_the_item,temp->price_of_the_item);
        numbers++;
        temp = temp->link;
    }
    start:

    printf("if go back press 0\n");
    printf("enter a item number : ");
    int item_number;
    scanf("%d",&item_number);
    if(item_number == 0)
        return 0;

    temp = *soups_head;
    for(int index = 1; index < item_number; index++)
    {
        if(temp)
            temp = temp->link;
        else
        {
            printf("****The given input is not in the list. please provide a vaild input****\n");
            goto start;
        }
    }
    char item_name[50];
    strcpy(item_name,temp->name_of_the_item);
    FILE *fptr = NULL;
    FILE *temp_fptr = NULL;
    fptr = fopen("soups.txt","a+");
    temp_fptr = fopen("temp.txt","w");
    fseek(fptr,0,SEEK_SET);
    char item_check[30];
    char new_prices[30];
    int len_str;
    while(!feof(fptr))
    {
        fgets(item_check,30,fptr);
        if(!(strcmp(item_name,item_check)))
        {
            fputs(item_check,temp_fptr);
            printf("enter the new price : ");
            scanf("%s",new_prices);
            temp->price_of_the_item = atoi(new_prices);
            fputs(new_prices,temp_fptr);
            fputc(' ',temp_fptr);
            fputc('\n',temp_fptr);
            fgets(item_check,30,fptr);
        }
        else
        {
            fputs(item_check,temp_fptr);
        }
    }
    fclose(fptr);
    fclose(temp_fptr);

    remove("soups.txt");
    rename("temp.txt", "soups.txt");
    return true;
}
int main_course_vegetarian_change_prices(main_course_vegetarian_items **main_course_vegetarian_head)
{
    if(*main_course_vegetarian_head == NULL)
    {
        //printf("appetizers menu is empty\n");
        return 2;
    }
    main_course_vegetarian_items *temp = *main_course_vegetarian_head;
    int numbers = 1;
    while(temp)
    {
        printf("%d)%s  %d\n",numbers,temp->name_of_the_item,temp->price_of_the_item);
        numbers++;
        temp = temp->link;
    }
    start:

    printf("if go back press 0\n");
    printf("enter a item number : ");
    int item_number;
    scanf("%d",&item_number);
    if(item_number == 0)
        return 0;

    temp = *main_course_vegetarian_head;
    for(int index = 1; index < item_number; index++)
    {
        if(temp)
            temp = temp->link;
        else
        {
            printf("****The given input is not in the list. please provide a vaild input****\n");
            goto start;
        }
    }
    char item_name[50];
    strcpy(item_name,temp->name_of_the_item);
    FILE *fptr = NULL;
    FILE *temp_fptr = NULL;
    fptr = fopen("main_course_vegetarian.txt","a+");
    temp_fptr = fopen("temp.txt","w");
    fseek(fptr,0,SEEK_SET);
    char item_check[30];
    char new_prices[30];
    int len_str;
    while(!feof(fptr))
    {
        fgets(item_check,30,fptr);
        if(!(strcmp(item_name,item_check)))
        {
            fputs(item_check,temp_fptr);
            printf("enter the new price : ");
            scanf("%s",new_prices);
            temp->price_of_the_item = atoi(new_prices);
            fputs(new_prices,temp_fptr);
            fputc(' ',temp_fptr);
            fputc('\n',temp_fptr);
            fgets(item_check,30,fptr);
        }
        else
        {
            fputs(item_check,temp_fptr);
        }
    }
    fclose(fptr);
    fclose(temp_fptr);

    remove("main_course_vegetarian.txt");
    rename("temp.txt", "main_course_vegetarian.txt");
    return true;
}
int main_course_non_vegetarian_change_prices(main_course_non_vegetarian_items **main_course_non_vegetarian_head)
{
    if(*main_course_non_vegetarian_head == NULL)
    {
        //printf("appetizers menu is empty\n");
        return 2;
    }
    main_course_non_vegetarian_items *temp = *main_course_non_vegetarian_head;
    int numbers = 1;
    while(temp)
    {
        printf("%d)%s  %d\n",numbers,temp->name_of_the_item,temp->price_of_the_item);
        numbers++;
        temp = temp->link;
    }
    start:

    printf("if go back press 0\n");
    printf("enter a item number : ");
    int item_number;
    scanf("%d",&item_number);
    if(item_number == 0)
        return 0;

    temp = *main_course_non_vegetarian_head;
    for(int index = 1; index < item_number; index++)
    {
        if(temp)
            temp = temp->link;
        else
        {
            printf("****The given input is not in the list. please provide a vaild input****\n");
            goto start;
        }
    }
    char item_name[50];
    strcpy(item_name,temp->name_of_the_item);
    FILE *fptr = NULL;
    FILE *temp_fptr = NULL;
    fptr = fopen("main_course_non_vegetarian.txt","a+");
    temp_fptr = fopen("temp.txt","w");
    fseek(fptr,0,SEEK_SET);
    char item_check[30];
    char new_prices[30];
    int len_str;
    while(!feof(fptr))
    {
        fgets(item_check,30,fptr);
        if(!(strcmp(item_name,item_check)))
        {
            fputs(item_check,temp_fptr);
            printf("enter the new price : ");
            scanf("%s",new_prices);
            temp->price_of_the_item = atoi(new_prices);
            fputs(new_prices,temp_fptr);
            fputc(' ',temp_fptr);
            fputc('\n',temp_fptr);
            fgets(item_check,30,fptr);
        }
        else
        {
            fputs(item_check,temp_fptr);
        }
    }
    fclose(fptr);
    fclose(temp_fptr);

    remove("main_course_non_vegetarian.txt");
    rename("temp.txt", "main_course_non_vegetarian.txt");
    return true;
}
int desserts_change_prices(desserts_items **desserts_head)
{
    if(*desserts_head == NULL)
    {
        //printf("appetizers menu is empty\n");
        return 2;
    }
    desserts_items *temp = *desserts_head;
    int numbers = 1;
    while(temp)
    {
        printf("%d)%s  %d\n",numbers,temp->name_of_the_item,temp->price_of_the_item);
        numbers++;
        temp = temp->link;
    }
    start:

    printf("if go back press 0\n");
    printf("enter a item number : ");
    int item_number;
    scanf("%d",&item_number);
    if(item_number == 0)
        return 0;
    
    temp = *desserts_head;
    for(int index = 1; index < item_number; index++)
    {
        if(temp)
            temp = temp->link;
        else
        {
            printf("****The given input is not in the list. please provide a vaild input****\n");
            goto start;
        }
    }
    char item_name[50];
    strcpy(item_name,temp->name_of_the_item);
    FILE *fptr = NULL;
    FILE *temp_fptr = NULL;
    fptr = fopen("desserts.txt","a+");
    temp_fptr = fopen("temp.txt","w");
    fseek(fptr,0,SEEK_SET);
    char item_check[30];
    char new_prices[30];
    int len_str;
    while(!feof(fptr))
    {
        fgets(item_check,30,fptr);
        if(!(strcmp(item_name,item_check)))
        {
            fputs(item_check,temp_fptr);
            printf("enter the new price : ");
            scanf("%s",new_prices);
            temp->price_of_the_item = atoi(new_prices);
            fputs(new_prices,temp_fptr);
            fputc(' ',temp_fptr);
            fputc('\n',temp_fptr);
            fgets(item_check,30,fptr);
        }
        else
        {
            fputs(item_check,temp_fptr);
        }
    }
    fclose(fptr);
    fclose(temp_fptr);

    remove("desserts.txt");
    rename("temp.txt", "desserts.txt");
    return true;
}
int beverages_change_prices(beverages_items **beverages_head)
{
    if(*beverages_head == NULL)
    {
        return 2;
    }
    beverages_items *temp = *beverages_head;
    int numbers = 1;
    while(temp)
    {
        printf("%d)%s  %d\n",numbers,temp->name_of_the_item,temp->price_of_the_item);
        numbers++;
        temp = temp->link;
    }
    start:

    printf("if go back press 0\n");
    printf("enter a item number : ");
    int item_number;
    scanf("%d",&item_number);
    if(item_number == 0)
        return 0;

    temp = *beverages_head;
    for(int index = 1; index < item_number; index++)
    {
        if(temp)
            temp = temp->link;
        else
        {
            printf("****The given input is not in the list. please provide a vaild input****\n");
            goto start;
        }
    }
    char item_name[50];
    strcpy(item_name,temp->name_of_the_item);
    FILE *fptr = NULL;
    FILE *temp_fptr = NULL;
    fptr = fopen("beverages.txt","a+");
    temp_fptr = fopen("temp.txt","w");
    fseek(fptr,0,SEEK_SET);
    char item_check[30];
    char new_prices[30];
    int len_str;
    while(!feof(fptr))
    {
        fgets(item_check,30,fptr);
        if(!(strcmp(item_name,item_check)))
        {
            fputs(item_check,temp_fptr);
            printf("enter the new price : ");
            scanf("%s",new_prices);
            temp->price_of_the_item = atoi(new_prices);
            fputs(new_prices,temp_fptr);
            fputc(' ',temp_fptr);
            fputc('\n',temp_fptr);
            fgets(item_check,30,fptr);
        }
        else
        {
            fputs(item_check,temp_fptr);
        }
    }
    fclose(fptr);
    fclose(temp_fptr);

    remove("beverages.txt");
    rename("temp.txt", "beverages.txt");
    return true;
}