#include "mesh.h"

void Face_Set(struct Face* face, unsigned int f1, unsigned int f2, unsigned int f3) {
    face->f1 = f1 - 1;
    face->f2 = f2 - 1;
    face->f3 = f3 - 1;
}

struct Mesh *New_Mesh(unsigned int triangle_count, unsigned int vertex_count) {
    struct Mesh *model = malloc(sizeof(struct Mesh));

    model->triangle_count = triangle_count;
    model->triangles = malloc(triangle_count * sizeof(struct Triangle));

    model->vertex_count = vertex_count;
    model->vertices = malloc(vertex_count * sizeof(struct Vector3));

    return model;
}

void Del_Mesh(struct Mesh *model) {
    free(model->triangles);
    free(model->vertices);
//    free(model);
}

void Mesh_Copy(struct Mesh *from, struct Mesh *to){
    //TODO
}