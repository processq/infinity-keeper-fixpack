// kitanya/kitanya.tp2 (2985 bytes): the OUTER_FOR that starts "OUTER_FOR (i = 3 ; i < 19 ; ++i) BEGIN" is closed by the END that
// ends its COPY_EXISTING ... BUT_ONLY block's line group; the file then has one more END (line 75), which WeiDU's parser stops at.
// The extra END is removed with the line break before it; nothing else changes. Must match exactly once; keeps the file's own line ends.
SPRINT ik_re "BUT_ONLY\([%MNL%]?%LNL%\)\([ %TAB%]*END\)\([%MNL%]?%LNL%\)END\([%MNL%]?%LNL%\)"
SET ik_first = INDEX_BUFFER (CASE_SENSITIVE "%ik_re%")
PATCH_IF ik_first < 0 BEGIN PATCH_FAIL @1003 END
PATCH_IF (INDEX_BUFFER (CASE_SENSITIVE "%ik_re%" (ik_first + 1))) >= 0 BEGIN PATCH_FAIL @1004 END
REPLACE_TEXTUALLY CASE_SENSITIVE "%ik_re%" "BUT_ONLY\1\2\4"
