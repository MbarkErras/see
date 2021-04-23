#include "see.hpp"
#include "pSDL.h"

int main(int argc, char **argv)
{
    int faces_count = 5;
    std::array<float, 3> vertices[6] = {
        {0.21933, 2.03286, 0},
        {-1.23752, 3.6471, 0},
        {-0.3647, 4.82625, 0},
        {1.22606, 2.79824, 0},
        {-1.66698, 6.10005, 0},
    };
    int face_vertices_count_map[faces_count] = {3, 3, 3, 3, 4};
    int face_vertices_order_map_size = 0;
    for (int i = 0; i < faces_count; i++) face_vertices_order_map_size += face_vertices_count_map[i];
    int face_vertices_order_map[face_vertices_order_map_size] = {4, 0, 1, 4, 1, 2, 4, 2, 3, 4, 3, 0, 0, 1, 2, 3};

    Polygon polygon = Polygon(faces_count, vertices, face_vertices_count_map, face_vertices_order_map);

    Camera camera = Camera({-1, 1, 1}, {1, -1, 1}, {1, 1, -1}, 120, 10, 180);

    int error;
    const char *title = "title";
    PSDL pSDL = PSDL(500, 500, title, error);

    Renderer renderer = Renderer(camera, pSDL);

    renderer.add_object(polygon);

    renderer.render();

    while (1) {
        continue ;
    }
}