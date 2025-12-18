#include <zephyr/init.h>

static int appledesign_init(void) {
    return 0;
}

SYS_INIT(appledesign_init, APPLICATION, CONFIG_APPLICATION_INIT_PRIORITY);
