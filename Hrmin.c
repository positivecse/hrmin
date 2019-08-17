void main()
{
int min,hr,min1;
clrscr();
printf("Enter any valid minute:");
scanf("%d",&min);
hr=min/60;
min1=min%60;
printf("Hour:Minute=%d:%d",hr,min1);
getch();
}
