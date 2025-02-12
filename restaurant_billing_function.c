#include "restaurant_billing.h"

int appetizers_adding(appetizers_items **);
int soups_adding(soups_items **);
int main_course_vegetarian_adding(main_course_vegetarian_items **);
int main_course_non_vegetarian_adding(main_course_non_vegetarian_items **);
int desserts_adding(desserts_items **);
int beverages_adding(beverages_items **);

int appetizers_remove(appetizers_items **);
int soups_remove(soups_items **);
int main_course_vegetarian_remove(main_course_vegetarian_items **);
int main_course_non_vegetarian_remove(main_course_non_vegetarian_items **);
int desserts_remove(desserts_items **);
int beverages_remove(beverages_items **);

int appetizers_change_prices(appetizers_items **);
int soups_change_prices(soups_items **);
int main_course_vegetarian_change_prices(main_course_vegetarian_items **);
int main_course_non_vegetarian_change_prices(main_course_non_vegetarian_items **);
int desserts_change_prices(desserts_items **);
int beverages_change_prices(beverages_items **);

int appetizers_billing(appetizers_items **);
int soups_billing(soups_items **);
int main_course_vegetarian_billing(main_course_vegetarian_items **);
int main_course_non_vegetarian_billing(main_course_non_vegetarian_items **);
int desserts_billing(desserts_items **);
int beverages_billing(beverages_items **);


int add_the_items_to_the_menu(appetizers_items **appetizers_head, soups_items **soups_head, main_course_vegetarian_items **main_course_vegetarian_head, main_course_non_vegetarian_items **main_course_non_vegetarian_head, desserts_items **desserts_head, beverages_items **beverages_head)
{
    while(1)
    {
        printf("1)Appetizers\n2)Soups\n3)Main Course-Vegetarian\n4)Main Course-Non-Vegetarian\n5)Desserts\n6)Beverages\n7)go back main menu\nenter your choice : ");
        int categories,receiving;
        scanf("%d",&categories); 
        switch(categories)
        {
            case 1:                                                                                                                                                                                
                receiving = appetizers_adding(appetizers_head);
                if(receiving == 2)
                    printf("you entered item already is there try new item\n");
                else if(receiving)
                    printf("adding the item into appetizers successfully\n");
                else
                    printf("adding the item into appetizers unsuccessful\n");
                break;
            case 2:
                receiving = soups_adding(soups_head);
               if(receiving == 2)
                    printf("you entered item already is there try new item\n");
                else if(receiving)
                    printf("adding the item into appetizers successfully\n");
                else
                    printf("adding the item into appetizers unsuccessful\n");
                break;
            case 3:
                receiving = main_course_vegetarian_adding(main_course_vegetarian_head);
                if(receiving == 2)
                    printf("you entered item already is there try new item\n");
                else if(receiving)
                    printf("adding the item into appetizers successfully\n");
                else
                    printf("adding the item into appetizers unsuccessful\n");
                break;
            case 4:
                receiving = main_course_non_vegetarian_adding(main_course_non_vegetarian_head);
                if(receiving == 2)
                    printf("you entered item already is there try new item\n");
                else if(receiving)
                    printf("adding the item into appetizers successfully\n");
                else
                    printf("adding the item into appetizers unsuccessful\n");
                break;
            case 5:
                receiving = desserts_adding(desserts_head);
                if(receiving == 2)
                    printf("you entered item already is there try new item\n");
                else if(receiving)
                    printf("adding the item into appetizers successfully\n");
                else
                    printf("adding the item into appetizers unsuccessful\n");
                break;
            case 6:
                receiving = beverages_adding(beverages_head);
                if(receiving == 2)
                    printf("you entered item already is there try new item\n");
                else if(receiving)
                    printf("adding the item into appetizers successfully\n");
                else
                    printf("adding the item into appetizers unsuccessful\n");
                break;
                case 7:
                    return 0;
                    break;
            default:
                printf("give valied input\n");
            break;
        }
    }
}
int remove_the_items_to_the_menu(appetizers_items **appetizers_head, soups_items **soups_head, main_course_vegetarian_items **main_course_vegetarian_head, main_course_non_vegetarian_items **main_course_non_vegetarian_head, desserts_items **desserts_head, beverages_items **beverages_head)
{
    while(1)
    {
        printf("1)Appetizers\n2)Soups\n3)Main Course-Vegetarian\n4)Main Course-Non-Vegetarian\n5)Desserts\n6)Beverages\n7)go back main menu\nenter your choice : ");
        int categories,receiving;
        scanf("%d",&categories);
        printf("\n\n");
        switch(categories)
        {
            case 1:
                receiving = appetizers_remove(appetizers_head);
                if(receiving == 2)
                    printf("appetizers menu is empty\n");
                else if(receiving)
                    printf("successfully removed\n");
                else
                    printf("you given item name is not there in that menu list\n");
                break;
            case 2:
                receiving = soups_remove(soups_head);
                if(receiving == 2)
                    printf("soups menu is empty\n");
                else if(receiving)
                    printf("successfully removed\n");
                else
                    printf("you given item name is not there in that menu list\n");
                break;
            case 3:
                receiving = main_course_vegetarian_remove(main_course_vegetarian_head);
                if(receiving == 2)
                    printf("main course vegetarian menu is empty\n");
                else if(receiving)
                    printf("successfully removed\n");
                else
                    printf("you given item name is not there in that menu list\n");
                break;
            case 4:
                receiving = main_course_non_vegetarian_remove(main_course_non_vegetarian_head);
            if(receiving == 2)
                    printf("main course non vegetarian remove menu empty\n");
                else if(receiving)
                    printf("successfully removed\n");
                else
                    printf("you given item name is not there in that menu list\n");
                break;
            case 5:
                receiving = desserts_remove(desserts_head);
                if(receiving == 2)
                    printf("desserts menu is empty\n");
                else if(receiving)
                    printf("successfully removed\n");
                else
                    printf("you given item name is not there in that menu list\n");
                break;
            case 6:
                receiving = beverages_remove(beverages_head);
                if(receiving == 2)
                    printf("beverages menu is empty\n");
                else if(receiving)
                    printf("successfully removed\n");
                else
                    printf("you given item name is not there in that menu list\n");
                break;
                case 7:
                    return 0;
                    break;
            default:
                printf("give valied input\n");
            break;
        }
    }
    
}
int change_the_prices_of_the_items(appetizers_items **appetizers_head, soups_items **soups_head, main_course_vegetarian_items **main_course_vegetarian_head, main_course_non_vegetarian_items **main_course_non_vegetarian_head, desserts_items **desserts_head, beverages_items **beverages_head)
{
    while(1)
    {
        printf("1)Appetizers\n2)Soups\n3)Main Course vegetarian\n4)Main Course Non Vegetarian\n5)Desserts\n6)Beverages\n7)go back main menu\nenter your choice : ");
        int item;
        scanf("%d",&item);
        int receiving;
        switch(item)
        {
            case 1:
                receiving = appetizers_change_prices(appetizers_head);
                if(receiving == 2)
                {
                    printf("appetizer menu empty\n");
                }
                else if(receiving == 1)
                {
                    printf("change the prices successfully\n");
                }
                break;
            case 2:
                receiving = soups_change_prices(soups_head);
                if(receiving == 2)
                {
                    printf("soups menu empty\n");
                }
                else if(receiving == 1)
                {
                    printf("change the prices successfully\n");
                }
                break;
            case 3:
                receiving = main_course_vegetarian_change_prices(main_course_vegetarian_head);
                if(receiving == 2)
                {
                    printf("main course vegetarian menu empty\n");
                }
                else if(receiving == 1)
                {
                    printf("change the prices successfully\n");
                }
                break;
            case 4:
                receiving = main_course_non_vegetarian_change_prices(main_course_non_vegetarian_head);
                if(receiving == 2)
                {
                    printf("main course non vegetarian menu empty\n");
                }
                else if(receiving == 1)
                {
                    printf("change the prices successfully\n");
                }
                break;
            case 5:
                receiving = desserts_change_prices(desserts_head);
                if(receiving == 2)
                {
                    printf("desserts menu empty\n");
                }
                else if(receiving == 1)
                {
                    printf("change the prices successfully\n");
                }
                break;
            case 6:
                receiving = beverages_change_prices(beverages_head);
                if(receiving == 2)
                {
                    printf("beverages menu empty\n");
                }
                else if(receiving == 1)
                {
                    printf("change the prices successfully\n");
                }
                break;
            case 7:
                return 0;
                break;
            default:
                printf("give valied input\n");
                break;
        }
    }
}
int continue_with_same_items_and_prices(appetizers_items **appetizers_head, soups_items **soups_head, main_course_vegetarian_items **main_course_vegetarian_head, main_course_non_vegetarian_items **main_course_non_vegetarian_head, desserts_items **desserts_head, beverages_items **beverages_head)
{
    while(1)
    {
        printf("1)Appetizers\n2)Soups\n3)Main Course Vegetarian\n4)Main Course Non Vegetarian\n5)Desserts\n6)Beverages\n7)go back main menu\nenter your choice : ");
        int item;
        scanf("%d",&item);
        printf("\n");
        int receiving;
        switch(item)
        {
            case 1:
                receiving = appetizers_billing(appetizers_head);
                if(receiving == 2)
                {
                    printf("appetizers menu is empty\n");
                }
                else if(receiving == 7)
                {
                    //go back main menu
                    printf("\n");
                    return 0;
                }
                break;
            case 2:
                receiving = soups_billing(soups_head);
                if(receiving == 2)
                {
                    printf("soups menu is empty\n");
                }
                else if(receiving == 7)
                {
                    //go back main menu
                    printf("\n");
                    return 0;
                }
                break;
            case 3:
                receiving = main_course_vegetarian_billing(main_course_vegetarian_head);
                if(receiving == 2)
                {
                    printf("Main Course Vegetarian menu is empty\n");
                }
                else if(receiving == 7)
                {
                    //go back main menu
                    printf("\n");
                    return 0;
                }
                break;
            case 4:
                receiving = main_course_non_vegetarian_billing(main_course_non_vegetarian_head);
                if(receiving == 2)
                {
                    printf("Main Course non Vegetarian menu is empty\n");
                }
                else if(receiving == 7)
                {
                    //go back main menu
                    printf("\n");
                    return 0;
                }
                break;
            case 5:
                receiving = desserts_billing(desserts_head);
                if(receiving == 2)
                {
                    printf("desserts menu is empty\n");
                }
                else if(receiving == 7)
                {
                    //go back main menu
                    printf("\n");
                    return 0;
                }
                break;
            case 6:
                receiving = beverages_billing(beverages_head);
                if(receiving == 2)
                {
                    printf("beverages menu is empty\n");
                }
                else if(receiving == 7)
                {
                    //go back main menu
                    printf("\n");
                    return 0;
                }
                break;
            case 7:
                return 0;
                break;
            default:
                printf("give valid input\n");
                break;
        }
    }
}