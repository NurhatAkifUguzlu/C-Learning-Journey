/*
 * Project: Simple Login System
 * Author: Nurhat Akif Uguzlu
 * Description: A basic user registration and login system demonstrating
 * string manipulation functions (strlen, strcpy, strcmp) in C.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Define buffers with size 20
    char kayitliKullanici[20], kayitliSifre[20];
    char girilenKullanici[20], girilenSifre[20], girilenTekrar[20];

    // --- REGISTRATION PHASE ---
    printf("--- SIGN UP ---\n");

    printf("Please enter the nickname to sign up: ");
    // %19s prevents buffer overflow (leaves 1 char for null terminator)
    scanf("%19s", girilenKullanici);

    printf("Enter the password to sign up: ");
    scanf("%19s", girilenSifre);

    // Check password length validation
    int length = strlen(girilenSifre);

    if(length < 6) {
        printf("\n[ERROR] Password is very short! Minimum 6 characters required.\n");
        printf("Program is finished!\n");
        return 0; // Exit program
    }
    else {
        // Copy temporary inputs to storage
        strcpy(kayitliKullanici, girilenKullanici);
        strcpy(kayitliSifre, girilenSifre);

        printf("\n[SUCCESS] Registration Complete!\n");
        printf("--------------------------------\n");
    }

    // --- LOGIN PHASE ---
    printf("\n--- SIGN IN ---\n");
    printf("Please enter the password again to sign in: ");
    scanf("%19s", girilenTekrar);

    // Verify password match
    if(strcmp(kayitliSifre, girilenTekrar) == 0) {
        printf("\n[ACCESS GRANTED] Welcome, %s!\n", kayitliKullanici);
    }
    else {
        printf("\n[ACCESS DENIED] Wrong password!\n");
    }

    return 0;
}
