#include "see.hpp"

int main(int argc, char **argv)
{
    Camera camera = Camera(Vector(), Vector(), Vector(), 0, 0, 0);
    Renderer r = Renderer(&camera);
    Shape cube = Shape();
    r.render();
    r.add_shape(&cube);
}