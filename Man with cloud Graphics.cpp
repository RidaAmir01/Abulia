#include <iostream>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Body
    rectangle(100, 100, 200, 300);

    // Head
    circle(150, 70, 50);

    // Legs
    line(150, 300, 100, 400);
    line(150, 300, 200, 400);

    // Arms
    line(100, 200, 50, 150);
    line(200, 200, 250, 150);

    // Cloud
    circle(250, 70, 20);
    circle(275, 80, 25);
    circle(300, 70, 20);
    circle(325, 80, 25);
    circle(350, 70, 20);

    // Question Mark
    setcolor(WHITE);
    outtextxy(150, 70, "?");

    // Output text
    outtextxy(100, 420, "Man with Cloud");

    getch();
    closegraph();
    return 0;
}
