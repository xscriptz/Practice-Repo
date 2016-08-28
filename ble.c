#include<stdio.h>
int main()
{
for(int i=0;i<10;i++)
printf("RSSI:1022\n");
for(int i=0;i<8;i++)
printf("RSSI:1024\n");

printf("RSSI:1028\n");
printf("Subscribed:MessageID1\n");
for(int i=0;i<8;i++)
{
printf("Received:Published message1\n");
}
return 0;
}
