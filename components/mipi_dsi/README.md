# mipi_dsi external component

Copied from ESPHome 2026.9.0 (`esphome/components/mipi_dsi`) with one change from upstream
fix esphome/esphome#18984: `phy_clk_src` is left at 0 so ESP-IDF picks the DPHY PLL
reference clock. The stock 2026.9.0 code passes the pre-v3 legacy source, which aborts on
ESP32-P4 v3.x silicon.

Remove this folder and its `external_components` entry once running ESPHome 2026.10 or later.

License details from ESPHome are included in `LICENSE.md` (C++ under GPLv3, Python under MIT).
