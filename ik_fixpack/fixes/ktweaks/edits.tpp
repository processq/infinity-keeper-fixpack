// ktweaks v1.06, ktweaks/setup-ktweaks.tp2 (1468 bytes): each of the seven components' game check
// (lines 11, 17, 29, 35, 41, 48, 54) accepts EET too.
LPF IK_FIXPACK_EDIT_EACH INT_VAR count = 7 STR_VAR
  old = "REQUIRE_PREDICATE (GAME_IS ~bgt~) @00000001"
  new = "REQUIRE_PREDICATE (GAME_IS ~bgt eet~) @00000001 // Infinity Keeper Fixpack: EET too"
END
