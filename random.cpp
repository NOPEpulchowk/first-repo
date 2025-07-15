#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <vector>

struct Bullet
{
    float x, y, vx, vy;

    Bullet(float startX, float startY, float dirX, float dirY)
    {
        x = startX;
        y = startY;
        float len = sqrt(dirX * dirX + dirY * dirY);
        vx = dirX / len * 5;
        vy = dirY / len * 5;
    }

    void update()
    {
        x += vx;
        y += vy;
        circle((int)x, (int)y, 3);
    }
};

int main()
{
    initwindow(800, 600, "Bullet Game");

    float playerX = 400, playerY = 300;
    std::vector<Bullet> bullets;

    while (!kbhit())
    {
        cleardevice();

        // Draw player
        setfillstyle(SOLID_FILL, BLUE);
        fillellipse(playerX, playerY, 10, 10);

        // Check for mouse click
        if (GetAsyncKeyState(VK_LBUTTON))
        {
            int mouseX = mousex();
            int mouseY = mousey();

            float dirX = mouseX - playerX;
            float dirY = mouseY - playerY;

            bullets.emplace_back(playerX, playerY, dirX, dirY);
        }

        // Update and draw bullets
        setcolor(RED);
        for (auto& b : bullets)
        {
            b.update();
        }

        delay(20);
    }

    closegraph();
    return 0;
}
