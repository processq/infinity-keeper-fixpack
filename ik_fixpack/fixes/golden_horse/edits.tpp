// Golden Horse 1.9e, golden_horse/golden_horse.tp2 (98998 bytes): the main component's game check
// accepts the Enhanced Editions too (line 16).
LPF IK_FIXPACK_EDIT STR_VAR
  old = "REQUIRE_PREDICATE (GAME_IS ~tob bgt~) @23"
  new = "REQUIRE_PREDICATE (GAME_IS ~tob bgt bg2ee eet~) @23 // Infinity Keeper Fixpack: the Enhanced Editions too"
END
