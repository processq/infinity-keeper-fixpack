// k0_iskp v4.0.0 (k0_iskp/setup-k0_iskp.tp2, 86969 bytes): two components have DESIGNATED 1095 (green_dragonscale_armour and
// potion_of_persuasiveness, lines 795 and 803); WeiDU lists only the first, so the potions can't be picked. The second becomes 1096.
SET ik_first = INDEX_BUFFER (CASE_SENSITIVE "BEGIN @100166 /\* potion_of_persuasiveness \*/\([%MNL%]?%LNL%\)DESIGNATED 1095")
PATCH_IF ik_first < 0 BEGIN PATCH_FAIL @1003 END
PATCH_IF (INDEX_BUFFER (CASE_SENSITIVE "BEGIN @100166 /\* potion_of_persuasiveness \*/\([%MNL%]?%LNL%\)DESIGNATED 1095" (ik_first + 1))) >= 0 BEGIN PATCH_FAIL @1004 END
REPLACE_TEXTUALLY CASE_SENSITIVE "BEGIN @100166 /\* potion_of_persuasiveness \*/\([%MNL%]?%LNL%\)DESIGNATED 1095" "BEGIN @100166 /* potion_of_persuasiveness */\1DESIGNATED 1096"
