#include "quantum.h"

/* If enabled, allows the Scroll Lock LED to blink with each keypress */
#ifdef SCROLL_LOCK_BLINK_EFFECT
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        writePin(F0, 0);
    } else {
        writePin(F0, 1);
    }
    return true;
}
#endif
