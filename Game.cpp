/* 
Author: [Your Name] 
Date: [Current Date] 
Description: This program creates a simple game using the Raylib library. The game features a ball that moves around the screen based on user input. The arrow keys control the movement of the ball. The ball's position is updated continuously, and it stays within the boundaries of the screen. 
Key Features: 
- **Movement**: 
Use the arrow keys to move the ball: 
- Right arrow key: Move the ball to the right. 
- Left arrow key: Move the ball to the left. 
- Up arrow key: Move the ball upward. 
- Down arrow key: Move the ball downward. 
- **Bounds Checking**: Ensures the ball stays within the screen boundaries. 
- **Color and Graphics**: 
The background is colored, and the ball is white. 
Function Breakdown: 
1. **UpdateBallPosition**: 
- Handles user input to update the ball's position based on arrow key presses. 
2. **DrawBall**: 
- Draws the ball at its current position on the screen. 
3. **CheckBounds**: 
- Ensures the ball does not move outside the screen boundaries. 
The program runs in a game loop until the window is closed by the user. 
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
