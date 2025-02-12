#include "restaurant_billing.h"
int sum_all_items;
int global_index;
typedef struct price
{
    char name_of_the_item[50];
    int price_of_the_item;
}items_and_prices;

int print_bill(items_and_prices *);

items_and_prices all_items_and_prices[50];
int appetizers_billing(appetizers_items **appetizers_head)
{
    if(*appetizers_head == NULL)
        return 2;

    items_and_prices appetizers_bill_items[50];
    int numbers=1;
    appetizers_items *temp = *appetizers_head;
    while(temp)
    {
        printf("%d)%s  %d\n",numbers,temp->name_of_the_item,temp->price_of_the_item);
        strcpy(appetizers_bill_items[numbers-1].name_of_the_item, temp->name_of_the_item);
        appetizers_bill_items[numbers-1].price_of_the_item = temp->price_of_the_item;
        temp = temp->link;
        numbers++;
    }
    char item[50]={'\0'};
    char item2[50]={'\0'};
    int digit = 0,count = 0, count2 = 0;
    int digit_arr[50];
    while(1)
    {
        if(digit == 0)
        {
            printf("if go back press 0\n");
            printf("enter the item numbers : ");
            scanf(" %[^\n]",item);
            printf("\n");
            if(item[0]-'0'==0)
                return 0;
            item[strlen(item)] = ' ';
            digit++;
        }
        while(1)
        {
            printf("if anything adding item numbers in appetizers Yes->1,No->0 : ");
            scanf("%d",&digit);
            printf("\n");
            if(digit)
            {
                for(int index=0; index < numbers-1; index++)
                    printf("%d)%s %d\n",index+1,appetizers_bill_items[index].name_of_the_item,appetizers_bill_items[index].price_of_the_item);

                printf("if go back press 0\n");
                printf("enter the item numbers : ");
                scanf(" %[^\n]",item);
                printf("\n");
                if(item[0]-'0'==0)
                    return 0;
                item2[strlen(item2)] = ' ';
            }
            else
            {
                digit = 0; 
                break;
            }
        }
        break;
    }
    
    if(item2 != '\0')
        strcat(item,item2);

    for(int index = 0; index < strlen(item); index++)
    {
        if(isdigit(item[index]))
        {
            if(count == 0)
            {
                digit = item[index] - '0';
                count++;
            }
            else
                digit = (digit * 10) + item[index] - '0';
        }
        else
        {
            if(count != 0)
            {
                count = 0;
                digit_arr[count2++] = digit;
            }
        }
    }
    for(int index=0; index < count2; index++)
    {
        sum_all_items += appetizers_bill_items[digit_arr[index]-1].price_of_the_item;
        strcpy(all_items_and_prices[global_index].name_of_the_item,appetizers_bill_items[digit_arr[index]-1].name_of_the_item);
        char *ch = strchr(all_items_and_prices[global_index].name_of_the_item,'\n');
        *ch = '\0';
        all_items_and_prices[global_index++].price_of_the_item = appetizers_bill_items[digit_arr[index]-1].price_of_the_item;

        
    }
    up:
    printf("if print the bill prass YSE-> 1, continue with adding the items ->2 : ");
    scanf("%d",&digit);
    printf("\n");
    if(digit == 1)
    {
        if(print_bill(all_items_and_prices))
        {
            return 7;
        }
    }
    else if( digit == 2)
    {
        return true;
    }
    else
    {
        printf("enter a vailed input\n");
        goto up;
    }
}
int soups_billing(soups_items **soups_head)
{
    if(*soups_head == NULL)
        return 2;

    items_and_prices soups_bill_items[50];
    int numbers=1;
    soups_items *temp = *soups_head;
    while(temp)
    {
        printf("%d)%s  %d\n",numbers,temp->name_of_the_item,temp->price_of_the_item);
        strcpy(soups_bill_items[numbers-1].name_of_the_item, temp->name_of_the_item);
        soups_bill_items[numbers-1].price_of_the_item = temp->price_of_the_item;
        temp = temp->link;
        numbers++;
    }
    char item[50]={'\0'};
    char item2[50]={'\0'};
    int digit = 0,count = 0, count2 = 0;
    int digit_arr[50];
    while(1)
    {
        if(digit == 0)
        {
            printf("if go back press 0\n");
            printf("enter the item numbers : ");
            scanf(" %[^\n]",item);
            printf("\n");
            if(item[0]-'0'==0)
                return 0;
            item[strlen(item)] = ' ';
            digit++;
        }
        while(1)
        {
            printf("if anything adding item numbers in appetizers Yes->1,No->0 : ");
            scanf("%d",&digit);
            printf("\n");
            if(digit)
            {
                for(int index=0; index < numbers-1; index++)
                    printf("%d)%s %d\n",index+1,soups_bill_items[index].name_of_the_item,soups_bill_items[index].price_of_the_item);

                printf("if go back press 0\n");
                printf("enter the item numbers : ");
                scanf(" %[^\n]",item);
                printf("\n");
                if(item[0]-'0'==0)
                    return 0;
                item2[strlen(item2)] = ' ';
            }
            else
            {
                digit = 0; 
                break;
            }
        }
        break;
    }
    
    if(item2 != '\0')
        strcat(item,item2);

    for(int index = 0; index < strlen(item); index++)
    {
        if(isdigit(item[index]))
        {
            if(count == 0)
            {
                digit = item[index] - '0';
                count++;
            }
            else
                digit = (digit * 10) + item[index] - '0';
        }
        else
        {
            if(count != 0)
            {
                count = 0;
                digit_arr[count2++] = digit;
            }
        }
    }
    for(int index=0; index < count2; index++)
    {
        sum_all_items += soups_bill_items[digit_arr[index]-1].price_of_the_item;
        strcpy(all_items_and_prices[global_index].name_of_the_item,soups_bill_items[digit_arr[index]-1].name_of_the_item);
        char *ch = strchr(all_items_and_prices[global_index].name_of_the_item,'\n');
        *ch = '\0';
        all_items_and_prices[global_index++].price_of_the_item = soups_bill_items[digit_arr[index]-1].price_of_the_item;

        
    }
    up:
    printf("if print the bill prass YSE-> 1, continue with adding the items ->2 : ");
    scanf("%d",&digit);
    printf("\n");
    if(digit == 1)
    {
        if(print_bill(all_items_and_prices))
        {
            return 7;
        }
    }
    else if( digit == 2)
    {
        return true;
    }
    else
    {
        printf("enter a vailed input\n");
        goto up;
    }
}
int main_course_vegetarian_billing(main_course_vegetarian_items **main_course_vegetarian_head)
{
    if(*main_course_vegetarian_head == NULL)
        return 2;

    items_and_prices main_course_vegetarian_bill_items[50];
    int numbers=1;
    main_course_vegetarian_items *temp = *main_course_vegetarian_head;
    while(temp)
    {
        printf("%d)%s  %d\n",numbers,temp->name_of_the_item,temp->price_of_the_item);
        strcpy(main_course_vegetarian_bill_items[numbers-1].name_of_the_item, temp->name_of_the_item);
        main_course_vegetarian_bill_items[numbers-1].price_of_the_item = temp->price_of_the_item;
        temp = temp->link;
        numbers++;
    }
    char item[50]={'\0'};
    char item2[50]={'\0'};
    int digit = 0,count = 0, count2 = 0;
    int digit_arr[50];
    while(1)
    {
        if(digit == 0)
        {
            printf("if go back press 0\n");
            printf("enter the item numbers : ");
            scanf(" %[^\n]",item);
            printf("\n");
            if(item[0]-'0'==0)
                return 0;
            item[strlen(item)] = ' ';
            digit++;
        }
        while(1)
        {
            printf("if anything adding item numbers in appetizers Yes->1,No->0 : ");
            scanf("%d",&digit);
            printf("\n");
            if(digit)
            {
                for(int index=0; index < numbers-1; index++)
                    printf("%d)%s %d\n",index+1,main_course_vegetarian_bill_items[index].name_of_the_item,main_course_vegetarian_bill_items[index].price_of_the_item);

                printf("if go back press 0\n");
                printf("enter the item numbers : ");
                scanf(" %[^\n]",item);
                printf("\n");
                if(item[0]-'0'==0)
                    return 0;
                item2[strlen(item2)] = ' ';
            }
            else
            {
                digit = 0; 
                break;
            }
        }
        break;
    }
    
    if(item2 != '\0')
        strcat(item,item2);

    for(int index = 0; index < strlen(item); index++)
    {
        if(isdigit(item[index]))
        {
            if(count == 0)
            {
                digit = item[index] - '0';
                count++;
            }
            else
                digit = (digit * 10) + item[index] - '0';
        }
        else
        {
            if(count != 0)
            {
                count = 0;
                digit_arr[count2++] = digit;
            }
        }
    }
    for(int index=0; index < count2; index++)
    {
        sum_all_items += main_course_vegetarian_bill_items[digit_arr[index]-1].price_of_the_item;
        strcpy(all_items_and_prices[global_index].name_of_the_item,main_course_vegetarian_bill_items[digit_arr[index]-1].name_of_the_item);
        char *ch = strchr(all_items_and_prices[global_index].name_of_the_item,'\n');
        *ch = '\0';
        all_items_and_prices[global_index++].price_of_the_item = main_course_vegetarian_bill_items[digit_arr[index]-1].price_of_the_item;

        
    }
    up:
    printf("if print the bill prass YSE-> 1, continue with adding the items ->2 : ");
    scanf("%d",&digit);
    printf("\n");
    if(digit == 1)
    {
        if(print_bill(all_items_and_prices))
        {
            return 7;
        }
    }
    else if( digit == 2)
    {
        return true;
    }
    else
    {
        printf("enter a vailed input\n");
        goto up;
    }
}
int main_course_non_vegetarian_billing(main_course_non_vegetarian_items **main_course_non_vegetarian_head)
{
    if(*main_course_non_vegetarian_head == NULL)
        return 2;

    items_and_prices main_course_non_vegetarian_bill_items[50];
    int numbers=1;
    main_course_non_vegetarian_items *temp = *main_course_non_vegetarian_head;
    while(temp)
    {
        printf("%d)%s  %d\n",numbers,temp->name_of_the_item,temp->price_of_the_item);
        strcpy(main_course_non_vegetarian_bill_items[numbers-1].name_of_the_item, temp->name_of_the_item);
        main_course_non_vegetarian_bill_items[numbers-1].price_of_the_item = temp->price_of_the_item;
        temp = temp->link;
        numbers++;
    }
    char item[50]={'\0'};
    char item2[50]={'\0'};
    int digit = 0,count = 0, count2 = 0;
    int digit_arr[50];
    while(1)
    {
        if(digit == 0)
        {
            printf("if go back press 0\n");
            printf("enter the item numbers : ");
            scanf(" %[^\n]",item);
            printf("\n");
            if(item[0]-'0'==0)
                return 0;
            item[strlen(item)] = ' ';
            digit++;
        }
        while(1)
        {
            printf("if anything adding item numbers in appetizers Yes->1,No->0 : ");
            scanf("%d",&digit);
            printf("\n");
            if(digit)
            {
                for(int index=0; index < numbers-1; index++)
                    printf("%d)%s %d\n",index+1,main_course_non_vegetarian_bill_items[index].name_of_the_item,main_course_non_vegetarian_bill_items[index].price_of_the_item);

                printf("if go back press 0\n");
                printf("enter the item numbers : ");
                scanf(" %[^\n]",item);
                printf("\n");
                if(item[0]-'0'==0)
                    return 0;
                item2[strlen(item2)] = ' ';
            }
            else
            {
                digit = 0; 
                break;
            }
        }
        break;
    }
    
    if(item2 != '\0')
        strcat(item,item2);

    for(int index = 0; index < strlen(item); index++)
    {
        if(isdigit(item[index]))
        {
            if(count == 0)
            {
                digit = item[index] - '0';
                count++;
            }
            else
                digit = (digit * 10) + item[index] - '0';
        }
        else
        {
            if(count != 0)
            {
                count = 0;
                digit_arr[count2++] = digit;
            }
        }
    }
    for(int index=0; index < count2; index++)
    {
        sum_all_items += main_course_non_vegetarian_bill_items[digit_arr[index]-1].price_of_the_item;
        strcpy(all_items_and_prices[global_index].name_of_the_item, main_course_non_vegetarian_bill_items[digit_arr[index]-1].name_of_the_item);
        char *ch = strchr(all_items_and_prices[global_index].name_of_the_item,'\n');
        *ch = '\0';
        all_items_and_prices[global_index++].price_of_the_item = main_course_non_vegetarian_bill_items[digit_arr[index]-1].price_of_the_item;

        
    }
    up:
    printf("if print the bill prass YSE-> 1, continue with adding the items ->2 : ");
    scanf("%d",&digit);
    printf("\n");
    if(digit == 1)
    {
        if(print_bill(all_items_and_prices))
        {
            return 7;
        }
    }
    else if( digit == 2)
    {
        return true;
    }
    else
    {
        printf("enter a vailed input\n");
        goto up;
    }
}
int desserts_billing(desserts_items **desserts_head)
{
    if(*desserts_head == NULL)
        return 2;

    items_and_prices desserts_bill_items[50];
    int numbers=1;
    desserts_items *temp = *desserts_head;
    while(temp)
    {
        printf("%d)%s  %d\n",numbers,temp->name_of_the_item,temp->price_of_the_item);
        strcpy(desserts_bill_items[numbers-1].name_of_the_item, temp->name_of_the_item);
        desserts_bill_items[numbers-1].price_of_the_item = temp->price_of_the_item;
        temp = temp->link;
        numbers++;
    }
    char item[50]={'\0'};
    char item2[50]={'\0'};
    int digit = 0,count = 0, count2 = 0;
    int digit_arr[50];
    while(1)
    {
        if(digit == 0)
        {
            printf("if go back press 0\n");
            printf("enter the item numbers : ");
            scanf(" %[^\n]",item);
            printf("\n");
            if(item[0]-'0'==0)
                return 0;
            item[strlen(item)] = ' ';
            digit++;
        }
        while(1)
        {
            printf("if anything adding item numbers in appetizers Yes->1,No->0 : ");
            scanf("%d",&digit);
            printf("\n");
            if(digit)
            {
                for(int index=0; index < numbers-1; index++)
                    printf("%d)%s %d\n",index+1,desserts_bill_items[index].name_of_the_item, desserts_bill_items[index].price_of_the_item);

                printf("if go back press 0\n");
                printf("enter the item numbers : ");
                scanf(" %[^\n]",item);
                printf("\n");
                if(item[0]-'0'==0)
                    return 0;
                item2[strlen(item2)] = ' ';
            }
            else
            {
                digit = 0; 
                break;
            }
        }
        break;
    }
    
    if(item2 != '\0')
        strcat(item,item2);

    for(int index = 0; index < strlen(item); index++)
    {
        if(isdigit(item[index]))
        {
            if(count == 0)
            {
                digit = item[index] - '0';
                count++;
            }
            else
                digit = (digit * 10) + item[index] - '0';
        }
        else
        {
            if(count != 0)
            {
                count = 0;
                digit_arr[count2++] = digit;
            }
        }
    }
    for(int index=0; index < count2; index++)
    {
        sum_all_items += desserts_bill_items[digit_arr[index]-1].price_of_the_item;
        strcpy(all_items_and_prices[global_index].name_of_the_item,desserts_bill_items[digit_arr[index]-1].name_of_the_item);
        char *ch = strchr(all_items_and_prices[global_index].name_of_the_item,'\n');
        *ch = '\0';
        all_items_and_prices[global_index++].price_of_the_item = desserts_bill_items[digit_arr[index]-1].price_of_the_item;

        
    }
    up:
    printf("if print the bill prass YSE-> 1, continue with adding the items ->2 : ");
    scanf("%d",&digit);
    printf("\n");
    if(digit == 1)
    {
        if(print_bill(all_items_and_prices))
        {
            return 7;
        }
    }
    else if( digit == 2)
    {
        return true;
    }
    else
    {
        printf("enter a vailed input\n");
        goto up;
    }
}
int beverages_billing(beverages_items **beverages_head)
{
    if(*beverages_head == NULL)
        return 2;

    items_and_prices beverages_bill_items[50];
    int numbers=1;
    beverages_items *temp = *beverages_head;
    while(temp)
    {
        printf("%d)%s  %d\n",numbers,temp->name_of_the_item,temp->price_of_the_item);
        strcpy(beverages_bill_items[numbers-1].name_of_the_item, temp->name_of_the_item);
        beverages_bill_items[numbers-1].price_of_the_item = temp->price_of_the_item;
        temp = temp->link;
        numbers++;
    }
    char item[50]={'\0'};
    char item2[50]={'\0'};
    int digit = 0,count = 0, count2 = 0;
    int digit_arr[50];
    while(1)
    {
        if(digit == 0)
        {
            printf("if go back press 0\n");
            printf("enter the item numbers : ");
            scanf(" %[^\n]",item);
            printf("\n");
            if(item[0]-'0'==0)
                return 0;
            item[strlen(item)] = ' ';
            digit++;
        }
        while(1)
        {
            printf("if anything adding item numbers in appetizers Yes->1,No->0 : ");
            scanf("%d",&digit);
            printf("\n");
            if(digit)
            {
                for(int index=0; index < numbers-1; index++)
                    printf("%d)%s %d\n",index+1,beverages_bill_items[index].name_of_the_item, beverages_bill_items[index].price_of_the_item);

                printf("if go back press 0\n");
                printf("enter the item numbers : ");
                scanf(" %[^\n]",item);
                printf("\n");
                if(item[0]-'0'==0)
                    return 0;
                item2[strlen(item2)] = ' ';
            }
            else
            {
                digit = 0; 
                break;
            }
        }
        break;
    }
    
    if(item2 != '\0')
        strcat(item,item2);

    for(int index = 0; index < strlen(item); index++)
    {
        if(isdigit(item[index]))
        {
            if(count == 0)
            {
                digit = item[index] - '0';
                count++;
            }
            else
                digit = (digit * 10) + item[index] - '0';
        }
        else
        {
            if(count != 0)
            {
                count = 0;
                digit_arr[count2++] = digit;
            }
        }
    }
    for(int index=0; index < count2; index++)
    {
        sum_all_items += beverages_bill_items[digit_arr[index]-1].price_of_the_item;
        strcpy(all_items_and_prices[global_index].name_of_the_item,beverages_bill_items[digit_arr[index]-1].name_of_the_item);
        char *ch = strchr(all_items_and_prices[global_index].name_of_the_item,'\n');
        *ch = '\0';
        all_items_and_prices[global_index++].price_of_the_item = beverages_bill_items[digit_arr[index]-1].price_of_the_item;

        
    }
    up:
    printf("if print the bill prass YSE-> 1, continue with adding the items ->2 : ");
    scanf("%d",&digit);
    printf("\n");
    if(digit == 1)
    {
        if(print_bill(all_items_and_prices))
        {
            return 7;
        }
    }
    else if( digit == 2)
    {
        return true;
    }
    else
    {
        printf("enter a vailed input\n");
        goto up;
    }
}
int print_bill(items_and_prices *all_items_and_prices)
{
    printf("\n======================================");
    printf("\n           RESTAURANT BILL           ");
    printf("\n======================================");
    printf("\n%-20s %8s", "Item", "Price");
    printf("\n--------------------------------------\n");

    for(int index = 0; index < global_index; index++)
    {
        printf("%-20s %8d\n",all_items_and_prices[index].name_of_the_item,all_items_and_prices[index].price_of_the_item);
    }
    printf("\n--------------------------------------\n");
    printf("%-20s %8d", "TOTAL", sum_all_items);
     printf("\n======================================\n");
     return 1;
}