// Rose NPC v0.03 open beta, rose/setup-rose.tp2 (449 bytes): the game check (line 9) accepts EET too.
LPF IK_FIXPACK_EDIT STR_VAR
  old = "REQUIRE_PREDICATE (GAME_IS ~bgt~) ~This mod requires BG:Trilogy~"
  new = "REQUIRE_PREDICATE (GAME_IS ~bgt eet~) ~This mod requires BG:Trilogy~ // Infinity Keeper Fixpack: EET too"
END
