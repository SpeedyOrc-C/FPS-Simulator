#ifndef OP_CANVAS

#include "vector.h"
#include "matrix.h"
#include "triangle.h"
#include "transform.h"
#include "plane.h"
#include "tag.h"

struct ScreenProjection {
    double scale_factor;
    double x_displacement, y_displacement;
};

struct Color {
    unsigned char red, green, blue;
};

//Canvas for displaying
struct Canvas {
    unsigned short height, width;

    unsigned char *vram_red, *vram_green, *vram_blue;
    double *vram_depth;
    enum Tag *vram_tag;

    struct Transform camera_transform;

    struct Plane view_planes[4];
    struct Line view_rays[4];

    struct Color color;

    double field_of_view;
    struct ScreenProjection screen_projection;
    double render_distance;
};

//Initializer of canvas
void Canvas_Init(struct Canvas *canvas, short height, short width);

//The function for construction of a new canvas
struct Canvas* New_Canvas(short height, short width);

//The function for initializing the planes and rays of the view
void Canvas_InitView(struct Canvas *canvas);

//Rasterize a polygon on the screen
void Canvas_Rasterize(struct Canvas *canvas, struct Vector3* points, int size, enum Tag tag);

//The function for freeing the space of a canvas
void Del_Canvas(struct Canvas* canvas);

//Displaying the current frame.
void Canvas_flush(struct Canvas* canvas);
void Canvas_clear(struct Canvas* canvas);

//Clear the terminal
void terminal_clear();

// Move the cursor to the top-left corner
void move_cursor_top_left();

void Canvas_DrawPoint(struct Canvas *canvas, struct Vector3 *point, enum Tag tag);
void Canvas_DrawTriangle(struct Canvas *canvas, struct Triangle* triangle, enum Tag tag);

// Move the position of canvas by adding displacement

void Canvas_CameraMove(struct Canvas *canvas, struct Vector3 *displacement);
void Canvas_CameraRotate(struct Canvas *canvas, struct Vector3 *rotation);

void Canvas_CalculateScreenProjection(struct Canvas* canvas);

#define OP_CANVAS
#endif
