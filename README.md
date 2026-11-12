<p align="center">
  <img src="https://camo.githubusercontent.com/24324735352ae6ca756bfb7dcdfafb61b3eaba3a9fece140fab5078041eff4ed/68747470733a2f2f692e6962622e636f2f6d745846726a432f62616e6e65722d736861646f772e77656270" alt="Counter Strike 2" width="100%" />
  <br />
  <strong>Offsets / Dumps</strong>
</p>

# CS2 All Dumps & Offsets

Raw, machine-generated dumps of **Counter-Strike 2** — offsets, schema classes, interfaces, patterns, convars and protobufs — straight from the live client, no manual touch-ups.

Built for people who would rather regenerate an SDK than hand-copy hex numbers.

---

## Latest dump

| | |
|---|---|
| **Game build** | `14197` |
| **Dumped at** | 2026-11-12 11:33 (UTC+3) |
| **Process** | `cs2.exe` |
| **Signature recovery** | `415 / 505` resolved |
| **Modules covered** | 19 |
| **Layout** | flat files in the repo root |

> Numbers above come from [`manifest.json`](manifest.json) and are not hand-written.

---

## What is in here

Every artifact sits in the repo root, one file per category. Nothing is nested, nothing needs unpacking — clone and point your include path at it.

| File | Contents |
|---|---|
| [`cs2.hpp`](cs2.hpp) | Single entry header — pulls in the whole SDK for you |
| [`macros.hpp`](macros.hpp) | `SCHEMA_FIELD` and helper macros used by schema classes |
| `<module>_dll.hpp` | Schema classes per module: `client_dll.hpp`, `server_dll.hpp`, `engine2_dll.hpp`, `animationsystem_dll.hpp`, `particles_dll.hpp`, `materialsystem2_dll.hpp`, `panorama_dll.hpp`, `pulse_system_dll.hpp`, `rendersystemdx11_dll.hpp`, `resourcesystem_dll.hpp`, `scenesystem_dll.hpp`, `schemasystem_dll.hpp`, `soundsystem_dll.hpp`, `steamaudio_dll.hpp`, `vphysics2_dll.hpp`, `worldrenderer_dll.hpp`, `host_dll.hpp`, `networksystem_dll.hpp` |
| [`offsets.hpp`](offsets.hpp) / [`offsets.json`](offsets.json) | Module base offsets |
| [`buttons.hpp`](buttons.hpp) / [`buttons.json`](buttons.json) | Button offsets |
| [`interfaces.hpp`](interfaces.hpp) / [`interfaces.json`](interfaces.json) | Interface vtables per module |
| [`patterns.hpp`](patterns.hpp) / [`patterns.json`](patterns.json) | Signatures for every resolved offset |
| [`convars.hpp`](convars.hpp) / [`convars.json`](convars.json) | ConVars and console commands |
| [`protobufs.hpp`](protobufs.hpp) / [`protobufs.json`](protobufs.json) | Protobuf message definitions |
| [`schemas.json`](schemas.json) | All schema classes as JSON |
| [`flat/`](flat) | Alternative four-file C++ dump: `sdk.hpp`, `types.hpp`, `structs.hpp`, `classes.hpp` |
| [`entity_system.hpp`](entity_system.hpp) | Ready-made entity-list helpers |
| [`manifest.json`](manifest.json), [`verified_features.json`](verified_features.json), [`build.log`](build.log) | Build metadata, validated fields, generator log |

### Data volume

| Category | Amount |
|---|---|
| Schema classes | 2 865 (15 327 fields) |
| Module offsets | 26 |
| Button offsets | 16 |
| Interfaces / vtables | 31 modules |
| Signatures | 505 scanned, 415 resolved |
| ConVars & commands | 4 150 |
| Protobuf messages | full set |

---

## Using it

### C++

Point your include path at the repo root and include the entry header:

```cpp
#include <cs2.hpp>

auto pawn = *reinterpret_cast<client::C_CSPlayerPawn**>(
    reinterpret_cast<std::uintptr_t>(GetModuleHandleA("client.dll")) + offsets::client::LocalPlayerPawn);
```

`cs2.hpp` pulls in every generated header for you. Nothing else to wire up.

The four-file variant lives in [`flat/`](flat) — same data, one file per kind; add that folder to the include path and include `sdk.hpp`.
### JSON

Every category mirrors the C++ side, so you can drive your own generator:

```python
import json

offsets = json.load(open("offsets.json"))
print(offsets["client.dll"]["dwLocalPlayerPawn"])  # 0x2553D38
```

---

## Freshness & accuracy

- Dumped against build `14197`. After a game update, offsets drift — regenerate instead of trusting old values.
- `415 / 505` signatures resolved. The six known-stale ones are listed in `build.log` and simply fall back to their last good value.
- `verified_features.json` marks the classes and fields that were explicitly validated on this build.
- Offsets are **static** values for this build only; no runtime resolution or pattern scanning is applied for you.

## Regenerating

Everything here is produced by a dumper run against a live `cs2.exe`. Re-run the same tool after each patch. The newest dump always replaces the files in the root; the build number and timestamp in the card above tell you what you are looking at.

## Credits

- Layout and generation: [cs2-sdk](https://cs2-sdk.com)
- Dumping: `cs2_dumper`, `cs2-sdk`, `dezlock-dump`

## Disclaimer

Dumps are provided as-is for reverse engineering, cheat development and tooling. Not affiliated with Valve.
