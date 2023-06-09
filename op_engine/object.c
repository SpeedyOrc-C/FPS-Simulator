#include "object.h"
#include "canvas.h"
#include "triangle.h"
#include "matrix.h"
#include "vector.h"

void Object_Init(struct Object *object, struct Mesh *mesh, struct Transform *father_transform, enum Tag tag) {
    object->mesh = mesh;
    Transform_Init(&object->transform, father_transform);
    object->tag = tag;
}

struct Object* Object_New(struct Mesh *mesh, struct Transform *father_transform, enum Tag tag){
    struct Object *object = malloc(sizeof (struct Object));
    Object_Init(object, mesh, father_transform, tag);
    return object;
}

struct Object* Object_SetCollideBoxes(struct Object *object, struct CollideBox *collideBoxes, int collideBoxCount){
    object->collideBoxes = collideBoxes;
    object->collideBoxCount = collideBoxCount;
}

void Del_Object(struct Object *object){
    Del_Transform(&object->transform);
    for (int i = 0; i < object->collideBoxCount; i++) Del_CollideBox(&object->collideBoxes[i]);
    free(object->collideBoxes);
}

void Object_Show(struct Object *object, struct Canvas *canvas) {
    if (Vector3_Distance3D(&object->transform.position, &canvas->camera_transform.position)
        > canvas->render_distance) return;

    Transform_UpdateGlobal(&object->transform);

    if (object->mesh != NULL){

        for (int face_index = 0; face_index < object->mesh->triangle_count; face_index++){
            struct Triangle triangle;

            unsigned int
                vertex_index1 = object->mesh->triangles[face_index].f1,
                vertex_index2 = object->mesh->triangles[face_index].f2,
                vertex_index3 = object->mesh->triangles[face_index].f3;

            struct Vector3 v1, v2, v3;
            v1 = object->mesh->vertices[vertex_index1];
            v2 = object->mesh->vertices[vertex_index2];
            v3 = object->mesh->vertices[vertex_index3];

            Transform_ToGlobal(&object->transform, &v1);
            Transform_ToGlobal(&object->transform, &v2);
            Transform_ToGlobal(&object->transform, &v3);

            Triangle_Set(&triangle, &v1, &v2, &v3);
            Canvas_DrawTriangle(canvas, &triangle, object->tag);
        }
    }
}

void Object_Rotation(struct Object *object, struct Vector3* rotation) {
    object->transform.rotation.x += rotation->x;
    object->transform.rotation.y += rotation->y;
    object->transform.rotation.z += rotation->z;

    Transform_RotationMatrixUpdate(&object->transform);
}

