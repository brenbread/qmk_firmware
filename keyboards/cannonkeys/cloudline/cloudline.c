#include "quantum.h"

/* If enabled, allows the Scroll Lock LED to blink with each keypress. */
/* When Scroll Lock is enabled, the LED stays on and does not blink.  */
#ifdef SCROLL_LOCK_BLINK_EFFECT
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    bool scroll_state = host_keyboard_led_state().scroll_lock;
    switch (scroll_state) {
        case 0:
            if (record->event.pressed) {
                writePin(F0, 0);
            } else {
                writePin(F0, 1);
            }
            break;
        case 1:
            writePin(F0, !scroll_state);
            break;
    }
    return true;
}
#endif
