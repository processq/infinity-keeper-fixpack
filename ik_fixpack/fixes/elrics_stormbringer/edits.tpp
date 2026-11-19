// Elric's Stormbringer v1.2, 7C#Stormbringer/setup-7C#Stormbringer.tp2 (2241 bytes): in both item copies the block
// PATCH_IF !GAME_IS ~bgee bg2ee~ BEGIN (lines 13 and 34) is never closed. It holds the loop that lowers the colour
// values for the classic games and ends with the loop's END (lines 24 and 45); the price (WRITE_LONG 0x34) and the
// SAY lines that follow are for every game (they also hold the Enhanced Editions' own PATCH_IF GAME_IS ~bgee bg2ee~,
// which could never be true inside the block). So the missing END goes after the loop, before WRITE_LONG 0x34.
LPF IK_FIXPACK_EDIT STR_VAR
  old = "WRITE_LONG 0x34 25000"
  new = "END WRITE_LONG 0x34 25000"
END
LPF IK_FIXPACK_EDIT STR_VAR
  old = "WRITE_LONG 0x34 27000"
  new = "END WRITE_LONG 0x34 27000"
END
