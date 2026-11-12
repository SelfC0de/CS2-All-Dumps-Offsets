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
| **Folder** | [`14197/`](14197) |

> Numbers above come from [`14197/json/manifest.json`](14197/json/manifest.json) and are not hand-written.

---

## What is in here

All artifacts of this dump live under [`14197/`](14197):

| Path | Contents |
|---|---|
| [`14197/include/`](14197/include) | Complete C++ SDK: `cs2.hpp` amalgamation, per-module schema headers, offsets, interfaces, patterns, convars, protobufs, entity-system helpers |
| [`14197/single-file/`](14197/single-file) | Flat one-file-per-kind dumps — `sdk.hpp`, `types.hpp`, `structs.hpp`, `classes.hpp` |
| [`14197/json/`](14197/json) | Same data as JSON for tooling, codegen and scripts |
| [`14197/build.log`](14197/build.log) | Generator log of this run |

### Data volume

| Category | Amount | Where |
|---|---|---|
| Schema classes | 2 865 (15 327 fields) | `include/schemas/*.hpp`, `json/schemas.json` |
| Module offsets | 26 | `include/offsets/offsets.hpp`, `json/offsets.json` |
| Button offsets | 16 | `include/buttons.hpp`, `json/buttons.json` |
| Interfaces / vtables | 31 modules | `include/interfaces/interfaces.hpp`, `json/vtables.json` |
| Signatures | 505 scanned, 415 resolved | `include/patterns/patterns.hpp`, `json/patterns.json` |
| ConVars & commands | 4 150 | `include/convars/convars.hpp`, `json/convars.json` |
| Protobuf messages | full set | `include/protobufs/protobufs.hpp`, `json/protobufs.json` |

---

## Using it

### C++

Add `14197/include` to the include path and include the single entry header:

```cpp
#include <cs2.hpp>

auto pawn = *reinterpret_cast<client::C_CSPlayerPawn**>(
    reinterpret_cast<std::uintptr_t>(GetModuleHandleA("client.dll")) + offsets::client::LocalPlayerPawn);
```

`cs2.hpp` pulls in every generated header for you. Nothing else to wire up.

If you prefer the flat layout, `14197/single-file/` contains the same information split by kind (`classes.hpp` + `types.hpp` + `structs.hpp` + `sdk.hpp`).

### JSON

Every category mirrors the C++ side, so you can drive your own generator:

```python
import json

offsets = json.load(open("14197/json/offsets.json"))
print(offsets["client.dll"]["dwLocalPlayerPawn"])  # 0x2553D38
```

---

## Freshness & accuracy

- Dumped against build `14197`. After a game update, offsets drift — regenerate instead of trusting old values.
- `415 / 505` signatures resolved. The six known-stale ones are listed in `build.log` and simply fall back to their last good value.
- `json/verified_features.json` marks the classes and fields that were explicitly validated on this build.
- Offsets are **static** values for this build only; no runtime resolution or pattern scanning is applied for you.

## Regenerating

Everything here is produced by a dumper run against a live `cs2.exe`. Re-run the same tool after each patch and drop the new output into a fresh `<build>/` folder so older builds stay available.

## Credits

- Layout and generation: [cs2-sdk](https://cs2-sdk.com)
- Dumping: `cs2_dumper`, `cs2-sdk`, `dezlock-dump`

## Disclaimer

Dumps are provided as-is for reverse engineering, cheat development and tooling. Not affiliated with Valve.
