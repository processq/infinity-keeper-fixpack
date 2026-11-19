// Sorcery (QDSpontaneous) git-deff6a2, Sorcery/SetUp-Sorcery.tp2 (1406 bytes): lib/qd_spontaneous.tpa
// asks for @10000001 and @10000002 (lines 341 and 350), which Sorcery/tra/english/setup.tra does not
// define (its README: "you must include a .tra file with these strings at these exact positions").
// The strings are in our own file ik_fixpack/fixes/sorcery/strings.tra; the copy of the install script
// reads it as a second translation file of the English language.
LPF IK_FIXPACK_EDIT STR_VAR
  old = "~Sorcery/tra/english/setup.tra~"
  new = "~Sorcery/tra/english/setup.tra~ ~ik_fixpack/fixes/sorcery/strings.tra~ // Infinity Keeper Fixpack: the two missing strings"
END
