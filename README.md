# Low-Power Temperature Datalogger

Battery-powered outdoor datalogger that wakes on schedule, samples temperature, writes compact records, and sleeps aggressively.

## Portfolio Purpose

This repository is an Embedded Systems project scaffold for the Rheslar portfolio. It is designed to become a hardware-backed project with build output, validation logs, and reviewable implementation evidence.

## Stack

- Low power MCU
- I2C sensor
- RTC wake
- Deep sleep
- SD/Flash logging
- Battery profiling

## Quick Start

```bash
cmake -S . -B build
cmake --build build
./build/low_power_temperature_datalogger
python -m unittest discover -s tests
```

## Implementation Slices

- Native starter executable that exposes the project identity, stack, and validation target.
- Architecture document with control boundaries, data flow, safety assumptions, and evidence plan.
- Unit smoke test that keeps source, docs, and CI files present as the repo grows.
- GitHub Actions workflow for configure, build, executable smoke run, and repository validation.

## Evidence Target

Measured power reduction, long-duration testing, hardware tradeoff documentation, and practical battery-life engineering.

## Remote

Intended public repository: https://github.com/rheslar1/low-power-temperature-datalogger
