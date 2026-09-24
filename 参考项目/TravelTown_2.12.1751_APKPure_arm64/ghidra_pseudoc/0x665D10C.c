/* Ghidra 12.1.2 native pseudocode; RVA 0x665D10C; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.ActOnTappedItem; status ok */

/* WARNING: Possible PIC construction at 0x0675d248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07285398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04144590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07285758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072858ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07285958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0728598c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072859f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07285bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0727dc90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e28280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e283d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e284b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e28694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e287c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0728545c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea52cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea54a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea55bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea56d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea57ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675d8a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675d8f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675db28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675db3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675f454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675df78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675df90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675dff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675e048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675e074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675e280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675c8b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675c8d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675cbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675e638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675e750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675dbec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675d68c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0675dbf0) */
/* WARNING: Removing unreachable block (ram,0x0675dc0c) */
/* WARNING: Removing unreachable block (ram,0x0675dc28) */
/* WARNING: Removing unreachable block (ram,0x0675dc30) */
/* WARNING: Removing unreachable block (ram,0x0675dc58) */
/* WARNING: Removing unreachable block (ram,0x0675dc3c) */
/* WARNING: Removing unreachable block (ram,0x0675dc48) */
/* WARNING: Removing unreachable block (ram,0x0675dc68) */
/* WARNING: Removing unreachable block (ram,0x0675dc80) */
/* WARNING: Removing unreachable block (ram,0x0675e754) */
/* WARNING: Removing unreachable block (ram,0x0675e63c) */
/* WARNING: Removing unreachable block (ram,0x0675e644) */
/* WARNING: Removing unreachable block (ram,0x0675e650) */
/* WARNING: Removing unreachable block (ram,0x0675e69c) */
/* WARNING: Removing unreachable block (ram,0x0675e6f4) */
/* WARNING: Removing unreachable block (ram,0x0675e6fc) */
/* WARNING: Removing unreachable block (ram,0x0675e6a4) */
/* WARNING: Removing unreachable block (ram,0x0675e6bc) */
/* WARNING: Removing unreachable block (ram,0x0675e6d8) */
/* WARNING: Removing unreachable block (ram,0x0675e714) */
/* WARNING: Removing unreachable block (ram,0x0675e6e4) */
/* WARNING: Removing unreachable block (ram,0x0675e718) */
/* WARNING: Removing unreachable block (ram,0x0675e720) */
/* WARNING: Removing unreachable block (ram,0x0675e734) */
/* WARNING: Removing unreachable block (ram,0x0675cc00) */
/* WARNING: Removing unreachable block (ram,0x0675c8dc) */
/* WARNING: Removing unreachable block (ram,0x0675c8e4) */
/* WARNING: Removing unreachable block (ram,0x0675c968) */
/* WARNING: Removing unreachable block (ram,0x0675c988) */
/* WARNING: Removing unreachable block (ram,0x0675c99c) */
/* WARNING: Removing unreachable block (ram,0x0675c9dc) */
/* WARNING: Removing unreachable block (ram,0x0675ca04) */
/* WARNING: Removing unreachable block (ram,0x0675ca48) */
/* WARNING: Removing unreachable block (ram,0x0675ca50) */
/* WARNING: Removing unreachable block (ram,0x0675ca60) */
/* WARNING: Removing unreachable block (ram,0x0675cad8) */
/* WARNING: Removing unreachable block (ram,0x0675caf8) */
/* WARNING: Removing unreachable block (ram,0x0675cb14) */
/* WARNING: Removing unreachable block (ram,0x0675cafc) */
/* WARNING: Removing unreachable block (ram,0x0675caec) */
/* WARNING: Removing unreachable block (ram,0x0675cb0c) */
/* WARNING: Removing unreachable block (ram,0x0675caf4) */
/* WARNING: Removing unreachable block (ram,0x0675cb1c) */
/* WARNING: Removing unreachable block (ram,0x0675cb20) */
/* WARNING: Removing unreachable block (ram,0x0675cb68) */
/* WARNING: Removing unreachable block (ram,0x0675cb6c) */
/* WARNING: Removing unreachable block (ram,0x0675cb74) */
/* WARNING: Removing unreachable block (ram,0x0675cb7c) */
/* WARNING: Removing unreachable block (ram,0x0675cb98) */
/* WARNING: Removing unreachable block (ram,0x0675cb8c) */
/* WARNING: Removing unreachable block (ram,0x0675cb90) */
/* WARNING: Removing unreachable block (ram,0x0675cb2c) */
/* WARNING: Removing unreachable block (ram,0x0675cb30) */
/* WARNING: Removing unreachable block (ram,0x0675cb3c) */
/* WARNING: Removing unreachable block (ram,0x0675cb40) */
/* WARNING: Removing unreachable block (ram,0x0675cbb4) */
/* WARNING: Removing unreachable block (ram,0x0675cbd0) */
/* WARNING: Removing unreachable block (ram,0x0675cbd8) */
/* WARNING: Removing unreachable block (ram,0x0675cbf0) */
/* WARNING: Removing unreachable block (ram,0x0675cb60) */
/* WARNING: Removing unreachable block (ram,0x0675cba0) */
/* WARNING: Removing unreachable block (ram,0x0675c9a0) */
/* WARNING: Removing unreachable block (ram,0x0675c9cc) */
/* WARNING: Removing unreachable block (ram,0x0675c9c0) */
/* WARNING: Removing unreachable block (ram,0x0675c8fc) */
/* WARNING: Removing unreachable block (ram,0x0675c914) */
/* WARNING: Removing unreachable block (ram,0x0675c91c) */
/* WARNING: Removing unreachable block (ram,0x0675c944) */
/* WARNING: Removing unreachable block (ram,0x0675c928) */
/* WARNING: Removing unreachable block (ram,0x0675c934) */
/* WARNING: Removing unreachable block (ram,0x0675c954) */
/* WARNING: Removing unreachable block (ram,0x0675c8b8) */
/* WARNING: Removing unreachable block (ram,0x0675e284) */
/* WARNING: Removing unreachable block (ram,0x0675e288) */
/* WARNING: Removing unreachable block (ram,0x0675e75c) */
/* WARNING: Removing unreachable block (ram,0x0675e2a0) */
/* WARNING: Removing unreachable block (ram,0x0675e2a8) */
/* WARNING: Removing unreachable block (ram,0x0675e2b8) */
/* WARNING: Removing unreachable block (ram,0x0675e2f8) */
/* WARNING: Removing unreachable block (ram,0x0675e344) */
/* WARNING: Removing unreachable block (ram,0x0675e34c) */
/* WARNING: Removing unreachable block (ram,0x0675e354) */
/* WARNING: Removing unreachable block (ram,0x0675e35c) */
/* WARNING: Removing unreachable block (ram,0x0675e374) */
/* WARNING: Removing unreachable block (ram,0x0675e37c) */
/* WARNING: Removing unreachable block (ram,0x0675e3a4) */
/* WARNING: Removing unreachable block (ram,0x0675e388) */
/* WARNING: Removing unreachable block (ram,0x0675e394) */
/* WARNING: Removing unreachable block (ram,0x0675e3b4) */
/* WARNING: Removing unreachable block (ram,0x0675e3c8) */
/* WARNING: Removing unreachable block (ram,0x0675e3fc) */
/* WARNING: Removing unreachable block (ram,0x0675e410) */
/* WARNING: Removing unreachable block (ram,0x0675e428) */
/* WARNING: Removing unreachable block (ram,0x0675e42c) */
/* WARNING: Removing unreachable block (ram,0x0675e43c) */
/* WARNING: Removing unreachable block (ram,0x0675e440) */
/* WARNING: Removing unreachable block (ram,0x0675e45c) */
/* WARNING: Removing unreachable block (ram,0x0675e460) */
/* WARNING: Removing unreachable block (ram,0x0675e464) */
/* WARNING: Removing unreachable block (ram,0x0675e490) */
/* WARNING: Removing unreachable block (ram,0x0675e468) */
/* WARNING: Removing unreachable block (ram,0x0675e444) */
/* WARNING: Removing unreachable block (ram,0x0675e448) */
/* WARNING: Removing unreachable block (ram,0x0675e44c) */
/* WARNING: Removing unreachable block (ram,0x0675e484) */
/* WARNING: Removing unreachable block (ram,0x0675e450) */
/* WARNING: Removing unreachable block (ram,0x0675e470) */
/* WARNING: Removing unreachable block (ram,0x0675e47c) */
/* WARNING: Removing unreachable block (ram,0x0675e480) */
/* WARNING: Removing unreachable block (ram,0x0675e498) */
/* WARNING: Removing unreachable block (ram,0x0675e4a8) */
/* WARNING: Removing unreachable block (ram,0x0675e4ac) */
/* WARNING: Removing unreachable block (ram,0x0675e4b0) */
/* WARNING: Removing unreachable block (ram,0x0675e4b8) */
/* WARNING: Removing unreachable block (ram,0x0675e4dc) */
/* WARNING: Removing unreachable block (ram,0x0675e4f0) */
/* WARNING: Removing unreachable block (ram,0x0675e500) */
/* WARNING: Removing unreachable block (ram,0x0675e504) */
/* WARNING: Removing unreachable block (ram,0x0675e514) */
/* WARNING: Removing unreachable block (ram,0x0675e518) */
/* WARNING: Removing unreachable block (ram,0x0675e534) */
/* WARNING: Removing unreachable block (ram,0x0675e538) */
/* WARNING: Removing unreachable block (ram,0x0675e53c) */
/* WARNING: Removing unreachable block (ram,0x0675e568) */
/* WARNING: Removing unreachable block (ram,0x0675e540) */
/* WARNING: Removing unreachable block (ram,0x0675e51c) */
/* WARNING: Removing unreachable block (ram,0x0675e520) */
/* WARNING: Removing unreachable block (ram,0x0675e524) */
/* WARNING: Removing unreachable block (ram,0x0675e55c) */
/* WARNING: Removing unreachable block (ram,0x0675e528) */
/* WARNING: Removing unreachable block (ram,0x0675e548) */
/* WARNING: Removing unreachable block (ram,0x0675e554) */
/* WARNING: Removing unreachable block (ram,0x0675e558) */
/* WARNING: Removing unreachable block (ram,0x0675e570) */
/* WARNING: Removing unreachable block (ram,0x0675e580) */
/* WARNING: Removing unreachable block (ram,0x0675e584) */
/* WARNING: Removing unreachable block (ram,0x0675e588) */
/* WARNING: Removing unreachable block (ram,0x0675e590) */
/* WARNING: Removing unreachable block (ram,0x0675e5ac) */
/* WARNING: Removing unreachable block (ram,0x0675e5b4) */
/* WARNING: Removing unreachable block (ram,0x0675e5bc) */
/* WARNING: Removing unreachable block (ram,0x0675e5c4) */
/* WARNING: Removing unreachable block (ram,0x0675e5d4) */
/* WARNING: Removing unreachable block (ram,0x0675e5dc) */
/* WARNING: Removing unreachable block (ram,0x0675e5e8) */
/* WARNING: Removing unreachable block (ram,0x0675e5f0) */
/* WARNING: Removing unreachable block (ram,0x0675e5f8) */
/* WARNING: Removing unreachable block (ram,0x0675e60c) */
/* WARNING: Removing unreachable block (ram,0x0675e778) */
/* WARNING: Removing unreachable block (ram,0x0675e61c) */
/* WARNING: Removing unreachable block (ram,0x0675e318) */
/* WARNING: Removing unreachable block (ram,0x0675c870) */
/* WARNING: Removing unreachable block (ram,0x0675c888) */
/* WARNING: Removing unreachable block (ram,0x0675c8a8) */
/* WARNING: Removing unreachable block (ram,0x0675e04c) */
/* WARNING: Removing unreachable block (ram,0x0675e050) */
/* WARNING: Removing unreachable block (ram,0x0675dff4) */
/* WARNING: Removing unreachable block (ram,0x0675dff8) */
/* WARNING: Removing unreachable block (ram,0x0675dffc) */
/* WARNING: Removing unreachable block (ram,0x0675e008) */
/* WARNING: Removing unreachable block (ram,0x0675e014) */
/* WARNING: Removing unreachable block (ram,0x0675e018) */
/* WARNING: Removing unreachable block (ram,0x0675e024) */
/* WARNING: Removing unreachable block (ram,0x0675e01c) */
/* WARNING: Removing unreachable block (ram,0x0675e000) */
/* WARNING: Removing unreachable block (ram,0x0675e028) */
/* WARNING: Removing unreachable block (ram,0x0675df94) */
/* WARNING: Removing unreachable block (ram,0x0675dfa0) */
/* WARNING: Removing unreachable block (ram,0x0675dfa4) */
/* WARNING: Removing unreachable block (ram,0x0675dfb0) */
/* WARNING: Removing unreachable block (ram,0x0675dfbc) */
/* WARNING: Removing unreachable block (ram,0x0675dfc0) */
/* WARNING: Removing unreachable block (ram,0x0675dfcc) */
/* WARNING: Removing unreachable block (ram,0x0675dfc4) */
/* WARNING: Removing unreachable block (ram,0x0675dfa8) */
/* WARNING: Removing unreachable block (ram,0x0675dfd0) */
/* WARNING: Removing unreachable block (ram,0x0675f458) */
/* WARNING: Removing unreachable block (ram,0x064a7540) */
/* WARNING: Removing unreachable block (ram,0x0675db40) */
/* WARNING: Removing unreachable block (ram,0x0675db48) */
/* WARNING: Removing unreachable block (ram,0x0675db58) */
/* WARNING: Removing unreachable block (ram,0x0675db9c) */
/* WARNING: Removing unreachable block (ram,0x0675db88) */
/* WARNING: Removing unreachable block (ram,0x0675dba4) */
/* WARNING: Removing unreachable block (ram,0x0675dc94) */
/* WARNING: Removing unreachable block (ram,0x0675dbb8) */
/* WARNING: Removing unreachable block (ram,0x0675dbd0) */
/* WARNING: Removing unreachable block (ram,0x0675db98) */
/* WARNING: Removing unreachable block (ram,0x0675dcb8) */
/* WARNING: Removing unreachable block (ram,0x0675db2c) */
/* WARNING: Removing unreachable block (ram,0x0675dcbc) */
/* WARNING: Removing unreachable block (ram,0x0675dcd4) */
/* WARNING: Removing unreachable block (ram,0x0675dd00) */
/* WARNING: Removing unreachable block (ram,0x0675dd08) */
/* WARNING: Removing unreachable block (ram,0x0675dd14) */
/* WARNING: Removing unreachable block (ram,0x0675dd7c) */
/* WARNING: Removing unreachable block (ram,0x0675ddb0) */
/* WARNING: Removing unreachable block (ram,0x0675ddd0) */
/* WARNING: Removing unreachable block (ram,0x0675dddc) */
/* WARNING: Removing unreachable block (ram,0x0675ddf4) */
/* WARNING: Removing unreachable block (ram,0x0675ddfc) */
/* WARNING: Removing unreachable block (ram,0x0675de24) */
/* WARNING: Removing unreachable block (ram,0x0675de08) */
/* WARNING: Removing unreachable block (ram,0x0675de14) */
/* WARNING: Removing unreachable block (ram,0x0675de34) */
/* WARNING: Removing unreachable block (ram,0x0675de48) */
/* WARNING: Removing unreachable block (ram,0x0675de74) */
/* WARNING: Removing unreachable block (ram,0x0675de88) */
/* WARNING: Removing unreachable block (ram,0x0675dea8) */
/* WARNING: Removing unreachable block (ram,0x0675dea0) */
/* WARNING: Removing unreachable block (ram,0x0675deb8) */
/* WARNING: Removing unreachable block (ram,0x0675decc) */
/* WARNING: Removing unreachable block (ram,0x0675ded0) */
/* WARNING: Removing unreachable block (ram,0x0675dee0) */
/* WARNING: Removing unreachable block (ram,0x0675deec) */
/* WARNING: Removing unreachable block (ram,0x0675df00) */
/* WARNING: Removing unreachable block (ram,0x0675df10) */
/* WARNING: Removing unreachable block (ram,0x0675df14) */
/* WARNING: Removing unreachable block (ram,0x0675df24) */
/* WARNING: Removing unreachable block (ram,0x0675df28) */
/* WARNING: Removing unreachable block (ram,0x0675df34) */
/* WARNING: Removing unreachable block (ram,0x0675e094) */
/* WARNING: Removing unreachable block (ram,0x0675e098) */
/* WARNING: Removing unreachable block (ram,0x0675e0ac) */
/* WARNING: Removing unreachable block (ram,0x0675e0c4) */
/* WARNING: Removing unreachable block (ram,0x0675e0d8) */
/* WARNING: Removing unreachable block (ram,0x0675e0e0) */
/* WARNING: Removing unreachable block (ram,0x0675e0fc) */
/* WARNING: Removing unreachable block (ram,0x0675e104) */
/* WARNING: Removing unreachable block (ram,0x0675e10c) */
/* WARNING: Removing unreachable block (ram,0x0675e114) */
/* WARNING: Removing unreachable block (ram,0x0675e124) */
/* WARNING: Removing unreachable block (ram,0x0675e12c) */
/* WARNING: Removing unreachable block (ram,0x0675e194) */
/* WARNING: Removing unreachable block (ram,0x0675e1d8) */
/* WARNING: Removing unreachable block (ram,0x0675e270) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */
/* WARNING: Removing unreachable block (ram,0x0675e140) */
/* WARNING: Removing unreachable block (ram,0x0675e158) */
/* WARNING: Removing unreachable block (ram,0x0675e160) */
/* WARNING: Removing unreachable block (ram,0x0675e17c) */
/* WARNING: Removing unreachable block (ram,0x0675e174) */
/* WARNING: Removing unreachable block (ram,0x0675e188) */
/* WARNING: Removing unreachable block (ram,0x0675df6c) */
/* WARNING: Removing unreachable block (ram,0x0675df7c) */
/* WARNING: Removing unreachable block (ram,0x0675e078) */
/* WARNING: Removing unreachable block (ram,0x0675df8c) */
/* WARNING: Removing unreachable block (ram,0x0675df74) */
/* WARNING: Removing unreachable block (ram,0x0675dd3c) */
/* WARNING: Removing unreachable block (ram,0x0675dd48) */
/* WARNING: Removing unreachable block (ram,0x0675dd70) */
/* WARNING: Removing unreachable block (ram,0x0675dd5c) */
/* WARNING: Removing unreachable block (ram,0x0675f378) */
/* WARNING: Removing unreachable block (ram,0x0675f390) */
/* WARNING: Removing unreachable block (ram,0x0675f3a4) */
/* WARNING: Removing unreachable block (ram,0x0675f3ac) */
/* WARNING: Removing unreachable block (ram,0x0675f3c0) */
/* WARNING: Removing unreachable block (ram,0x0675f3c8) */
/* WARNING: Removing unreachable block (ram,0x0675f3e4) */
/* WARNING: Removing unreachable block (ram,0x0675f414) */
/* WARNING: Removing unreachable block (ram,0x0675f434) */
/* WARNING: Removing unreachable block (ram,0x0675f3d4) */
/* WARNING: Removing unreachable block (ram,0x0675f3d8) */
/* WARNING: Removing unreachable block (ram,0x0675d8ac) */
/* WARNING: Removing unreachable block (ram,0x03ea57f0) */
/* WARNING: Removing unreachable block (ram,0x03ea5834) */
/* WARNING: Removing unreachable block (ram,0x03ea5838) */
/* WARNING: Removing unreachable block (ram,0x03ea56d8) */
/* WARNING: Removing unreachable block (ram,0x03ea571c) */
/* WARNING: Removing unreachable block (ram,0x03ea5720) */
/* WARNING: Removing unreachable block (ram,0x03ea55c0) */
/* WARNING: Removing unreachable block (ram,0x03ea5604) */
/* WARNING: Removing unreachable block (ram,0x03ea5608) */
/* WARNING: Removing unreachable block (ram,0x03ea54ac) */
/* WARNING: Removing unreachable block (ram,0x03ea54f0) */
/* WARNING: Removing unreachable block (ram,0x03ea54f4) */
/* WARNING: Removing unreachable block (ram,0x07286a90) */
/* WARNING: Removing unreachable block (ram,0x07285460) */
/* WARNING: Removing unreachable block (ram,0x03e287cc) */
/* WARNING: Removing unreachable block (ram,0x03e287dc) */
/* WARNING: Removing unreachable block (ram,0x03e28698) */
/* WARNING: Removing unreachable block (ram,0x03e284bc) */
/* WARNING: Removing unreachable block (ram,0x03e284cc) */
/* WARNING: Removing unreachable block (ram,0x03e283d4) */
/* WARNING: Removing unreachable block (ram,0x03e283e4) */
/* WARNING: Removing unreachable block (ram,0x03e28284) */
/* WARNING: Removing unreachable block (ram,0x03e28294) */
/* WARNING: Removing unreachable block (ram,0x0727dc94) */
/* WARNING: Removing unreachable block (ram,0x07285bc8) */
/* WARNING: Removing unreachable block (ram,0x07285bd0) */
/* WARNING: Removing unreachable block (ram,0x07285bf0) */
/* WARNING: Removing unreachable block (ram,0x07285c24) */
/* WARNING: Removing unreachable block (ram,0x07285c00) */
/* WARNING: Removing unreachable block (ram,0x072859f4) */
/* WARNING: Removing unreachable block (ram,0x07285a04) */
/* WARNING: Removing unreachable block (ram,0x07285990) */
/* WARNING: Removing unreachable block (ram,0x07285998) */
/* WARNING: Removing unreachable block (ram,0x072859ac) */
/* WARNING: Removing unreachable block (ram,0x072859bc) */
/* WARNING: Removing unreachable block (ram,0x07285a10) */
/* WARNING: Removing unreachable block (ram,0x072859c8) */
/* WARNING: Removing unreachable block (ram,0x072859d4) */
/* WARNING: Removing unreachable block (ram,0x0728595c) */
/* WARNING: Removing unreachable block (ram,0x07285978) */
/* WARNING: Removing unreachable block (ram,0x072858f0) */
/* WARNING: Removing unreachable block (ram,0x07285900) */
/* WARNING: Removing unreachable block (ram,0x07285914) */
/* WARNING: Removing unreachable block (ram,0x07285918) */
/* WARNING: Removing unreachable block (ram,0x07285a8c) */
/* WARNING: Removing unreachable block (ram,0x07285928) */
/* WARNING: Removing unreachable block (ram,0x07285a98) */
/* WARNING: Removing unreachable block (ram,0x07285a9c) */
/* WARNING: Removing unreachable block (ram,0x07285aa0) */
/* WARNING: Removing unreachable block (ram,0x07285abc) */
/* WARNING: Removing unreachable block (ram,0x07285adc) */
/* WARNING: Removing unreachable block (ram,0x07285ae8) */
/* WARNING: Removing unreachable block (ram,0x07285aec) */
/* WARNING: Removing unreachable block (ram,0x07285b04) */
/* WARNING: Removing unreachable block (ram,0x07285b0c) */
/* WARNING: Removing unreachable block (ram,0x07285b34) */
/* WARNING: Removing unreachable block (ram,0x07285b18) */
/* WARNING: Removing unreachable block (ram,0x07285b24) */
/* WARNING: Removing unreachable block (ram,0x07285b40) */
/* WARNING: Removing unreachable block (ram,0x07285b4c) */
/* WARNING: Removing unreachable block (ram,0x07285b50) */
/* WARNING: Removing unreachable block (ram,0x07285b58) */
/* WARNING: Removing unreachable block (ram,0x07285b80) */
/* WARNING: Removing unreachable block (ram,0x07285ba0) */
/* WARNING: Removing unreachable block (ram,0x07285c40) */
/* WARNING: Removing unreachable block (ram,0x07285c6c) */
/* WARNING: Removing unreachable block (ram,0x07285c80) */
/* WARNING: Removing unreachable block (ram,0x03e28114) */
/* WARNING: Removing unreachable block (ram,0x03e28130) */
/* WARNING: Removing unreachable block (ram,0x03e28138) */
/* WARNING: Removing unreachable block (ram,0x03e281c8) */
/* WARNING: Removing unreachable block (ram,0x03e28204) */
/* WARNING: Removing unreachable block (ram,0x03e28214) */
/* WARNING: Removing unreachable block (ram,0x03e28240) */
/* WARNING: Removing unreachable block (ram,0x03e282ac) */
/* WARNING: Removing unreachable block (ram,0x03e282b0) */
/* WARNING: Removing unreachable block (ram,0x03e282f0) */
/* WARNING: Removing unreachable block (ram,0x03e282fc) */
/* WARNING: Removing unreachable block (ram,0x03e28328) */
/* WARNING: Removing unreachable block (ram,0x03e283fc) */
/* WARNING: Removing unreachable block (ram,0x03e28400) */
/* WARNING: Removing unreachable block (ram,0x03e2843c) */
/* WARNING: Removing unreachable block (ram,0x03e2844c) */
/* WARNING: Removing unreachable block (ram,0x03e28478) */
/* WARNING: Removing unreachable block (ram,0x03e284e4) */
/* WARNING: Removing unreachable block (ram,0x03e284e8) */
/* WARNING: Removing unreachable block (ram,0x03e28510) */
/* WARNING: Removing unreachable block (ram,0x03e28518) */
/* WARNING: Removing unreachable block (ram,0x03e285b0) */
/* WARNING: Removing unreachable block (ram,0x03e285d4) */
/* WARNING: Removing unreachable block (ram,0x03e285dc) */
/* WARNING: Removing unreachable block (ram,0x03e286a8) */
/* WARNING: Removing unreachable block (ram,0x03e286e8) */
/* WARNING: Removing unreachable block (ram,0x03e286f4) */
/* WARNING: Removing unreachable block (ram,0x03e28720) */
/* WARNING: Removing unreachable block (ram,0x03e287f4) */
/* WARNING: Removing unreachable block (ram,0x03e287f8) */
/* WARNING: Removing unreachable block (ram,0x03e28814) */
/* WARNING: Removing unreachable block (ram,0x03e28834) */
/* WARNING: Removing unreachable block (ram,0x03e28840) */
/* WARNING: Removing unreachable block (ram,0x03e2885c) */
/* WARNING: Removing unreachable block (ram,0x03e28860) */
/* WARNING: Removing unreachable block (ram,0x03e28870) */
/* WARNING: Removing unreachable block (ram,0x03e2889c) */
/* WARNING: Removing unreachable block (ram,0x03e288a8) */
/* WARNING: Removing unreachable block (ram,0x03e288ac) */
/* WARNING: Removing unreachable block (ram,0x03e288c0) */
/* WARNING: Removing unreachable block (ram,0x03e288e4) */
/* WARNING: Removing unreachable block (ram,0x03e288ec) */
/* WARNING: Removing unreachable block (ram,0x03e28908) */
/* WARNING: Removing unreachable block (ram,0x03e28928) */
/* WARNING: Removing unreachable block (ram,0x03e28934) */
/* WARNING: Removing unreachable block (ram,0x03e28950) */
/* WARNING: Removing unreachable block (ram,0x03e28954) */
/* WARNING: Removing unreachable block (ram,0x03e28964) */
/* WARNING: Removing unreachable block (ram,0x03e28990) */
/* WARNING: Removing unreachable block (ram,0x03e2899c) */
/* WARNING: Removing unreachable block (ram,0x03e289a0) */
/* WARNING: Removing unreachable block (ram,0x03e289b4) */
/* WARNING: Removing unreachable block (ram,0x03e289d8) */
/* WARNING: Removing unreachable block (ram,0x03e289e0) */
/* WARNING: Removing unreachable block (ram,0x03e28a0c) */
/* WARNING: Removing unreachable block (ram,0x03e28a2c) */
/* WARNING: Removing unreachable block (ram,0x03e28a34) */
/* WARNING: Removing unreachable block (ram,0x03e28a3c) */
/* WARNING: Removing unreachable block (ram,0x03e28a68) */
/* WARNING: Removing unreachable block (ram,0x03e28a6c) */
/* WARNING: Removing unreachable block (ram,0x03e28a7c) */
/* WARNING: Removing unreachable block (ram,0x03e28a9c) */
/* WARNING: Removing unreachable block (ram,0x03e28aa8) */
/* WARNING: Removing unreachable block (ram,0x03e28ab4) */
/* WARNING: Removing unreachable block (ram,0x03e28abc) */
/* WARNING: Removing unreachable block (ram,0x03e28af8) */
/* WARNING: Removing unreachable block (ram,0x03e28afc) */
/* WARNING: Removing unreachable block (ram,0x03e28b28) */
/* WARNING: Removing unreachable block (ram,0x03e28b48) */
/* WARNING: Removing unreachable block (ram,0x03e28b50) */
/* WARNING: Removing unreachable block (ram,0x03e28b58) */
/* WARNING: Removing unreachable block (ram,0x03e28b84) */
/* WARNING: Removing unreachable block (ram,0x03e28b88) */
/* WARNING: Removing unreachable block (ram,0x03e28b98) */
/* WARNING: Removing unreachable block (ram,0x03e28bb8) */
/* WARNING: Removing unreachable block (ram,0x03e28bc4) */
/* WARNING: Removing unreachable block (ram,0x03e28bd0) */
/* WARNING: Removing unreachable block (ram,0x03e28bd8) */
/* WARNING: Removing unreachable block (ram,0x03e28c14) */
/* WARNING: Removing unreachable block (ram,0x03e28c18) */
/* WARNING: Removing unreachable block (ram,0x03e28c3c) */
/* WARNING: Removing unreachable block (ram,0x03e28c68) */
/* WARNING: Removing unreachable block (ram,0x03e28c70) */
/* WARNING: Removing unreachable block (ram,0x03e28c88) */
/* WARNING: Removing unreachable block (ram,0x03e28c8c) */
/* WARNING: Removing unreachable block (ram,0x03e28c90) */
/* WARNING: Removing unreachable block (ram,0x03e28cc0) */
/* WARNING: Removing unreachable block (ram,0x03e28cd0) */
/* WARNING: Removing unreachable block (ram,0x03e28cd4) */
/* WARNING: Removing unreachable block (ram,0x03e28cc8) */
/* WARNING: Removing unreachable block (ram,0x03e28ce4) */
/* WARNING: Removing unreachable block (ram,0x03e28cf8) */
/* WARNING: Removing unreachable block (ram,0x03e28d18) */
/* WARNING: Removing unreachable block (ram,0x03e28d1c) */
/* WARNING: Removing unreachable block (ram,0x03e28d68) */
/* WARNING: Removing unreachable block (ram,0x03e28ccc) */
/* WARNING: Removing unreachable block (ram,0x03e28d7c) */
/* WARNING: Removing unreachable block (ram,0x03e28d80) */
/* WARNING: Removing unreachable block (ram,0x03e28d90) */
/* WARNING: Removing unreachable block (ram,0x03e28dc0) */
/* WARNING: Removing unreachable block (ram,0x03e28dcc) */
/* WARNING: Removing unreachable block (ram,0x03e28de4) */
/* WARNING: Removing unreachable block (ram,0x03e28de8) */
/* WARNING: Removing unreachable block (ram,0x03e28e0c) */
/* WARNING: Removing unreachable block (ram,0x03e28e14) */
/* WARNING: Removing unreachable block (ram,0x055ea7a0) */
/* WARNING: Removing unreachable block (ram,0x055ea7c0) */
/* WARNING: Removing unreachable block (ram,0x055ea7d4) */
/* WARNING: Removing unreachable block (ram,0x055ea7d8) */
/* WARNING: Removing unreachable block (ram,0x055ea7ec) */
/* WARNING: Removing unreachable block (ram,0x055ea7e0) */
/* WARNING: Removing unreachable block (ram,0x055ea7f4) */
/* WARNING: Removing unreachable block (ram,0x055ea7fc) */
/* WARNING: Removing unreachable block (ram,0x055ea834) */
/* WARNING: Removing unreachable block (ram,0x055ea86c) */
/* WARNING: Removing unreachable block (ram,0x055f6d18) */
/* WARNING: Removing unreachable block (ram,0x055f6d50) */
/* WARNING: Removing unreachable block (ram,0x055f6d20) */
/* WARNING: Removing unreachable block (ram,0x055f6d28) */
/* WARNING: Removing unreachable block (ram,0x055f6d2c) */
/* WARNING: Removing unreachable block (ram,0x055f6d58) */
/* WARNING: Removing unreachable block (ram,0x055f6d5c) */
/* WARNING: Removing unreachable block (ram,0x055f6d3c) */
/* WARNING: Removing unreachable block (ram,0x057aa5e0) */
/* WARNING: Removing unreachable block (ram,0x057aa5f8) */
/* WARNING: Removing unreachable block (ram,0x057aa698) */
/* WARNING: Removing unreachable block (ram,0x057aa70c) */
/* WARNING: Removing unreachable block (ram,0x057aa6bc) */
/* WARNING: Removing unreachable block (ram,0x057aa6d0) */
/* WARNING: Removing unreachable block (ram,0x057aa708) */
/* WARNING: Removing unreachable block (ram,0x057aa634) */
/* WARNING: Removing unreachable block (ram,0x057aa648) */
/* WARNING: Removing unreachable block (ram,0x057aa728) */
/* WARNING: Removing unreachable block (ram,0x057f2848) */
/* WARNING: Removing unreachable block (ram,0x057aa668) */
/* WARNING: Removing unreachable block (ram,0x057aa748) */
/* WARNING: Removing unreachable block (ram,0x057aa710) */
/* WARNING: Removing unreachable block (ram,0x057aa67c) */
/* WARNING: Removing unreachable block (ram,0x055ea838) */
/* WARNING: Removing unreachable block (ram,0x055ea800) */
/* WARNING: Removing unreachable block (ram,0x055ea7e8) */
/* WARNING: Removing unreachable block (ram,0x055ea808) */
/* WARNING: Removing unreachable block (ram,0x055ea80c) */
/* WARNING: Removing unreachable block (ram,0x055ea820) */
/* WARNING: Removing unreachable block (ram,0x055ea824) */
/* WARNING: Removing unreachable block (ram,0x03e28be0) */
/* WARNING: Removing unreachable block (ram,0x03e28c00) */
/* WARNING: Removing unreachable block (ram,0x03e28ac4) */
/* WARNING: Removing unreachable block (ram,0x03e28ae4) */
/* WARNING: Removing unreachable block (ram,0x03e289c8) */
/* WARNING: Removing unreachable block (ram,0x03e288d4) */
/* WARNING: Removing unreachable block (ram,0x03e2872c) */
/* WARNING: Removing unreachable block (ram,0x03e28738) */
/* WARNING: Removing unreachable block (ram,0x03e28748) */
/* WARNING: Removing unreachable block (ram,0x03e28754) */
/* WARNING: Removing unreachable block (ram,0x03e28758) */
/* WARNING: Removing unreachable block (ram,0x03e28764) */
/* WARNING: Removing unreachable block (ram,0x03e2876c) */
/* WARNING: Removing unreachable block (ram,0x03e28794) */
/* WARNING: Removing unreachable block (ram,0x03e28778) */
/* WARNING: Removing unreachable block (ram,0x03e28784) */
/* WARNING: Removing unreachable block (ram,0x03e287a4) */
/* WARNING: Removing unreachable block (ram,0x03e285f0) */
/* WARNING: Removing unreachable block (ram,0x03e28600) */
/* WARNING: Removing unreachable block (ram,0x03e2860c) */
/* WARNING: Removing unreachable block (ram,0x03e28628) */
/* WARNING: Removing unreachable block (ram,0x03e28630) */
/* WARNING: Removing unreachable block (ram,0x03e28658) */
/* WARNING: Removing unreachable block (ram,0x03e2863c) */
/* WARNING: Removing unreachable block (ram,0x03e28648) */
/* WARNING: Removing unreachable block (ram,0x03e28668) */
/* WARNING: Removing unreachable block (ram,0x03e2851c) */
/* WARNING: Removing unreachable block (ram,0x03e2852c) */
/* WARNING: Removing unreachable block (ram,0x03e28538) */
/* WARNING: Removing unreachable block (ram,0x03e28544) */
/* WARNING: Removing unreachable block (ram,0x03e2854c) */
/* WARNING: Removing unreachable block (ram,0x03e28574) */
/* WARNING: Removing unreachable block (ram,0x03e28558) */
/* WARNING: Removing unreachable block (ram,0x03e28564) */
/* WARNING: Removing unreachable block (ram,0x03e28584) */
/* WARNING: Removing unreachable block (ram,0x03e28484) */
/* WARNING: Removing unreachable block (ram,0x03e28494) */
/* WARNING: Removing unreachable block (ram,0x03e28498) */
/* WARNING: Removing unreachable block (ram,0x03e28334) */
/* WARNING: Removing unreachable block (ram,0x03e28340) */
/* WARNING: Removing unreachable block (ram,0x03e28350) */
/* WARNING: Removing unreachable block (ram,0x03e2835c) */
/* WARNING: Removing unreachable block (ram,0x03e28360) */
/* WARNING: Removing unreachable block (ram,0x03e2836c) */
/* WARNING: Removing unreachable block (ram,0x03e28374) */
/* WARNING: Removing unreachable block (ram,0x03e2839c) */
/* WARNING: Removing unreachable block (ram,0x03e28380) */
/* WARNING: Removing unreachable block (ram,0x03e2838c) */
/* WARNING: Removing unreachable block (ram,0x03e283ac) */
/* WARNING: Removing unreachable block (ram,0x03e2824c) */
/* WARNING: Removing unreachable block (ram,0x03e2825c) */
/* WARNING: Removing unreachable block (ram,0x03e28260) */
/* WARNING: Removing unreachable block (ram,0x03e2813c) */
/* WARNING: Removing unreachable block (ram,0x03e2814c) */
/* WARNING: Removing unreachable block (ram,0x03e28158) */
/* WARNING: Removing unreachable block (ram,0x03e28164) */
/* WARNING: Removing unreachable block (ram,0x03e2816c) */
/* WARNING: Removing unreachable block (ram,0x03e28194) */
/* WARNING: Removing unreachable block (ram,0x03e28178) */
/* WARNING: Removing unreachable block (ram,0x03e28184) */
/* WARNING: Removing unreachable block (ram,0x03e281a4) */
/* WARNING: Removing unreachable block (ram,0x07285ba8) */
/* WARNING: Removing unreachable block (ram,0x07285ac8) */
/* WARNING: Removing unreachable block (ram,0x07285a08) */
/* WARNING: Removing unreachable block (ram,0x07285a14) */
/* WARNING: Removing unreachable block (ram,0x07285a2c) */
/* WARNING: Removing unreachable block (ram,0x07285a34) */
/* WARNING: Removing unreachable block (ram,0x07285a5c) */
/* WARNING: Removing unreachable block (ram,0x07285a40) */
/* WARNING: Removing unreachable block (ram,0x07285a4c) */
/* WARNING: Removing unreachable block (ram,0x07285a68) */
/* WARNING: Removing unreachable block (ram,0x07285a0c) */
/* WARNING: Removing unreachable block (ram,0x07285a74) */
/* WARNING: Removing unreachable block (ram,0x07285a90) */
/* WARNING: Removing unreachable block (ram,0x07285a78) */
/* WARNING: Removing unreachable block (ram,0x07285944) */
/* WARNING: Removing unreachable block (ram,0x0728575c) */
/* WARNING: Removing unreachable block (ram,0x04144594) */
/* WARNING: Removing unreachable block (ram,0x0728539c) */
/* WARNING: Removing unreachable block (ram,0x07285404) */
/* WARNING: Removing unreachable block (ram,0x07285418) */
/* WARNING: Removing unreachable block (ram,0x0728541c) */
/* WARNING: Removing unreachable block (ram,0x0728542c) */
/* WARNING: Removing unreachable block (ram,0x07285448) */
/* WARNING: Removing unreachable block (ram,0x072853a4) */
/* WARNING: Removing unreachable block (ram,0x072853ac) */
/* WARNING: Removing unreachable block (ram,0x072853cc) */
/* WARNING: Removing unreachable block (ram,0x072854bc) */
/* WARNING: Removing unreachable block (ram,0x0414446c) */
/* WARNING: Removing unreachable block (ram,0x041444d0) */
/* WARNING: Removing unreachable block (ram,0x041444a8) */
/* WARNING: Removing unreachable block (ram,0x041444d4) */
/* WARNING: Removing unreachable block (ram,0x0414451c) */
/* WARNING: Removing unreachable block (ram,0x04144528) */
/* WARNING: Removing unreachable block (ram,0x0414452c) */
/* WARNING: Removing unreachable block (ram,0x04144540) */
/* WARNING: Removing unreachable block (ram,0x0414454c) */
/* WARNING: Removing unreachable block (ram,0x04144550) */
/* WARNING: Removing unreachable block (ram,0x041445c4) */
/* WARNING: Removing unreachable block (ram,0x041445d4) */
/* WARNING: Removing unreachable block (ram,0x04144644) */
/* WARNING: Removing unreachable block (ram,0x0414466c) */
/* WARNING: Removing unreachable block (ram,0x04144678) */
/* WARNING: Removing unreachable block (ram,0x041455b4) */
/* WARNING: Removing unreachable block (ram,0x041455e0) */
/* WARNING: Removing unreachable block (ram,0x04145600) */
/* WARNING: Removing unreachable block (ram,0x04145604) */
/* WARNING: Removing unreachable block (ram,0x04145610) */
/* WARNING: Removing unreachable block (ram,0x0414561c) */
/* WARNING: Removing unreachable block (ram,0x04145624) */
/* WARNING: Removing unreachable block (ram,0x04145638) */
/* WARNING: Removing unreachable block (ram,0x04145644) */
/* WARNING: Removing unreachable block (ram,0x041456b0) */
/* WARNING: Removing unreachable block (ram,0x041456bc) */
/* WARNING: Removing unreachable block (ram,0x04145a30) */
/* WARNING: Removing unreachable block (ram,0x041456c0) */
/* WARNING: Removing unreachable block (ram,0x041456d4) */
/* WARNING: Removing unreachable block (ram,0x041456e0) */
/* WARNING: Removing unreachable block (ram,0x041456ec) */
/* WARNING: Removing unreachable block (ram,0x041456f4) */
/* WARNING: Removing unreachable block (ram,0x0414585c) */
/* WARNING: Removing unreachable block (ram,0x04145700) */
/* WARNING: Removing unreachable block (ram,0x0414570c) */
/* WARNING: Removing unreachable block (ram,0x04145868) */
/* WARNING: Removing unreachable block (ram,0x04145a34) */
/* WARNING: Removing unreachable block (ram,0x0414587c) */
/* WARNING: Removing unreachable block (ram,0x04145884) */
/* WARNING: Removing unreachable block (ram,0x04145894) */
/* WARNING: Removing unreachable block (ram,0x0414589c) */
/* WARNING: Removing unreachable block (ram,0x041458c4) */
/* WARNING: Removing unreachable block (ram,0x041458a8) */
/* WARNING: Removing unreachable block (ram,0x041458b4) */
/* WARNING: Removing unreachable block (ram,0x041458d0) */
/* WARNING: Removing unreachable block (ram,0x0414597c) */
/* WARNING: Removing unreachable block (ram,0x04145988) */
/* WARNING: Removing unreachable block (ram,0x041459a0) */
/* WARNING: Removing unreachable block (ram,0x041459a8) */
/* WARNING: Removing unreachable block (ram,0x041459d0) */
/* WARNING: Removing unreachable block (ram,0x041459b4) */
/* WARNING: Removing unreachable block (ram,0x041459c0) */
/* WARNING: Removing unreachable block (ram,0x041459dc) */
/* WARNING: Removing unreachable block (ram,0x041459e8) */
/* WARNING: Removing unreachable block (ram,0x04145a38) */
/* WARNING: Removing unreachable block (ram,0x04145a48) */
/* WARNING: Removing unreachable block (ram,0x04145a70) */
/* WARNING: Removing unreachable block (ram,0x04145a7c) */
/* WARNING: Removing unreachable block (ram,0x04145a80) */
/* WARNING: Removing unreachable block (ram,0x04145a98) */
/* WARNING: Removing unreachable block (ram,0x04145aa0) */
/* WARNING: Removing unreachable block (ram,0x04145ac8) */
/* WARNING: Removing unreachable block (ram,0x04145aac) */
/* WARNING: Removing unreachable block (ram,0x04145ab8) */
/* WARNING: Removing unreachable block (ram,0x04145ad4) */
/* WARNING: Removing unreachable block (ram,0x04145ae0) */
/* WARNING: Removing unreachable block (ram,0x04145ae4) */
/* WARNING: Removing unreachable block (ram,0x04145aec) */
/* WARNING: Removing unreachable block (ram,0x04145b34) */
/* WARNING: Removing unreachable block (ram,0x04145b40) */
/* WARNING: Removing unreachable block (ram,0x04145a54) */
/* WARNING: Removing unreachable block (ram,0x04145a6c) */
/* WARNING: Removing unreachable block (ram,0x041459ec) */
/* WARNING: Removing unreachable block (ram,0x041459f4) */
/* WARNING: Removing unreachable block (ram,0x041459f8) */
/* WARNING: Removing unreachable block (ram,0x041458e0) */
/* WARNING: Removing unreachable block (ram,0x041458f4) */
/* WARNING: Removing unreachable block (ram,0x04145900) */
/* WARNING: Removing unreachable block (ram,0x0414590c) */
/* WARNING: Removing unreachable block (ram,0x04145914) */
/* WARNING: Removing unreachable block (ram,0x0414593c) */
/* WARNING: Removing unreachable block (ram,0x04145920) */
/* WARNING: Removing unreachable block (ram,0x0414592c) */
/* WARNING: Removing unreachable block (ram,0x04145948) */
/* WARNING: Removing unreachable block (ram,0x04145650) */
/* WARNING: Removing unreachable block (ram,0x04145668) */
/* WARNING: Removing unreachable block (ram,0x04145674) */
/* WARNING: Removing unreachable block (ram,0x04145680) */
/* WARNING: Removing unreachable block (ram,0x04145688) */
/* WARNING: Removing unreachable block (ram,0x0414571c) */
/* WARNING: Removing unreachable block (ram,0x04145694) */
/* WARNING: Removing unreachable block (ram,0x041456a0) */
/* WARNING: Removing unreachable block (ram,0x04145728) */
/* WARNING: Removing unreachable block (ram,0x0414573c) */
/* WARNING: Removing unreachable block (ram,0x04145768) */
/* WARNING: Removing unreachable block (ram,0x04145780) */
/* WARNING: Removing unreachable block (ram,0x041457e8) */
/* WARNING: Removing unreachable block (ram,0x04145788) */
/* WARNING: Removing unreachable block (ram,0x041457a0) */
/* WARNING: Removing unreachable block (ram,0x041457ac) */
/* WARNING: Removing unreachable block (ram,0x041457b8) */
/* WARNING: Removing unreachable block (ram,0x041457c0) */
/* WARNING: Removing unreachable block (ram,0x04145828) */
/* WARNING: Removing unreachable block (ram,0x041457cc) */
/* WARNING: Removing unreachable block (ram,0x041457d8) */
/* WARNING: Removing unreachable block (ram,0x04145838) */
/* WARNING: Removing unreachable block (ram,0x0414584c) */
/* WARNING: Removing unreachable block (ram,0x04145a10) */
/* WARNING: Removing unreachable block (ram,0x04145a1c) */
/* WARNING: Removing unreachable block (ram,0x041445fc) */
/* WARNING: Removing unreachable block (ram,0x04144620) */
/* WARNING: Removing unreachable block (ram,0x04144624) */
/* WARNING: Removing unreachable block (ram,0x04144570) */
/* WARNING: Removing unreachable block (ram,0x04144598) */
/* WARNING: Removing unreachable block (ram,0x041445ac) */
/* WARNING: Removing unreachable block (ram,0x04144580) */
/* WARNING: Removing unreachable block (ram,0x041444b4) */
/* WARNING: Removing unreachable block (ram,0x072853dc) */
/* WARNING: Removing unreachable block (ram,0x0675d24c) */
/* WARNING: Removing unreachable block (ram,0x0675d250) */
/* WARNING: Removing unreachable block (ram,0x0675d268) */
/* WARNING: Removing unreachable block (ram,0x0675d284) */
/* WARNING: Removing unreachable block (ram,0x0675d28c) */
/* WARNING: Removing unreachable block (ram,0x0675d2b4) */
/* WARNING: Removing unreachable block (ram,0x0675d298) */
/* WARNING: Removing unreachable block (ram,0x0675d2a4) */
/* WARNING: Removing unreachable block (ram,0x0675d2c4) */
/* WARNING: Removing unreachable block (ram,0x0675d2dc) */
/* WARNING: Removing unreachable block (ram,0x0675d2f0) */
/* WARNING: Removing unreachable block (ram,0x0675d2f8) */
/* WARNING: Removing unreachable block (ram,0x0675d320) */
/* WARNING: Removing unreachable block (ram,0x0675d304) */
/* WARNING: Removing unreachable block (ram,0x0675d310) */
/* WARNING: Removing unreachable block (ram,0x0675d330) */
/* WARNING: Removing unreachable block (ram,0x0675d368) */
/* WARNING: Removing unreachable block (ram,0x0675d690) */
/* WARNING: Removing unreachable block (ram,0x0675d6c4) */
/* WARNING: Removing unreachable block (ram,0x07285548) */

long * MergeEngine_ECS_Systems_Board_BoardInteractionSystem__ActOnTappedItem
                 (long param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  undefined *puVar26;
  undefined8 uVar27;
  long lVar28;
  long unaff_x21;
  long *plVar29;
  long *plVar30;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  code *pcVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  
  puVar8 = &stack0xffffffffffffffe0;
  uVar27 = 0x7e28000;
  if ((bRam0000000007e28080 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e6760);
    func_0x03280a18(PTR_DAT_0777bfa0);
    bRam0000000007e28080 = 1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar13 = (long *)func_0x03ced81c(*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_077e6760);
    plVar14 = plVar13;
    if (((*(long *)(param_1 + 0x70) != 0) &&
        (plVar14 = (long *)func_0x03ced81c(*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_0777bfa0
                                          ), plVar13 != (long *)0x0)) && (plVar14 == (long *)0x0)) {
      *(undefined2 *)(plVar13 + 6) = 0x101;
    }
    return plVar14;
  }
  pcVar31 = MergeEngine_ECS_Systems_Board_BoardInteractionSystem__SelectItem;
  auVar33 = func_0x03280cac();
  do {
    *(code **)(puVar8 + -0x40) = pcVar31;
    *(undefined **)(puVar8 + -0x30) = unaff_x24;
    *(undefined **)(puVar8 + -0x28) = unaff_x23;
    *(undefined8 *)(puVar8 + -0x20) = unaff_x22;
    *(long *)(puVar8 + -0x18) = unaff_x21;
    *(undefined8 *)(puVar8 + -0x10) = uVar27;
    *(long *)(puVar8 + -8) = param_1;
    plVar14 = (long *)0x7e28000;
    plVar13 = param_3;
    if ((bRam0000000007e2807d & 1) == 0) {
      func_0x03280a18(PTR_DAT_07800a50);
      func_0x03280a18(PTR_DAT_0777e638);
      func_0x03280a18(PTR_DAT_077cc678);
      func_0x03280a18(PTR_DAT_07800a80);
      bRam0000000007e2807d = 1;
    }
    if ((param_3 != (long *)0x0) &&
       (plVar15 = (long *)func_0x03ced81c(param_3,*(undefined8 *)PTR_DAT_0777e638),
       plVar15 != (long *)0x0)) {
      if (*(char *)((long)plVar15 + 0x74) != '\0') {
        return plVar15;
      }
      plVar14 = (long *)(auVar33._0_8_ + 0x78);
      *plVar14 = (long)param_3;
      goto SUB_032809c4;
    }
    auVar32 = func_0x03280cac();
    lVar28 = auVar32._8_8_;
    *(undefined8 *)(puVar8 + -0x70) = 0x675d394;
    *(undefined **)(puVar8 + -0x68) = unaff_x23;
    *(undefined8 *)(puVar8 + -0x60) = 0x7e28000;
    *(long **)(puVar8 + -0x58) = param_3;
    *(undefined1 (*) [16])(puVar8 + -0x50) = auVar33;
    plVar15 = (long *)0x7e28000;
    if ((bRam0000000007e28088 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777c288);
      func_0x03280a18(PTR_DAT_0777db30);
      func_0x03280a18(PTR_DAT_077df870);
      func_0x03280a18(PTR_DAT_0777c290);
      bRam0000000007e28088 = 1;
    }
    puVar17 = PTR_DAT_077df870;
    *(undefined4 *)(puVar8 + -0x74) = 0;
    if (lVar28 != 0) {
      plVar29 = *(long **)(lVar28 + 0x28);
      plVar15 = (long *)0x0;
      if (plVar29 != (long *)0x0) {
        lVar21 = *plVar29;
        uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_077df870) {
              puVar16 = (undefined8 *)(lVar21 + (long)(*piVar25 + 3) * 0x10 + 0x138);
              goto LAB_0675d458;
            }
            uVar24 = uVar24 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar24 != 0);
        }
        plVar13 = (long *)0x3;
        puVar16 = (undefined8 *)func_0x03256b10(plVar29);
LAB_0675d458:
        uVar24 = (*(code *)*puVar16)(plVar29,puVar16[1]);
        unaff_x23 = puVar17;
        if ((uVar24 & 1) == 0) {
LAB_0675d4d0:
          plVar29 = *(long **)(lVar28 + 0x28);
          plVar15 = (long *)0x0;
          if (plVar29 != (long *)0x0) {
            lVar21 = *plVar29;
            uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar24 != 0) {
              piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == *(long *)puVar17) {
                  puVar16 = (undefined8 *)(lVar21 + (long)(*piVar25 + 5) * 0x10 + 0x138);
                  goto LAB_0675d594;
                }
                uVar24 = uVar24 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar24 != 0);
            }
            plVar13 = (long *)0x5;
            puVar16 = (undefined8 *)func_0x03256b10(plVar29);
LAB_0675d594:
            plVar15 = (long *)(*(code *)*puVar16)(plVar29,puVar16[1]);
            if (((ulong)plVar15 & 1) != 0) {
              return plVar15;
            }
            plVar29 = *(long **)(lVar28 + 0x28);
            plVar15 = (long *)0x0;
            if (plVar29 != (long *)0x0) {
              lVar21 = *plVar29;
              uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
              if (uVar24 != 0) {
                piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == *(long *)puVar17) {
                    puVar16 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
                    goto LAB_0675d5f8;
                  }
                  uVar24 = uVar24 - 1;
                  piVar25 = piVar25 + 4;
                } while (uVar24 != 0);
              }
              plVar13 = (long *)0x0;
              puVar16 = (undefined8 *)func_0x03256b10(plVar29);
LAB_0675d5f8:
              uVar24 = (*(code *)*puVar16)(plVar29,puVar16[1]);
              if ((uVar24 & 1) == 0) {
                plVar29 = *(long **)(lVar28 + 0x28);
                plVar15 = (long *)0x0;
                if (plVar29 == (long *)0x0) goto LAB_0675d910;
                lVar21 = *plVar29;
                uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
                if (uVar24 != 0) {
                  piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == *(long *)puVar17) {
                      puVar16 = (undefined8 *)(lVar21 + (long)(*piVar25 + 3) * 0x10 + 0x138);
                      goto LAB_0675d6e4;
                    }
                    uVar24 = uVar24 - 1;
                    piVar25 = piVar25 + 4;
                  } while (uVar24 != 0);
                }
                plVar13 = (long *)0x3;
                puVar16 = (undefined8 *)func_0x03256b10(plVar29);
LAB_0675d6e4:
                plVar15 = (long *)(*(code *)*puVar16)(plVar29,puVar16[1]);
                if (((ulong)plVar15 & 1) == 0) {
                  return plVar15;
                }
              }
              plVar15 = *(long **)(lVar28 + 0x28);
              if (plVar15 != (long *)0x0) {
                lVar21 = *plVar15;
                uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
                if (uVar24 != 0) {
                  piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == *(long *)puVar17) {
                      puVar16 = (undefined8 *)(lVar21 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                      goto LAB_0675d74c;
                    }
                    uVar24 = uVar24 - 1;
                    piVar25 = piVar25 + 4;
                  } while (uVar24 != 0);
                }
                plVar13 = (long *)0x1;
                puVar16 = (undefined8 *)func_0x03256b10(plVar15);
LAB_0675d74c:
                plVar14 = (long *)(*(code *)*puVar16)(plVar15,puVar16[1]);
                if (((ulong)plVar14 & 1) != 0) {
                  return plVar14;
                }
                plVar29 = *(long **)(lVar28 + 0x28);
                plVar14 = (long *)0x0;
                if (plVar29 != (long *)0x0) {
                  lVar21 = *plVar29;
                  plVar30 = *(long **)(auVar32._0_8_ + 0x28);
                  uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
                  if (uVar24 != 0) {
                    piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == *(long *)puVar17) {
                        puVar16 = (undefined8 *)(lVar21 + (long)(*piVar25 + 3) * 0x10 + 0x138);
                        goto LAB_0675d7b8;
                      }
                      uVar24 = uVar24 - 1;
                      piVar25 = piVar25 + 4;
                    } while (uVar24 != 0);
                  }
                  plVar13 = (long *)0x3;
                  puVar16 = (undefined8 *)func_0x03256b10(plVar29);
LAB_0675d7b8:
                  uVar24 = (*(code *)*puVar16)(plVar29,puVar16[1]);
                  uVar27 = *(undefined8 *)(lVar28 + 0x20);
                  plVar14 = plVar30;
                  if ((uVar24 & 1) == 0) {
                    plVar14 = (long *)0x0;
                  }
                  if ((uVar24 & 1) == 0) {
                    lVar28 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777c288);
                    auVar32._8_8_ = lVar28;
                    auVar32._0_8_ = uVar27;
                    plVar13 = (long *)0x0;
                    func_0x0686aa28(lVar28,uVar27,0,0,0,0,0);
                    plVar15 = (long *)0x0;
                    if (plVar30 != (long *)0x0) {
                      lVar21 = *(long *)PTR_DAT_0777c290;
                      *(undefined8 *)(puVar8 + -0xa0) = 0x675d8fc;
                      *(long **)(puVar8 + -0x98) = plVar30;
                      *(undefined8 *)(puVar8 + -0x90) = uVar27;
                      *(long *)(puVar8 + -0x88) = lVar28;
                      lVar23 = *(long *)(lVar21 + 0x38);
                      if (lVar23 == 0) {
                        func_0x03256878(lVar21);
                        lVar23 = *(long *)(lVar21 + 0x38);
                      }
                      lVar21 = *(long *)(lVar23 + 8);
                      *(undefined8 *)(puVar8 + -0xb0) = *(undefined8 *)(puVar8 + -0xa0);
                      *(long **)(puVar8 + -0xa0) = plVar14;
                      *(undefined8 *)(puVar8 + -0x98) = *(undefined8 *)(puVar8 + -0x98);
                      *(undefined8 *)(puVar8 + -0x90) = *(undefined8 *)(puVar8 + -0x90);
                      *(undefined8 *)(puVar8 + -0x88) = *(undefined8 *)(puVar8 + -0x88);
                      plVar14 = plVar30;
                      if ((*(long *)(lVar21 + 0x38) == 0) &&
                         (plVar14 = (long *)func_0x03280a18(PTR_DAT_0774e558),
                         *(long *)(lVar21 + 0x38) == 0)) {
                        plVar14 = (long *)func_0x03256878(lVar21);
                      }
                      if ((char)plVar30[10] != '\0') {
                        return plVar14;
                      }
                      uVar27 = **(undefined8 **)(lVar21 + 0x38);
                      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                        func_0x03280b8c();
                      }
                      uVar12 = func_0x057a51c4(uVar27,0);
                      lVar21 = 1;
                      puVar19 = (undefined *)0x0;
                      lVar23 = func_0x072869d0(plVar30,uVar12,0,1,0);
                      if (lVar23 == 0) {
                        auVar33 = func_0x03280cac();
                        uVar12 = auVar33._8_8_;
                        plVar14 = auVar33._0_8_;
                        *(undefined8 *)(puVar8 + -0x100) = unaff_x29;
                        *(undefined8 *)(puVar8 + -0xf8) = 0x3ea51c0;
                        *(undefined8 *)(puVar8 + -0xf0) = unaff_x26;
                        *(undefined8 *)(puVar8 + -0xe8) = unaff_x25;
                        *(undefined **)(puVar8 + -0xe0) = unaff_x24;
                        *(undefined **)(puVar8 + -0xd8) = puVar17;
                        *(undefined8 *)(puVar8 + -0xd0) = uVar27;
                        *(long **)(puVar8 + -200) = plVar30;
                        *(undefined8 *)(puVar8 + -0xc0) = 0;
                        *(long *)(puVar8 + -0xb8) = lVar28;
                        lVar28 = tpidr_el0;
                        *(undefined8 *)(puVar8 + -0x108) = *(undefined8 *)(lVar28 + 0x28);
                        *(undefined **)(puVar8 + -0x110) = puVar19;
                        puVar16 = *(undefined8 **)(lVar21 + 0x38);
                        plVar13 = plVar14;
                        puVar26 = puVar19;
                        if (puVar16 == (undefined8 *)0x0) {
                          plVar13 = (long *)func_0x03280a18(PTR_DAT_0774e558);
                          puVar16 = *(undefined8 **)(lVar21 + 0x38);
                          if (puVar16 == (undefined8 *)0x0) {
                            plVar13 = (long *)func_0x03256878(lVar21);
                            puVar16 = *(undefined8 **)(lVar21 + 0x38);
                          }
                        }
                        puVar17 = (undefined *)(ulong)*(uint *)(puVar16[1] + 0xfc);
                        unaff_x24 = puVar8 + (-0x110 - ((ulong)(puVar17 + 0xf) & 0x1fffffff0));
                        if ((char)plVar14[10] == '\0') {
                          unaff_x25 = *puVar16;
                          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                            func_0x03280b8c();
                          }
                          uVar27 = func_0x057a51c4(unaff_x25,0);
                          lVar23 = func_0x072869d0(plVar14,uVar27,uVar12,1,0);
                          lVar21 = *(long *)(lVar21 + 0x38);
                          puVar18 = puVar19;
                          if (-1 < *(int *)(*(long *)(lVar21 + 8) + 0x28)) {
                            puVar18 = puVar8 + -0x110;
                          }
                          puVar26 = puVar17;
                          func_0x072ce970(unaff_x24,puVar18);
                          lVar28 = func_0x03280b94(*(undefined8 *)(lVar21 + 8),unaff_x24);
                          if (lVar23 != 0) {
                            uVar27 = 0x3ea52d0;
                            puVar6 = unaff_x24;
                            lVar22 = lVar23;
                            goto SUB_072852e4;
                          }
                          func_0x03280cac();
                          uVar12 = 0;
                        }
                        else if (*(long *)(lVar28 + 0x28) == *(long *)(puVar8 + -0x108)) {
                          return plVar13;
                        }
                        auVar33 = func_0x072ce990();
                        lVar28 = auVar33._8_8_;
                        *(undefined8 *)(unaff_x24 + -0x20) = 0x3ea5304;
                        *(undefined8 *)(unaff_x24 + -0x18) = uVar12;
                        *(long *)(unaff_x24 + -0x10) = lVar21;
                        *(undefined **)(unaff_x24 + -8) = puVar19;
                        lVar21 = *(long *)(puVar26 + 0x38);
                        if (lVar21 == 0) {
                          func_0x03256878(puVar26);
                          lVar21 = *(long *)(puVar26 + 0x38);
                        }
                        lVar22 = *(long *)(lVar21 + 8);
                        *(undefined8 *)(unaff_x24 + -0x40) = *(undefined8 *)(unaff_x24 + -0x20);
                        *(undefined **)(unaff_x24 + -0x30) = unaff_x24;
                        *(undefined **)(unaff_x24 + -0x28) = puVar17;
                        *(long **)(unaff_x24 + -0x20) = plVar14;
                        *(undefined8 *)(unaff_x24 + -0x18) = *(undefined8 *)(unaff_x24 + -0x18);
                        *(undefined8 *)(unaff_x24 + -0x10) = *(undefined8 *)(unaff_x24 + -0x10);
                        *(undefined8 *)(unaff_x24 + -8) = *(undefined8 *)(unaff_x24 + -8);
                        plVar14 = *(long **)(lVar22 + 0x38);
                        lVar21 = lVar28;
                        lVar23 = lVar22;
                        if (plVar14 == (long *)0x0) {
                          func_0x03280a18(PTR_DAT_07750ac8);
                          func_0x03280a18(PTR_DAT_0774e558);
                          plVar14 = *(long **)(lVar22 + 0x38);
                          if (plVar14 == (long *)0x0) {
                            func_0x03256878(lVar22);
                            plVar14 = *(long **)(lVar22 + 0x38);
                          }
                        }
                        if ((*(byte *)(*plVar14 + 0x135) & 1) == 0) {
                          func_0x0325681c();
                        }
                        lVar20 = func_0x03280ca0();
                        func_0x04053df4(lVar20,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 8));
                        if (lVar20 != 0) {
                          plVar14 = (long *)(lVar20 + 0x10);
                          *plVar14 = lVar28;
                          goto SUB_032809c4;
                        }
                        auVar32 = func_0x03280cac();
                        *(undefined8 *)(unaff_x24 + -0x80) = 0x3ea5530;
                        *(undefined8 *)(unaff_x24 + -0x70) = 0;
                        *(undefined **)(unaff_x24 + -0x68) = puVar17;
                        *(long *)(unaff_x24 + -0x60) = lVar28;
                        *(long *)(unaff_x24 + -0x58) = lVar22;
                        *(long *)(unaff_x24 + -0x50) = auVar33._0_8_;
                        *(undefined8 *)(unaff_x24 + -0x48) = 0;
                        plVar14 = *(long **)(lVar23 + 0x38);
                        lVar28 = lVar21;
                        lVar22 = lVar23;
                        if (plVar14 == (long *)0x0) {
                          func_0x03280a18(PTR_DAT_07750ac8);
                          func_0x03280a18(PTR_DAT_0774e558);
                          plVar14 = *(long **)(lVar23 + 0x38);
                          if (plVar14 == (long *)0x0) {
                            func_0x03256878(lVar23);
                            plVar14 = *(long **)(lVar23 + 0x38);
                          }
                        }
                        if ((*(byte *)(*plVar14 + 0x135) & 1) == 0) {
                          func_0x0325681c();
                        }
                        lVar20 = func_0x03280ca0();
                        func_0x0404e308(lVar20,*(undefined8 *)(*(long *)(lVar23 + 0x38) + 8));
                        if (lVar20 != 0) {
                          plVar14 = (long *)(lVar20 + 0x10);
                          *plVar14 = lVar21;
                          goto SUB_032809c4;
                        }
                        auVar33 = func_0x03280cac();
                        *(undefined8 *)(unaff_x24 + -0xc0) = 0x3ea5644;
                        *(undefined8 *)(unaff_x24 + -0xb0) = 0;
                        *(undefined **)(unaff_x24 + -0xa8) = puVar17;
                        *(long *)(unaff_x24 + -0xa0) = lVar21;
                        *(long *)(unaff_x24 + -0x98) = lVar23;
                        *(undefined1 (*) [16])(unaff_x24 + -0x90) = auVar32;
                        plVar14 = *(long **)(lVar22 + 0x38);
                        lVar21 = lVar28;
                        lVar23 = lVar22;
                        if (plVar14 == (long *)0x0) {
                          func_0x03280a18(PTR_DAT_07750ac8);
                          func_0x03280a18(PTR_DAT_0774e558);
                          plVar14 = *(long **)(lVar22 + 0x38);
                          if (plVar14 == (long *)0x0) {
                            func_0x03256878(lVar22);
                            plVar14 = *(long **)(lVar22 + 0x38);
                          }
                        }
                        if ((*(byte *)(*plVar14 + 0x135) & 1) == 0) {
                          func_0x0325681c();
                        }
                        lVar20 = func_0x03280ca0();
                        (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 8))();
                        if (lVar20 != 0) {
                          plVar14 = (long *)(lVar20 + 0x10);
                          *plVar14 = lVar28;
                          goto SUB_032809c4;
                        }
                        auVar32 = func_0x03280cac();
                        *(undefined8 *)(unaff_x24 + -0x100) = 0x3ea575c;
                        *(undefined8 *)(unaff_x24 + -0xf0) = 0;
                        *(undefined **)(unaff_x24 + -0xe8) = puVar17;
                        *(long *)(unaff_x24 + -0xe0) = lVar28;
                        *(long *)(unaff_x24 + -0xd8) = lVar22;
                        *(undefined1 (*) [16])(unaff_x24 + -0xd0) = auVar33;
                        plVar14 = *(long **)(lVar23 + 0x38);
                        if (plVar14 == (long *)0x0) {
                          func_0x03280a18(PTR_DAT_07750ac8);
                          func_0x03280a18(PTR_DAT_0774e558);
                          plVar14 = *(long **)(lVar23 + 0x38);
                          if (plVar14 == (long *)0x0) {
                            func_0x03256878(lVar23);
                            plVar14 = *(long **)(lVar23 + 0x38);
                          }
                        }
                        if ((*(byte *)(*plVar14 + 0x135) & 1) == 0) {
                          func_0x0325681c();
                        }
                        lVar28 = func_0x03280ca0();
                        (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x38) + 8))();
                        if (lVar28 != 0) {
                          plVar14 = (long *)(lVar28 + 0x10);
                          *plVar14 = lVar21;
                          goto SUB_032809c4;
                        }
                        auVar33 = func_0x03280cac();
                        lVar28 = auVar33._8_8_;
                        plVar14 = auVar33._0_8_;
                        *(undefined8 *)(unaff_x24 + -0x120) = 0x3ea5874;
                        *(undefined1 (*) [16])(unaff_x24 + -0x110) = auVar32;
                        plVar13 = *(long **)(lVar28 + 0x38);
                        if (plVar13 == (long *)0x0) {
                          func_0x03256878(lVar28);
                          plVar13 = *(long **)(lVar28 + 0x38);
                        }
                        lVar28 = *plVar13;
                        *(undefined8 *)(unaff_x24 + -0x130) = *(undefined8 *)(unaff_x24 + -0x120);
                        *(undefined **)(unaff_x24 + -0x128) = puVar17;
                        *(long *)(unaff_x24 + -0x120) = lVar21;
                        *(long *)(unaff_x24 + -0x118) = lVar23;
                        *(undefined8 *)(unaff_x24 + -0x110) = *(undefined8 *)(unaff_x24 + -0x110);
                        *(undefined8 *)(unaff_x24 + -0x108) = *(undefined8 *)(unaff_x24 + -0x108);
                        plVar13 = plVar14;
                        if ((*(long *)(lVar28 + 0x38) == 0) &&
                           (plVar13 = (long *)func_0x03280a18(PTR_DAT_0774e558),
                           *(long *)(lVar28 + 0x38) == 0)) {
                          plVar13 = (long *)func_0x03256878(lVar28);
                        }
                        puVar17 = PTR_DAT_0774e558;
                        if ((char)plVar14[10] != '\0') {
                          return plVar13;
                        }
                        uVar27 = **(undefined8 **)(lVar28 + 0x38);
                        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                          func_0x03280b8c();
                        }
                        uVar27 = func_0x057a51c4(uVar27,0);
                        lVar23 = func_0x072869d0(plVar14,uVar27,0,0,0);
                        if (lVar23 == 0) {
                          return (long *)0x0;
                        }
                        uVar27 = **(undefined8 **)(lVar28 + 0x38);
                        if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
                          func_0x03280b8c();
                        }
                        uVar27 = func_0x057a51c4(uVar27,0);
                        lVar21 = func_0x057c1ad4(uVar27,0);
                        lVar22 = *(long *)(*(long *)(lVar28 + 0x38) + 8);
                        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                          lVar22 = func_0x0325681c(lVar22);
                        }
                        if (lVar21 == 0) {
LAB_03ea5b18:
                          lVar28 = 0;
                        }
                        else {
                          lVar28 = func_0x03280b90(lVar21,lVar22);
                          if (lVar28 == 0) {
                            func_0x03281048(lVar21,lVar22);
                            goto LAB_03ea5b18;
                          }
                        }
                        lVar21 = *(long *)(unaff_x24 + -0x110);
                        puVar19 = *(undefined **)(unaff_x24 + -0x108);
                        plVar14 = *(long **)(unaff_x24 + -0x120);
                        lVar22 = *(long *)(unaff_x24 + -0x118);
                        puVar6 = unaff_x24 + -0x100;
                        uVar27 = *(undefined8 *)(unaff_x24 + -0x130);
                        puVar17 = *(undefined **)(unaff_x24 + -0x128);
                        unaff_x24 = (undefined *)0x0;
                      }
                      else {
                        lVar21 = *(long *)(puVar8 + -0x90);
                        puVar19 = *(undefined **)(puVar8 + -0x88);
                        plVar14 = *(long **)(puVar8 + -0xa0);
                        uVar27 = *(undefined8 *)(puVar8 + -0xb0);
                        puVar6 = puVar8 + -0x80;
                        lVar22 = *(long *)(puVar8 + -0x98);
                      }
SUB_072852e4:
                      lVar20 = 0;
                      puVar9 = puVar6 + -0x30;
                      *(undefined8 *)(puVar6 + -0x30) = uVar27;
                      *(long **)(puVar6 + -0x20) = plVar14;
                      *(long *)(puVar6 + -0x18) = lVar22;
                      *(long *)(puVar6 + -0x10) = lVar21;
                      *(undefined **)(puVar6 + -8) = puVar19;
                      if ((bRam0000000007e3419a & 1) == 0) {
                        func_0x03280a18(PTR_DAT_0785dee8);
                        func_0x03280a18(PTR_DAT_0785def0);
                        func_0x03280a18(PTR_DAT_0774e8c8);
                        func_0x03280a18(PTR_DAT_0785def8);
                        func_0x03280a18(PTR_DAT_07751038);
                        func_0x03280a18(PTR_DAT_07779590);
                        bRam0000000007e3419a = 1;
                      }
                      puVar19 = PTR_DAT_07779590;
                      if (lVar28 == 0) {
                        func_0x03280cac();
                        func_0x03280cac();
                        lVar28 = 0;
                        while( true ) {
                          func_0x03280ca4(lVar28);
                          auVar34 = func_0x03280cac();
                          uVar27 = auVar34._0_8_;
                          if (auVar34._8_4_ != 1) break;
                          plVar13 = (long *)func_0x072ce910(uVar27);
                          lVar28 = *plVar13;
                          func_0x072ce920();
                          uVar24 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
                          if (uVar24 != 0) {
                            piVar25 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8c8) {
                                puVar16 = (undefined8 *)
                                          (lRam0000000007e34000 + (long)*piVar25 * 0x10 + 0x138);
                                goto LAB_072854e8;
                              }
                              uVar24 = uVar24 - 1;
                              piVar25 = piVar25 + 4;
                            } while (uVar24 != 0);
                          }
                          lVar20 = 0;
                          puVar16 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072854e8:
                          plVar13 = (long *)(*(code *)*puVar16)(0x7e34000,puVar16[1]);
                          if (lVar28 == 0) {
                            return plVar13;
                          }
                        }
                        uVar24 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
                        if (uVar24 == 0) {
LAB_07285594:
                          lVar20 = 0;
                          puVar16 = (undefined8 *)func_0x03256b10(0x7e34000);
                        }
                        else {
                          piVar25 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
                          while (*(long *)(piVar25 + -2) != *(long *)PTR_DAT_0774e8c8) {
                            uVar24 = uVar24 - 1;
                            piVar25 = piVar25 + 4;
                            if (uVar24 == 0) goto LAB_07285594;
                          }
                          puVar16 = (undefined8 *)
                                    (lRam0000000007e34000 + (long)*piVar25 * 0x10 + 0x138);
                        }
                        (*(code *)*puVar16)(0x7e34000,puVar16[1]);
                        func_0x03365958(uVar27);
                        func_0x03280ca4(0);
                        auVar33 = func_0x02f09514();
                        puVar19 = PTR_DAT_0785dec8;
                        lVar23 = auVar33._8_8_;
                        lVar21 = auVar33._0_8_;
                        *(undefined8 *)(puVar6 + -0x70) = 0x72855d4;
                        *(undefined8 *)(puVar6 + -0x68) = unaff_x25;
                        *(undefined **)(puVar6 + -0x60) = unaff_x24;
                        *(undefined **)(puVar6 + -0x58) = puVar17;
                        *(long **)(puVar6 + -0x50) = plVar14;
                        *(undefined8 *)(puVar6 + -0x48) = uVar27;
                        *(undefined8 *)(puVar6 + -0x40) = 0;
                        *(undefined8 *)(puVar6 + -0x38) = 0x7e34000;
                        plVar13 = (long *)0x7e34000;
                        if ((bRam0000000007e3419b & 1) == 0) {
                          func_0x03280a18(PTR_DAT_0785dec8);
                          func_0x03280a18(PTR_DAT_0785df00);
                          func_0x03280a18(PTR_DAT_0785ded0);
                          func_0x03280a18(PTR_DAT_0785ded8);
                          func_0x03280a18(PTR_DAT_0774e5a0);
                          func_0x03280a18(PTR_DAT_0785df08);
                          bRam0000000007e3419b = 1;
                        }
                        plVar14 = (long *)func_0x03e0c264(lVar23,*(undefined8 *)puVar19);
                        puVar26 = PTR_DAT_0785df00;
                        puVar17 = PTR_DAT_0785ded8;
                        if (((ulong)plVar14 & 1) == 0) {
LAB_07285770:
                          if (lVar23 != 0) {
                            if (*(int *)(lVar23 + 0x18) < 1) {
                              return plVar14;
                            }
                            plVar13 = (long *)0x0;
                            while( true ) {
                              puVar18 = (undefined *)
                                        func_0x0414419c(lVar23,plVar13,*(undefined8 *)puVar17);
                              unaff_x24 = puVar17;
                              if (*(long *)(lVar21 + 0x10) == 0) break;
                              plVar14 = (long *)func_0x041447fc(*(long *)(lVar21 + 0x10),puVar18,
                                                                *(undefined8 *)puVar26);
                              puVar19 = puVar18;
                              if (((ulong)plVar14 & 1) != 0) {
                                if ((puVar18 == (undefined *)0x0) ||
                                   (lVar28 = *(long *)(puVar18 + 0x18), lVar28 == 0)) break;
                                plVar14 = (long *)(**(code **)(lVar28 + 0x18))
                                                            (*(undefined8 *)(lVar28 + 0x40),lVar20,
                                                             *(undefined8 *)(lVar28 + 0x28));
                              }
                              uVar11 = (int)plVar13 + 1;
                              plVar13 = (long *)(ulong)uVar11;
                              if (*(int *)(lVar23 + 0x18) <= (int)uVar11) {
                                return plVar14;
                              }
                            }
                          }
LAB_07285808:
                          func_0x03280cac();
                          plVar14 = plVar13;
                          puVar17 = puVar19;
LAB_0728580c:
                          func_0x03280cb4();
                        }
                        else {
                          if (*(int *)(lVar21 + 0x30) != 2) {
                            if (*(int *)(lVar21 + 0x30) != 1) goto LAB_07285770;
                            uVar27 = func_0x03280a2c(PTR_DAT_0774e5a0);
                            lVar23 = func_0x03280afc(uVar27,1);
                            func_0x02f0b18c(lVar20);
                            uVar27 = func_0x057dadc4(lVar20,0);
                            func_0x02f0b18c(lVar23);
                            func_0x02f176b4(lVar23,uVar27);
                            func_0x02f0965c(lVar23,0,uVar27);
                            uVar27 = func_0x03280a2c(PTR_DAT_0785df08);
                            lVar20 = func_0x0727df38(uVar27,lVar23);
                            uVar27 = func_0x03280a2c(PTR_DAT_0785df10);
                            func_0x03280b7c(lVar20,uVar27);
                          }
                          plVar14 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
                          if ((lVar20 == 0) ||
                             (puVar17 = (undefined *)func_0x057dadc4(lVar20,0), plVar13 = plVar14,
                             plVar14 == (long *)0x0)) goto LAB_07285808;
                          if ((puVar17 == (undefined *)0x0) ||
                             (lVar28 = func_0x03280b90(puVar17,*(undefined8 *)(*plVar14 + 0x40)),
                             lVar28 != 0)) {
                            if ((int)plVar14[3] == 0) goto LAB_0728580c;
                            plVar14 = plVar14 + 4;
                            *plVar14 = (long)puVar17;
SUB_032809c4:
                            if (iRam00000000080486b8 != 0) {
                              puVar1 = (ulong *)(((ulong)plVar14 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
                              do {
                                cVar2 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar3) {
                                  *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                                  cVar2 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar2 != '\0');
                            }
                            return plVar14;
                          }
                        }
                        uVar27 = func_0x03280cd0();
                        auVar33 = func_0x03280b7c(uVar27,0);
                        *(undefined8 *)(puVar6 + -0x80) = 0x728581c;
                        lVar28 = *(long *)(auVar33._0_8_ + 0x18);
                        if (lVar28 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          plVar14 = (long *)(**(code **)(lVar28 + 0x18))
                                                      (*(undefined8 *)(lVar28 + 0x40),auVar33._8_8_,
                                                       *(undefined8 *)(lVar28 + 0x28));
                          return plVar14;
                        }
                        lVar28 = func_0x03280cac();
                        puVar26 = PTR_DAT_0785df18;
                        puVar9 = puVar6 + -0xc0;
                        *(undefined8 *)(puVar6 + -0xc0) = 0x7285840;
                        *(undefined **)(puVar6 + -0xb0) = unaff_x24;
                        *(undefined **)(puVar6 + -0xa8) = puVar17;
                        *(long **)(puVar6 + -0xa0) = plVar14;
                        *(long *)(puVar6 + -0x98) = lVar21;
                        *(long *)(puVar6 + -0x90) = lVar23;
                        *(long *)(puVar6 + -0x88) = lVar20;
                        lVar23 = 0x7e34000;
                        if ((bRam0000000007e3419c & 1) == 0) {
                          func_0x03280a18(PTR_DAT_0785df20);
                          func_0x03280a18(PTR_DAT_0785dee8);
                          func_0x03280a18(PTR_DAT_0785def0);
                          func_0x03280a18(PTR_DAT_0774e8c8);
                          func_0x03280a18(PTR_DAT_0785df18);
                          func_0x03280a18(PTR_DAT_0779c2d8);
                          func_0x03280a18(PTR_DAT_0785def8);
                          func_0x03280a18(PTR_DAT_0777b740);
                          func_0x03280a18(PTR_DAT_0776da98);
                          func_0x03280a18(PTR_DAT_0776daa0);
                          bRam0000000007e3419c = 1;
                        }
                        plVar14 = (long *)(ulong)*(byte *)(lVar28 + 0x34);
                        uVar27 = 0x72858f0;
                      }
                      else {
                        uVar27 = func_0x057dadc4(lVar28,0);
                        puVar26 = *(undefined **)(lVar23 + 0x20);
                        if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
                          func_0x03280b8c(*(long *)puVar19);
                        }
                        uVar11 = func_0x0727e0ec(uVar27,puVar26);
                        plVar14 = (long *)(ulong)(uVar11 & 1);
                        uVar27 = 0x728539c;
                      }
                      if (((ulong)plVar14 & 1) != 0) {
                        return plVar14;
                      }
                      *(undefined8 *)(puVar9 + -0x10) = uVar27;
                      *(undefined **)(puVar9 + -8) = puVar26;
                      uVar27 = func_0x03280a2c(PTR_DAT_0785dbe8);
                      puVar17 = PTR_DAT_0777c990;
                      *(undefined8 *)(puVar9 + -0x30) = 0x727dc94;
                      *(long *)(puVar9 + -0x28) = lVar23;
                      *(long *)(puVar9 + -0x20) = lVar28;
                      *(undefined **)(puVar9 + -0x18) = puVar26;
                      if ((bRam0000000007e34146 & 1) == 0) {
                        func_0x03280a18(PTR_DAT_0777c990);
                        bRam0000000007e34146 = 1;
                      }
                      plVar14 = (long *)func_0x03280ca0(*(undefined8 *)puVar17);
                      func_0x072c77f8(plVar14,uVar27,0);
                      return plVar14;
                    }
                  }
                  else {
                    plVar15 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777db30);
                    func_0x06811bcc(plVar15,0);
                    plVar29 = *(long **)(lVar28 + 0x28);
                    auVar4._8_8_ = plVar29;
                    auVar4._0_8_ = uVar27;
                    auVar32._8_8_ = plVar29;
                    auVar32._0_8_ = uVar27;
                    if (plVar29 != (long *)0x0) {
                      lVar28 = *plVar29;
                      uVar24 = (ulong)*(ushort *)(lVar28 + 0x12e);
                      if (uVar24 != 0) {
                        piVar25 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar25 + -2) == *(long *)puVar17) {
                            puVar16 = (undefined8 *)(lVar28 + (long)(*piVar25 + 2) * 0x10 + 0x138);
                            goto LAB_0675d87c;
                          }
                          uVar24 = uVar24 - 1;
                          piVar25 = piVar25 + 4;
                        } while (uVar24 != 0);
                      }
                      plVar13 = (long *)0x2;
                      puVar16 = (undefined8 *)func_0x03256b10(plVar29);
LAB_0675d87c:
                      uVar10 = (*(code *)*puVar16)(plVar29,puVar16[1]);
                      *(undefined4 *)(puVar8 + -0x74) = uVar10;
                      lVar28 = func_0x05793b4c(puVar8 + -0x74,0);
                      auVar32 = auVar4;
                      if (plVar15 != (long *)0x0) {
                        plVar14 = plVar15 + 3;
                        *plVar14 = lVar28;
                        goto SUB_032809c4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          plVar29 = *(long **)(lVar28 + 0x28);
          plVar15 = (long *)0x0;
          if (plVar29 != (long *)0x0) {
            lVar21 = *plVar29;
            uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar24 != 0) {
              piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == *(long *)puVar17) {
                  puVar16 = (undefined8 *)(lVar21 + (long)(*piVar25 + 5) * 0x10 + 0x138);
                  goto LAB_0675d4c0;
                }
                uVar24 = uVar24 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar24 != 0);
            }
            plVar13 = (long *)0x5;
            puVar16 = (undefined8 *)func_0x03256b10(plVar29);
LAB_0675d4c0:
            uVar24 = (*(code *)*puVar16)(plVar29,puVar16[1]);
            if ((uVar24 & 1) != 0) goto LAB_0675d4d0;
            uVar27 = *(undefined8 *)(auVar32._0_8_ + 0x28);
            plVar15 = *(long **)(lVar28 + 0x20);
            plVar14 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777db30);
            func_0x06811bcc(plVar14,0);
            plVar29 = *(long **)(lVar28 + 0x28);
            auVar5._8_8_ = plVar29;
            auVar5._0_8_ = uVar27;
            auVar32._8_8_ = plVar29;
            auVar32._0_8_ = uVar27;
            if (plVar29 != (long *)0x0) {
              lVar28 = *plVar29;
              uVar24 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar24 != 0) {
                piVar25 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == *(long *)puVar17) {
                    puVar16 = (undefined8 *)(lVar28 + (long)(*piVar25 + 2) * 0x10 + 0x138);
                    goto LAB_0675d660;
                  }
                  uVar24 = uVar24 - 1;
                  piVar25 = piVar25 + 4;
                } while (uVar24 != 0);
              }
              plVar13 = (long *)0x2;
              puVar16 = (undefined8 *)func_0x03256b10(plVar29);
LAB_0675d660:
              uVar10 = (*(code *)*puVar16)(plVar29,puVar16[1]);
              *(undefined4 *)(puVar8 + -0x74) = uVar10;
              lVar28 = func_0x05793b4c(puVar8 + -0x74,0);
              auVar32 = auVar5;
              if (plVar14 != (long *)0x0) {
                plVar14 = plVar14 + 3;
                *plVar14 = lVar28;
                goto SUB_032809c4;
              }
            }
          }
        }
      }
    }
LAB_0675d910:
    auVar33 = func_0x03280cac();
    unaff_x21 = auVar33._8_8_;
    lVar28 = auVar33._0_8_;
    *(code **)(puVar8 + -0xb0) =
         MergeEngine_ECS_Systems_Board_BoardInteractionSystem__GetSelectorMode;
    *(long **)(puVar8 + -0xa0) = plVar14;
    *(long **)(puVar8 + -0x98) = plVar15;
    *(undefined1 (*) [16])(puVar8 + -0x90) = auVar32;
    unaff_x22 = 0x7e28000;
    if ((bRam0000000007e2807f & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a498);
      func_0x03280a18(PTR_DAT_07779820);
      bRam0000000007e2807f = 1;
    }
    if (unaff_x21 != 0) {
      uVar24 = func_0x069fd714(unaff_x21,0);
      if ((uVar24 & 1) != 0) {
        return (long *)0x1;
      }
      if (plVar13 != (long *)0x0) {
        lVar21 = *plVar13;
        plVar14 = *(long **)(lVar28 + 0x98);
        uVar24 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_07779820) {
              puVar16 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_0675d9d0;
            }
            uVar24 = uVar24 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar24 != 0);
        }
        puVar16 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_07779820,0);
LAB_0675d9d0:
        uVar27 = (*(code *)*puVar16)(plVar13,puVar16[1]);
        lVar28 = 0;
        if (plVar14 != (long *)0x0) {
          lVar28 = *plVar14;
          uVar24 = (ulong)*(ushort *)(lVar28 + 0x12e);
          if (uVar24 == 0) goto LAB_0675da1c;
          piVar25 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
          break;
        }
      }
    }
    auVar33 = func_0x03280cac();
    lVar21 = auVar33._0_8_;
    puVar7 = (undefined8 *)(puVar8 + -0xd0);
    *(code **)(puVar8 + -0xd0) = MergeEngine_ECS_Systems_Board_BoardInteractionSystem__SelectItem;
    *(long **)(puVar8 + -0xc0) = plVar13;
    *(long *)(puVar8 + -0xb8) = lVar28;
    if (*(long *)(lVar21 + 0x58) == 0) {
      lVar28 = func_0x03280cac();
      *(undefined8 *)(puVar8 + -0x100) = 0x675dac4;
      *(undefined **)(puVar8 + -0xf8) = unaff_x23;
      *(undefined8 *)(puVar8 + -0xf0) = 0x7e28000;
      *(long *)(puVar8 + -0xe8) = unaff_x21;
      *(long **)(puVar8 + -0xe0) = plVar13;
      *(long *)(puVar8 + -0xd8) = lVar21;
      if ((bRam0000000007e28081 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077e6500);
        func_0x03280a18(PTR_DAT_0777e638);
        func_0x03280a18(PTR_DAT_077d7588);
        func_0x03280a18(PTR_DAT_077cc678);
        bRam0000000007e28081 = 1;
      }
      plVar14 = (long *)(lVar28 + 0x70);
      *plVar14 = 0;
      goto SUB_032809c4;
    }
    param_3 = (long *)func_0x06a02444(*(long *)(lVar21 + 0x58),auVar33._8_8_,0);
    if (param_3 == (long *)0x0) {
      return (long *)0x0;
    }
    uVar27 = MergeEngine_ECS_Systems_Board_BoardInteractionSystem__GetSelectedBoardItem
                       (lVar21,param_3);
    auVar33._8_8_ = uVar27;
    auVar33._0_8_ = lVar21;
    uVar27 = *(undefined8 *)(puVar8 + -0xc0);
    param_1 = *(long *)(puVar8 + -0xb8);
    puVar8 = puVar8 + -0xb0;
    pcVar31 = (code *)*puVar7;
  } while( true );
  while( true ) {
    uVar24 = uVar24 - 1;
    piVar25 = piVar25 + 4;
    if (uVar24 == 0) break;
    if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0777a498) {
      puVar16 = (undefined8 *)(lVar28 + (long)(*piVar25 + 0x1a) * 0x10 + 0x138);
      goto LAB_0675da3c;
    }
  }
LAB_0675da1c:
  puVar16 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777a498,0x1a);
LAB_0675da3c:
  uVar24 = (*(code *)*puVar16)(plVar14,uVar27,puVar16[1]);
  uVar11 = 2;
  if ((uVar24 & 1) == 0) {
    uVar11 = 0;
  }
  return (long *)(ulong)uVar11;
}

