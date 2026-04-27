#pragma once
#include <string>
#include <map>

// ---------------------------------------------------------------------------
// Icon map
// ---------------------------------------------------------------------------
static const std::map<std::string, std::string> WEATHER_ICONS = {
  {"cloudy",          "\U000F0590"},
  {"fog",             "\U000F0591"},
  {"hail",            "\U000F0592"},
  {"lightning",       "\U000F0593"},
  {"lightning-rainy", "\U000F067E"},
  {"partlycloudy",    "\U000F0595"},
  {"pouring",         "\U000F0596"},
  {"rainy",           "\U000F0597"},
  {"snowy",           "\U000F0598"},
  {"snowy-rainy",     "\U000F0F35"},
  {"sunny",           "\U000F0599"},
  {"windy",           "\U000F059D"},
  {"windy-variant",   "\U000F059E"},
  {"exceptional",     "\U000F0F38"},
};

// ---------------------------------------------------------------------------
// Colour map — LVGL lv_color_hex() values
// ---------------------------------------------------------------------------
static const std::map<std::string, lv_color_t> WEATHER_COLORS = {
  {"cloudy",          lv_color_hex(0x9E9E9E)},  // grey
  {"fog",             lv_color_hex(0xB0BEC5)},  // blue-grey
  {"hail",            lv_color_hex(0x90CAF9)},  // light blue
  {"lightning",       lv_color_hex(0xFFD54F)},  // amber
  {"lightning-rainy", lv_color_hex(0xFFD54F)},  // amber
  {"partlycloudy",    lv_color_hex(0xFFCA28)},  // yellow
  {"pouring",         lv_color_hex(0x42A5F5)},  // blue
  {"rainy",           lv_color_hex(0x64B5F6)},  // light blue
  {"snowy",           lv_color_hex(0xE3F2FD)},  // near-white blue
  {"snowy-rainy",     lv_color_hex(0x90CAF9)},  // light blue
  {"sunny",           lv_color_hex(0xFFD600)},  // yellow
  {"windy",           lv_color_hex(0x80CBC4)},  // teal
  {"windy-variant",   lv_color_hex(0x80CBC4)},  // teal
  {"exceptional",     lv_color_hex(0xEF5350)},  // red
};

// ---------------------------------------------------------------------------
// Helper functions
// ---------------------------------------------------------------------------
inline std::string weather_icon(const std::string& state) {
  auto it = WEATHER_ICONS.find(state);
  return it != WEATHER_ICONS.end() ? it->second : "\U000F0594";
}

inline lv_color_t weather_color(const std::string& state) {
  auto it = WEATHER_COLORS.find(state);
  return it != WEATHER_COLORS.end() ? it->second : lv_color_hex(0x9E9E9E); // default grey
}