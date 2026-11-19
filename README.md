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
- `ik_fixpack/lib/ik_fixpack.tpa`: `IK_FIXPACK_REPLACE`, `IK_FIXPACK_EDIT` and `IK_FIXPACK_EDIT_EACH`, used by the replacement fixes; `IK_FIXPACK_IDS_ADD_MISSING`, which adds to an IDS list only the names it lacks.
- `ik_fixpack/tra/<language>/setup.tra`: the messages.

## Placing each fix by hand

For plain WeiDU or another installer: install each fix you want at the place its row says, with the mod it fixes already in the game folder. A fix written for another version of a mod refuses or does nothing; it never changes the mod's own files. The component numbers are the fixpack's DESIGNATED numbers.

| Component | Fixes (version, its tp2) | Kind | Where it goes | Games |
|---|---|---|---|---|
| 100 `ik_fixpack_tidings_veil_acid` | Dark Tidings v3.2 (Tidings/Setup-Tidings.tp2) | after | Right after Dark Tidings component 0. | BG2:EE, EET |
| 110 `ik_fixpack_ub_boo_portrait` | Unfinished Business v28 (ub/setup-ub.tp2) | after | Right after Unfinished Business component 0. | BG2:EE, EET |
| 120 `ik_fixpack_ctb_english_text` | Check the Bodies v3.0 (CtB/setup-ctb.tp2) | replace | Install it before Check the Bodies. It writes setup-ctb.tp2, a corrected copy of CtB/setup-ctb.tp2; then install Check the Bodies from setup-ctb.tp2 instead of its own setup. | BG2:EE, EET |
| 130 `ik_fixpack_thalan_held_icon` | Thalantyr Item Upgrade v4.5.1 (thalan/thalan.tp2) | after | Right after Thalantyr Item Upgrade component ThalantyrItemUpgrade-Main. | BG:EE, EET |
| 140 `ik_fixpack_finchnpc_identify` | Finch NPC v6.0 (FinchNPC/FinchNPC.TP2) | after | Right after Finch NPC component FinchNPC-main. | BG:EE, SoD, EET |
| 150 `ik_fixpack_hammers_strength` | Thrown Hammers v6.1.2 (hammers/setup-hammers.tp2) | after | Right after Thrown Hammers components ThrownHammers-Add-Normal-Throwing-Hammers, ThrownHammers-1-Throwing-Weapons (after the last of them). | BG:EE, SoD, BG2:EE, EET, IWD:EE |
| 200 `ik_fixpack_bom_sounds` | Boards of Magick Item Pack 2.1 (Setup-BoM.tp2) | after | Right after Boards of Magick Item Pack component 0. | BG2:EE, EET |
| 210 `ik_fixpack_exnem_chest_items` | Exnem Vault v5 (Setup-Exnem.TP2) | after | Right after Exnem Vault component 2. | BG2:EE, EET |
| 220 `ik_fixpack_kido_whirl` | Kido NPC v7.0 (setup-kido.tp2) | after | Right after Kido NPC component 0. | BG2:EE, EET |
| 230 `ik_fixpack_kittomes_jamdak` | Kit Tomes for BGT, TuTu & BG:EE git-2da5257 (kittomes/setup-kittomes.tp2) | after | Right after Kit Tomes for BGT, TuTu & BG:EE component 6. | BG:EE, SoD, EET |
| 240 `ik_fixpack_spgaunt_bodhi` | Spellhold Gauntlet v1.16 (setup-spgaunt.tp2) | after | Right after Spellhold Gauntlet (after its last component you install). | BG2:EE, EET |
| 250 `ik_fixpack_revisedbattles_local` | Revised Battles v6.7 (RevisedBattles/Setup-RevisedBattles.tp2) | after | Right after Revised Battles component 17. | BG2:EE, EET |
| 260 `ik_fixpack_packmule_player1` | W PackMule v1.4b (w_packmule/setup-w_packmule.tp2) | after | Right after W PackMule (after its last component you install). | BG2:EE, EET |
| 270 `ik_fixpack_allison_sound_slot` | Allison One Day NPC v1.8 (allison/setup-allison.tp2) | after | Right after Allison One Day NPC component 0. | BG2:EE, EET |
| 280 `ik_fixpack_allison_ladylord` | Allison One Day NPC v1.8 (allison/setup-allison.tp2) | after | Right after Allison One Day NPC component 0. | BG2:EE, EET |
| 290 `ik_fixpack_faren_girlboy` | Faren NPC v3 (Faren/setup-faren.tp2) | after | Right after Faren NPC (after its last component you install). | BG2:EE, EET |
| 300 `ik_fixpack_yikari_player1` | Yikari NPC v1.7 to v1.8.1 (yikari/yikari.tp2) | after | Right after Yikari NPC (after its last component you install). | BG2:EE, EET |
| 310 `ik_fixpack_kit_ids` | Kido NPC v7.0 (setup-kido.tp2); Oversight v16 (Setup-Oversight.tp2); RPG Dungeon Kit Pack v1.0 (Setup-RPG-KP.tp2); Aurora NPC v1 (tobaurora/setup-tobaurora.tp2) | after | After the last of Kido NPC, Oversight, RPG Dungeon Kit Pack, Aurora NPC that you install. | BG:EE, SoD, BG2:EE, EET |
| 320 `ik_fixpack_empty_responses` | Big Picture v181-b4611 (bp/setup-bp.tp2) | after | Right after Big Picture (after its last component you install). | BG:EE, SoD, BG2:EE, EET |
| 400 `ik_fixpack_golden_horse_ee` | Golden Horse Mercenary Company 1.9e (golden_horse/golden_horse.tp2) | replace | Install it before Golden Horse Mercenary Company. It writes golden_horse.tp2, a corrected copy of golden_horse/golden_horse.tp2; then install Golden Horse Mercenary Company component 0 from golden_horse.tp2 instead of its own setup. | BG2:EE, EET |
| 410 `ik_fixpack_icen_archive_ee` | Icen Archive 2 (SETUP-#!ICEN-ARCHIVE.tp2) | replace | Install it before Icen Archive. It writes #!Icen-Archive/#!ICEN-ARCHIVE.tp2, a corrected copy of SETUP-#!ICEN-ARCHIVE.tp2; then install Icen Archive component 1 from #!Icen-Archive/#!ICEN-ARCHIVE.tp2 instead of its own setup. | BG2:EE, EET |
| 420 `ik_fixpack_ktweaks_eet` | K's Tweaks v1.06 (ktweaks/setup-ktweaks.tp2) | replace | Install it before K's Tweaks. It writes setup-ktweaks.tp2, a corrected copy of ktweaks/setup-ktweaks.tp2; then install K's Tweaks components 1, 2, 101, 102, 103, 201 from setup-ktweaks.tp2 instead of its own setup. | EET |
| 440 `ik_fixpack_wonnimchunha_ee` | wonnimchunha Portrait Mod v1 (wonnimchunha/wonnimchunha.tp2) | replace | Install it before wonnimchunha Portrait Mod. It writes wonnimchunha.tp2, a corrected copy of wonnimchunha/wonnimchunha.tp2; then install wonnimchunha Portrait Mod components 1, 2, 3, 4, 5 from wonnimchunha.tp2 instead of its own setup. | BG2:EE, EET |
| 500 `ik_fixpack_atweaks_stats_ids` | aTweaks v4.53 (atweaks/setup-atweaks.tp2) | before | Right before aTweaks' first component. | BG2:EE, EET |
| 510 `ik_fixpack_bonehill_quest` | Secret of Bone Hill (EET) v34 to git-7644535 (BonehillEET/Setup-BonehillEET.tp2) | after | Right after Secret of Bone Hill (EET) component 0. | EET |
| 520 `ik_fixpack_bp_spawns` | Big Picture v181-b4611 (bp/setup-bp.tp2) | after | Right after Big Picture components 1110, 1315 (after the last of them). | BG:EE, SoD, BG2:EE, EET |
| 530 `ik_fixpack_tlk_girlboy` | Big Picture v181-b4611 (bp/setup-bp.tp2) | after | After every component of Big Picture (it patches strings already in dialog.tlk). | BG:EE, SoD, BG2:EE, EET |
| 540 `ik_fixpack_sorcery_strings` | Sorcery (QDSpontaneous) git-deff6a2 (Sorcery/SetUp-Sorcery.tp2) | replace | Install it before Sorcery. It writes SetUp-Sorcery.tp2, a copy of Sorcery/SetUp-Sorcery.tp2 that also reads our two missing strings; then install Sorcery from that copy. | BG:EE, SoD, BG2:EE, EET, IWD:EE |
| 550 `ik_fixpack_rr_ds_stats` | Rogue Rebalancing v4.92 (rr/setup-rr.tp2) | before | Right before Rogue Rebalancing's first component: edits rr/lib/ds/ds.tph. | BG2:EE, EET |
| 560 `ik_fixpack_bp_ds_stats` | Big Picture v181-b4611 (bp/setup-bp.tp2) | before | Right before Big Picture's first component: edits BP/DS/ds.tph. | BG:EE, SoD, BG2:EE, EET |
| 570 `ik_fixpack_bpseries_ds_stats` | BP Series v0.3121 (bpseries/setup-bpseries.tp2) | before | Right before BP Series' first component: edits bpseries/ds/ds.tph. | BG:EE, SoD, BG2:EE, EET |
| 580 `ik_fixpack_c4gas_ds_stats` | Game Assistant Scripts v1.6 and git-62cc180 (c4GAS/c4GAS.tp2) | before | Right before the first component that loads Detectable Spells (buff.tpa): edits c4GAS/lib/ds/ds.tph. | BG2:EE, EET |
| 590 `ik_fixpack_eseries_ds_stats` | eSeries v3 (eseries/setup-eseries.tp2) | before | Right before eSeries' first component: edits eseries/ds/ds.tph. | BG2:EE, EET |
| 600 `ik_fixpack_item_rev_ds_stats` | Item Revisions v4 b10 (item_rev/setup-item_rev.tp2) | before | Right before Item Revisions' shield bash component: edits item_rev/ds/ds.tph. | BG2:EE, EET |
| 610 `ik_fixpack_spell_rev_ds_stats` | Spell Revisions v4.21 (spell_rev/setup-spell_rev.tp2) | before | Right before Spell Revisions' first component: edits spell_rev/lib/ds.tph. | BG2:EE, EET |

## Licence

GPL-2.0 (`LICENSE`). The mods it fixes keep their own licences; nothing of theirs is included.
