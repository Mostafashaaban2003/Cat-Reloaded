#include <stdio.h>

void login_code();

int main()
{
    login_code();
}
void login_code()
{
     int username;
    printf("Enter the Username: ");
    scanf("%d", &username);
    int pass;
    printf("Enter the Password: ");
    scanf("%d", &pass);
    if(username == 2003 && pass == 1234)
    {
      printf("True");
    }
    else 
    {
        printf("False");
    }
}