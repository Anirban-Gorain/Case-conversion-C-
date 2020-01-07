/*UPPERCASE TO LOWERCASE AND LOWERCASE TO UPPERCASE SOURCE CODE*/
//Headder file declaration;
#include <stdio.h>
#include <conio.h>
#include <windows.h>

//Function declaration;
int _user_Choice(void);
int _uc_To_Lc(void);
int _lc_To_uc(void);
int main(void)
{
    //Funcition call.
    _user_Choice();

    return 0;
}

//User choice.
int _user_Choice(void)
{
    
    char _choice;
    printf("Enter your Choice [Uppercase to Lowercas then enter \"u\" or Lowercase to Uppercase then enter \"l\"]:");
    scanf("%c", &_choice);
    if (_choice == 'u' || _choice == 'U')
    {
        _uc_To_Lc();
    }
    else if (_choice == 'l' || _choice == 'L')
    {
        _lc_To_uc();
    }else{
        Beep(900,1100);
        printf("\nYou should do enter correct keyword, Your entered value wrong.");
        char _again_Use_The_Program;
        printf("\n\nAgain use the program press \"Y\":");
        fflush(stdin);
        scanf("%c",&_again_Use_The_Program);
        if(_again_Use_The_Program=='Y' || _again_Use_The_Program=='y'){
            fflush(stdin);
            system("CLS");
            _user_Choice();
        }else
        {
            exit(1);
        }
        
        
    }
    return 0;
}
//Uppercase to Lowercase converter.
int _uc_To_Lc(void)
{
    /*I am use the _value_Bank Array because store do enter's of user Data*/
    char _value_Bank[5000];
    /*I am use the _crossponding_Value_In_Integer Array because value banks's value crosspondingly in a Integer value.*/
    int _crossponding_Value_In_Integer[5000];
    int loop = 0;
    printf("\nEnter your data. [Must be your data less then 5000 chracter.]:");
    fflush(stdin);
    gets(_value_Bank);
    printf("\n");
    while (_value_Bank[loop] != '\0')
    {
        _crossponding_Value_In_Integer[loop]=_value_Bank[loop]+0;
        loop++;
    }
    loop = 0;
    while (_value_Bank[loop] != '\0')
    {
        if (_crossponding_Value_In_Integer[loop] != 32 &&_crossponding_Value_In_Integer[loop]!= 97 &&_crossponding_Value_In_Integer[loop]!= 98&&_crossponding_Value_In_Integer[loop]!= 99 &&_crossponding_Value_In_Integer[loop]!= 100 &&_crossponding_Value_In_Integer[loop]!= 101 &&_crossponding_Value_In_Integer[loop]!= 102 &&_crossponding_Value_In_Integer[loop]!= 103 &&_crossponding_Value_In_Integer[loop]!= 104 &&_crossponding_Value_In_Integer[loop]!= 105 &&_crossponding_Value_In_Integer[loop]!= 106 &&_crossponding_Value_In_Integer[loop]!= 107 &&_crossponding_Value_In_Integer[loop]!= 108 &&_crossponding_Value_In_Integer[loop]!= 109 &&_crossponding_Value_In_Integer[loop]!= 110 &&_crossponding_Value_In_Integer[loop]!= 111 &&_crossponding_Value_In_Integer[loop]!= 112 &&_crossponding_Value_In_Integer[loop]!= 113 &&_crossponding_Value_In_Integer[loop]!= 114 &&_crossponding_Value_In_Integer[loop]!= 115 &&_crossponding_Value_In_Integer[loop]!= 116 &&_crossponding_Value_In_Integer[loop]!= 117 &&_crossponding_Value_In_Integer[loop]!= 118 &&_crossponding_Value_In_Integer[loop]!= 119 &&_crossponding_Value_In_Integer[loop]!= 120 &&_crossponding_Value_In_Integer[loop]!= 121 &&_crossponding_Value_In_Integer[loop]!= 122 &&_crossponding_Value_In_Integer[loop]!= 33&&_crossponding_Value_In_Integer[loop]!= 34&&_crossponding_Value_In_Integer[loop]!= 35&&_crossponding_Value_In_Integer[loop]!= 36&&_crossponding_Value_In_Integer[loop]!= 37&&_crossponding_Value_In_Integer[loop]!= 38&&_crossponding_Value_In_Integer[loop]!= 39&&_crossponding_Value_In_Integer[loop]!= 40&&_crossponding_Value_In_Integer[loop]!= 41&&_crossponding_Value_In_Integer[loop]!= 42&&_crossponding_Value_In_Integer[loop]!= 43&&_crossponding_Value_In_Integer[loop]!= 44&&_crossponding_Value_In_Integer[loop]!= 45&&_crossponding_Value_In_Integer[loop]!= 46&&_crossponding_Value_In_Integer[loop]!= 47&&_crossponding_Value_In_Integer[loop]!= 48&&_crossponding_Value_In_Integer[loop]!= 49&&_crossponding_Value_In_Integer[loop]!= 50&&_crossponding_Value_In_Integer[loop]!= 51&&_crossponding_Value_In_Integer[loop]!= 52&&_crossponding_Value_In_Integer[loop]!= 53&&_crossponding_Value_In_Integer[loop]!= 54&&_crossponding_Value_In_Integer[loop]!= 55&&_crossponding_Value_In_Integer[loop]!= 56&&_crossponding_Value_In_Integer[loop]!= 57&&_crossponding_Value_In_Integer[loop]!= 58&&_crossponding_Value_In_Integer[loop]!= 59&&_crossponding_Value_In_Integer[loop]!= 60&&_crossponding_Value_In_Integer[loop]!= 61&&_crossponding_Value_In_Integer[loop]!= 62&&_crossponding_Value_In_Integer[loop]!= 63 &&_crossponding_Value_In_Integer[loop] !=64&&_crossponding_Value_In_Integer[loop]!= 91&&_crossponding_Value_In_Integer[loop]!= 92&&_crossponding_Value_In_Integer[loop]!= 93&&_crossponding_Value_In_Integer[loop]!= 94&&_crossponding_Value_In_Integer[loop]!= 95&&_crossponding_Value_In_Integer[loop]!= 123&&_crossponding_Value_In_Integer[loop]!= 124&&_crossponding_Value_In_Integer[loop]!= 125&&_crossponding_Value_In_Integer[loop]!= 126)
        {
            _crossponding_Value_In_Integer[loop] = _crossponding_Value_In_Integer[loop] + 32;
            printf("%c", _crossponding_Value_In_Integer[loop]);
            loop ++;
        }else
        {
            printf("%c", _crossponding_Value_In_Integer[loop]);
            loop ++;
        }
        
    }
    printf("\n");
    getch();
    
}
//Lowercase to Uppercase converter.
int _lc_To_uc(void)
{
    /*I am use the _value_Bank Array because store do enter's of user Data*/
    char _value_Bank[5000];
    /*I am use the _crossponding_Value_In_Integer Array because value banks's value crosspondingly in a Integer value.*/
    int _crossponding_Value_In_Integer[5000];
    int loop = 0;
    printf("\nEnter your data. [Must be your data less then 5000 chracter.]:");
    fflush(stdin);
    gets(_value_Bank);
    printf("\n");
    while (_value_Bank[loop] != '\0')
    {
        _crossponding_Value_In_Integer[loop]=_value_Bank[loop]+0;
        loop++;
    }
    loop = 0;
    while (_value_Bank[loop] != '\0')
    {
        if (_crossponding_Value_In_Integer[loop] != 65 &&_crossponding_Value_In_Integer[loop]!= 66 &&_crossponding_Value_In_Integer[loop]!= 67 &&_crossponding_Value_In_Integer[loop]!= 68 &&_crossponding_Value_In_Integer[loop]!= 69 &&_crossponding_Value_In_Integer[loop]!= 70 &&_crossponding_Value_In_Integer[loop]!= 71 &&_crossponding_Value_In_Integer[loop]!= 72 &&_crossponding_Value_In_Integer[loop]!= 72 &&_crossponding_Value_In_Integer[loop]!= 73 &&_crossponding_Value_In_Integer[loop]!= 74 &&_crossponding_Value_In_Integer[loop]!= 75 &&_crossponding_Value_In_Integer[loop]!= 76 &&_crossponding_Value_In_Integer[loop]!= 77 &&_crossponding_Value_In_Integer[loop]!= 78 &&_crossponding_Value_In_Integer[loop]!= 79 &&_crossponding_Value_In_Integer[loop]!= 80 &&_crossponding_Value_In_Integer[loop]!= 81 &&_crossponding_Value_In_Integer[loop]!= 82 &&_crossponding_Value_In_Integer[loop]!= 83 &&_crossponding_Value_In_Integer[loop]!= 84 &&_crossponding_Value_In_Integer[loop]!= 85 &&_crossponding_Value_In_Integer[loop]!= 86 &&_crossponding_Value_In_Integer[loop]!= 87 &&_crossponding_Value_In_Integer[loop]!= 88 &&_crossponding_Value_In_Integer[loop]!= 89 &&_crossponding_Value_In_Integer[loop]!= 90 &&_crossponding_Value_In_Integer[loop]!= 33&&_crossponding_Value_In_Integer[loop]!= 34&&_crossponding_Value_In_Integer[loop]!= 35&&_crossponding_Value_In_Integer[loop]!= 36&&_crossponding_Value_In_Integer[loop]!= 37&&_crossponding_Value_In_Integer[loop]!= 38&&_crossponding_Value_In_Integer[loop]!= 39&&_crossponding_Value_In_Integer[loop]!= 40&&_crossponding_Value_In_Integer[loop]!= 41&&_crossponding_Value_In_Integer[loop]!= 42&&_crossponding_Value_In_Integer[loop]!= 43&&_crossponding_Value_In_Integer[loop]!= 44&&_crossponding_Value_In_Integer[loop]!= 45&&_crossponding_Value_In_Integer[loop]!= 46&&_crossponding_Value_In_Integer[loop]!= 47&&_crossponding_Value_In_Integer[loop]!= 48&&_crossponding_Value_In_Integer[loop]!= 49&&_crossponding_Value_In_Integer[loop]!= 50&&_crossponding_Value_In_Integer[loop]!= 51&&_crossponding_Value_In_Integer[loop]!= 52&&_crossponding_Value_In_Integer[loop]!= 53&&_crossponding_Value_In_Integer[loop]!= 54&&_crossponding_Value_In_Integer[loop]!= 55&&_crossponding_Value_In_Integer[loop]!= 56&&_crossponding_Value_In_Integer[loop]!= 57&&_crossponding_Value_In_Integer[loop]!= 58&&_crossponding_Value_In_Integer[loop]!= 59&&_crossponding_Value_In_Integer[loop]!= 60&&_crossponding_Value_In_Integer[loop]!= 61&&_crossponding_Value_In_Integer[loop]!= 62&&_crossponding_Value_In_Integer[loop]!= 63&&_crossponding_Value_In_Integer[loop]!= 91&&_crossponding_Value_In_Integer[loop]!= 64&&_crossponding_Value_In_Integer[loop]!= 92&&_crossponding_Value_In_Integer[loop]!= 93&&_crossponding_Value_In_Integer[loop]!= 94&&_crossponding_Value_In_Integer[loop]!= 95&&_crossponding_Value_In_Integer[loop]!= 123&&_crossponding_Value_In_Integer[loop]!= 124&&_crossponding_Value_In_Integer[loop]!= 125&&_crossponding_Value_In_Integer[loop]!= 126)
        {
            _crossponding_Value_In_Integer[loop] = _crossponding_Value_In_Integer[loop] - 32;
            printf("%c", _crossponding_Value_In_Integer[loop]);
            loop ++;
        }else
        {
            printf("%c", _crossponding_Value_In_Integer[loop]);
            loop ++;
        }
        
    }
    printf("\n");
    getch();
    
}