
Folder highlights
C/C++ source and header files define utility and UI functions for a Hospital Management System, including input validation and screen control.

#include <stdio.h>
#include "../include/ui.h"
#include "../include/utils.h"

int main() {
    ui_clear_screen();
    ui_print_banner();
    printf("\n\n\n");
    // ui_print_start_menu();
    const char* menu[] = {"Login", "Register", "Exit"};
    ui_print_menu("Main Menu", menu, 3, 72);
    ui_pause();
    return 0;
}