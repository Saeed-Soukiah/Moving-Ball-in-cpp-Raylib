/* 
Author: Saeed Soukiah
Date: 17/12/2024
*/
#include <raylib.h>

// Function to handle input and update the ball's position
void UpdateBallPosition(int& ballx, int& bally) {
    if (IsKeyDown(KEY_RIGHT)) {
        ballx += 3;
    }
    if (IsKeyDown(KEY_LEFT)) {
        ballx -= 3;
    }
    if (IsKeyDown(KEY_UP)) {
        bally -= 3;
    }
    if (IsKeyDown(KEY_DOWN)) {
        bally += 3;
    }
}

// Function to draw the ball
void DrawBall(int ballx, int bally, int radius, Color color) {
    DrawCircle(ballx, bally, radius, color);
}

// Function to handle bounds checking
void CheckBounds(int& ballx, int& bally, int screenWidth, int screenHeight, int radius) {
    if (ballx - radius < 0) ballx = radius;
    if (ballx + radius > screenWidth) ballx = screenWidth - radius;
    if (bally - radius < 0) bally = radius;
    if (bally + radius > screenHeight) bally = screenHeight - radius;
}

int main() {

    int screenWidth = 800;
    int screenHeight = 800;
    Color red = { 255, 160, 133, 255 };
    int ballx = screenWidth / 2;
    int bally = screenHeight / 2;
    int ballRadius = 30;

    InitWindow(screenWidth, screenHeight, "First Game");
    SetTargetFPS(60);

    // Game Loop
    while (!WindowShouldClose()) {
        // Event Handling and Update
        UpdateBallPosition(ballx, bally);
        CheckBounds(ballx, bally, screenWidth, screenHeight, ballRadius);

        // Drawing
        BeginDrawing();
        ClearBackground(red);
        DrawBall(ballx, bally, ballRadius, WHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
