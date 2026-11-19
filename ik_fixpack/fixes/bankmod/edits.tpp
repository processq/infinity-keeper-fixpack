// BankMod git-69e6372, BankMod/BankMod.tp2 (1134 bytes), two faults (lines 4-9 and 45):
// 1. The ACTION_IF block at lines 4-9 (two INCLUDEs) stands outside any component, before LANGUAGE, where WeiDU accepts
//    no actions; it is wrapped in ALWAYS ... END.
// 2. Line 45 reads EXTEND_TOP EVALUATE_BUFFER ~file.bcs~ ~file.baf~; EVALUATE_BUFFER goes after the two file names.
// Each edit must match exactly once. The patterns hold ASCII only and keep the file's own line ends.
LPF IK_FIXPACK_EDIT STR_VAR
  old = "ACTION_IF GAME_IS ~eet~ THEN BEGIN //Tutu"
  new = "ALWAYS ACTION_IF GAME_IS ~eet~ THEN BEGIN //Tutu"
END

// the END that closes the second block (the BGT one) is followed by a second END that closes ALWAYS
SET ik_first = INDEX_BUFFER (CASE_SENSITIVE "g3_bgt_cpmvars\.tpa~\([%MNL%]?%LNL%\)    END")
PATCH_IF ik_first < 0 BEGIN PATCH_FAIL @1003 END
PATCH_IF (INDEX_BUFFER (CASE_SENSITIVE "g3_bgt_cpmvars\.tpa~\([%MNL%]?%LNL%\)    END" (ik_first + 1))) >= 0 BEGIN PATCH_FAIL @1004 END
REPLACE_TEXTUALLY CASE_SENSITIVE "g3_bgt_cpmvars\.tpa~\([%MNL%]?%LNL%\)    END" "g3_bgt_cpmvars.tpa~\1    END\1END"

SET ik_first = INDEX_BUFFER (CASE_SENSITIVE "EXTEND_TOP EVALUATE_BUFFER \(~[^~]*~ ~[^~]*JSRain\.baf~\)")
PATCH_IF ik_first < 0 BEGIN PATCH_FAIL @1003 END
PATCH_IF (INDEX_BUFFER (CASE_SENSITIVE "EXTEND_TOP EVALUATE_BUFFER \(~[^~]*~ ~[^~]*JSRain\.baf~\)" (ik_first + 1))) >= 0 BEGIN PATCH_FAIL @1004 END
REPLACE_TEXTUALLY CASE_SENSITIVE "EXTEND_TOP EVALUATE_BUFFER \(~[^~]*~ ~[^~]*JSRain\.baf~\)" "EXTEND_TOP \1 EVALUATE_BUFFER"
