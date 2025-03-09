Moving Ball in C++ Raylib

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
