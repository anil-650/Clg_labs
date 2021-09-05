
/*
 * A program to do billing
 * 1. User must input product no.
 * 2. User must input product quantity
 *
 * Code must check 
 * 1. If quantity less than stock prompt price
 * 2. If quantity more than stock prompt no stock
 * 3. If the quantity show msg & stop
 */

# include <stdio.h>
# include <stdlib.h>

// 
// stdlib  FOR atoi() , transforms strings into digits ignores alphabet & white space

char item_name[][20]={"Milk","Cheese","Ghee","Bread"};
int item_no[4]={101,102,103,104};
float item_price[4]={42,50,500,40};
int stock[4]={10,20,15,16};
int i,urno,quan;
char temp[2];

//                  DISPLAY STOCK
void show_stock(){
    printf("Current stock:\n"
            "Item no.\tItem\tPrice\tStock\n");

    for(i=0; i<4 ; i++){
        printf("%d\t\t%s\t%.1f\t%d\n",
                item_no[i],
                item_name[i],
                item_price[i],
                stock[i]);
    }
}

//                  USER INPUT QUANTITY
void inquan(){
    printf("Enter Quantity: ");
    scanf("%s", temp);
    quan = atoi(temp);
}

//                  PURCHASE & LEFT AMOUNT
void buy(int n){
    printf("PRICE %.1f INR\n", item_price[n]*quan);
    stock[n]-=quan;
    printf("%d LEFT\n\n",stock[n]);
    show_stock();
}

//                  BILLING & STOCK CHECK
void bill(int a){
    if(quan > stock[a])
        printf("NO STOCK\n%d LEFT\n\n",stock[a]);
    else if(quan != 0)
        buy(a);
    else
        printf("Pls Enter Valid amount");
}

//                  MAIN FUNCTION
int main(){

//                  SHOW STOCK
    show_stock();


//                  FOR USER INPUT ITEM SELECT
    printf("\nEnter item no.: ");
    scanf("%d", &urno);

    switch(urno){
        case 101:
            inquan();
            bill(0);
            break;

        case 102:
            inquan();
            bill(1);
            break;

        case 103:
            inquan();
            bill(2);
            break;

        case 104:
            inquan();
            bill(3);
            break;
defult:
            printf("Invalid input\n");
    }

}
