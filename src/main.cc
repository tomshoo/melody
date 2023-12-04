#include <iostream>

extern "C" {
#include <wayland-server.h>

#include <wlr/backend.h>
}

struct state {
    struct wl_display*    display;
    struct wl_event_loop* evloop;
};

int main(int const argc, char** const argv) {
    struct state* s = new state;

    wl_display* display = wl_display_create();
    s->display          = display;

    if (not display)
        return 1;

    wl_event_loop* evloop = wl_display_get_event_loop(display);
    s->evloop             = evloop;

    if (not evloop)
        return 1;

    wlr_backend_autocreate(display, nullptr);

    std::cout << "Hello world\n";
    return 0;
}
