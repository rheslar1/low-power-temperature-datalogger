#include <stdio.h>
#include <stddef.h>

typedef struct {
  const char *title;
  const char *summary;
  const char *evidence_target;
  const char *tags[8];
  size_t tag_count;
} project_profile_t;

static const project_profile_t profile = {
  "Low-Power Temperature Datalogger",
  "Battery-powered outdoor datalogger that wakes on schedule, samples temperature, writes compact records, and sleeps aggressively.",
  "Measured power reduction, long-duration testing, hardware tradeoff documentation, and practical battery-life engineering.",
  {
  "Low power MCU",
  "I2C sensor",
  "RTC wake",
  "Deep sleep",
  "SD/Flash logging",
  "Battery profiling"
  },
  6u
};

int main(void) {
  printf("%s\n", profile.title);
  printf("Summary: %s\n", profile.summary);
  printf("Evidence target: %s\n", profile.evidence_target);
  printf("Stack:");

  for (size_t index = 0; index < profile.tag_count; ++index) {
    printf(" %s%s", profile.tags[index], index + 1u == profile.tag_count ? "" : ",");
  }

  printf("\n");
  return 0;
}
