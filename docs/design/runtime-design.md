# Low-Power Temperature Datalogger Runtime Design

## Module Structure

| Module | Responsibility |
| --- | --- |
| `app` | Startup and CLI or firmware entry point. |
| `domain` | Project-specific state and decisions. |
| `adapters` | Hardware, OS, transport, persistence, or simulator integration. |
| `policy` | Safety and readiness gates. |
| `reporting` | Telemetry, logs, reports, or persistence output. |
| `tests` | Scripted scenarios and edge cases. |

## C++17 Pattern Map

| Pattern | Use |
| --- | --- |
| Strategy | Swap validators, processors, model engines, or control algorithms. |
| Adapter | Hide target APIs behind stable contracts. |
| Facade | Expose one small runtime object for a full cycle. |
| Composite | Combine validation rules. |
| Repository/Sink | Isolate evidence output and persistence. |

## SOLID Mapping

| Principle | Design Choice |
| --- | --- |
| Single Responsibility | Acquisition, processing, policy, and reporting are separate modules. |
| Open/Closed | New adapters and policies can be added without rewriting orchestration. |
| Liskov Substitution | Test fixtures can replace target adapters under the same contract. |
| Interface Segregation | Each interface has one narrow purpose. |
| Dependency Inversion | Runtime code depends on abstractions instead of hardware or framework details. |

## Project-Specific Focus

Battery-powered outdoor datalogger that wakes on schedule, samples temperature, writes compact records, and sleeps aggressively.

Review proof point: Measured power reduction, long-duration testing, hardware tradeoff documentation, and practical battery-life engineering.
