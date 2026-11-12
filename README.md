<p align="center">
  <img src="https://camo.githubusercontent.com/24324735352ae6ca756bfb7dcdfafb61b3eaba3a9fece140fab5078041eff4ed/68747470733a2f2f692e6962622e636f2f6d745846726a432f62616e6e65722d736861646f772e77656270" alt="Counter Strike 2" width="100%" />
  <br />
  <strong>Offsets / Dumps</strong>
</p>

# CS2 All Dumps & Offsets

Raw, machine-generated CS2 dumps: offsets, schema classes, interfaces, patterns, convars and protobufs. C++, C#, Rust, Zig and JSON — straight from the live client.

| | |
|---|---|
| **Game build** | `14197` |
| **Dumped at** | 2026-11-12 11:33 (UTC+3) |
| **Signature recovery** | `415 / 505` |
| **Modules** | 19 |

---

## Using it

Add [`output/`](output) to your include path and include the entry header:

```cpp
#include <cs2.hpp>

auto pawn = *reinterpret_cast<client::C_CSPlayerPawn**>(
    reinterpret_cast<std::uintptr_t>(GetModuleHandleA("client.dll")) + offsets::client::LocalPlayerPawn);
```

Other languages use the matching file of the same module:

```csharp
using CS2Dumper.Offsets;

nint pawn = ClientDll.dwLocalPlayerPawn;
```

```python
import json

offsets = json.load(open("output/offsets.json"))
print(offsets["client.dll"]["dwLocalPlayerPawn"])  # 39140664
```
