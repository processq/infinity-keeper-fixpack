// Brage's Penance v1, #!Brage/dialogue.d (5224 bytes), edited in place: two quotes are wrong.
// Line 20: SetGlobal("#!Brage",GLOBAL",2) lacks the quote before GLOBAL.
// Line 77: Global("#!Brage,"GLOBAL",10) has the closing quote of the name after the comma.
LPF IK_FIXPACK_EDIT STR_VAR
  old = ~SetGlobal("#!Brage",GLOBAL",2)~
  new = ~SetGlobal("#!Brage","GLOBAL",2)~
END
LPF IK_FIXPACK_EDIT STR_VAR
  old = ~Global("#!Brage,"GLOBAL",10)~
  new = ~Global("#!Brage","GLOBAL",10)~
END
