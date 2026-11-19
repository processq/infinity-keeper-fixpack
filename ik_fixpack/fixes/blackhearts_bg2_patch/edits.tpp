// Blackhearts BG2 Patch v1.0, Blackhearts_BG2 Patch/Blackhearts_BG2 Patch.tp2 (385 bytes), line 15: the dialogue is
// compiled USING ~Blackhearts_BG2/tra/%LANGUAGE%/BHBG1script.tra~, a folder and file the archive does not have; the
// strings are in Blackhearts_BG2 Patch/tra/English/BHBG2script.tra (the LANGUAGE block lists it). Two edits, each
// matching once, so the text holds no percent sign here.
LPF IK_FIXPACK_EDIT STR_VAR
  old = "Blackhearts_BG2/tra/"
  new = "Blackhearts_BG2 Patch/tra/"
END
LPF IK_FIXPACK_EDIT STR_VAR
  old = "BHBG1script.tra"
  new = "BHBG2script.tra"
END
