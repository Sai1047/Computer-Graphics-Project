#include <graphics.h>
#include <stdio.h>


int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Get screen width and height
    int screenWidth = getmaxx();
    int screenHeight = getmaxy();

    // Set fill style for upper half (black)
    setfillstyle(SOLID_FILL, BLACK);
    bar(0, 0, screenWidth, screenHeight / 2);

    // Set fill style for lower half (blue)
    setfillstyle(SOLID_FILL, BLUE);
    bar(0, screenHeight / 2, screenWidth, screenHeight);

    // Draw a line splitting the screen horizontally (black)
    setcolor(BLACK);
    line(0, screenHeight / 3, screenWidth, screenHeight / 3);

    //Ship
    setcolor(15); // Set color to white (color code 15)
    line(150, 280, 450, 280);   // Top side
    line(450, 280, 450, 230);   // Right side
    line(450, 230, 130, 200);   // Bottom side
    line(130, 200, 150, 280);   // Left side

    //Floodfill the ship with blue color
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(300, 240, 15);


    setcolor(15);
    setfillstyle(SOLID_FILL, LIGHTBLUE); // Set fill style to light blue

    circle(215, 260, 10); // Window 1
    circle(295, 260, 10); // Window 2
    circle(365, 260, 10); // Window 3
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(300, 240, 15);



    //Moon
    setfillstyle(SOLID_FILL, WHITE);
    int circleX = screenWidth / 4;  // X-coordinate of the center of the circle
    int circleY = screenHeight / 6; // Y-coordinate of the center of the circle
    int circleRadius = 30;          // Radius of the circle
    circle(circleX, circleY, circleRadius); // Draw the circle
    floodfill(circleX, circleY, WHITE); // Fill the circle with white color




    //lower deck
    // Draw lines for decks
    setfillstyle(SOLID_FILL, LIGHTBLUE); // Set fill style to light blue
    setcolor(BLUE); // Set outline color to match the background

    // Draw the ship's hull line
    line(200, 230, 130, 200);

    // Draw a rectangle on the ship's hull
    setcolor(BLUE);
    rectangle(200, 200, 450, 230);

    // Fill the rectangle with light blue color
    floodfill(280, 215, BLUE);

    // Draw circular windows on the rectangle
    setfillstyle(SOLID_FILL, GREEN); // Set fill style to green for windows

    // Draw circular windows

    circle(230, 215, 8);
    circle(280, 215, 8);
    circle(330, 215, 8);
    circle(390, 215, 8);

    //2nd Deck
    // Drawing the second deck
    setfillstyle(SOLID_FILL, WHITE); // Set fill style to light blue
    setcolor(BLUE); // Set outline color to blue

    // Second deck coordinates based on the first deck's position
    int secondDeckY1 = 170; // 30 units above the first deck's top
    int secondDeckY2 = 200; // Align with the first deck's top

    // Draw the second deck rectangle directly above the first
    rectangle(210, secondDeckY1, 440, secondDeckY2);

    // Fill the second deck rectangle with light blue color
    floodfill(280, 185, BLUE); // Use a point inside the second deck for floodfill

    // Draw circular windows on the second deck using the same style
    setfillstyle(SOLID_FILL, BLUE); // Set fill style to green for windows

    circle(230, 185, 8); // Window 1
    circle(280, 185, 8); // Window 2
    circle(330, 185, 8); // Window 3
    circle(390, 185, 8); // Window 4

    // Optionally, you can fill the windows with a different color if needed
    setfillstyle(SOLID_FILL, GREEN); // Choose the fill color for windows
    floodfill(230, 185, BLUE); // Fill Window 1
    floodfill(280, 185, BLUE); // Fill Window 2
    floodfill(330, 185, BLUE); // Fill Window 3
    floodfill(390, 185, BLUE); // Fill Window 4



    // Fill circular windows with green color

    floodfill(230, 215, 01);
    floodfill(280, 215, BLUE);
    floodfill(330, 215, BLUE);
    floodfill(390, 215, BLUE);


    //Chimney
    // Chimneys on the second deck
    setfillstyle(SOLID_FILL, RED); // Set fill style to red for the chimneys
    setcolor(RED); // Set chimney outline color to red

    // Adjust chimney dimensions and new positions, moving right and increasing space between them
    int chimneyWidth = 20;
    int chimneyHeight = 30;
    int firstChimneyX1 = 310; // Position of the first chimney
    int firstChimneyX2 = firstChimneyX1 + chimneyWidth;
    int secondChimneyX1 = 360; // Increase space by adjusting position of the second chimney to the right
    int secondChimneyX2 = secondChimneyX1 + chimneyWidth;
    int chimneyY1 = 170 - chimneyHeight; // Top coordinate of chimneys
    int chimneyY2 = 170; // Bottom coordinate aligns with the top of the second deck

    // Draw the first chimney
    rectangle(firstChimneyX1, chimneyY1, firstChimneyX2, chimneyY2);
    floodfill(firstChimneyX1 + 10, chimneyY1 + 15, RED); // Fill the first chimney with red

    // Draw the second chimney
    rectangle(secondChimneyX1, chimneyY1, secondChimneyX2, chimneyY2);
    floodfill(secondChimneyX1 + 10, chimneyY1 + 15, RED); // Fill the second chimney with red


    //Islands

    setcolor(15);
    int triangleX = 510;            // X-coordinate of the common vertex
    int triangleY = 210;            // Y-coordinate of the common vertex
    int triangleSize = 60;          // Size of each triangle

    // Define the coordinates of the vertices for both triangles
    int points1[8] = {
        triangleX - triangleSize, triangleY + triangleSize / 2,
        triangleX + triangleSize, triangleY + triangleSize / 2,
        triangleX, triangleY - triangleSize / 2,
        triangleX - triangleSize, triangleY + triangleSize / 2};

    int points2[8] = {
        triangleX, triangleY + triangleSize / 2,
        triangleX + triangleSize, triangleY + triangleSize / 2,
        triangleX, triangleY - triangleSize / 2,
        triangleX - triangleSize, triangleY + triangleSize / 2};

    // Set fill style for the triangles (yellow color)
    setfillstyle(SOLID_FILL, YELLOW);

    // Draw the first triangle
    fillpoly(3, points1);

    // Draw the second triangle
    fillpoly(3, points2);



    //NEW Island
    setcolor(15);
    int pyramidX = 610;            // X-coordinate of the common vertex
    int pyramidY = 210;            // Y-coordinate of the common vertex
    int pyramidSize = 65;



    int points3[8] = {
        pyramidX - pyramidSize, pyramidY + pyramidSize / 2,
        pyramidX + pyramidSize, pyramidY + pyramidSize / 2,
        pyramidX, pyramidY - pyramidSize / 2,
        pyramidX - pyramidSize, pyramidY + pyramidSize / 2};

    int points4[8] = {
        pyramidX, pyramidY + pyramidSize / 2,
        pyramidX + pyramidSize, pyramidY + pyramidSize / 2,
        pyramidX, triangleY - pyramidSize / 2,
        pyramidX - triangleSize,pyramidY + pyramidSize / 2};

    // Set fill style for the triangles (yellow color)
    setfillstyle(SOLID_FILL, YELLOW);

    // Draw the first triangle
    fillpoly(3, points3);

    // Draw the second triangle
    fillpoly(3, points4);


    //Green 3rd Island

int newPyramidX = circleX - 151; // Move 150 units to the left of the center of the moon
int newPyramidY = circleY + circleRadius + 105;// Y-coordinate of the common vertex (below the moon)

int piramidSize = 70; // Size of the pyramid (same as the other one)

// Define the coordinates of the vertices for the new pyramid
int newPoints1[8] = {
    newPyramidX - pyramidSize, newPyramidY + pyramidSize / 2,
    newPyramidX + pyramidSize, newPyramidY + piramidSize / 2,
    newPyramidX, newPyramidY - piramidSize / 2,
    newPyramidX - piramidSize, newPyramidY + piramidSize / 2};

int newPoints2[8] = {
    newPyramidX, newPyramidY + pyramidSize / 2,
    newPyramidX + pyramidSize, newPyramidY + pyramidSize / 2,
    newPyramidX, newPyramidY - pyramidSize / 2,
    newPyramidX - pyramidSize, newPyramidY + pyramidSize / 2};

// Set fill style for the new pyramid (yellow color)
setfillstyle(SOLID_FILL, GREEN);

// Draw the first triangle of the new pyramid
fillpoly(3, newPoints1);

// Draw the second triangle of the new pyramid
fillpoly(3, newPoints2);


    //WAVES

// Set color for waves (white)
setcolor(WHITE);

// Define the height of the waves
int waveHeight = 50;

// Draw arcs to represent waves at the bottom of the blue sea
for (int i = 0; i < screenWidth; i += 40) {
    arc(i, screenHeight - waveHeight, 0, 180, 30); // Draw an arc at the bottom of the screen
    arc(i + 20, screenHeight - waveHeight + 20, 0, 180, 20); // Draw a smaller arc below the first one
    arc(i + 40, screenHeight - waveHeight + 30, 0, 180, 10); // Draw an even smaller arc below the second one
}

    //Clouds
    setfillstyle(SOLID_FILL, WHITE); // Set fill style to white for circles


    int xOffset = 300; // Define the x-coordinate offset to move the clouds to the right

    // Draw circles small clouds
    circle(100 + xOffset, screenHeight / 6, 20);
    circle(115 + xOffset, screenHeight / 6 - 10, 20);
    circle(130 + xOffset, screenHeight / 6, 20);
    circle(145 + xOffset, screenHeight / 6 - 10, 20);
    circle(160 + xOffset, screenHeight / 6, 20);
    circle(170 + xOffset, screenHeight / 6 - 5, 20);
    circle(185 + xOffset, screenHeight / 6, 20);



    floodfill(90 + xOffset, screenHeight / 6,WHITE);// Fill circles with white color
    floodfill(92 + xOffset, screenHeight / 6,WHITE);
    floodfill(95 + xOffset, screenHeight / 6,WHITE);
    floodfill(100 + xOffset, screenHeight /6,WHITE);
    floodfill(105 + xOffset, screenHeight / 6,WHITE);
    floodfill(114 + xOffset, screenHeight / 6,WHITE);

        floodfill(115 + xOffset, screenHeight / 6, WHITE);
        floodfill(120 + xOffset, screenHeight / 6, WHITE);
        floodfill(125 + xOffset, screenHeight / 6, WHITE);
        floodfill(130 + xOffset, screenHeight / 6, WHITE);
        floodfill(135 + xOffset, screenHeight / 6, WHITE);
        floodfill(140 + xOffset, screenHeight / 6, WHITE);
        floodfill(145 + xOffset, screenHeight / 6, WHITE);

        floodfill(155 + xOffset, screenHeight / 6, WHITE);
        floodfill(160 + xOffset, screenHeight / 6, WHITE);
        floodfill(165 + xOffset, screenHeight / 6, WHITE);
        floodfill(170 + xOffset, screenHeight / 6, WHITE);
        floodfill(180 + xOffset, screenHeight / 6, WHITE);
        floodfill(184 + xOffset, screenHeight / 6, WHITE);
        floodfill(190 + xOffset, screenHeight / 6, WHITE);



// Draw stars
    for (int i = 0; i < 200; ++i) {
        int x = rand() % screenWidth; // Random x-coordinate
        int y = rand() % (screenHeight / 3); // Random y-coordinate in the upper 1/3 part

        // Randomly choose the color of the star (0 for blue, 1 for white)
        int color = rand() % 4;
        switch (color) {
            case 0: // Blue
                putpixel(x, y, BLUE);
                break;
            case 1: // White
                putpixel(x, y, WHITE);
                break;
        }
    }


        getch();
        closegraph();
        return 0;
    }
