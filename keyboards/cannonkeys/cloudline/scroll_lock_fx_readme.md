# CannonKeys Cloudline - Blinking Scroll Lock LED FX

I saw a video of someone doing this with their keyboard and thought "yeah I should do that too."

[Demo Video (Imgur)](https://i.imgur.com/RgRPriJ.mp4)

This is only built to be used with the `via` keymap at the moment, but via can be easily disabled in `rules.mk`.

This assumes your LED is properly soldered, and the `Backlight Indicator` jumper pads on the PCB are bridged.

## Build and flash (assuming your environment is set up):

`qmk flash -kb cannonkeys/cloudline -km via`

## Usage

Just in case weird things go wrong with VIA, load the `cloudline.layout.json` file in this directory and modify your keymap as you see fit.

- By default, the LEDs blink with any keypress.
- Enabling `Scroll Lock` will prioritize that indicator LED over any blinking.
- The effect can be toggled on or off by pressing `MO(1)` and `Scroll Lock`.
  - The keymap `SCRL_FX` cannot be used in VIA and must be manually added in to your desired position in the `cloudline.layout.json` file if this needs to be changed for any reason.
