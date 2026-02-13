# Copilot Instructions

## Project Overview

This is a shared **Protobuf message definition** repository for the "funkbox" ecosystem — a set of ESP32/IDF-based devices used for motorsport race telemetry and pit communication. It defines the wire protocol used across multiple sibling projects and generates C code for two different protobuf runtimes.

## Architecture

- `message.proto` — Single source of truth for all message definitions (proto2 syntax).
- `message.options` — Nanopb options file that sets `max_count` limits on repeated fields for static allocation on embedded targets.
- `nano/` — Generated **nanopb** output (`message.pb.h`, `message.pb.c`). Used by Arduino/PlatformIO consumers: `funkbox-sender`, `funkbox-shifter`.
- `google/` — Generated **protobuf-c** output (`message.pb-c.h`, `message.pb-c.c`). Used by ESP-IDF consumers: `funkbox-display`, `funkbox-base`, `funkbox-buttons`.

The top-level `Proto_Message` is the envelope: it carries optional `mcu_data` (full MCU state), `lora_data` (LoRa radio payloads), `command_data`, `lora_stats`, and `button_state`.

## Code Generation

Run `proto_create.sh` (bash/WSL) to regenerate all outputs and copy them to sibling projects:

```sh
./proto_create.sh
```

This requires:
- **nanopb** generator at the path configured in the script (`nanopb-0.4.8-linux-x86/generator-bin/nanopb_generator`)
- **protoc** with the C plugin at `/usr/local/bin/protoc`

The script also copies generated files into sibling project directories (`../funkbox-sender/`, `../funkbox-display/`, etc.), so those repos must be checked out alongside this one.

## Key Conventions

- Proto2 syntax is used (not proto3) — all fields are `optional` or `repeated` with explicit presence tracking (`has_*` flags).
- Repeated fields have fixed `max_count` limits in `message.options` for nanopb's static allocation model. When adding repeated fields, always add a corresponding entry in `message.options`.
- Files in `nano/` and `google/` are **generated** — never edit them directly. Edit `message.proto` and `message.options`, then regenerate.
- Enum values start at 1 (not 0), following proto2 convention.
