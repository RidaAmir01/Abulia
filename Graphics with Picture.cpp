#include <graphics.h>

int main() {
    initwindow(600,500,"ABULIA");
    readimagefile("ABULIA.JPG" , 100,100,300,300);
    getch();

    closegraph();
    return 0;
}

