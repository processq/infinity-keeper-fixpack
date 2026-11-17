// Icen Archive 2, SETUP-#!ICEN-ARCHIVE.tp2 (5106 bytes): component 1's game check (line 34) accepts
// the BG2 Enhanced Edition engine too (ENGINE_IS ~bg2ee~: BG2:EE and EET). Components 0, 2 and 3 keep theirs.
LPF IK_FIXPACK_EDIT_EACH STR_VAR
  after = "BEGIN ~Excludes Party Members~"
  old = "REQUIRE_PREDICATE (ENGINE_IS ~bg2~ OR ENGINE_IS ~tob~) ~This mod can only be installed on Baldur's Gate II~"
  new = "REQUIRE_PREDICATE (ENGINE_IS ~bg2~ OR ENGINE_IS ~tob~ OR ENGINE_IS ~bg2ee~) ~This mod can only be installed on Baldur's Gate II~ // Infinity Keeper Fixpack"
END
