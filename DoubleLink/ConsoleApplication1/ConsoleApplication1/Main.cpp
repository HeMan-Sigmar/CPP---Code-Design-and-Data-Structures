#pragma once
#include "DoubleLinkedList.h"
#include <iostream>
#include "raylib.h"
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    //const int screenWidth = 800;
    //const int screenHeight = 450;
    DoubleLinkedList dll;
    //InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");



    //SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    ////--------------------------------------------------------------------------------------

    //// Main game loop
    //while (!WindowShouldClose())    // Detect window close button or ESC key
    //{

 
    //    BeginDrawing();

    //    ClearBackground(RAYWHITE);
    //    
    //    DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

    //    EndDrawing();
    //    //----------------------------------------------------------------------------------
    //}
   
    dll.AddHead(89);
    dll.AddHead(34);
    //dll.Add(dll.GetFunc(4), 45);
    dll.AddHead(73);
    dll.AddTail(87);
    dll.AddTail(23);
    dll.AddTail(78);
    dll.AddTail(46);
    dll.AddTail(51);
    dll.RemoveTail();
    dll.RemoveHead();

    dll.Remove(dll.GetFunc(2));
    dll.IsEmpty();

    std::cout << "Doubly linked list is as follows: " << std::endl;
    for (int i = 0; i < dll.Count(); i++)
    {
        std::cout << dll.GetFunc(i)->data << std::endl;
    }
 /*   CloseWindow();*/
        return 0;

}
