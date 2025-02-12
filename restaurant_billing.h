#ifndef restaurant_billing_H
#define restaurant_billing_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>

#define true 1
#define false 0

typedef struct appetizers_items
{
    char name_of_the_item[50];
    int price_of_the_item;
    struct appetizers_items *link;
}appetizers_items;


typedef struct soups_items
{
    char name_of_the_item[50];
    int price_of_the_item;
    struct soups_items *link;
}soups_items;

typedef struct main_course_vegetarian_items
{
    char name_of_the_item[50];
    int price_of_the_item;
    struct main_course_vegetarian_items *link;
}main_course_vegetarian_items;

typedef struct main_course_non_vegetarian_items
{
    char name_of_the_item[50];
    int price_of_the_item;
    struct main_course_non_vegetarian_items *link;
}main_course_non_vegetarian_items;

typedef struct desserts_items
{
    char name_of_the_item[50];
    int price_of_the_item;
    struct desserts_items *link;
}desserts_items;

typedef struct beverages_items
{
    char name_of_the_item[50];
    int price_of_the_item;
    struct beverages_items *link;
}beverages_items;
#endif
