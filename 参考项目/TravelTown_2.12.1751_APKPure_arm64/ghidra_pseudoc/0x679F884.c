/* Ghidra 12.1.2 native pseudocode; RVA 0x679F884; MergeEngine.ECS.Systems.Items.ImmidateToolsSystem.ImmediateToolCollectSystem.CalculateToolsToSpawn; status ok */


/* WARNING: Possible PIC construction at 0x0689fa10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689fa98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689fbdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689fc04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068a1384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068a13ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068a13d8: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x0689fcac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068a0bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068a0c74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e3fe7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e3ff00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e4011c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e401f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e3ff68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e3ff20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068a1184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068a0ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068a0c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x068a1188) */
/* WARNING: Removing unreachable block (ram,0x03e3ff24) */
/* WARNING: Removing unreachable block (ram,0x03e3ff6c) */
/* WARNING: Removing unreachable block (ram,0x03e3ff04) */
/* WARNING: Removing unreachable block (ram,0x03e3ff28) */
/* WARNING: Removing unreachable block (ram,0x03e3ff44) */
/* WARNING: Removing unreachable block (ram,0x03e3ff70) */
/* WARNING: Removing unreachable block (ram,0x03e3ff88) */
/* WARNING: Removing unreachable block (ram,0x03e3ffa8) */
/* WARNING: Removing unreachable block (ram,0x03e401c0) */
/* WARNING: Removing unreachable block (ram,0x03e401c8) */
/* WARNING: Removing unreachable block (ram,0x03e3ff54) */
/* WARNING: Removing unreachable block (ram,0x03e3ff08) */
/* WARNING: Removing unreachable block (ram,0x03e3ffbc) */
/* WARNING: Removing unreachable block (ram,0x03e3ffc0) */
/* WARNING: Removing unreachable block (ram,0x03e3ffc8) */
/* WARNING: Removing unreachable block (ram,0x03e3ffd0) */
/* WARNING: Removing unreachable block (ram,0x03e3ffe8) */
/* WARNING: Removing unreachable block (ram,0x03e3fff0) */
/* WARNING: Removing unreachable block (ram,0x03e40018) */
/* WARNING: Removing unreachable block (ram,0x03e3fffc) */
/* WARNING: Removing unreachable block (ram,0x03e40008) */
/* WARNING: Removing unreachable block (ram,0x03e40028) */
/* WARNING: Removing unreachable block (ram,0x03e40038) */
/* WARNING: Removing unreachable block (ram,0x03e4004c) */
/* WARNING: Removing unreachable block (ram,0x03e40050) */
/* WARNING: Removing unreachable block (ram,0x03e40058) */
/* WARNING: Removing unreachable block (ram,0x03e4005c) */
/* WARNING: Removing unreachable block (ram,0x03e4006c) */
/* WARNING: Removing unreachable block (ram,0x03e40070) */
/* WARNING: Removing unreachable block (ram,0x03e40120) */
/* WARNING: Removing unreachable block (ram,0x03e4016c) */
/* WARNING: Removing unreachable block (ram,0x03e401f8) */
/* WARNING: Removing unreachable block (ram,0x03e40200) */
/* WARNING: Removing unreachable block (ram,0x03e40228) */
/* WARNING: Removing unreachable block (ram,0x03e40230) */
/* WARNING: Removing unreachable block (ram,0x03e40254) */
/* WARNING: Removing unreachable block (ram,0x03e4023c) */
/* WARNING: Removing unreachable block (ram,0x03e40248) */
/* WARNING: Removing unreachable block (ram,0x03e40264) */
/* WARNING: Removing unreachable block (ram,0x03e40178) */
/* WARNING: Removing unreachable block (ram,0x03e40190) */
/* WARNING: Removing unreachable block (ram,0x03e40198) */
/* WARNING: Removing unreachable block (ram,0x03e401d0) */
/* WARNING: Removing unreachable block (ram,0x03e401a4) */
/* WARNING: Removing unreachable block (ram,0x03e401b0) */
/* WARNING: Removing unreachable block (ram,0x03e401dc) */
/* WARNING: Removing unreachable block (ram,0x03e4007c) */
/* WARNING: Removing unreachable block (ram,0x03e4008c) */
/* WARNING: Removing unreachable block (ram,0x03e40090) */
/* WARNING: Removing unreachable block (ram,0x03e40098) */
/* WARNING: Removing unreachable block (ram,0x03e4009c) */
/* WARNING: Removing unreachable block (ram,0x03e400ac) */
/* WARNING: Removing unreachable block (ram,0x03e400b0) */
/* WARNING: Removing unreachable block (ram,0x03e400f0) */
/* WARNING: Removing unreachable block (ram,0x03e400f4) */
/* WARNING: Removing unreachable block (ram,0x03e4010c) */
/* WARNING: Removing unreachable block (ram,0x03e40110) */
/* WARNING: Removing unreachable block (ram,0x03e3fe80) */
/* WARNING: Removing unreachable block (ram,0x03e3fe84) */
/* WARNING: Removing unreachable block (ram,0x03e3fea4) */
/* WARNING: Removing unreachable block (ram,0x03e3fea8) */
/* WARNING: Removing unreachable block (ram,0x03e3fec0) */
/* WARNING: Removing unreachable block (ram,0x03e3fedc) */
/* WARNING: Removing unreachable block (ram,0x03e3ff0c) */
/* WARNING: Removing unreachable block (ram,0x03e3feec) */
/* WARNING: Removing unreachable block (ram,0x068a0c78) */
/* WARNING: Removing unreachable block (ram,0x068a0c94) */
/* WARNING: Removing unreachable block (ram,0x068a0c98) */
/* WARNING: Removing unreachable block (ram,0x03e3fcac) */
/* WARNING: Removing unreachable block (ram,0x03e3fccc) */
/* WARNING: Removing unreachable block (ram,0x03e3fce0) */
/* WARNING: Removing unreachable block (ram,0x03e3fce8) */
/* WARNING: Removing unreachable block (ram,0x03e3fd88) */
/* WARNING: Removing unreachable block (ram,0x03e3fdc8) */
/* WARNING: Removing unreachable block (ram,0x03e3fe48) */
/* WARNING: Removing unreachable block (ram,0x03e3fe50) */
/* WARNING: Removing unreachable block (ram,0x03e402a8) */
/* WARNING: Removing unreachable block (ram,0x03e402cc) */
/* WARNING: Removing unreachable block (ram,0x03e402e0) */
/* WARNING: Removing unreachable block (ram,0x03e402e8) */
/* WARNING: Removing unreachable block (ram,0x03e40388) */
/* WARNING: Removing unreachable block (ram,0x03e403ac) */
/* WARNING: Removing unreachable block (ram,0x03e403c0) */
/* WARNING: Removing unreachable block (ram,0x03e403c8) */
/* WARNING: Removing unreachable block (ram,0x03e40468) */
/* WARNING: Removing unreachable block (ram,0x03e4048c) */
/* WARNING: Removing unreachable block (ram,0x03e404a0) */
/* WARNING: Removing unreachable block (ram,0x03e404a8) */
/* WARNING: Removing unreachable block (ram,0x03e40548) */
/* WARNING: Removing unreachable block (ram,0x03e4056c) */
/* WARNING: Removing unreachable block (ram,0x03e40580) */
/* WARNING: Removing unreachable block (ram,0x03e40588) */
/* WARNING: Removing unreachable block (ram,0x03e40628) */
/* WARNING: Removing unreachable block (ram,0x03e4064c) */
/* WARNING: Removing unreachable block (ram,0x03e40660) */
/* WARNING: Removing unreachable block (ram,0x03e40668) */
/* WARNING: Removing unreachable block (ram,0x03e40708) */
/* WARNING: Removing unreachable block (ram,0x03e4072c) */
/* WARNING: Removing unreachable block (ram,0x03e40740) */
/* WARNING: Removing unreachable block (ram,0x03e40748) */
/* WARNING: Removing unreachable block (ram,0x03e407e8) */
/* WARNING: Removing unreachable block (ram,0x03e4080c) */
/* WARNING: Removing unreachable block (ram,0x03e40820) */
/* WARNING: Removing unreachable block (ram,0x03e40828) */
/* WARNING: Removing unreachable block (ram,0x03e408c8) */
/* WARNING: Removing unreachable block (ram,0x03e408fc) */
/* WARNING: Removing unreachable block (ram,0x03e40934) */
/* WARNING: Removing unreachable block (ram,0x03e409f0) */
/* WARNING: Removing unreachable block (ram,0x03e40a14) */
/* WARNING: Removing unreachable block (ram,0x03e40a28) */
/* WARNING: Removing unreachable block (ram,0x03e40a30) */
/* WARNING: Removing unreachable block (ram,0x03e40ad0) */
/* WARNING: Removing unreachable block (ram,0x03e40af4) */
/* WARNING: Removing unreachable block (ram,0x03e40b08) */
/* WARNING: Removing unreachable block (ram,0x03e40b10) */
/* WARNING: Removing unreachable block (ram,0x03e40bb0) */
/* WARNING: Removing unreachable block (ram,0x03e40bd8) */
/* WARNING: Removing unreachable block (ram,0x03e40c1c) */
/* WARNING: Removing unreachable block (ram,0x03e40c24) */
/* WARNING: Removing unreachable block (ram,0x03e40c50) */
/* WARNING: Removing unreachable block (ram,0x03e40d10) */
/* WARNING: Removing unreachable block (ram,0x03e40d34) */
/* WARNING: Removing unreachable block (ram,0x03e40d48) */
/* WARNING: Removing unreachable block (ram,0x03e40d50) */
/* WARNING: Removing unreachable block (ram,0x03e40df0) */
/* WARNING: Removing unreachable block (ram,0x03e40e18) */
/* WARNING: Removing unreachable block (ram,0x03e40e5c) */
/* WARNING: Removing unreachable block (ram,0x03e40e64) */
/* WARNING: Removing unreachable block (ram,0x03e40e90) */
/* WARNING: Removing unreachable block (ram,0x03e40f50) */
/* WARNING: Removing unreachable block (ram,0x03e40f84) */
/* WARNING: Removing unreachable block (ram,0x03e40fa4) */
/* WARNING: Removing unreachable block (ram,0x03e40fac) */
/* WARNING: Removing unreachable block (ram,0x03e40fc0) */
/* WARNING: Removing unreachable block (ram,0x03e40fcc) */
/* WARNING: Removing unreachable block (ram,0x03e40fd8) */
/* WARNING: Removing unreachable block (ram,0x03e40fdc) */
/* WARNING: Removing unreachable block (ram,0x03e40fe4) */
/* WARNING: Removing unreachable block (ram,0x03e40fe8) */
/* WARNING: Removing unreachable block (ram,0x03e40ff8) */
/* WARNING: Removing unreachable block (ram,0x03e40ffc) */
/* WARNING: Removing unreachable block (ram,0x03e40eb8) */
/* WARNING: Removing unreachable block (ram,0x03e40ee0) */
/* WARNING: Removing unreachable block (ram,0x03e40ee8) */
/* WARNING: Removing unreachable block (ram,0x03e40f0c) */
/* WARNING: Removing unreachable block (ram,0x03e40ef4) */
/* WARNING: Removing unreachable block (ram,0x03e40f00) */
/* WARNING: Removing unreachable block (ram,0x03e40f1c) */
/* WARNING: Removing unreachable block (ram,0x03e40d58) */
/* WARNING: Removing unreachable block (ram,0x03e40d80) */
/* WARNING: Removing unreachable block (ram,0x03e40d88) */
/* WARNING: Removing unreachable block (ram,0x03e40dac) */
/* WARNING: Removing unreachable block (ram,0x03e40d94) */
/* WARNING: Removing unreachable block (ram,0x03e40da0) */
/* WARNING: Removing unreachable block (ram,0x03e40dbc) */
/* WARNING: Removing unreachable block (ram,0x03e40c78) */
/* WARNING: Removing unreachable block (ram,0x03e40ca0) */
/* WARNING: Removing unreachable block (ram,0x03e40ca8) */
/* WARNING: Removing unreachable block (ram,0x03e40ccc) */
/* WARNING: Removing unreachable block (ram,0x03e40cb4) */
/* WARNING: Removing unreachable block (ram,0x03e40cc0) */
/* WARNING: Removing unreachable block (ram,0x03e40cdc) */
/* WARNING: Removing unreachable block (ram,0x03e40b18) */
/* WARNING: Removing unreachable block (ram,0x03e40b40) */
/* WARNING: Removing unreachable block (ram,0x03e40b48) */
/* WARNING: Removing unreachable block (ram,0x03e40b6c) */
/* WARNING: Removing unreachable block (ram,0x03e40b54) */
/* WARNING: Removing unreachable block (ram,0x03e40b60) */
/* WARNING: Removing unreachable block (ram,0x03e40b7c) */
/* WARNING: Removing unreachable block (ram,0x03e40a38) */
/* WARNING: Removing unreachable block (ram,0x03e40a60) */
/* WARNING: Removing unreachable block (ram,0x03e40a68) */
/* WARNING: Removing unreachable block (ram,0x03e40a8c) */
/* WARNING: Removing unreachable block (ram,0x03e40a74) */
/* WARNING: Removing unreachable block (ram,0x03e40a80) */
/* WARNING: Removing unreachable block (ram,0x03e40a9c) */
/* WARNING: Removing unreachable block (ram,0x03e40950) */
/* WARNING: Removing unreachable block (ram,0x03e40980) */
/* WARNING: Removing unreachable block (ram,0x03e40988) */
/* WARNING: Removing unreachable block (ram,0x03e409ac) */
/* WARNING: Removing unreachable block (ram,0x03e40994) */
/* WARNING: Removing unreachable block (ram,0x03e409a0) */
/* WARNING: Removing unreachable block (ram,0x03e409bc) */
/* WARNING: Removing unreachable block (ram,0x03e40830) */
/* WARNING: Removing unreachable block (ram,0x03e40858) */
/* WARNING: Removing unreachable block (ram,0x03e40860) */
/* WARNING: Removing unreachable block (ram,0x03e40884) */
/* WARNING: Removing unreachable block (ram,0x03e4086c) */
/* WARNING: Removing unreachable block (ram,0x03e40878) */
/* WARNING: Removing unreachable block (ram,0x03e40894) */
/* WARNING: Removing unreachable block (ram,0x03e40750) */
/* WARNING: Removing unreachable block (ram,0x03e40778) */
/* WARNING: Removing unreachable block (ram,0x03e40780) */
/* WARNING: Removing unreachable block (ram,0x03e407a4) */
/* WARNING: Removing unreachable block (ram,0x03e4078c) */
/* WARNING: Removing unreachable block (ram,0x03e40798) */
/* WARNING: Removing unreachable block (ram,0x03e407b4) */
/* WARNING: Removing unreachable block (ram,0x03e40670) */
/* WARNING: Removing unreachable block (ram,0x03e40698) */
/* WARNING: Removing unreachable block (ram,0x03e406a0) */
/* WARNING: Removing unreachable block (ram,0x03e406c4) */
/* WARNING: Removing unreachable block (ram,0x03e406ac) */
/* WARNING: Removing unreachable block (ram,0x03e406b8) */
/* WARNING: Removing unreachable block (ram,0x03e406d4) */
/* WARNING: Removing unreachable block (ram,0x03e40590) */
/* WARNING: Removing unreachable block (ram,0x03e405b8) */
/* WARNING: Removing unreachable block (ram,0x03e405c0) */
/* WARNING: Removing unreachable block (ram,0x03e405e4) */
/* WARNING: Removing unreachable block (ram,0x03e405cc) */
/* WARNING: Removing unreachable block (ram,0x03e405d8) */
/* WARNING: Removing unreachable block (ram,0x03e405f4) */
/* WARNING: Removing unreachable block (ram,0x03e404b0) */
/* WARNING: Removing unreachable block (ram,0x03e404d8) */
/* WARNING: Removing unreachable block (ram,0x03e404e0) */
/* WARNING: Removing unreachable block (ram,0x03e40504) */
/* WARNING: Removing unreachable block (ram,0x03e404ec) */
/* WARNING: Removing unreachable block (ram,0x03e404f8) */
/* WARNING: Removing unreachable block (ram,0x03e40514) */
/* WARNING: Removing unreachable block (ram,0x03e403d0) */
/* WARNING: Removing unreachable block (ram,0x03e403f8) */
/* WARNING: Removing unreachable block (ram,0x03e40400) */
/* WARNING: Removing unreachable block (ram,0x03e40424) */
/* WARNING: Removing unreachable block (ram,0x03e4040c) */
/* WARNING: Removing unreachable block (ram,0x03e40418) */
/* WARNING: Removing unreachable block (ram,0x03e40434) */
/* WARNING: Removing unreachable block (ram,0x03e402f0) */
/* WARNING: Removing unreachable block (ram,0x03e40318) */
/* WARNING: Removing unreachable block (ram,0x03e40320) */
/* WARNING: Removing unreachable block (ram,0x03e40344) */
/* WARNING: Removing unreachable block (ram,0x03e4032c) */
/* WARNING: Removing unreachable block (ram,0x03e40338) */
/* WARNING: Removing unreachable block (ram,0x03e40354) */
/* WARNING: Removing unreachable block (ram,0x03e3fe70) */
/* WARNING: Removing unreachable block (ram,0x03e3fcf0) */
/* WARNING: Removing unreachable block (ram,0x03e3fd18) */
/* WARNING: Removing unreachable block (ram,0x03e3fd20) */
/* WARNING: Removing unreachable block (ram,0x03e3fd44) */
/* WARNING: Removing unreachable block (ram,0x03e3fd2c) */
/* WARNING: Removing unreachable block (ram,0x03e3fd38) */
/* WARNING: Removing unreachable block (ram,0x03e3fd54) */
/* WARNING: Removing unreachable block (ram,0x068a0bf0) */
/* WARNING: Removing unreachable block (ram,0x0689fcb0) */
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
/* WARNING: Removing unreachable block (ram,0x072853dc) */
/* WARNING: Removing unreachable block (ram,0x068a13dc) */
/* WARNING: Removing unreachable block (ram,0x068a13e4) */
/* WARNING: Removing unreachable block (ram,0x068a13fc) */
/* WARNING: Removing unreachable block (ram,0x068a1404) */
/* WARNING: Removing unreachable block (ram,0x068a1438) */
/* WARNING: Removing unreachable block (ram,0x068a1440) */
/* WARNING: Removing unreachable block (ram,0x068a1468) */
/* WARNING: Removing unreachable block (ram,0x068a144c) */
/* WARNING: Removing unreachable block (ram,0x068a1458) */
/* WARNING: Removing unreachable block (ram,0x068a1478) */
/* WARNING: Removing unreachable block (ram,0x068a14dc) */
/* WARNING: Removing unreachable block (ram,0x03ea4d6c) */
/* WARNING: Removing unreachable block (ram,0x03ea4d84) */
/* WARNING: Removing unreachable block (ram,0x03ea4d94) */
/* WARNING: Removing unreachable block (ram,0x03ea5104) */
/* WARNING: Removing unreachable block (ram,0x03ea5128) */
/* WARNING: Removing unreachable block (ram,0x03ea513c) */
/* WARNING: Removing unreachable block (ram,0x03ea5144) */
/* WARNING: Removing unreachable block (ram,0x03ea515c) */
/* WARNING: Removing unreachable block (ram,0x03ea5178) */
/* WARNING: Removing unreachable block (ram,0x03ea517c) */
/* WARNING: Removing unreachable block (ram,0x03ea51bc) */
/* WARNING: Removing unreachable block (ram,0x03ea5204) */
/* WARNING: Removing unreachable block (ram,0x03ea5218) */
/* WARNING: Removing unreachable block (ram,0x03ea5224) */
/* WARNING: Removing unreachable block (ram,0x03ea52d0) */
/* WARNING: Removing unreachable block (ram,0x03ea52e0) */
/* WARNING: Removing unreachable block (ram,0x03ea5248) */
/* WARNING: Removing unreachable block (ram,0x03ea5260) */
/* WARNING: Removing unreachable block (ram,0x03ea5264) */
/* WARNING: Removing unreachable block (ram,0x03ea52a8) */
/* WARNING: Removing unreachable block (ram,0x03ea52fc) */
/* WARNING: Removing unreachable block (ram,0x03ea5300) */
/* WARNING: Removing unreachable block (ram,0x03ea531c) */
/* WARNING: Removing unreachable block (ram,0x03ea532c) */
/* WARNING: Removing unreachable block (ram,0x03ea541c) */
/* WARNING: Removing unreachable block (ram,0x03ea5444) */
/* WARNING: Removing unreachable block (ram,0x03ea5464) */
/* WARNING: Removing unreachable block (ram,0x03ea5470) */
/* WARNING: Removing unreachable block (ram,0x03ea547c) */
/* WARNING: Removing unreachable block (ram,0x03ea5480) */
/* WARNING: Removing unreachable block (ram,0x03ea552c) */
/* WARNING: Removing unreachable block (ram,0x03ea5558) */
/* WARNING: Removing unreachable block (ram,0x03ea5578) */
/* WARNING: Removing unreachable block (ram,0x03ea5584) */
/* WARNING: Removing unreachable block (ram,0x03ea5590) */
/* WARNING: Removing unreachable block (ram,0x03ea5594) */
/* WARNING: Removing unreachable block (ram,0x03ea5640) */
/* WARNING: Removing unreachable block (ram,0x03ea566c) */
/* WARNING: Removing unreachable block (ram,0x03ea568c) */
/* WARNING: Removing unreachable block (ram,0x03ea5698) */
/* WARNING: Removing unreachable block (ram,0x03ea56a4) */
/* WARNING: Removing unreachable block (ram,0x03ea56a8) */
/* WARNING: Removing unreachable block (ram,0x03ea5758) */
/* WARNING: Removing unreachable block (ram,0x03ea5784) */
/* WARNING: Removing unreachable block (ram,0x03ea57a4) */
/* WARNING: Removing unreachable block (ram,0x03ea57b0) */
/* WARNING: Removing unreachable block (ram,0x03ea57bc) */
/* WARNING: Removing unreachable block (ram,0x03ea57c0) */
/* WARNING: Removing unreachable block (ram,0x03ea5870) */
/* WARNING: Removing unreachable block (ram,0x03ea5888) */
/* WARNING: Removing unreachable block (ram,0x03ea5898) */
/* WARNING: Removing unreachable block (ram,0x03ea5a08) */
/* WARNING: Removing unreachable block (ram,0x03ea5a28) */
/* WARNING: Removing unreachable block (ram,0x03ea5a3c) */
/* WARNING: Removing unreachable block (ram,0x03ea5a44) */
/* WARNING: Removing unreachable block (ram,0x03ea5a5c) */
/* WARNING: Removing unreachable block (ram,0x03ea5a78) */
/* WARNING: Removing unreachable block (ram,0x03ea5a7c) */
/* WARNING: Removing unreachable block (ram,0x03ea5aa4) */
/* WARNING: Removing unreachable block (ram,0x03ea5abc) */
/* WARNING: Removing unreachable block (ram,0x03ea5ac0) */
/* WARNING: Removing unreachable block (ram,0x03ea5ae8) */
/* WARNING: Removing unreachable block (ram,0x03ea5af4) */
/* WARNING: Removing unreachable block (ram,0x03ea5af8) */
/* WARNING: Removing unreachable block (ram,0x03ea5b0c) */
/* WARNING: Removing unreachable block (ram,0x03ea5b18) */
/* WARNING: Removing unreachable block (ram,0x03ea5b1c) */
/* WARNING: Removing unreachable block (ram,0x03ea5a4c) */
/* WARNING: Removing unreachable block (ram,0x03ea57dc) */
/* WARNING: Removing unreachable block (ram,0x03ea56c4) */
/* WARNING: Removing unreachable block (ram,0x03ea55ac) */
/* WARNING: Removing unreachable block (ram,0x03ea5498) */
/* WARNING: Removing unreachable block (ram,0x03ea52c0) */
/* WARNING: Removing unreachable block (ram,0x03ea51a4) */
/* WARNING: Removing unreachable block (ram,0x072852e4) */
/* WARNING: Removing unreachable block (ram,0x07285304) */
/* WARNING: Removing unreachable block (ram,0x07285354) */
/* WARNING: Removing unreachable block (ram,0x07285508) */
/* WARNING: Removing unreachable block (ram,0x0728550c) */
/* WARNING: Removing unreachable block (ram,0x07285510) */
/* WARNING: Removing unreachable block (ram,0x07285518) */
/* WARNING: Removing unreachable block (ram,0x07285528) */
/* WARNING: Removing unreachable block (ram,0x0728554c) */
/* WARNING: Removing unreachable block (ram,0x07285558) */
/* WARNING: Removing unreachable block (ram,0x0728555c) */
/* WARNING: Removing unreachable block (ram,0x07285574) */
/* WARNING: Removing unreachable block (ram,0x0728557c) */
/* WARNING: Removing unreachable block (ram,0x072855a4) */
/* WARNING: Removing unreachable block (ram,0x07285588) */
/* WARNING: Removing unreachable block (ram,0x07285594) */
/* WARNING: Removing unreachable block (ram,0x072855b0) */
/* WARNING: Removing unreachable block (ram,0x072855bc) */
/* WARNING: Removing unreachable block (ram,0x072855c0) */
/* WARNING: Removing unreachable block (ram,0x072855c8) */
/* WARNING: Removing unreachable block (ram,0x072855d4) */
/* WARNING: Removing unreachable block (ram,0x07285604) */
/* WARNING: Removing unreachable block (ram,0x07285654) */
/* WARNING: Removing unreachable block (ram,0x07285664) */
/* WARNING: Removing unreachable block (ram,0x07285670) */
/* WARNING: Removing unreachable block (ram,0x07285770) */
/* WARNING: Removing unreachable block (ram,0x07285774) */
/* WARNING: Removing unreachable block (ram,0x07285780) */
/* WARNING: Removing unreachable block (ram,0x07285794) */
/* WARNING: Removing unreachable block (ram,0x072857ac) */
/* WARNING: Removing unreachable block (ram,0x072857c4) */
/* WARNING: Removing unreachable block (ram,0x072857c8) */
/* WARNING: Removing unreachable block (ram,0x072857d0) */
/* WARNING: Removing unreachable block (ram,0x072857e4) */
/* WARNING: Removing unreachable block (ram,0x072857f4) */
/* WARNING: Removing unreachable block (ram,0x07285678) */
/* WARNING: Removing unreachable block (ram,0x072856fc) */
/* WARNING: Removing unreachable block (ram,0x07285714) */
/* WARNING: Removing unreachable block (ram,0x07285808) */
/* WARNING: Removing unreachable block (ram,0x07285728) */
/* WARNING: Removing unreachable block (ram,0x07285730) */
/* WARNING: Removing unreachable block (ram,0x07285744) */
/* WARNING: Removing unreachable block (ram,0x0728580c) */
/* WARNING: Removing unreachable block (ram,0x07285810) */
/* WARNING: Removing unreachable block (ram,0x0728583c) */
/* WARNING: Removing unreachable block (ram,0x07285868) */
/* WARNING: Removing unreachable block (ram,0x072858e8) */
/* WARNING: Removing unreachable block (ram,0x07285828) */
/* WARNING: Removing unreachable block (ram,0x0728574c) */
/* WARNING: Removing unreachable block (ram,0x07285534) */
/* WARNING: Removing unreachable block (ram,0x07285474) */
/* WARNING: Removing unreachable block (ram,0x0728548c) */
/* WARNING: Removing unreachable block (ram,0x07285494) */
/* WARNING: Removing unreachable block (ram,0x072854dc) */
/* WARNING: Removing unreachable block (ram,0x072854a0) */
/* WARNING: Removing unreachable block (ram,0x072854ac) */
/* WARNING: Removing unreachable block (ram,0x072854e8) */
/* WARNING: Removing unreachable block (ram,0x07285548) */
/* WARNING: Removing unreachable block (ram,0x072854f4) */
/* WARNING: Removing unreachable block (ram,0x072854f8) */
/* WARNING: Removing unreachable block (ram,0x07285358) */
/* WARNING: Removing unreachable block (ram,0x07285380) */
/* WARNING: Removing unreachable block (ram,0x07285388) */
/* WARNING: Removing unreachable block (ram,0x0727dc78) */
/* WARNING: Removing unreachable block (ram,0x0727dc80) */
/* WARNING: Removing unreachable block (ram,0x0727dcb0) */
/* WARNING: Removing unreachable block (ram,0x0727dcd0) */
/* WARNING: Removing unreachable block (ram,0x0727dce4) */
/* WARNING: Removing unreachable block (ram,0x0727dc7c) */
/* WARNING: Removing unreachable block (ram,0x03ea514c) */
/* WARNING: Removing unreachable block (ram,0x068a13b0) */
/* WARNING: Removing unreachable block (ram,0x068a13b8) */
/* WARNING: Removing unreachable block (ram,0x068a1388) */
/* WARNING: Removing unreachable block (ram,0x068a150c) */
/* WARNING: Removing unreachable block (ram,0x068a138c) */
/* WARNING: Removing unreachable block (ram,0x0689fc08) */
/* WARNING: Removing unreachable block (ram,0x0689fa14) */
/* WARNING: Removing unreachable block (ram,0x0689fa9c) */
/* WARNING: Removing unreachable block (ram,0x0689fa18) */
/* WARNING: Removing unreachable block (ram,0x0689fa1c) */
/* WARNING: Removing unreachable block (ram,0x0689fa34) */
/* WARNING: Removing unreachable block (ram,0x0689fa68) */
/* WARNING: Removing unreachable block (ram,0x0689fa4c) */
/* WARNING: Removing unreachable block (ram,0x0689fa80) */
/* WARNING: Removing unreachable block (ram,0x068a0ffc) */

long * MergeEngine_ECS_Systems_Items_ImmidateToolsSystem_ImmediateToolCollectSystem__CalculateToolsToSpawn
                 (long **param_1,long param_2,long **param_3,ulong param_4,long **param_5,
                 ulong *param_6)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined *puVar17;
  undefined *puVar18;
  ulong **ppuVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  uint uVar22;
  long lVar27;
  undefined8 *puVar28;
  ulong uVar29;
  undefined8 *puVar30;
  long *plVar31;
  long *plVar32;
  ulong *puVar33;
  long *plVar34;
  long lVar35;
  long **pplVar36;
  long lVar37;
  long *plVar38;
  int iVar23;
  uint uVar24;
  undefined4 uVar25;
  uint uVar26;
  long *plVar39;
  undefined8 uVar40;
  long lVar41;
  long lVar42;
  long **pplVar43;
  long lVar44;
  undefined *puVar45;
  long lVar46;
  int *piVar47;
  long *plVar48;
  long **pplVar49;
  ulong uVar50;
  long **pplVar51;
  long *unaff_x25;
  undefined *unaff_x26;
  undefined *puVar52;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *unaff_x29;
  undefined *puVar53;
  undefined8 uVar54;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar55 [12];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auStack_160 [8];
  long *plStack_158;
  long *plStack_148;
  undefined8 auStack_e0 [2];
  undefined8 uStack_d0;
  long *plStack_c8;
  long **pplStack_c0;
  undefined8 uStack_b8;
  undefined8 auStack_b0 [2];
  ulong *puStack_60;
  long **pplStack_58;
  ulong uStack_48;
  
  puVar45 = PTR_DAT_077cf4d0;
  puVar52 = PTR_DAT_077cf4c8;
  ppuVar19 = &puStack_60;
  uVar50 = 0x7e28000;
  pplVar49 = param_3;
  if ((bRam0000000007e28dd3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078109d0);
    func_0x03280a18(PTR_DAT_077db450);
    func_0x03280a18(PTR_DAT_078109d8);
    func_0x03280a18(PTR_DAT_078109e0);
    func_0x03280a18(PTR_DAT_077cf4c8);
    func_0x03280a18(PTR_DAT_078109e8);
    func_0x03280a18(PTR_DAT_077cf4d0);
    func_0x03280a18(PTR_DAT_078109f0);
    bRam0000000007e28dd3 = 1;
  }
  uStack_48 = 0;
  puStack_60 = (ulong *)0x0;
  pplStack_58 = (long **)0x0;
  plVar34 = (long *)func_0x03280ca0(*(undefined8 *)puVar45);
  func_0x04143c38(plVar34,*(undefined8 *)puVar52);
  if (param_2 == 0) {
    auVar56 = func_0x03280cac();
    puVar20 = auStack_b0;
    auStack_b0[0] = 0x689fac8;
    plVar34 = auVar56._0_8_;
    pplVar36 = pplVar49;
    if ((bRam0000000007e28dd7 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077da8d8);
      func_0x03280a18(PTR_DAT_0774ea58);
      func_0x03280a18(PTR_DAT_077da8e0);
      func_0x03280a18(PTR_DAT_0777e508);
      func_0x03280a18(PTR_DAT_078109f8);
      plVar34 = (long *)func_0x03280a18(PTR_DAT_07810a00);
      bRam0000000007e28dd7 = 1;
    }
    puVar52 = PTR_DAT_07810a00;
    plVar39 = (long *)0x0;
    puVar45 = unaff_x28;
    if (pplVar49 == (long **)0x0) {
      auVar57 = func_0x03280cac();
      plVar38 = auVar57._0_8_;
      auVar14._8_8_ = plVar38;
      auVar14._0_8_ = pplVar36;
      puVar21 = auStack_e0;
      auStack_e0[0] = 0x689fc54;
      uStack_d0 = 0x7e28000;
      plVar48 = (long *)0x7e28000;
      plVar34 = plVar38;
      pplVar43 = pplVar36;
      pplStack_c0 = pplVar49;
      if ((bRam0000000007e28ddb & 1) == 0) {
        plStack_c8 = auVar56._0_8_;
        uStack_b8 = auVar56._8_8_;
        plVar34 = (long *)func_0x03280a18(PTR_DAT_0777e508);
        auVar56._8_8_ = uStack_b8;
        auVar56._0_8_ = plStack_c8;
        bRam0000000007e28ddb = 1;
      }
      uStack_b8 = auVar56._8_8_;
      plStack_c8 = auVar56._0_8_;
      if (pplVar36 != (long **)0x0) {
        if (*(int *)(pplVar36 + 3) == 0) {
          return plVar34;
        }
        func_0x068a1518(plVar38,auVar57._8_8_);
        uVar54 = 0x689fcb0;
        goto SUB_068a0cc4;
      }
      auVar56 = func_0x03280cac();
      pplVar49 = (long **)PTR_DAT_077bf888;
      plVar34 = auVar56._8_8_;
      lVar37 = auVar56._0_8_;
      ppuVar19 = (ulong **)auStack_160;
      pplVar51 = (long **)0x7e28000;
      pplVar36 = pplVar43;
      uVar50 = param_4;
      if ((bRam0000000007e28dd4 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07810a08);
        func_0x03280a18(PTR_DAT_0776f9f0);
        func_0x03280a18(PTR_DAT_07810a10);
        func_0x03280a18(PTR_DAT_07810a18);
        func_0x03280a18(PTR_DAT_07810a20);
        func_0x03280a18(PTR_DAT_07810a28);
        func_0x03280a18(PTR_DAT_0777c258);
        func_0x03280a18(PTR_DAT_07780070);
        func_0x03280a18(PTR_DAT_07780078);
        func_0x03280a18(PTR_DAT_0777c248);
        func_0x03280a18(PTR_DAT_0777a498);
        func_0x03280a18(PTR_DAT_07773688);
        func_0x03280a18(PTR_DAT_07779820);
        func_0x03280a18(PTR_DAT_0777a750);
        func_0x03280a18(PTR_DAT_0777ffc8);
        func_0x03280a18(PTR_DAT_0777c2d8);
        func_0x03280a18(PTR_DAT_07810a30);
        func_0x03280a18(PTR_DAT_0777e508);
        func_0x03280a18(PTR_DAT_077bf888);
        func_0x03280a18(PTR_DAT_077730b8);
        bRam0000000007e28dd4 = 1;
      }
      plVar39 = *pplVar49;
      plStack_148 = (long *)0x0;
      if ((int)plVar39[0x1c] == 0) {
        func_0x03280b8c();
        plVar39 = *pplVar49;
      }
      puVar53 = PTR_DAT_07810a28;
      puVar52 = PTR_DAT_07810a10;
      unaff_x27 = *(undefined **)plVar39[0x17];
      if (unaff_x27 != (undefined *)0x0) {
        if (0 < (int)*(ulong *)(unaff_x27 + 0x18)) {
          unaff_x28 = (undefined *)0x0;
          puVar45 = (undefined *)(*(ulong *)(unaff_x27 + 0x18) & 0xffffffff);
          plStack_158 = plVar34;
          do {
            if (puVar45 <= unaff_x28) goto LAB_068a03c8;
            unaff_x26 = puVar52;
            unaff_x29 = puVar53;
            if (*(long *)(lVar37 + 0x80) == 0) goto LAB_068a03c4;
            uVar22 = *(uint *)(unaff_x27 + (long)unaff_x28 * 4 + 0x20);
            pplVar49 = (long **)(ulong)uVar22;
            uVar50 = *(ulong *)puVar53;
            pplVar36 = &plStack_148;
            plVar39 = (long *)func_0x04f63934(*(long *)(lVar37 + 0x80),pplVar49);
            plVar38 = unaff_x25;
            if (((ulong)plVar39 & 1) != 0) {
              if (*(long *)(lVar37 + 0xd0) == 0) goto LAB_068a03c4;
              pplVar36 = *(long ***)puVar52;
              unaff_d8 = func_0x03ce26ec(0,*(undefined8 *)(*(long *)(lVar37 + 0xd0) + 0x38),pplVar49
                                        );
              pplVar51 = *(long ***)(lVar37 + 0x50);
              if (*(int *)(*(long *)PTR_DAT_077730b8 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              plVar38 = (long *)func_0x0624cb20(pplVar49,0);
              if (pplVar51 == (long **)0x0) goto LAB_068a03c4;
              plVar39 = *pplVar51;
              uVar29 = (ulong)*(ushort *)((long)plVar39 + 0x12e);
              if (uVar29 != 0) {
                piVar47 = (int *)(plVar39[0x16] + 8);
                do {
                  if (*(long *)(piVar47 + -2) == *(long *)PTR_DAT_07773688) {
                    plVar39 = plVar39 + (long)(*piVar47 + 1) * 2 + 0x27;
                    goto LAB_0689ff3c;
                  }
                  uVar29 = uVar29 - 1;
                  piVar47 = piVar47 + 4;
                } while (uVar29 != 0);
              }
              plVar39 = (long *)func_0x03256b10(pplVar51,*(long *)PTR_DAT_07773688,1);
LAB_0689ff3c:
              pplVar36 = (long **)plVar39[1];
              lVar35 = (*(code *)*plVar39)(pplVar51,plVar38);
              unaff_x25 = plVar38;
              if ((lVar35 == 0) || (param_4 == 0)) goto LAB_068a03c4;
              uVar24 = *(uint *)(lVar35 + 0x20);
              pplVar51 = (long **)(ulong)uVar24;
              uVar50 = *(ulong *)PTR_DAT_07810a20;
              pplVar36 = pplVar51;
              plVar39 = (long *)func_0x04f5ce74(param_4,pplVar49);
              if (((ulong)plVar39 & 1) == 0) {
                iVar23 = func_0x04f5b400(param_4,pplVar49,*(undefined8 *)PTR_DAT_07780070);
                pplVar36 = (long **)(ulong)(iVar23 + uVar24);
                uVar50 = *(ulong *)PTR_DAT_07780078;
                plVar39 = (long *)func_0x04f5b488(param_4,pplVar49);
              }
              if (0.0 < (float)unaff_d8) {
                pplVar51 = *(long ***)(lVar37 + 200);
                if (pplVar51 == (long **)0x0) goto LAB_068a03c4;
                plVar39 = *pplVar51;
                uVar29 = (ulong)*(ushort *)((long)plVar39 + 0x12e);
                if (uVar29 != 0) {
                  piVar47 = (int *)(plVar39[0x16] + 8);
                  do {
                    if (*(long *)(piVar47 + -2) == *(long *)PTR_DAT_0777a750) {
                      plVar39 = plVar39 + (long)(*piVar47 + 0x54) * 2 + 0x27;
                      goto LAB_068a0014;
                    }
                    uVar29 = uVar29 - 1;
                    piVar47 = piVar47 + 4;
                  } while (uVar29 != 0);
                }
                plVar39 = (long *)func_0x03256b10(pplVar51,*(long *)PTR_DAT_0777a750,0x54);
LAB_068a0014:
                uVar29 = (*(code *)*plVar39)(pplVar51,plVar39[1]);
                if ((uVar29 & 1) == 0) {
                  pplVar36 = (long **)0x0;
                  plVar39 = (long *)func_0x06378c74(unaff_d8,pplVar49,*(undefined8 *)(lVar37 + 0x48)
                                                   );
                  if (plVar39 == (long *)0x0) goto LAB_068a03c4;
                  lVar35 = *plVar39;
                  pplVar51 = *(long ***)(lVar37 + 0x40);
                  uVar29 = (ulong)*(ushort *)(lVar35 + 0x12e);
                  if (uVar29 != 0) {
                    piVar47 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar47 + -2) == *(long *)PTR_DAT_07779820) {
                        puVar28 = (undefined8 *)(lVar35 + (long)*piVar47 * 0x10 + 0x138);
                        goto LAB_068a00b0;
                      }
                      uVar29 = uVar29 - 1;
                      piVar47 = piVar47 + 4;
                    } while (uVar29 != 0);
                  }
                  pplVar36 = (long **)0x0;
                  puVar28 = (undefined8 *)func_0x03256b10(plVar39);
LAB_068a00b0:
                  plVar38 = (long *)(*(code *)*puVar28)(plVar39,puVar28[1]);
                  unaff_x25 = plVar39;
                  if (pplVar51 == (long **)0x0) goto LAB_068a03c4;
                  plVar39 = *pplVar51;
                  uVar29 = (ulong)*(ushort *)((long)plVar39 + 0x12e);
                  if (uVar29 != 0) {
                    piVar47 = (int *)(plVar39[0x16] + 8);
                    do {
                      if (*(long *)(piVar47 + -2) == *(long *)PTR_DAT_0777a498) {
                        plVar39 = plVar39 + (long)(*piVar47 + 0x19) * 2 + 0x27;
                        goto LAB_068a011c;
                      }
                      uVar29 = uVar29 - 1;
                      piVar47 = piVar47 + 4;
                    } while (uVar29 != 0);
                  }
                  plVar39 = (long *)func_0x03256b10(pplVar51,*(long *)PTR_DAT_0777a498,0x19);
LAB_068a011c:
                  pplVar36 = (long **)plVar39[1];
                  uVar25 = (*(code *)*plVar39)(pplVar51,plVar38);
                  unaff_x25 = plVar38;
                  if (*(long *)(lVar37 + 0x88) == 0) goto LAB_068a03c4;
                  pplVar36 = *(long ***)PTR_DAT_0777c258;
                  uVar24 = func_0x04f2ba70(*(long *)(lVar37 + 0x88),uVar25);
                }
                else {
                  pplVar36 = *(long ***)(lVar37 + 0x88);
                  uVar50 = 0;
                  uVar24 = func_0x06379000(unaff_d8,pplVar49);
                }
                pplVar51 = (long **)(ulong)uVar24;
                unaff_x25 = plVar38;
                if (pplVar43 == (long **)0x0) goto LAB_068a03c4;
                uVar50 = *(ulong *)PTR_DAT_07810a20;
                pplVar36 = pplVar51;
                uVar29 = func_0x04f5ce74(pplVar43,pplVar49);
                if ((uVar29 & 1) == 0) {
                  iVar23 = func_0x04f5b400(pplVar43,pplVar49,*(undefined8 *)PTR_DAT_07780070);
                  pplVar36 = (long **)(ulong)(iVar23 + uVar24);
                  uVar50 = *(ulong *)PTR_DAT_07780078;
                  func_0x04f5b488(pplVar43,pplVar49);
                }
                if (plVar34 == (long *)0x0) goto LAB_068a03c4;
                pplVar36 = *(long ***)PTR_DAT_0777c2d8;
                uVar29 = func_0x0411ca30(plVar34,pplVar49);
                if ((uVar29 & 1) == 0) {
                  lVar35 = plVar34[2];
                  lVar42 = *(long *)PTR_DAT_0777ffc8;
                  *(int *)((long)plVar34 + 0x1c) = *(int *)((long)plVar34 + 0x1c) + 1;
                  if (lVar35 == 0) goto LAB_068a03c4;
                  uVar24 = *(uint *)(plVar34 + 3);
                  if (uVar24 < *(uint *)(lVar35 + 0x18)) {
                    *(uint *)(plVar34 + 3) = uVar24 + 1;
                    *(uint *)(lVar35 + (long)(int)uVar24 * 4 + 0x20) = uVar22;
                  }
                  else {
                    pplVar36 = *(long ***)(*(long *)(*(long *)(lVar42 + 0x20) + 0xc0) + 0x70);
                    func_0x0411c6b8(plVar34,pplVar49);
                  }
                }
                unaff_x25 = plStack_148;
                if (plStack_148 == (long *)0x0) goto LAB_068a03c4;
                lVar35 = *plStack_148;
                pplVar51 = *(long ***)(lVar37 + 0x88);
                uVar29 = (ulong)*(ushort *)(lVar35 + 0x12e);
                if (uVar29 != 0) {
                  piVar47 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar47 + -2) == *(long *)PTR_DAT_0777c248) {
                      puVar28 = (undefined8 *)(lVar35 + (long)*piVar47 * 0x10 + 0x138);
                      goto LAB_068a0284;
                    }
                    uVar29 = uVar29 - 1;
                    piVar47 = piVar47 + 4;
                  } while (uVar29 != 0);
                }
                pplVar36 = (long **)0x0;
                puVar28 = (undefined8 *)func_0x03256b10(plStack_148);
LAB_068a0284:
                lVar35 = (*(code *)*puVar28)(unaff_x25,puVar28[1]);
                plVar34 = (long *)puVar53;
                if ((lVar35 == 0) || (pplVar51 == (long **)0x0)) goto LAB_068a03c4;
                uVar26 = func_0x04f2ba70(pplVar51,*(undefined4 *)(lVar35 + 0x18),
                                         *(undefined8 *)PTR_DAT_0777c258);
                puVar45 = PTR_DAT_07780070;
                pplVar51 = (long **)(ulong)uVar26;
                iVar23 = func_0x04f5b400(pplVar43,pplVar49,*(undefined8 *)PTR_DAT_07780070);
                pplVar36 = *(long ***)puVar45;
                uVar24 = 0;
                if (uVar26 != 0) {
                  uVar24 = iVar23 / (int)uVar26;
                }
                plVar48 = (long *)func_0x04f5b400(pplVar43,uVar22);
                plVar38 = (long *)((ulong)plVar48 & 0xffffffff);
                plVar39 = plVar48;
                if (0 < (int)uVar24) {
                  pplVar36 = (long **)(ulong)uVar24;
                  uVar50 = *(ulong *)PTR_DAT_07810a20;
                  plVar39 = (long *)func_0x04f5ce74(param_4,uVar22);
                  if (((ulong)plVar39 & 1) == 0) {
                    iVar23 = func_0x04f5b400(param_4,uVar22,*(undefined8 *)PTR_DAT_07780070);
                    pplVar36 = (long **)(ulong)(iVar23 + uVar24);
                    uVar50 = *(ulong *)PTR_DAT_07780078;
                    plVar39 = (long *)func_0x04f5b488(param_4,pplVar49);
                  }
                }
                plVar34 = plStack_158;
                iVar23 = 0;
                if (uVar26 != 0) {
                  iVar23 = (int)plVar48 / (int)uVar26;
                }
                if ((int)plVar48 == iVar23 * uVar26) {
                  func_0x0411dd18(plStack_158,pplVar49,*(undefined8 *)PTR_DAT_07810a30);
                  pplVar36 = *(long ***)PTR_DAT_07810a18;
                  plVar39 = (long *)func_0x04f5c844(pplVar43,pplVar49);
                }
              }
            }
            puVar45 = (undefined *)(ulong)*(uint *)(unaff_x27 + 0x18);
            unaff_x28 = unaff_x28 + 1;
            unaff_x25 = plVar38;
          } while ((long)unaff_x28 < (long)(int)*(uint *)(unaff_x27 + 0x18));
        }
        return plVar39;
      }
LAB_068a03c4:
      puVar53 = unaff_x29;
      puVar52 = unaff_x26;
      func_0x03280cac();
LAB_068a03c8:
      uVar54 = 0x68a03cc;
      auVar56 = func_0x03280cb4();
      lVar35 = auVar56._8_8_;
      param_1 = auVar56._0_8_;
      goto SUB_068a03cc;
    }
    if (*(int *)(pplVar49 + 3) == 0) {
      return plVar34;
    }
    lVar37 = *(long *)PTR_DAT_07810a00;
    if (*(int *)(lVar37 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar37 = *(long *)puVar52;
    }
    unaff_x26 = PTR_DAT_077da8d8;
    unaff_x25 = (long *)PTR_DAT_0774ea58;
    lVar35 = *(long *)(*(long *)(lVar37 + 0xb8) + 8);
    auVar58._8_8_ = puVar52;
    auVar58._0_8_ = lVar35;
    if (lVar35 == 0) {
      if (*(int *)(lVar37 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar37 = *(long *)puVar52;
      }
      uVar54 = **(undefined8 **)(lVar37 + 0xb8);
      lVar37 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da8e0);
      func_0x053569b8(lVar37,uVar54,*(undefined8 *)PTR_DAT_078109f8,0);
      plVar34 = (long *)(*(long *)(*(long *)puVar52 + 0xb8) + 8);
      *plVar34 = lVar37;
      goto SUB_032809c4;
    }
    uVar54 = func_0x03d50a94(pplVar49,lVar35,*(undefined8 *)PTR_DAT_077da8d8);
    plVar38 = (long *)func_0x03d5ffd0(uVar54,*unaff_x25);
    uVar54 = 0x689fc08;
    auVar16 = auVar56;
  }
  else {
    lVar35 = func_0x069fc8e0(param_2,0);
    if (lVar35 == 0) {
      lVar35 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078109e8);
      func_0x041e6054(lVar35,*(undefined8 *)PTR_DAT_078109d8);
    }
    pplVar51 = (long **)PTR_DAT_078109d0;
    pplVar36 = (long **)func_0x069fc928(param_2,0);
    if (pplVar36 == (long **)0x0) {
      pplVar36 = (long **)func_0x03280ca0(*(undefined8 *)PTR_DAT_078109f0);
      func_0x041e8a78(pplVar36,*(undefined8 *)PTR_DAT_078109e0);
    }
    func_0x04d03ad8(param_1,&uStack_48,&pplStack_58,&puStack_60,*pplVar51);
    MergeEngine_ECS_Systems_Items_ImmidateToolsSystem_ImmediateToolCollectSystem__AnalyzeToolsInInventory
              (param_1,uStack_48,pplStack_58,puStack_60);
    if ((int)param_3 < 1) {
      return plVar34;
    }
    uVar54 = 0x689fa14;
    uVar50 = uStack_48;
    param_5 = pplStack_58;
    param_6 = puStack_60;
    param_4 = (ulong)param_3 & 0xffffffff;
    pplVar43 = param_1;
    lVar37 = lVar35;
    pplVar49 = pplVar36;
    puVar52 = PTR_DAT_077db450;
    puVar53 = unaff_x29;
SUB_068a03cc:
    puVar18 = PTR_DAT_07810a50;
    unaff_x26 = PTR_DAT_07810a48;
    puVar17 = PTR_DAT_07810a40;
    puVar45 = PTR_DAT_07810a38;
    *(undefined **)((long)ppuVar19 + -0x60) = puVar53;
    *(undefined8 *)((long)ppuVar19 + -0x58) = uVar54;
    *(undefined **)((long)ppuVar19 + -0x50) = unaff_x28;
    *(undefined **)((long)ppuVar19 + -0x48) = unaff_x27;
    *(undefined **)((long)ppuVar19 + -0x40) = puVar52;
    *(long **)((long)ppuVar19 + -0x38) = unaff_x25;
    *(long ***)((long)ppuVar19 + -0x30) = pplVar51;
    *(long ***)((long)ppuVar19 + -0x28) = pplVar49;
    *(long *)((long)ppuVar19 + -0x20) = lVar37;
    *(long **)((long)ppuVar19 + -0x18) = plVar34;
    *(long ***)((long)ppuVar19 + -0x10) = pplVar43;
    *(ulong *)((long)ppuVar19 + -8) = param_4;
    unaff_x29 = (undefined *)0x7e28000;
    pplVar49 = param_5;
    puVar33 = param_6;
    if ((bRam0000000007e28dd5 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07810a48);
      func_0x03280a18(PTR_DAT_07810a40);
      func_0x03280a18(PTR_DAT_07810a38);
      func_0x03280a18(PTR_DAT_07810a58);
      func_0x03280a18(PTR_DAT_07810a50);
      func_0x03280a18(PTR_DAT_07810a08);
      func_0x03280a18(PTR_DAT_077d4228);
      func_0x03280a18(PTR_DAT_07810720);
      func_0x03280a18(PTR_DAT_0777c2d8);
      bRam0000000007e28dd5 = 1;
    }
    uVar54 = *(undefined8 *)puVar45;
    *(undefined4 *)((long)ppuVar19 + -100) = 0;
    uVar54 = func_0x04d04a08(param_1,uVar50,uVar54);
    uVar54 = func_0x04d04970(param_1,lVar35,uVar54,*(undefined8 *)puVar17);
    plVar34 = *(long **)unaff_x26;
    func_0x04d048bc(param_1,uVar54,param_6);
    plVar38 = *(long **)puVar18;
    uVar29 = func_0x04d04ac4(param_1,uVar54);
    if (param_1[0x10] != (long *)0x0) {
      param_6 = (ulong *)(uVar29 & 0xffffffff);
      plVar38 = *(long **)PTR_DAT_07810720;
      uVar40 = func_0x04f61e04(param_1[0x10],param_6);
      if (param_5 != (long **)0x0) {
        plVar38 = (long *)((long)ppuVar19 + -100);
        plVar34 = *(long **)PTR_DAT_077d4228;
        func_0x04f5ce0c(param_5,param_6);
        puVar52 = PTR_DAT_07810a58;
        uVar54 = uVar40;
        if (uVar50 != 0) {
          uVar22 = func_0x0411ca30(uVar50,param_6,*(undefined8 *)PTR_DAT_0777c2d8);
          plVar34 = (long *)func_0x04d04de8(param_1,pplVar36,uVar40,uVar22 & 1,
                                            *(undefined4 *)((long)ppuVar19 + -100),
                                            *(undefined8 *)puVar52);
          return plVar34;
        }
      }
    }
    auVar58 = func_0x03280cac();
    plVar48 = auVar58._8_8_;
    lVar37 = auVar58._0_8_;
    puVar20 = (undefined8 *)((long)ppuVar19 + -0xd0);
    *(undefined8 *)((long)ppuVar19 + -0xc0) = 0x68a059c;
    *(undefined **)((long)ppuVar19 + -0xb8) = puVar17;
    *(undefined **)((long)ppuVar19 + -0xb0) = unaff_x26;
    *(undefined **)((long)ppuVar19 + -0xa8) = puVar18;
    *(undefined8 *)((long)ppuVar19 + -0xa0) = uVar54;
    *(ulong **)((long)ppuVar19 + -0x98) = param_6;
    *(long ***)((long)ppuVar19 + -0x90) = param_5;
    *(ulong *)((long)ppuVar19 + -0x88) = uVar50;
    *(long ***)((long)ppuVar19 + -0x80) = param_1;
    *(long ***)((long)ppuVar19 + -0x78) = pplVar36;
    plVar39 = (long *)((ulong)plVar38 & 0xffffffff);
    if ((bRam0000000007e28dd6 & 1) == 0) {
      func_0x03280a18(PTR_DAT_078109c8);
      func_0x03280a18(PTR_DAT_07810a18);
      func_0x03280a18(PTR_DAT_07810a20);
      func_0x03280a18(PTR_DAT_07810a60);
      func_0x03280a18(PTR_DAT_0777c258);
      func_0x03280a18(PTR_DAT_07780070);
      func_0x03280a18(PTR_DAT_07780078);
      func_0x03280a18(PTR_DAT_0777c248);
      func_0x03280a18(PTR_DAT_0777a498);
      func_0x03280a18(PTR_DAT_07779820);
      func_0x03280a18(PTR_DAT_0777ffc8);
      func_0x03280a18(PTR_DAT_0777c2d8);
      func_0x03280a18(PTR_DAT_07810a30);
      func_0x03280a18(PTR_DAT_0777e508);
      bRam0000000007e28dd6 = 1;
    }
    *(undefined4 *)((long)ppuVar19 + -0xc4) = 0;
    unaff_x25 = (long *)0x7e28000;
    unaff_x27 = puVar17;
    if (plVar48 != (long *)0x0) {
      lVar35 = *plVar48;
      unaff_x25 = *(long **)(lVar37 + 0x40);
      uVar50 = (ulong)*(ushort *)(lVar35 + 0x12e);
      if (uVar50 != 0) {
        piVar47 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
        do {
          if (*(long *)(piVar47 + -2) == *(long *)PTR_DAT_07779820) {
            puVar28 = (undefined8 *)(lVar35 + (long)*piVar47 * 0x10 + 0x138);
            goto LAB_068a06e8;
          }
          uVar50 = uVar50 - 1;
          piVar47 = piVar47 + 4;
        } while (uVar50 != 0);
      }
      plVar38 = (long *)0x0;
      puVar28 = (undefined8 *)func_0x03256b10(plVar48);
LAB_068a06e8:
      uVar54 = (*(code *)*puVar28)(plVar48,puVar28[1]);
      auVar4._8_8_ = uVar54;
      auVar4._0_8_ = lVar37;
      if (unaff_x25 != (long *)0x0) {
        lVar35 = *unaff_x25;
        uVar50 = (ulong)*(ushort *)(lVar35 + 0x12e);
        if (uVar50 != 0) {
          piVar47 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
          do {
            if (*(long *)(piVar47 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar28 = (undefined8 *)(lVar35 + (long)(*piVar47 + 4) * 0x10 + 0x138);
              goto LAB_068a0754;
            }
            uVar50 = uVar50 - 1;
            piVar47 = piVar47 + 4;
          } while (uVar50 != 0);
        }
        puVar28 = (undefined8 *)func_0x03256b10(unaff_x25,*(long *)PTR_DAT_0777a498,4);
LAB_068a0754:
        plVar38 = (long *)puVar28[1];
        plVar48 = (long *)(*(code *)*puVar28)(unaff_x25,uVar54);
        auVar6._8_8_ = plVar48;
        auVar6._0_8_ = lVar37;
        auVar5._8_8_ = plVar48;
        auVar5._0_8_ = lVar37;
        auVar58 = auVar4;
        if (*(long *)(lVar37 + 0x78) != 0) {
          plVar38 = (long *)((long)ppuVar19 + -0xc4);
          plVar31 = (long *)func_0x04fb7738(*(long *)(lVar37 + 0x78),plVar48,plVar38,
                                            *(undefined8 *)PTR_DAT_07810a60);
          puVar52 = PTR_DAT_0777c258;
          if (((ulong)plVar31 & 1) == 0) {
            return plVar31;
          }
          auVar58 = auVar5;
          if (*(long *)(lVar37 + 0x88) != 0) {
            plVar38 = *(long **)PTR_DAT_0777c258;
            uVar22 = func_0x04f2ba70(*(long *)(lVar37 + 0x88),plVar39);
            unaff_x25 = (long *)puVar52;
            auVar58 = auVar6;
            if (plVar48 != (long *)0x0) {
              lVar35 = *plVar48;
              lVar37 = *(long *)(lVar37 + 0x88);
              auVar8._8_8_ = plVar48;
              auVar8._0_8_ = lVar37;
              auVar7._8_8_ = plVar48;
              auVar7._0_8_ = lVar37;
              auVar58._8_8_ = plVar48;
              auVar58._0_8_ = lVar37;
              plVar39 = (long *)(ulong)uVar22;
              uVar50 = (ulong)*(ushort *)(lVar35 + 0x12e);
              if (uVar50 != 0) {
                piVar47 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar47 + -2) == *(long *)PTR_DAT_0777c248) {
                    puVar28 = (undefined8 *)(lVar35 + (long)*piVar47 * 0x10 + 0x138);
                    goto LAB_068a080c;
                  }
                  uVar50 = uVar50 - 1;
                  piVar47 = piVar47 + 4;
                } while (uVar50 != 0);
              }
              plVar38 = (long *)0x0;
              puVar28 = (undefined8 *)func_0x03256b10(plVar48);
LAB_068a080c:
              lVar35 = (*(code *)*puVar28)(plVar48,puVar28[1]);
              if ((lVar35 != 0) && (auVar58 = auVar7, lVar37 != 0)) {
                plVar38 = *(long **)puVar52;
                uVar24 = func_0x04f2ba70(lVar37,*(undefined4 *)(lVar35 + 0x18));
                puVar52 = PTR_DAT_07810a20;
                auVar58 = auVar8;
                if (*pplVar49 != (long *)0x0) {
                  uVar29 = CONCAT44(0,uVar24);
                  plVar38 = plVar39;
                  uVar50 = func_0x04f5ce74(*pplVar49,*(undefined4 *)((long)ppuVar19 + -0xc4),plVar39
                                           ,*(undefined8 *)PTR_DAT_07810a20);
                  unaff_x26 = puVar52;
                  if ((uVar50 & 1) == 0) {
                    plVar48 = *pplVar49;
                    auVar58._8_8_ = plVar48;
                    auVar58._0_8_ = uVar29;
                    if (plVar48 == (long *)0x0) goto LAB_068a09f4;
                    unaff_x25 = (long *)(ulong)*(uint *)((long)ppuVar19 + -0xc4);
                    iVar23 = func_0x04f5b400(plVar48,unaff_x25,*(undefined8 *)PTR_DAT_07780070);
                    plVar38 = (long *)(ulong)(iVar23 + uVar22);
                    func_0x04f5b488(plVar48,unaff_x25,plVar38,*(undefined8 *)PTR_DAT_07780078);
                  }
                  puVar53 = PTR_DAT_07780070;
                  auVar58._8_8_ = plVar48;
                  auVar58._0_8_ = uVar29;
                  if (*pplVar49 != (long *)0x0) {
                    plVar38 = *(long **)PTR_DAT_07780070;
                    uVar26 = func_0x04f5b400(*pplVar49,*(undefined4 *)((long)ppuVar19 + -0xc4));
                    uVar22 = 0;
                    if (uVar24 != 0) {
                      uVar22 = (int)uVar26 / (int)uVar24;
                    }
                    plVar48 = (long *)(ulong)uVar22;
                    auVar13._8_4_ = uVar22;
                    auVar13._0_8_ = uVar29;
                    auVar13._12_4_ = 0;
                    auVar12._8_4_ = uVar22;
                    auVar12._0_8_ = uVar29;
                    auVar12._12_4_ = 0;
                    auVar11._8_4_ = uVar22;
                    auVar11._0_8_ = uVar29;
                    auVar11._12_4_ = 0;
                    auVar10._8_4_ = uVar22;
                    auVar10._0_8_ = uVar29;
                    auVar10._12_4_ = 0;
                    auVar9._8_4_ = uVar22;
                    auVar9._0_8_ = uVar29;
                    auVar9._12_4_ = 0;
                    auVar58._8_4_ = uVar22;
                    auVar58._12_4_ = 0;
                    plVar39 = (long *)(ulong)uVar26;
                    unaff_x27 = puVar53;
                    if (0 < (int)uVar22) {
                      if (*puVar33 == 0) goto LAB_068a09f4;
                      uVar50 = func_0x04f5ce74(*puVar33,*(undefined4 *)((long)ppuVar19 + -0xc4),
                                               plVar48,*(undefined8 *)puVar52);
                      plVar38 = plVar48;
                      if ((uVar50 & 1) == 0) {
                        puVar33 = (ulong *)*puVar33;
                        auVar58 = auVar9;
                        if (puVar33 == (ulong *)0x0) goto LAB_068a09f4;
                        unaff_x25 = (long *)(ulong)*(uint *)((long)ppuVar19 + -0xc4);
                        iVar23 = func_0x04f5b400(puVar33,unaff_x25,*(undefined8 *)puVar53);
                        plVar38 = (long *)(ulong)(iVar23 + uVar22);
                        func_0x04f5b488(puVar33,unaff_x25,plVar38,*(undefined8 *)PTR_DAT_07780078);
                      }
                    }
                    auVar58 = auVar10;
                    if (*plVar34 != 0) {
                      if ((int)(uVar26 - uVar22 * uVar24) < 1) {
                        plVar38 = *(long **)PTR_DAT_07810a30;
                        func_0x0411dd18(*plVar34,*(undefined4 *)((long)ppuVar19 + -0xc4));
                        auVar58 = auVar13;
                        if (*pplVar49 != (long *)0x0) {
                          plVar34 = (long *)func_0x04f5c844(*pplVar49,
                                                            *(undefined4 *)((long)ppuVar19 + -0xc4),
                                                            *(undefined8 *)PTR_DAT_07810a18);
                          return plVar34;
                        }
                      }
                      else {
                        plVar38 = *(long **)PTR_DAT_0777c2d8;
                        plVar48 = (long *)func_0x0411ca30();
                        if (((ulong)plVar48 & 1) != 0) {
                          return plVar48;
                        }
                        plVar48 = (long *)*plVar34;
                        auVar58 = auVar11;
                        if (plVar48 != (long *)0x0) {
                          uVar25 = *(undefined4 *)((long)ppuVar19 + -0xc4);
                          lVar37 = plVar48[2];
                          lVar35 = *(long *)PTR_DAT_0777ffc8;
                          *(int *)((long)plVar48 + 0x1c) = *(int *)((long)plVar48 + 0x1c) + 1;
                          auVar58 = auVar12;
                          if (lVar37 != 0) {
                            uVar22 = *(uint *)(plVar48 + 3);
                            if (uVar22 < *(uint *)(lVar37 + 0x18)) {
                              *(uint *)(plVar48 + 3) = uVar22 + 1;
                              *(undefined4 *)(lVar37 + (long)(int)uVar22 * 4 + 0x20) = uVar25;
                              return plVar48;
                            }
                            plVar34 = (long *)func_0x0411c6b8(plVar48,uVar25,
                                                              *(undefined8 *)
                                                               (*(long *)(*(long *)(lVar35 + 0x20) +
                                                                         0xc0) + 0x70));
                            return plVar34;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_068a09f4:
    auVar16._8_8_ = plVar34;
    auVar16._0_8_ = puVar33;
    uVar54 = 0x68a09f8;
    auVar56 = func_0x03280cac();
  }
  uVar50 = auVar58._8_8_;
  lVar35 = auVar56._8_8_;
  lVar37 = auVar56._0_8_;
  puVar21 = (undefined8 *)((long)puVar20 + -0x40);
  *(undefined8 *)((long)puVar20 + -0x40) = uVar54;
  *(ulong *)((long)puVar20 + -0x30) = uVar50;
  *(long **)((long)puVar20 + -0x28) = plVar39;
  *(long *)((long)puVar20 + -0x20) = auVar58._0_8_;
  *(long *)((long)puVar20 + -0x18) = auVar16._0_8_;
  *(long ***)((long)puVar20 + -0x10) = pplVar49;
  *(long *)((long)puVar20 + -8) = auVar16._8_8_;
  if ((bRam0000000007e28dda & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777aa98);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_0777e4a8);
    func_0x03280a18(PTR_DAT_077cc918);
    func_0x03280a18(PTR_DAT_077cc910);
    func_0x03280a18(PTR_DAT_07810a68);
    func_0x03280a18(PTR_DAT_0776b160);
    bRam0000000007e28dda = 1;
  }
  plVar48 = (long *)0x7e28000;
  auVar14 = auVar56;
  if (((lVar35 != 0) &&
      (lVar42 = func_0x03ced81c(lVar35,*(undefined8 *)PTR_DAT_0777bf98), lVar42 != 0)) &&
     (plVar48 = *(long **)(lVar37 + 0xa0), plVar48 != (long *)0x0)) {
    lVar44 = *plVar48;
    uVar54 = *(undefined8 *)(lVar42 + 0x30);
    uVar29 = (ulong)*(ushort *)(lVar44 + 0x12e);
    if (uVar29 != 0) {
      piVar47 = (int *)(*(long *)(lVar44 + 0xb0) + 8);
      do {
        if (*(long *)(piVar47 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar28 = (undefined8 *)(lVar44 + (long)(*piVar47 + 9) * 0x10 + 0x138);
          goto LAB_068a0b14;
        }
        uVar29 = uVar29 - 1;
        piVar47 = piVar47 + 4;
      } while (uVar29 != 0);
    }
    puVar28 = (undefined8 *)func_0x03256b10(plVar48,*(long *)PTR_DAT_0777a498,9);
LAB_068a0b14:
    plVar34 = (long *)(*(code *)*puVar28)(plVar48,uVar54,puVar28[1]);
    plVar39 = *(long **)(lVar37 + 0xb0);
    if (plVar39 != (long *)0x0) {
      lVar42 = *plVar39;
      uVar54 = *(undefined8 *)(lVar35 + 0x10);
      auVar14._8_8_ = uVar54;
      auVar14._0_8_ = lVar37;
      uVar29 = (ulong)*(ushort *)(lVar42 + 0x12e);
      uVar50 = *(ulong *)PTR_DAT_0776b160;
      if (uVar29 != 0) {
        piVar47 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
        do {
          if (*(long *)(piVar47 + -2) == *(long *)PTR_DAT_0777e4a0) {
            puVar28 = (undefined8 *)(lVar42 + (long)*piVar47 * 0x10 + 0x138);
            goto LAB_068a0b94;
          }
          uVar29 = uVar29 - 1;
          piVar47 = piVar47 + 4;
        } while (uVar29 != 0);
      }
      puVar28 = (undefined8 *)func_0x03256b10(plVar39,*(long *)PTR_DAT_0777e4a0,0);
LAB_068a0b94:
      lVar35 = (*(code *)*puVar28)(plVar39,uVar50,plVar34,uVar54,0,puVar28[1]);
      puVar53 = PTR_DAT_077cc918;
      puVar52 = PTR_DAT_077cc910;
      plVar48 = plVar34;
      if (lVar35 != 0) {
        plVar34 = (long *)(lVar35 + 0x20);
        if (*plVar34 == 0) {
          lVar37 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aa98);
          func_0x06a30df4(lVar37,0);
          *plVar34 = lVar37;
          goto SUB_032809c4;
        }
        plVar34 = (long *)(*plVar34 + 0x40);
        *plVar34 = (long)plVar38;
        func_0x032809c4(plVar34,plVar38);
        plVar38 = *(long **)(lVar37 + 0xb8);
        lVar37 = func_0x03280ca0(*(undefined8 *)puVar52);
        auVar15._8_8_ = lVar35;
        auVar15._0_8_ = lVar37;
        auVar14._8_8_ = lVar35;
        auVar14._0_8_ = lVar37;
        func_0x04143c38(lVar37,*(undefined8 *)puVar53);
        plVar48 = (long *)puVar52;
        plVar39 = (long *)puVar53;
        if (lVar37 != 0) {
          lVar42 = *(long *)(lVar37 + 0x10);
          lVar44 = *(long *)PTR_DAT_0777e4a8;
          *(int *)(lVar37 + 0x1c) = *(int *)(lVar37 + 0x1c) + 1;
          auVar14 = auVar15;
          if (lVar42 != 0) {
            uVar22 = *(uint *)(lVar37 + 0x18);
            if (uVar22 < *(uint *)(lVar42 + 0x18)) {
              *(uint *)(lVar37 + 0x18) = uVar22 + 1;
              plVar34 = (long *)(lVar42 + (long)(int)uVar22 * 8 + 0x20);
              *plVar34 = lVar35;
              goto SUB_032809c4;
            }
            lVar42 = *(long *)(*(long *)(*(long *)(lVar44 + 0x20) + 0xc0) + 0x70);
            *(undefined8 *)((long)puVar20 + -0x70) = 0x68a0c94;
            *(undefined **)((long)puVar20 + -0x60) = puVar52;
            *(long *)((long)puVar20 + -0x58) = lVar35;
            *(long *)((long)puVar20 + -0x50) = lVar37;
            *(long **)((long)puVar20 + -0x48) = plVar38;
            uVar24 = *(uint *)(lVar37 + 0x18);
            uVar22 = uVar24 + 1;
            lVar42 = *(long *)(*(long *)(*(long *)(lVar42 + 0x20) + 0xc0) + 0x78);
            func_0x04144aa0(lVar37,(ulong)uVar22);
            lVar44 = *(long *)(lVar37 + 0x10);
            *(uint *)(lVar37 + 0x18) = uVar22;
            if (lVar44 == 0) {
              func_0x03280cac();
            }
            else if (uVar24 < *(uint *)(lVar44 + 0x18)) {
              plVar34 = (long *)(lVar44 + (long)(int)uVar24 * 8 + 0x20);
              *plVar34 = lVar35;
              goto SUB_032809c4;
            }
            auVar56 = func_0x03280cb4();
            lVar41 = auVar56._8_8_;
            lVar44 = auVar56._0_8_;
            *(undefined8 *)((long)puVar20 + -0xa0) = 0x41444d8;
            *(long *)((long)puVar20 + -0x90) = (long)(int)uVar24;
            *(ulong *)((long)puVar20 + -0x88) = (ulong)uVar22;
            *(long *)((long)puVar20 + -0x80) = lVar37;
            *(long *)((long)puVar20 + -0x78) = lVar35;
            lVar35 = *(long *)(*(long *)(*(long *)(lVar42 + 0x20) + 0xc0) + 0x58);
            func_0x03ec2768(lVar41,0x14);
            lVar37 = *(long *)(*(long *)(*(long *)(lVar42 + 0x20) + 0xc0) + 0x48);
            if ((*(byte *)(lVar37 + 0x135) & 1) == 0) {
              lVar37 = func_0x0325681c(lVar37);
            }
            if (lVar41 == 0) {
LAB_0414454c:
              lVar27 = 0;
            }
            else {
              lVar27 = func_0x03280b90(lVar41,lVar37);
              if (lVar27 == 0) {
                func_0x03281048(lVar41,lVar37);
                goto LAB_0414454c;
              }
            }
            lVar37 = *(long *)(lVar44 + 0x10);
            lVar46 = *(long *)(*(long *)(*(long *)(lVar42 + 0x20) + 0xc0) + 0x80);
            *(int *)(lVar44 + 0x1c) = *(int *)(lVar44 + 0x1c) + 1;
            if (lVar37 != 0) {
              uVar22 = *(uint *)(lVar44 + 0x18);
              if (uVar22 < *(uint *)(lVar37 + 0x18)) {
                *(uint *)(lVar44 + 0x18) = uVar22 + 1;
                plVar34 = (long *)(lVar37 + (long)(int)uVar22 * 8 + 0x20);
                *plVar34 = lVar27;
SUB_032809c4:
                if (iRam00000000080486b8 != 0) {
                  puVar33 = (ulong *)(((ulong)plVar34 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(puVar33,0x10);
                    if (bVar2) {
                      *puVar33 = *puVar33 | 1L << ((ulong)plVar34 >> 0xc & 0x3f);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                return plVar34;
              }
              func_0x0414446c(lVar44,lVar27,
                              *(undefined8 *)(*(long *)(*(long *)(lVar46 + 0x20) + 0xc0) + 0x70));
LAB_041445ac:
              return (long *)(ulong)(*(int *)(lVar44 + 0x18) - 1);
            }
            auVar55 = func_0x03280cac();
            uVar54 = auVar55._0_8_;
            if (auVar55._8_4_ == 1) {
              puVar28 = (undefined8 *)func_0x072ce910(uVar54);
              uVar54 = func_0x03280a2c(PTR_DAT_077542c0);
              uVar29 = func_0x032810d8(uVar54,*(undefined8 *)*puVar28);
              if ((uVar29 & 1) != 0) {
                func_0x072ce920();
                uVar54 = *(undefined8 *)(*(long *)(*(long *)(lVar42 + 0x20) + 0xc0) + 0x68);
                lVar37 = func_0x03280a2c(PTR_DAT_0774e558);
                if (*(int *)(lVar37 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                uVar54 = func_0x057a51c4(uVar54,0);
                func_0x057b7b18(lVar41,uVar54,0);
                goto LAB_041445ac;
              }
              puVar30 = (undefined8 *)func_0x072ce930(8);
              *puVar30 = *puVar28;
              lVar35 = 0;
              uVar54 = func_0x072ce940(puVar30,&
                                               PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28
                                      );
              func_0x072ce920();
            }
            func_0x03365958(uVar54);
            auVar56 = func_0x02f09514();
            plVar48 = auVar56._8_8_;
            plVar39 = auVar56._0_8_;
            uVar22 = *(uint *)(plVar39 + 3);
            lVar37 = *(long *)(*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0x90);
            uVar29 = (ulong)uVar22;
            *(undefined8 *)((long)puVar20 + -0xe0) = 0x4144678;
            *(long **)((long)puVar20 + -0xd8) = unaff_x25;
            *(ulong *)((long)puVar20 + -0xd0) = uVar50;
            *(undefined **)((long)puVar20 + -200) = puVar53;
            *(undefined8 *)((long)puVar20 + -0xc0) = uVar54;
            *(long *)((long)puVar20 + -0xb8) = lVar42;
            *(long *)((long)puVar20 + -0xb0) = lVar41;
            *(long *)((long)puVar20 + -0xa8) = lVar44;
            plVar38 = (long *)0x7e18000;
            plVar34 = plVar48;
            if ((bRam0000000007e18233 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e8c8);
              func_0x03280a18(PTR_DAT_0774e8e0);
              bRam0000000007e18233 = 1;
            }
            if (plVar48 == (long *)0x0) {
              func_0x057a867c(6,0);
            }
            if (*(uint *)(plVar39 + 3) < uVar22) {
              func_0x057b8434(0);
            }
            lVar35 = *(long *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x28);
            if ((*(byte *)(lVar35 + 0x135) & 1) == 0) {
              lVar35 = func_0x0325681c(lVar35);
            }
            plVar31 = (long *)func_0x03280b90(plVar48,lVar35);
            if (plVar31 == (long *)0x0) {
              if ((int)uVar22 < (int)plVar39[3]) {
                if (plVar48 == (long *)0x0) {
                  func_0x03280cac();
                }
                else {
                  lVar35 = *(long *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x20);
                  if ((*(byte *)(lVar35 + 0x135) & 1) == 0) {
                    lVar35 = func_0x0325681c(lVar35);
                  }
                  lVar42 = *plVar48;
                  uVar50 = (ulong)*(ushort *)(lVar42 + 0x12e);
                  if (uVar50 != 0) {
                    piVar47 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar47 + -2) == lVar35) {
                        puVar28 = (undefined8 *)(lVar42 + (long)*piVar47 * 0x10 + 0x138);
                        goto LAB_04145868;
                      }
                      uVar50 = uVar50 - 1;
                      piVar47 = piVar47 + 4;
                    } while (uVar50 != 0);
                  }
                  plVar34 = (long *)0x0;
                  puVar28 = (undefined8 *)func_0x03256b10(plVar48);
LAB_04145868:
                  plVar38 = (long *)(*(code *)*puVar28)(plVar48,puVar28[1]);
                  puVar52 = PTR_DAT_0774e8e0;
                  if (plVar38 != (long *)0x0) {
                    do {
                      lVar35 = *plVar38;
                      uVar50 = (ulong)*(ushort *)(lVar35 + 0x12e);
                      if (uVar50 != 0) {
                        piVar47 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar47 + -2) == *(long *)puVar52) {
                            puVar28 = (undefined8 *)(lVar35 + (long)*piVar47 * 0x10 + 0x138);
                            goto LAB_041458d0;
                          }
                          uVar50 = uVar50 - 1;
                          piVar47 = piVar47 + 4;
                        } while (uVar50 != 0);
                      }
                      plVar34 = (long *)0x0;
                      puVar28 = (undefined8 *)func_0x03256b10(plVar38);
LAB_041458d0:
                      plVar32 = (long *)(*(code *)*puVar28)(plVar38,puVar28[1]);
                      if (((ulong)plVar32 & 1) == 0) {
                        uVar29 = 0;
                        iVar23 = 5;
                        if (plVar38 == (long *)0x0) goto LAB_041459e8;
                        goto LAB_04145988;
                      }
                      lVar35 = *(long *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x148);
                      if ((*(byte *)(lVar35 + 0x135) & 1) == 0) {
                        lVar35 = func_0x0325681c(lVar35);
                      }
                      lVar42 = *plVar38;
                      uVar50 = (ulong)*(ushort *)(lVar42 + 0x12e);
                      if (uVar50 != 0) {
                        piVar47 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar47 + -2) == lVar35) {
                            puVar28 = (undefined8 *)(lVar42 + (long)*piVar47 * 0x10 + 0x138);
                            goto LAB_04145948;
                          }
                          uVar50 = uVar50 - 1;
                          piVar47 = piVar47 + 4;
                        } while (uVar50 != 0);
                      }
                      puVar28 = (undefined8 *)func_0x03256b10(plVar38,lVar35,0);
LAB_04145948:
                      plVar34 = (long *)(*(code *)*puVar28)(plVar38,puVar28[1]);
                      func_0x04145380(plVar39,uVar29,plVar34,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x160));
                      uVar29 = (ulong)((int)uVar29 + 1);
                    } while( true );
                  }
                }
                func_0x03280cac();
                do {
                  auVar55 = func_0x03280ca4(uVar29);
                  if (auVar55._8_4_ != 1) {
                    if (plVar38 == (long *)0x0) goto LAB_04145ae0;
                    lVar35 = *plVar38;
                    uVar50 = (ulong)*(ushort *)(lVar35 + 0x12e);
                    if (uVar50 == 0) goto LAB_04145ab8;
                    piVar47 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                    goto LAB_04145aa0;
                  }
                  puVar33 = (ulong *)func_0x072ce910(auVar55._0_8_);
                  uVar29 = *puVar33;
                  plVar32 = (long *)func_0x072ce920();
                  iVar23 = 0;
                  if (plVar38 != (long *)0x0) {
LAB_04145988:
                    lVar35 = *plVar38;
                    uVar50 = (ulong)*(ushort *)(lVar35 + 0x12e);
                    if (uVar50 != 0) {
                      piVar47 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar47 + -2) == *(long *)PTR_DAT_0774e8c8) {
                          puVar28 = (undefined8 *)(lVar35 + (long)*piVar47 * 0x10 + 0x138);
                          goto LAB_041459dc;
                        }
                        uVar50 = uVar50 - 1;
                        piVar47 = piVar47 + 4;
                      } while (uVar50 != 0);
                    }
                    plVar34 = (long *)0x0;
                    puVar28 = (undefined8 *)func_0x03256b10(plVar38);
LAB_041459dc:
                    plVar32 = (long *)(*(code *)*puVar28)(plVar38,puVar28[1]);
                  }
LAB_041459e8:
                } while (uVar29 != 0);
                if (iVar23 == 5) goto LAB_04145a10;
                if (iVar23 != 0) {
                  return plVar32;
                }
              }
              plVar32 = (long *)func_0x041462cc(plVar39,plVar48,
                                                *(undefined8 *)
                                                 (*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x40)
                                               );
            }
            else {
              lVar35 = *(long *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x28);
              if ((*(byte *)(lVar35 + 0x135) & 1) == 0) {
                lVar35 = func_0x0325681c(lVar35);
              }
              lVar42 = *plVar31;
              uVar50 = (ulong)*(ushort *)(lVar42 + 0x12e);
              if (uVar50 != 0) {
                piVar47 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar47 + -2) == lVar35) {
                    puVar28 = (undefined8 *)(lVar42 + (long)*piVar47 * 0x10 + 0x138);
                    goto LAB_04145728;
                  }
                  uVar50 = uVar50 - 1;
                  piVar47 = piVar47 + 4;
                } while (uVar50 != 0);
              }
              puVar28 = (undefined8 *)func_0x03256b10(plVar31,lVar35,0);
LAB_04145728:
              plVar32 = (long *)(*(code *)*puVar28)(plVar31,puVar28[1]);
              iVar23 = (int)plVar32;
              if (0 < iVar23) {
                func_0x04144aa0(plVar39,(int)plVar39[3] + iVar23,
                                *(undefined8 *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x78));
                iVar3 = (int)plVar39[3] - uVar22;
                if (iVar3 != 0 && (int)uVar22 <= (int)plVar39[3]) {
                  func_0x057b9f30(plVar39[2],uVar22,plVar39[2],iVar23 + uVar22,iVar3,0);
                }
                if (plVar39 == plVar31) {
                  func_0x057b9f30(plVar39[2],0,plVar39[2],uVar22,uVar22,0);
                  plVar32 = (long *)func_0x057b9f30(plVar39[2],iVar23 + uVar22,plVar39[2],
                                                    uVar22 << 1,(int)plVar39[3] - uVar22,0);
                }
                else {
                  lVar35 = plVar39[2];
                  lVar37 = *(long *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x28);
                  if ((*(byte *)(lVar37 + 0x135) & 1) == 0) {
                    lVar37 = func_0x0325681c(lVar37);
                  }
                  lVar42 = *plVar31;
                  uVar50 = (ulong)*(ushort *)(lVar42 + 0x12e);
                  if (uVar50 != 0) {
                    piVar47 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar47 + -2) == lVar37) {
                        puVar28 = (undefined8 *)(lVar42 + (long)(*piVar47 + 5) * 0x10 + 0x138);
                        goto LAB_04145838;
                      }
                      uVar50 = uVar50 - 1;
                      piVar47 = piVar47 + 4;
                    } while (uVar50 != 0);
                  }
                  puVar28 = (undefined8 *)func_0x03256b10(plVar31,lVar37,5);
LAB_04145838:
                  plVar32 = (long *)(*(code *)*puVar28)(plVar31,lVar35,uVar22,puVar28[1]);
                }
                *(int *)(plVar39 + 3) = (int)plVar39[3] + iVar23;
              }
            }
LAB_04145a10:
            *(int *)((long)plVar39 + 0x1c) = *(int *)((long)plVar39 + 0x1c) + 1;
            return plVar32;
          }
        }
      }
    }
  }
  uVar54 = 0x68a0cc4;
  auVar56 = func_0x03280cac();
  pplVar36 = auVar56._8_8_;
  auVar57._8_8_ = plVar38;
  auVar57._0_8_ = auVar56._0_8_;
SUB_068a0cc4:
  puVar52 = PTR_DAT_07810a78;
  plVar34 = (long *)PTR_DAT_07810a70;
  lVar37 = auVar57._0_8_;
  *(undefined8 *)((long)puVar21 + -0x70) = unaff_d8;
  *(undefined **)((long)puVar21 + -0x60) = unaff_x29;
  *(undefined8 *)((long)puVar21 + -0x58) = uVar54;
  *(undefined **)((long)puVar21 + -0x50) = puVar45;
  *(undefined **)((long)puVar21 + -0x48) = unaff_x27;
  *(undefined **)((long)puVar21 + -0x40) = unaff_x26;
  *(long **)((long)puVar21 + -0x38) = unaff_x25;
  *(ulong *)((long)puVar21 + -0x30) = uVar50;
  *(long **)((long)puVar21 + -0x28) = plVar39;
  *(long **)((long)puVar21 + -0x20) = plVar48;
  *(long *)((long)puVar21 + -0x18) = auVar14._8_8_;
  *(long *)((long)puVar21 + -0x10) = auVar14._0_8_;
  *(long *)((long)puVar21 + -8) = auVar57._8_8_;
  plVar39 = (long *)0x7e28000;
  if ((bRam0000000007e28dd9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078109c8);
    func_0x03280a18(PTR_DAT_07810a60);
    func_0x03280a18(PTR_DAT_077d9ff0);
    func_0x03280a18(PTR_DAT_077db270);
    func_0x03280a18(PTR_DAT_077db278);
    func_0x03280a18(PTR_DAT_077db280);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_07810a80);
    func_0x03280a18(PTR_DAT_077db290);
    func_0x03280a18(PTR_DAT_07810a78);
    func_0x03280a18(PTR_DAT_07810a70);
    func_0x03280a18(PTR_DAT_07771f40);
    func_0x03280a18(PTR_DAT_077730b8);
    func_0x03280a18(PTR_DAT_07810a88);
    bRam0000000007e28dd9 = 1;
  }
  uVar54 = *plVar34;
  *(undefined8 *)((long)puVar21 + -0x90) = 0;
  *(undefined8 *)((long)puVar21 + -0x88) = 0;
  *(undefined8 *)((long)puVar21 + -0x80) = 0;
  *(undefined4 *)((long)puVar21 + -100) = 0;
  plVar38 = (long *)func_0x03280ca0(uVar54);
  func_0x040ab20c(plVar38,*(undefined8 *)puVar52);
  puVar18 = PTR_DAT_07810a88;
  puVar17 = PTR_DAT_07810a80;
  puVar53 = PTR_DAT_07810a60;
  puVar45 = PTR_DAT_077db278;
  puVar52 = PTR_DAT_0777a498;
  if (pplVar36 != (long **)0x0) {
    func_0x04145068((undefined1 *)((long)puVar21 + -0xa8),pplVar36,*(undefined8 *)PTR_DAT_077db290);
    *(undefined8 *)((long)puVar21 + -0x88) = *(undefined8 *)((long)puVar21 + -0xa0);
    *(undefined8 *)((long)puVar21 + -0x90) = *(undefined8 *)((long)puVar21 + -0xa8);
    *(undefined8 *)((long)puVar21 + -0x80) = *(undefined8 *)((long)puVar21 + -0x98);
    plVar48 = plVar39;
    while( true ) {
      uVar29 = func_0x051159b4((undefined1 *)((long)puVar21 + -0x90),*(undefined8 *)puVar45);
      if ((uVar29 & 1) == 0) {
        func_0x051159b0((undefined1 *)((long)puVar21 + -0x90),*(undefined8 *)PTR_DAT_077db270);
        return plVar38;
      }
      plVar31 = *(long **)((long)puVar21 + -0x80);
      plVar39 = plVar48;
      if (plVar31 == (long *)0x0) break;
      lVar35 = *plVar31;
      plVar34 = *(long **)(lVar37 + 0x40);
      uVar29 = (ulong)*(ushort *)(lVar35 + 0x12e);
      if (uVar29 != 0) {
        piVar47 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
        do {
          if (*(long *)(piVar47 + -2) == *(long *)PTR_DAT_07779820) {
            puVar28 = (undefined8 *)(lVar35 + (long)*piVar47 * 0x10 + 0x138);
            goto LAB_068a0eb4;
          }
          uVar29 = uVar29 - 1;
          piVar47 = piVar47 + 4;
        } while (uVar29 != 0);
      }
      puVar28 = (undefined8 *)func_0x03256b10(plVar31,*(long *)PTR_DAT_07779820,0);
LAB_068a0eb4:
      plVar39 = (long *)(*(code *)*puVar28)(plVar31,puVar28[1]);
      if (plVar34 == (long *)0x0) goto LAB_068a11e8;
      lVar35 = *plVar34;
      uVar29 = (ulong)*(ushort *)(lVar35 + 0x12e);
      if (uVar29 != 0) {
        piVar47 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
        do {
          if (*(long *)(piVar47 + -2) == *(long *)puVar52) {
            puVar28 = (undefined8 *)(lVar35 + (long)(*piVar47 + 4) * 0x10 + 0x138);
            goto LAB_068a0f18;
          }
          uVar29 = uVar29 - 1;
          piVar47 = piVar47 + 4;
        } while (uVar29 != 0);
      }
      puVar28 = (undefined8 *)func_0x03256b10(plVar34,*(long *)puVar52,4);
LAB_068a0f18:
      uVar54 = (*(code *)*puVar28)(plVar34,plVar39,puVar28[1]);
      if (*(long *)(lVar37 + 0x78) == 0) {
        func_0x03280cac(0,uVar54);
        break;
      }
      uVar29 = func_0x04fb7738(*(long *)(lVar37 + 0x78),uVar54,(undefined1 *)((long)puVar21 + -100),
                               *(undefined8 *)puVar53);
      if ((uVar29 & 1) == 0) {
        uVar54 = *(undefined8 *)puVar18;
        *(undefined8 *)((long)puVar21 + -0xa8) = 0;
        *(undefined8 *)((long)puVar21 + -0xa0) = 0;
        func_0x048cbf28((undefined1 *)((long)puVar21 + -0xa8),plVar31,0,uVar54);
        if (plVar38 == (long *)0x0) goto LAB_068a11ec;
        lVar42 = *(long *)((long)puVar21 + -0xa8);
        uVar54 = *(undefined8 *)((long)puVar21 + -0xa0);
        lVar35 = plVar38[2];
        lVar44 = *(long *)puVar17;
        *(int *)((long)plVar38 + 0x1c) = *(int *)((long)plVar38 + 0x1c) + 1;
        if (lVar35 == 0) goto LAB_068a11f0;
        uVar22 = *(uint *)(plVar38 + 3);
        if (uVar22 < *(uint *)(lVar35 + 0x18)) {
          lVar35 = lVar35 + (long)(int)uVar22 * 0x10;
          *(uint *)(plVar38 + 3) = uVar22 + 1;
          plVar34 = (long *)(lVar35 + 0x20);
          *plVar34 = lVar42;
          *(undefined8 *)(lVar35 + 0x28) = uVar54;
          goto SUB_032809c4;
        }
        func_0x040aba8c(plVar38,lVar42,uVar54,
                        *(undefined8 *)(*(long *)(*(long *)(lVar44 + 0x20) + 0xc0) + 0x70));
        plVar48 = plVar39;
      }
      else {
        func_0x06378a30(plVar31,*(undefined8 *)(lVar37 + 0x40),0);
        if (*(long *)(lVar37 + 0xd0) == 0) goto LAB_068a11fc;
        func_0x069f7880(*(long *)(lVar37 + 0xd0),*(undefined4 *)((long)puVar21 + -100),0);
        if (*(long *)(lVar37 + 0xd0) == 0) goto LAB_068a11f8;
        unaff_d8 = func_0x069f793c(*(long *)(lVar37 + 0xd0),*(undefined4 *)((long)puVar21 + -100),0)
        ;
        if (100.0 <= (float)unaff_d8) {
          uVar25 = *(undefined4 *)((long)puVar21 + -100);
          plVar34 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
          func_0x06b21870(plVar34,uVar25,1,0,0);
          plVar39 = *(long **)(lVar37 + 0x50);
          uVar22 = *(uint *)((long)puVar21 + -100);
          if (*(int *)(*(long *)PTR_DAT_077730b8 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar50 = func_0x0624cb20((ulong)uVar22,0);
          uVar29 = (ulong)uVar22;
          if (plVar39 == (long *)0x0) goto LAB_068a1208;
          lVar35 = *plVar39;
          uVar29 = (ulong)*(ushort *)(lVar35 + 0x12e);
          if (uVar29 != 0) {
            piVar47 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
            do {
              if (*(long *)(piVar47 + -2) == *(long *)PTR_DAT_07773688) {
                puVar28 = (undefined8 *)(lVar35 + (long)(*piVar47 + 3) * 0x10 + 0x138);
                goto LAB_068a10d0;
              }
              uVar29 = uVar29 - 1;
              piVar47 = piVar47 + 4;
            } while (uVar29 != 0);
          }
          puVar28 = (undefined8 *)func_0x03256b10(plVar39,*(long *)PTR_DAT_07773688,3);
LAB_068a10d0:
          (*(code *)*puVar28)(plVar39,uVar50,1,0,0x14,0,1,puVar28[1]);
          if (*(long *)(lVar37 + 0xd0) != 0) {
            lVar35 = *(long *)(*(long *)(lVar37 + 0xd0) + 0x38);
            if (lVar35 != 0) {
              func_0x04f654ac((float)unaff_d8 + -100.0,lVar35,*(undefined4 *)((long)puVar21 + -100),
                              *(undefined8 *)PTR_DAT_077d9ff0);
              goto LAB_068a1124;
            }
            goto LAB_068a1204;
          }
          goto LAB_068a120c;
        }
        plVar34 = (long *)0x0;
LAB_068a1124:
        uVar54 = *(undefined8 *)puVar18;
        *(undefined8 *)((long)puVar21 + -0xa8) = 0;
        *(undefined8 *)((long)puVar21 + -0xa0) = 0;
        func_0x048cbf28((undefined1 *)((long)puVar21 + -0xa8),plVar31,plVar34,uVar54);
        if (plVar38 == (long *)0x0) goto LAB_068a1200;
        lVar42 = *(long *)((long)puVar21 + -0xa8);
        uVar54 = *(undefined8 *)((long)puVar21 + -0xa0);
        lVar35 = plVar38[2];
        lVar44 = *(long *)puVar17;
        *(int *)((long)plVar38 + 0x1c) = *(int *)((long)plVar38 + 0x1c) + 1;
        if (lVar35 == 0) goto LAB_068a11f4;
        uVar22 = *(uint *)(plVar38 + 3);
        if (uVar22 < *(uint *)(lVar35 + 0x18)) {
          lVar35 = lVar35 + (long)(int)uVar22 * 0x10;
          *(uint *)(plVar38 + 3) = uVar22 + 1;
          plVar34 = (long *)(lVar35 + 0x20);
          *plVar34 = lVar42;
          *(undefined8 *)(lVar35 + 0x28) = uVar54;
          goto SUB_032809c4;
        }
        func_0x040aba8c(plVar38,lVar42,uVar54,
                        *(undefined8 *)(*(long *)(*(long *)(lVar44 + 0x20) + 0xc0) + 0x70));
        plVar48 = plVar39;
      }
    }
    func_0x03280cac();
    plVar48 = plVar39;
LAB_068a11e8:
    plVar39 = plVar48;
    func_0x03280cac();
LAB_068a11ec:
    func_0x03280cac();
LAB_068a11f0:
    func_0x03280cac();
LAB_068a11f4:
    func_0x03280cac();
LAB_068a11f8:
    func_0x03280cac();
LAB_068a11fc:
    func_0x03280cac();
LAB_068a1200:
    func_0x03280cac();
LAB_068a1204:
    func_0x03280cac();
    uVar29 = uVar50;
LAB_068a1208:
    uVar50 = uVar29;
    func_0x03280cac();
LAB_068a120c:
    func_0x03280cac();
    unaff_x25 = (long *)puVar18;
    unaff_x26 = puVar45;
  }
  auVar55 = func_0x03280cac();
  uVar54 = auVar55._0_8_;
  if (auVar55._8_4_ == 1) {
    plVar48 = (long *)func_0x072ce910(uVar54);
    lVar37 = *plVar48;
    func_0x072ce920();
    func_0x051159b0((undefined1 *)((long)puVar21 + -0x90),*(undefined8 *)PTR_DAT_077db270);
    if (lVar37 == 0) {
      return plVar38;
    }
    func_0x03280ca4(lVar37);
  }
  func_0x051159b0((undefined1 *)((long)puVar21 + -0x90),*(undefined8 *)PTR_DAT_077db270);
  func_0x03365958(uVar54);
  func_0x03280ca4(0);
  func_0x02f09514();
  puVar52 = PTR_DAT_07810a90;
  *(undefined8 *)((long)puVar21 + -0x110) = unaff_d9;
  *(undefined8 *)((long)puVar21 + -0x108) = unaff_d8;
  *(code **)((long)puVar21 + -0x100) =
       MergeEngine_ECS_Systems_Items_ImmidateToolsSystem_ImmediateToolCollectSystem__AnimateToolsToInventorySequence
  ;
  *(undefined **)((long)puVar21 + -0xf0) = unaff_x26;
  *(long **)((long)puVar21 + -0xe8) = unaff_x25;
  *(ulong *)((long)puVar21 + -0xe0) = uVar50;
  *(long **)((long)puVar21 + -0xd8) = plVar39;
  *(long **)((long)puVar21 + -0xd0) = plVar34;
  *(undefined8 *)((long)puVar21 + -200) = 0;
  *(undefined8 *)((long)puVar21 + -0xc0) = uVar54;
  *(long **)((long)puVar21 + -0xb8) = plVar38;
  if ((bRam0000000007e28dd8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_077d75b8);
    func_0x03280a18(PTR_DAT_077cc678);
    func_0x03280a18(PTR_DAT_07810a98);
    func_0x03280a18(PTR_DAT_07810aa0);
    func_0x03280a18(PTR_DAT_07810aa8);
    func_0x03280a18(PTR_DAT_07810a90);
    bRam0000000007e28dd8 = 1;
  }
  plVar34 = (long *)func_0x03280ca0(*(undefined8 *)puVar52);
  return plVar34;
  while( true ) {
    uVar50 = uVar50 - 1;
    piVar47 = piVar47 + 4;
    if (uVar50 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar47 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar28 = (undefined8 *)(lVar35 + (long)*piVar47 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar34 = (long *)0x0;
  puVar28 = (undefined8 *)func_0x03256b10(plVar38);
LAB_04145ad4:
  (*(code *)*puVar28)(plVar38,puVar28[1]);
LAB_04145ae0:
  func_0x03365958(auVar55._0_8_);
  func_0x03280ca4(0);
  auVar56 = func_0x02f09514();
  lVar35 = auVar56._0_8_;
  *(undefined8 *)((long)puVar20 + -0x100) = 0x4145af8;
  *(long *)((long)puVar20 + -0xf0) = lVar37;
  *(long **)((long)puVar20 + -0xe8) = plVar39;
  uVar22 = func_0x03f898d4(*(undefined8 *)(lVar35 + 0x10),auVar56._8_8_,0,
                           *(undefined4 *)(lVar35 + 0x18),
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(plVar34[4] + 0xc0) + 0xd0) +
                                                0x20) + 0xc0) + 0x158));
  if (-1 < (int)uVar22) {
    func_0x04145da4(lVar35,uVar22);
  }
  return (long *)(ulong)(~uVar22 >> 0x1f);
}

