// Check the Bodies v3.0, setup-ctb.tp2 (69705 bytes): convert the English text for the Enhanced
// Editions too, as the mod already does for its other languages (lines 56 and 68).
// English wsetup.tra and wsetup-ee.tra are UTF-8 already, so both stay unconverted in English.
LPF IK_FIXPACK_EDIT STR_VAR
  old = "ACTION_IF NOT ~%LANGUAGE%~ STR_EQ ~english~ BEGIN"
  new = "ACTION_IF 1 BEGIN // Infinity Keeper Fixpack: English too"
END
LPF IK_FIXPACK_EDIT STR_VAR
  old = "ACTION_DEFINE_ARRAY charsetsNoConvertArray BEGIN wsetup-ee END"
  new = "ACTION_DEFINE_ARRAY charsetsNoConvertArray BEGIN wsetup-ee END ACTION_IF ~%LANGUAGE%~ STR_EQ ~english~ BEGIN ACTION_DEFINE_ARRAY charsetsNoConvertArray BEGIN wsetup-ee wsetup END END // Infinity Keeper Fixpack"
END
