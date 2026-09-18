#pragma once
// The GSL3680 sometimes reports one finger tap as two presses a few ms apart,
// which made toggle buttons flip twice. Ignore taps within 400 ms of the last.
inline bool tap_allowed() {
  static uint32_t last = 0;
  uint32_t now = esphome::millis();
  if (now - last < 400) return false;
  last = now;
  return true;
}
