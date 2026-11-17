// wonnimchunha's Portrait Mod v1, wonnimchunha/wonnimchunha.tp2 (14057 bytes): the five BG2
// components' game checks (lines 56, 60, 64, 68, 72) accept BG2:EE and EET too.
LPF IK_FIXPACK_EDIT_EACH INT_VAR count = 5 STR_VAR
  old = "GAME_IS ~SOA~ OR GAME_IS ~TOB~ ~BGII is required to install this component.~"
  new = "GAME_IS ~SOA~ OR GAME_IS ~TOB~ OR GAME_IS ~bg2ee~ OR GAME_IS ~eet~ ~BGII is required to install this component.~ // Infinity Keeper Fixpack"
END
