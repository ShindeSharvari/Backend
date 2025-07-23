//Write a C program to print all ASCII characters with their values.

void asciiValues()
{
    for(int i=0;i<=127;i++)
    {
        printf("\n%d = %c",i,(char)i);
    }
}
void main()
{
   printf("Printing all ASCII characters with their values.");

   asciiValues();
}
