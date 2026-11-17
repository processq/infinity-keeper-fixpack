# Infinity Keeper Fixpack

Fixes for known bugs in other authors' mods for the Infinity Engine Enhanced Editions, as a WeiDU mod of its own. Anyone, and any install tool, may use it; contributions are welcome through issues and pull requests.

**It never changes, copies or redistributes another author's files.** Each fix is our own work, written against one exact version of the mod it fixes.

## Two kinds of fix

- **After-patches.** A component installed right after the buggy component of another mod, fixing what that component left wrong in the game (a missing spell symbol, a file-name case, a table entry).
- **Replacement install scripts.** For a mod whose own install script is broken or refuses the Enhanced Editions before it writes anything. On the player's machine, the fix copies the author's own script, checks it is the exact version the fix was written for (its size here, its SHA-256 in Infinity Keeper), applies our line edits, and installs the mod from that copy. The copy keeps the author's file name, so other mods still see the mod as installed. This repository holds only the edits (`ik_fixpack/fixes/<mod>/edits.tpp`), never the author's script. An edit that doesn't match exactly once stops the fix, and nothing is installed.

## Where fixes come from

From the mods' own files first: every fix is checked in the mod's files before it is written, and the source (a readme, an issue, a forum thread, another fix pack) is credited in the component's comment and in `CREDITS.md`. Where a maintained fix pack already fixes a mod, use that pack instead; fixes carried over from archived fix packs are rewritten as our own edits, copied only where their licence allows, and credited.

## Layout

- `ik_fixpack/setup-ik_fixpack.tp2`: the components, each with a `DESIGNATED` number that never changes and a `LABEL` `ik_fixpack_<mod>_<what>`.
- `ik_fixpack/lib/ik_fixpack.tpa`: `IK_FIXPACK_REPLACE` and `IK_FIXPACK_EDIT`, used by the replacement fixes.
- `ik_fixpack/tra/<language>/setup.tra`: the messages.

## Licence

GPL-2.0 (`LICENSE`). The mods it fixes keep their own licences; nothing of theirs is included.
