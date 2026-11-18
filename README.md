<p align="center">
  <img src="https://camo.githubusercontent.com/24324735352ae6ca756bfb7dcdfafb61b3eaba3a9fece140fab5078041eff4ed/68747470733a2f2f692e6962622e636f2f6d745846726a432f62616e6e65722d736861646f772e77656270" alt="Counter Strike 2" width="100%" />
  <br />
  <strong>Offsets / Dumps</strong>
</p>

# CS2 All Dumps & Offsets

Raw, machine-generated CS2 dumps: offsets, schema classes, interfaces, patterns, convars and protobufs. C++, C#, Rust, Zig and JSON — straight from the live client.

| | |
|---|---|
| **Game build** | `14198` |
| **Dumped at** | 2026-11-18 09:23 (UTC+3) |
| **Signature recovery** | `415 / 505` |
| **Modules** | 19 |

## Layout

Everything is dumped from a live `cs2.exe` process; nothing here is hand-written.

```
output/                 generated artifacts, per module where applicable
  offsets.{hpp,json,cs,rs,zig}
  buttons.{hpp,json,cs,rs,zig}
  patterns.{hpp,json}
  interfaces.{hpp,json,cs,rs,zig}
  <module>_dll.{hpp,json,cs,rs,zig}   schema classes / enums
  convars.{hpp,json}
  protobufs.{hpp,json}
  macros.hpp, cs2.hpp, entity_system.hpp
  schemas.json          aggregate of every schema module
  build.log             per-run pattern scan log
  manifest.json, info.json, verified_features.json
  flat/                 flat single-file SDK (classes, structs, types, sdk)
dumps/                  readable raw extraction
  schema/               per-module schema text lists
  hierarchy/            class hierarchy, one file per class
  internal-sdk/         internal-facing SDK view
  sdk/                  full per-module SDK tree
```

Huge raw signature JSONs (`signatures/_all-signatures.json` ≈ 400 MB) and the
`_all-modules.json` aggregate are not committed; the equivalent text lists live
in `dumps/schema/`.

## Notes

- `offsets.json` stores RVAs as decimal numbers, the code outputs use hex.
- Signature recovery is currently `415 / 505`; unresolved entries are listed at
  the top of `output/build.log`.
- Offsets and schemas are valid for the build above only — a game update
  invalidates most of them.
