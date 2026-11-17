// aTweaks v4.53, atweaks/lib/ds/ds.tph (29931 bytes): Detectable Spells' setup appends its
// stats.2da to STATS.IDS and then rebuilds the file with the macro reorder_stats_ids (line 151),
// which reads STATS.IDS into the name `stats` and writes back the whole `stats` array; with WeiDU
// v251 that array also holds the read's own row/column entries, so the file gets lines such as
// "0 1" and "0 MAXHITPOINTS" beside the real ones (BG2:EE's 216 lines became 741 on a test copy),
// and the rebuild keeps one name per number, so game names at numbers stats.2da reuses are lost.
// WeiDU then can't turn those numbers back into names, and later mods that decompile and recompile
// a script using them fail. Our copy keeps the append but adds only the names STATS.IDS doesn't
// already have, and doesn't run the rebuild (Richard, 2026-11-17).
LPF IK_FIXPACK_EDIT STR_VAR
  old = "INSERT_FILE SOURCE_SIZE ~"
  new = "PATCH_IF 0 BEGIN INSERT_FILE SOURCE_SIZE ~"
END
LPF IK_FIXPACK_EDIT STR_VAR
  old = "LAM reorder_stats_ids"
  new = "END BUT_ONLY LAF IK_FIXPACK_IDS_ADD_MISSING STR_VAR ids = ~stats.ids~ from = ~atweaks/lib/ds/stats.2da~ END // Infinity Keeper Fixpack: only the names STATS.IDS lacks, no rebuild"
END
