#include "restaurant_billing.h"

int appetizers_remove(appetizers_items **appetizers_head)
{
    if(*appetizers_head == NULL)
    {
        return 2;
    }
    else
    {
        int i=1;
        appetizers_items *temp = *appetizers_head;
        while(temp)
        {
            printf("%d)%s\n",i++,temp->name_of_the_item);
            temp = temp->link;
        }
        printf("enter the item name : ");
        char name[50];
        scanf(" %[^\n]",name);

        appetizers_items *previous = NULL;
        temp = *appetizers_head;
        while(temp)
        {
            if(strcmp(temp->name_of_the_item, name) == 0)
            {
                if(previous == NULL)
                {
                    *appetizers_head = temp->link;
                    free(temp);
                    return true;
                }
                else
                {
                    previous->link = temp->link;
                    free(temp);
                    return true;
                }
            }
            previous = temp;
            temp = temp->link;
        }
        return false;
    }
}
int soups_remove(soups_items **soups_head)
{
    if(*soups_head == NULL)
    {
        return 2;
    }
    else
    {
        int i=1;
        soups_items *temp = *soups_head;
        while(temp)
        {
            printf("%d)%s\n",i++,temp->name_of_the_item);
            temp = temp->link;
        }
        printf("enter the item name : ");
        char name[50];
        scanf(" %[^\n]",name);

        soups_items *previous = NULL;
        temp = *soups_head;
        while(temp)
        {
            if(strcmp(temp->name_of_the_item, name) == 0)
            {
                if(previous == NULL)
                {
                    *soups_head = temp->link;
                    free(temp);
                    return true;
                }
                else
                {
                    previous->link = temp->link;
                    free(temp);
                    return true;
                }
            }
            previous = temp;
            temp = temp->link;
        }
        return false;
    }
}
int main_course_vegetarian_remove(main_course_vegetarian_items **main_course_vegetarian_head)
{
    if(*main_course_vegetarian_head == NULL)
    {
        return 2;
    }
    else
    {
        int i=1;
        main_course_vegetarian_items *temp = *main_course_vegetarian_head;
        while(temp)
        {
            printf("%d)%s\n",i++,temp->name_of_the_item);
            temp = temp->link;
        }
        printf("enter the item name : ");
        char name[50];
        scanf(" %[^\n]",name);
        main_course_vegetarian_items *previous = NULL;
        temp = *main_course_vegetarian_head;
        while(temp)
        {
            if(strcmp(temp->name_of_the_item, name) == 0)
            {
                if(previous == NULL)
                {
                    *main_course_vegetarian_head = temp->link;
                    free(temp);
                    return true;
                }
                else
                {
                    previous->link = temp->link;
                    free(temp);
                    return true;
                }
            }
            previous = temp;
            temp = temp->link;
        }
        return false;
    }
}
int main_course_non_vegetarian_remove(main_course_non_vegetarian_items **main_course_non_vegetarian_head)
{
    if(*main_course_non_vegetarian_head == NULL)
    {
        return 2;
    }
    else
    {
        int i=1;
        main_course_non_vegetarian_items *temp = *main_course_non_vegetarian_head;
        while(temp)
        {
            printf("%d)%s\n",i++,temp->name_of_the_item);
            temp = temp->link;
        }
        printf("enter the item name : ");
        char name[50];
        scanf(" %[^\n]",name);
        main_course_non_vegetarian_items *previous = NULL;
        temp = *main_course_non_vegetarian_head;
        while(temp)
        {
            if(strcmp(temp->name_of_the_item, name) == 0)
            {
                if(previous == NULL)
                {
                    *main_course_non_vegetarian_head = temp->link;
                    free(temp);
                    return true;
                }
                else
                {
                    previous->link = temp->link;
                    free(temp);
                    return true;
                }
            }
            previous = temp;
            temp = temp->link;
        }
        return false;
    }
}
int desserts_remove(desserts_items **desserts_head)
{
    if(*desserts_head == NULL)
    {
        return 2;
    }
    else
    {
        int i=1;
        desserts_items *temp = *desserts_head;
        while(temp)
        {
            printf("%d)%s\n",i++,temp->name_of_the_item);
            temp = temp->link;
        }
        printf("enter the item name : ");
        char name[50];
        scanf(" %[^\n]",name);
        desserts_items *previous = NULL;
        temp = *desserts_head;

        while(temp)
        {
            if(strcmp(temp->name_of_the_item, name) == 0)
            {
                if(previous == NULL)
                {
                    *desserts_head = temp->link;
                    free(temp);
                    return true;
                }
                else
                {
                    previous->link = temp->link;
                    free(temp);
                    return true;
                }
            }
            previous = temp;
            temp = temp->link;
        }
        return false;
    }
}
int beverages_remove(beverages_items **beverages_head)
{
    if(*beverages_head == NULL)
    {
        return 2;
    }
    else
    {
        int i=1;
        beverages_items *temp = *beverages_head;
        while(temp)
        {
            printf("%d)%s\n",i++,temp->name_of_the_item);
            temp = temp->link;
        }
        printf("enter the item name : ");
        char name[50];
        scanf(" %[^\n]",name);
        beverages_items *previous = NULL;
        temp = *beverages_head;

        while(temp)
        {
            if(strcmp(temp->name_of_the_item, name) == 0)
            {
                if(previous == NULL)
                {
                    *beverages_head = temp->link;
                    free(temp);
                    return true;
                }
                else
                {
                    previous->link = temp->link;
                    free(temp);
                    return true;
                }
            }
            previous = temp;
            temp = temp->link;
        }
        return false;
    }
}