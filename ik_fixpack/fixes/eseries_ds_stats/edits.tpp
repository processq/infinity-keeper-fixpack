// eseries/ds/ds.tph (72636 bytes): in the macro that rebuilds STATS.IDS, the variable READ_2DA_ENTRIES_NOW fills is called
// 'stats', like the array the macro then fills with SPRINT $stats(...). WeiDU 251 fills an array of that name too, so the old
// rows land in STATS.IDS. Renamed to stats_rows; nothing else changes. Each edit starts at the line before the block, must
// match exactly once, and keeps the file's own line ends.

SET ik_first = INDEX_BUFFER (CASE_SENSITIVE "COPY - ~\.\.\.inlined/ds/stats_extra\.2da~ override\([%MNL%]?%LNL%\)  READ_2DA_ENTRIES_NOW stats 2\([%MNL%]?%LNL%\)  FOR (i=0;i<stats;i\+=1) BEGIN\([%MNL%]?%LNL%\)    READ_2DA_ENTRY_FORMER stats i 0 num\([%MNL%]?%LNL%\)    READ_2DA_ENTRY_FORMER stats i 1 str")
PATCH_IF ik_first < 0 BEGIN PATCH_FAIL @1003 END
PATCH_IF (INDEX_BUFFER (CASE_SENSITIVE "COPY - ~\.\.\.inlined/ds/stats_extra\.2da~ override\([%MNL%]?%LNL%\)  READ_2DA_ENTRIES_NOW stats 2\([%MNL%]?%LNL%\)  FOR (i=0;i<stats;i\+=1) BEGIN\([%MNL%]?%LNL%\)    READ_2DA_ENTRY_FORMER stats i 0 num\([%MNL%]?%LNL%\)    READ_2DA_ENTRY_FORMER stats i 1 str" (ik_first + 1))) >= 0 BEGIN PATCH_FAIL @1004 END
REPLACE_TEXTUALLY CASE_SENSITIVE "COPY - ~\.\.\.inlined/ds/stats_extra\.2da~ override\([%MNL%]?%LNL%\)  READ_2DA_ENTRIES_NOW stats 2\([%MNL%]?%LNL%\)  FOR (i=0;i<stats;i\+=1) BEGIN\([%MNL%]?%LNL%\)    READ_2DA_ENTRY_FORMER stats i 0 num\([%MNL%]?%LNL%\)    READ_2DA_ENTRY_FORMER stats i 1 str" "COPY - ~...inlined/ds/stats_extra.2da~ override\1  READ_2DA_ENTRIES_NOW stats_rows 2\2  FOR (i=0;i<stats_rows;i+=1) BEGIN\3    READ_2DA_ENTRY_FORMER stats_rows i 0 num\4    READ_2DA_ENTRY_FORMER stats_rows i 1 str"

SET ik_first = INDEX_BUFFER (CASE_SENSITIVE "max=1\([%MNL%]?%LNL%\)  READ_2DA_ENTRIES_NOW stats 2\([%MNL%]?%LNL%\)  FOR (i=0;i<stats;i\+=1) BEGIN\([%MNL%]?%LNL%\)    READ_2DA_ENTRY_FORMER stats i 0 num\([%MNL%]?%LNL%\)    READ_2DA_ENTRY_FORMER stats i 1 str")
PATCH_IF ik_first < 0 BEGIN PATCH_FAIL @1003 END
PATCH_IF (INDEX_BUFFER (CASE_SENSITIVE "max=1\([%MNL%]?%LNL%\)  READ_2DA_ENTRIES_NOW stats 2\([%MNL%]?%LNL%\)  FOR (i=0;i<stats;i\+=1) BEGIN\([%MNL%]?%LNL%\)    READ_2DA_ENTRY_FORMER stats i 0 num\([%MNL%]?%LNL%\)    READ_2DA_ENTRY_FORMER stats i 1 str" (ik_first + 1))) >= 0 BEGIN PATCH_FAIL @1004 END
REPLACE_TEXTUALLY CASE_SENSITIVE "max=1\([%MNL%]?%LNL%\)  READ_2DA_ENTRIES_NOW stats 2\([%MNL%]?%LNL%\)  FOR (i=0;i<stats;i\+=1) BEGIN\([%MNL%]?%LNL%\)    READ_2DA_ENTRY_FORMER stats i 0 num\([%MNL%]?%LNL%\)    READ_2DA_ENTRY_FORMER stats i 1 str" "max=1\1  READ_2DA_ENTRIES_NOW stats_rows 2\2  FOR (i=0;i<stats_rows;i+=1) BEGIN\3    READ_2DA_ENTRY_FORMER stats_rows i 0 num\4    READ_2DA_ENTRY_FORMER stats_rows i 1 str"
