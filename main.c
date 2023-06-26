#include <stdio.h>
#include <stdlib.h>
struct books{
int id;
char name[30];
int quantity;
};
int insert(struct books array[],int size)
{
    scanf("%d", &array[3].id);gets( array[3].name);scanf("%d", &array[3].quantity);
    return 3;
}
int linearSearch( const struct books array[], int key, int size,int start)
{
int n;
for (n = start; n < size; ++n )
{
    if ( array[ n ].id == key )
        {
        return n;
        }

        else{
         linearSearch(array,key,size,n+1);
          }
}
    return -1 ; /*the id is not found*/
}
int binarysearch( struct books array[],char name[30],int size,int low,int high)
{
int i=0,start=0;
 int middle,pass;
 low=start;
 int hole,temp;
char ptr[30];
for(pass=1;pass<size;pass++)
{
    for(i=0;i<size-pass;i++)
    {
        if(strcmp(array[i].name,array[i+1].name)>0){
     // swap id
     hole=array[i].id;
    array[i].id=array[i+1].id;
    array[i+1].id=hole;
    //swap quantity
    temp=array[i].quantity;
    array[i].quantity=array[i+1].quantity;
    array[i+1].quantity=temp;
    // swap name
    strcpy(ptr,array[i].name);
    strcpy(array[i].name,array[i+1].name);
    strcpy(array[i+1].name,ptr);}
    }
}
    while(low<=high)
    {
        middle=(low+high)/2;
        if(strcmp(name,array[middle].name)==0)
        {
        return middle;
        }
        else if(strcmp(name,array[middle].name)<0){
            high=middle-1;
        }
        else{
            low=middle+1;
        }
    }
    if(low >high){
    return printf("the name is not found\n");}
}
void sorted(struct books array[],int size)
{
int hole,temp;
char ptr[30];
     // swap id
     hole=array[0].id;
    array[0].id=array[2].id;
    array[2].id=hole;
    //swap quantity
    temp=array[0].quantity;
    array[0].quantity=array[2].quantity;
    array[2].quantity=temp;
    // swap name
    strcpy(ptr,array[0].name);
    strcpy(array[0].name,array[2].name);
    strcpy(array[2].name,ptr);
}

int main()
{char choice;
int number,result,value,num;

struct books record[5];
struct books record1[4];
record1[0].id=100;record1[1].id=101;record1[2].id=102;record1[3].id=201900645;
record1[0].name[0]='b';record1[0].name[1]='o';record1[0].name[2]='o';record1[0].name[3]='k';record1[0].name[4]='o';record1[0].name[5]='n';record1[0].name[6]='e';record1[0].name[7]='\0';
record1[1].name[0]='b';record1[1].name[1]='o';record1[1].name[2]='o';record1[1].name[3]='k';record1[1].name[4]='t';record1[1].name[5]='w';record1[1].name[6]='o';record1[1].name[7]='\0';
record1[2].name[0]='b';record1[2].name[1]='o';record1[2].name[2]='o';record1[2].name[3]='k';record1[2].name[4]='t';record1[2].name[5]='h';record1[2].name[6]='r';record1[2].name[7]='e';record1[2].name[8]='e';record1[2].name[9]='\0';

record1[3].name[0]='m';record1[3].name[1]='o';record1[3].name[2]='h';record1[3].name[3]='a';record1[3].name[4]='m';record1[3].name[5]='e';record1[3].name[6]='d';record1[3].name[7]=' ';record1[3].name[8]='g';record1[3].name[9]='a';record1[3].name[10]='s';
record1[3].name[11]='s';record1[3].name[12]='e';record1[3].name[13]='r';record1[3].name[14]=' ';record1[3].name[15]='m';record1[3].name[16]='o';record1[3].name[17]='h';record1[3].name[18]='a';record1[3].name[19]='m';record1[3].name[20]='e';record1[3].name[21]='d';record1[3].name[22]='\0';

record1[0].quantity=10;record1[1].quantity=20;record1[2].quantity=30;record1[3].quantity=1;
 FILE *cfPtr;
 if((cfPtr = fopen( "library .dAt", "r+" ) ) == NULL){
printf( "File can't be opened\n" );
 }
else{
 printf( "%-10s%-13s%s\n", "id", "Name", "quantity" );
 fscanf( cfPtr, "%d%s%d", &record[0].id, record[0].name, &record[0].quantity );
 int i=0;
while ( !feof( cfPtr ) ) {
printf( "%-10d%-13s%d\n", record[0].id, record[0].name, record[0].quantity);
fscanf( cfPtr, "%d%s%d", &record[0].id, record[0].name, &record[0].quantity );
i++;
}
printf("\n\nWant to  Insert  a book it max(1)(press y for 'yes'):\n");
printf("Want to  delete  a book(press m for 'yes'):\n");
printf("Want to  linear search  a book(press l for 'yes'):\n");
printf("Want to  binary search  a book(press b for 'yes'):\n");
printf("Want to   Display all books sorted by name, and their ids and quantity (press s for 'yes'):\n");
printf("Want to  Display all books unsorted and their ids and names and quantity (press u for 'yes'):\n");
scanf("%c",&choice);
do {
if(choice=='y'){
printf( "%-10s%-13s%s\n", "id", "Name", "quantity" );
num=insert(record1,4);
fprintf(cfPtr, "%-10d%-13s%d\n", record1[num].id, record1[num].name, record1[num].quantity );
fprintf(cfPtr,"\n");
}
else if(choice=='m')
{
printf("Enter the id you want to delete.\n");
fprintf(cfPtr,"the New data\n");
scanf("%d",&record[4].id);
if(record[4].id<0)
 {
     printf("the deletion can't do\n");
 }
 else{
        for(int i=0;i<3;i++)
        {
            if(record[4].id!=record1[i].id){
            fprintf(cfPtr, "%-10d%-13s%d\n", record1[i].id, record1[i].name, record1[i].quantity );
            }
    }

}
}
else if(choice=='l'){
printf("Enter the id you want to search it.\n");
scanf("%d",&record[4].id);
if(record[4].id!=record1[0].id && record[4].id!=record1[1].id && record[4].id!=record1[2].id && record[4].id!=record1[3].id ){
   printf("the id is not found\n");return;}
result=linearSearch(record1,record[4].id,4,0);
printf("%-10d%-13s%d\n", record1[result].id, record1[result].name, record1[result].quantity );
}

else if(choice=='b'){
printf("Enter the name you want to search it.\n");
scanf("%s", record[4].name);
value=binarysearch(record1,record[4].name,3,0,2);
printf("%-10d%-13s%d\n", record1[value].id, record1[value].name, record1[value].quantity);
}

else if(choice=='s')
{
printf("my name is mohamed gasser mohamed\n");
printf( "%-10s%-13s%s\n", "id", "Name", "quantity" );
sorted(record1,3);
for(int i=0;i<3;i++){
printf( "%-10d%-13s%d\n", record1[i].id, record1[i].name, record1[i].quantity);
}
}

else if(choice=='u'){
printf("Display all books unsorted and their ids and names and quantity\n");
printf( "%-10s%-13s%s\n", "id", "Name", "quantity" );
for(int i=0;i<3;i++) {
printf( "%-10d%-13s%d\n", record1[i].id, record1[i].name, record1[i].quantity);
}
printf("my name is mohamed gasser mohamed\n");
}
else{
    printf("error!!");}
printf("\n\nWant to check again (press 1/2 for 'yes') :\n");
scanf("%d", &number);
printf("enter the operation you want it again\n");
scanf(" %c",&choice);
}while( number == 2 || number == 1 );
fclose(cfPtr);
}
return 0;
}

