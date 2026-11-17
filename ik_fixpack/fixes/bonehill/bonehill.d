// Infinity Keeper Fixpack 510: Secret of Bone Hill (EET) dialogue fixes. Our own edits to the
// dialogues the mod compiled (BonehillEET v34 and git-7644535; see setup-ik_fixpack.tp2).

// Fabio's death variable is FABIO (bhfabio.cre), so a check for "BHFABIO" never matches: the
// mayor, Fair and Harper never hand over to him.
REPLACE_TRIGGER_TEXT ~BHARRNES~ ~ValidForPartyDialog[ue]*("[Bb][Hh][Ff][Aa][Bb][Ii][Oo]")~ ~ValidForPartyDialogue("FABIO")~
REPLACE_TRIGGER_TEXT ~BHFAIR~ ~ValidForPartyDialog[ue]*("[Bb][Hh][Ff][Aa][Bb][Ii][Oo]")~ ~ValidForPartyDialogue("FABIO")~
REPLACE_TRIGGER_TEXT ~BHHARPER~ ~ValidForPartyDialog[ue]*("[Bb][Hh][Ff][Aa][Bb][Ii][Oo]")~ ~ValidForPartyDialogue("FABIO")~

// Pell (state 66): the mayor's death variable is BHARRNES (BHARRNES.cre), so the water-quest
// reply's !Dead("BHARRNESS") was always true and Pell offered it after the mayor died.
REPLACE_TRIGGER_TEXT ~BHPELL~ ~!Dead("BHARRNESS")~ ~!Dead("BHARRNES")~
