#include "Polygon.hpp"

Polygon::Polygon(int _faces_count, std::array<float, 3> *_vertices, int _face_vertices_count_map[], int _face_vertices_order_map[])
{
    faces_count = _faces_count;
    vertices = _vertices;
    face_vertices_count_map = _face_vertices_count_map;
    face_vertices_order_map = _face_vertices_order_map;
    triangulate();
}

int Polygon::intersect(float[3], float[3])
{
}

void Polygon::triangulate()
{
    int face_vertices_start_index = 0;
    for (int i = 0; i < faces_count; i++)
    {
        int vertices_count = face_vertices_count_map[i];
        for (int j = 2; j < vertices_count; j++)
        {
            triangles.push_back({
                face_vertices_order_map[face_vertices_start_index],
                face_vertices_order_map[face_vertices_start_index + 1],
                face_vertices_order_map[face_vertices_start_index + j],
            });
        }
        face_vertices_start_index += vertices_count;
    }
}