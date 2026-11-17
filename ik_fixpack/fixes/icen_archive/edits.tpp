// Icen Archive 2, SETUP-#!ICEN-ARCHIVE.tp2 (5106 bytes): component 1's game check (line 34) accepts
// the BG2 Enhanced Edition engine too (ENGINE_IS ~bg2ee~: BG2:EE and EET). Component 0's identical
// check (line 7) changes with it: components 0 and 1 are one SUBCOMPONENT group, and WeiDU checks a
// member against the group's first member's requirements too (tpwork.ml:785-806), so line 7 alone
// skipped component 1 on BG2:EE (test). Component 0 itself still reads a folder the archive lacks;
// the catalog's fix names component 1 only. Components 2 and 3 keep their checks.
LPF IK_FIXPACK_EDIT_EACH INT_VAR count = 2 STR_VAR
  old = "REQUIRE_PREDICATE (ENGINE_IS ~bg2~ OR ENGINE_IS ~tob~) ~This mod can only be installed on Baldur's Gate II~"
  new = "REQUIRE_PREDICATE (ENGINE_IS ~bg2~ OR ENGINE_IS ~tob~ OR ENGINE_IS ~bg2ee~) ~This mod can only be installed on Baldur's Gate II~ // Infinity Keeper Fixpack"
END
