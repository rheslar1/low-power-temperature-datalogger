# Low-Power Temperature Datalogger Design Package

## Purpose

Battery-powered outdoor datalogger that wakes on schedule, samples temperature, writes compact records, and sleeps aggressively.

This package defines the project as an implementation-ready embedded system. It covers system architecture, requirements, interface boundaries, runtime design, validation evidence, and phased delivery.

## Project Profile

| Field | Value |
| --- | --- |
| Repository | `rheslar1/low-power-temperature-datalogger` |
| Primary stack | C++17, C++ Design Patterns, SOLID, Low power MCU, I2C sensor, RTC wake, Deep sleep, SD/Flash logging, Battery profiling |
| Review proof point | Measured power reduction, long-duration testing, hardware tradeoff documentation, and practical battery-life engineering. |

## Artifacts

- [System Design](system-design.md)
- [Requirements](requirements.md)
- [Interface Control](interface-control.md)
- [Runtime Design](runtime-design.md)
- [Validation Plan](validation-plan.md)
- [Implementation Roadmap](implementation-roadmap.md)
- [Draw.io UML](diagrams/system-design.drawio)
- [PNG UML](diagrams/system-design.png)
