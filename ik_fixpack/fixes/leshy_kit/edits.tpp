// Leshy/Setup-Leszy.TP2 (2784 bytes): the mod's files are in Leshy/LESHY/, but the script names Leshy\ (10 COPY sources) and
// Leszy\LESHY.2DA (the kit's ability table, a source with a misspelt folder too). Backslashes are the author's own.
LPF IK_FIXPACK_EDIT STR_VAR
  old = "~Leszy\LESHY.2DA~"
  new = "~Leshy\LESHY\LESHY.2DA~"
END
LPF IK_FIXPACK_EDIT_EACH INT_VAR count = 10 STR_VAR
  old = "COPY ~Leshy\"
  new = "COPY ~Leshy\LESHY\"
END
