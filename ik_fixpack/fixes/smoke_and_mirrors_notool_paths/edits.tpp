// Smoke and Mirrors git-3a7449b: lib/ClassSpellTool.TPA copies three files from a no_overwrite folder that is under ClassSpellTool/ (lines 28, 29, 33)
LPF IK_FIXPACK_EDIT_EACH INT_VAR count = 3 STR_VAR
  old = "COPY ~%MOD_FOLDER%/no_overwrite/"
  new = "COPY ~%MOD_FOLDER%/ClassSpellTool/no_overwrite/"
END
