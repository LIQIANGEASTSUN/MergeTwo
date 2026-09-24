/* Ghidra 12.1.2 native pseudocode; RVA 0x679F5AC; MergeEngine.ECS.Systems.Items.ImmidateToolsSystem.ImmediateToolCollectSystem.HandleSingleToolCollection; status ok */


/* WARNING: Possible PIC construction at 0x0689f82c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689fcac: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x0689f85c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689f9e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689fa60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689fa7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689fbdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689fc04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0689fa64) */
/* WARNING: Removing unreachable block (ram,0x0689fa80) */
/* WARNING: Removing unreachable block (ram,0x0689f9ec) */
/* WARNING: Removing unreachable block (ram,0x0689f9f4) */
/* WARNING: Removing unreachable block (ram,0x0689f9fc) */
/* WARNING: Removing unreachable block (ram,0x0689fa9c) */
/* WARNING: Removing unreachable block (ram,0x0689faa4) */
/* WARNING: Removing unreachable block (ram,0x0689fa18) */
/* WARNING: Removing unreachable block (ram,0x0689fa1c) */
/* WARNING: Removing unreachable block (ram,0x0689fa34) */
/* WARNING: Removing unreachable block (ram,0x0689fa68) */
/* WARNING: Removing unreachable block (ram,0x0689fa4c) */
/* WARNING: Removing unreachable block (ram,0x068a0ffc) */
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
/* WARNING: Removing unreachable block (ram,0x0689fcb0) */
/* WARNING: Removing unreachable block (ram,0x0689f830) */
/* WARNING: Removing unreachable block (ram,0x0689f860) */
/* WARNING: Removing unreachable block (ram,0x0689fc08) */

undefined1  [16]
MergeEngine_ECS_Systems_Items_ImmidateToolsSystem_ImmediateToolCollectSystem__HandleSingleToolCollection
          (undefined *param_1,long *param_2,long *param_3,long param_4,long *param_5,long *param_6)

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
  undefined1 auVar17 [16];
  undefined *puVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  int iVar24;
  undefined8 *puVar29;
  long *plVar30;
  ulong *puVar31;
  long lVar32;
  undefined8 *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  undefined8 uVar36;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined *extraout_x1_02;
  undefined *extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long lVar37;
  long lVar38;
  undefined *puVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  int *piVar44;
  long *plVar45;
  undefined *puVar46;
  long lVar47;
  undefined8 uVar48;
  long *plVar49;
  long *plVar50;
  long *plVar51;
  long *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *unaff_x29;
  undefined *puVar52;
  undefined8 uVar53;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [12];
  undefined8 auStack_120 [2];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [2];
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar20 = &stack0xffffffffffffffc0;
  if ((bRam0000000007e28dd2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078109c8);
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_07780148);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077db450);
    func_0x03280a18(PTR_DAT_077cf4c8);
    func_0x03280a18(PTR_DAT_077cf4d0);
    bRam0000000007e28dd2 = 1;
  }
  if (((param_2 == (long *)0x0) ||
      (lVar32 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777bf98), puVar39 = PTR_DAT_0777a498
      , lVar32 == 0)) || (plVar45 = *(long **)(param_1 + 0xa0), plVar45 == (long *)0x0)) {
LAB_0689f880:
    auVar58 = func_0x03280cac();
    puVar35 = PTR_DAT_077cf4d0;
    puVar34 = PTR_DAT_077cf4c8;
    lVar32 = auVar58._8_8_;
    uVar48 = auVar58._0_8_;
    plVar21 = &lStack_a0;
    uStack_90 = 0x689f884;
    puVar39 = (undefined *)0x7e28000;
    param_2 = (long *)((ulong)param_3 & 0xffffffff);
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
    puStack_88 = (undefined *)0x0;
    lStack_a0 = 0;
    plStack_98 = (long *)0x0;
    uVar36 = func_0x03280ca0(*(undefined8 *)puVar35);
    func_0x04143c38(uVar36,*(undefined8 *)puVar34);
    if (lVar32 == 0) {
      auVar61 = func_0x03280cac();
      puVar22 = auStack_f0;
      auStack_f0[0] = 0x689fac8;
      plVar45 = param_3;
      auVar58 = auVar61;
      if ((bRam0000000007e28dd7 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077da8d8);
        func_0x03280a18(PTR_DAT_0774ea58);
        func_0x03280a18(PTR_DAT_077da8e0);
        func_0x03280a18(PTR_DAT_0777e508);
        func_0x03280a18(PTR_DAT_078109f8);
        auVar58 = func_0x03280a18(PTR_DAT_07810a00);
        bRam0000000007e28dd7 = 1;
      }
      puVar34 = PTR_DAT_07810a00;
      plVar49 = (long *)0x0;
      if (param_3 != (long *)0x0) {
        if ((int)param_3[3] == 0) {
          return auVar58;
        }
        lVar32 = *(long *)PTR_DAT_07810a00;
        if (*(int *)(lVar32 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar32 = *(long *)puVar34;
        }
        unaff_x26 = PTR_DAT_077da8d8;
        unaff_x25 = (long *)PTR_DAT_0774ea58;
        lVar38 = *(long *)(*(long *)(lVar32 + 0xb8) + 8);
        auVar58._8_8_ = puVar34;
        auVar58._0_8_ = lVar38;
        if (lVar38 == 0) {
          if (*(int *)(lVar32 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar32 = *(long *)puVar34;
          }
          uVar48 = **(undefined8 **)(lVar32 + 0xb8);
          plVar45 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077da8e0);
          func_0x053569b8(plVar45,uVar48,*(undefined8 *)PTR_DAT_078109f8,0);
          plVar49 = (long *)(*(long *)(*(long *)puVar34 + 0xb8) + 8);
          *plVar49 = (long)plVar45;
          goto SUB_032809c4;
        }
        uVar48 = func_0x03d50a94(param_3,lVar38,*(undefined8 *)PTR_DAT_077da8d8);
        param_2 = (long *)func_0x03d5ffd0(uVar48,*unaff_x25);
        uVar48 = 0x689fc08;
        auVar17 = auVar61;
        goto SUB_068a09f8;
      }
      auVar58 = func_0x03280cac();
      param_2 = auVar58._8_8_;
      uVar36 = auVar58._0_8_;
      auVar62._8_8_ = plVar45;
      auVar62._0_8_ = uVar36;
      auVar15._8_8_ = uVar36;
      auVar15._0_8_ = plVar45;
      plVar21 = auStack_120;
      puVar23 = auStack_120;
      auStack_120[0] = 0x689fc54;
      uStack_110 = 0x7e28000;
      plVar50 = (long *)0x7e28000;
      plVar51 = plVar45;
      plStack_100 = param_3;
      if ((bRam0000000007e28ddb & 1) == 0) {
        uStack_108 = auVar61._0_8_;
        uStack_f8 = auVar61._8_8_;
        auVar58 = func_0x03280a18(PTR_DAT_0777e508);
        auVar61._8_8_ = uStack_f8;
        auVar61._0_8_ = uStack_108;
        bRam0000000007e28ddb = 1;
      }
      uStack_f8 = auVar61._8_8_;
      uStack_108 = auVar61._0_8_;
      if (plVar45 == (long *)0x0) {
        uVar53 = 0x689fce0;
        auVar59 = func_0x03280cac();
        lVar32 = 0;
        uVar48 = 0;
        goto SUB_0689fce0;
      }
      if ((int)plVar45[3] == 0) {
        return auVar58;
      }
      func_0x068a1518(uVar36,param_2);
      uVar48 = 0x689fcb0;
    }
    else {
      plVar50 = (long *)func_0x069fc8e0(lVar32,0);
      if (plVar50 == (long *)0x0) {
        plVar50 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_078109e8);
        func_0x041e6054(plVar50,*(undefined8 *)PTR_DAT_078109d8);
      }
      puVar39 = PTR_DAT_078109d0;
      lVar32 = func_0x069fc928(lVar32,0);
      if (lVar32 == 0) {
        lVar32 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078109f0);
        func_0x041e8a78(lVar32,*(undefined8 *)PTR_DAT_078109e0);
      }
      param_5 = *(long **)puVar39;
      func_0x04d03ad8(uVar48,&puStack_88,&plStack_98,&lStack_a0);
      auVar59._8_8_ = puStack_88;
      auVar59._0_8_ = uVar48;
      uVar53 = 0x689f9ec;
      plVar51 = plStack_98;
      param_4 = lStack_a0;
SUB_0689fce0:
      puVar34 = PTR_DAT_077bf888;
      puVar35 = auVar59._8_8_;
      lVar38 = auVar59._0_8_;
      *(undefined8 *)((long)plVar21 + -0x70) = unaff_d8;
      *(undefined **)((long)plVar21 + -0x60) = unaff_x29;
      *(undefined8 *)((long)plVar21 + -0x58) = uVar53;
      *(undefined **)((long)plVar21 + -0x50) = unaff_x28;
      *(undefined **)((long)plVar21 + -0x48) = unaff_x27;
      *(undefined **)((long)plVar21 + -0x40) = unaff_x26;
      *(long **)((long)plVar21 + -0x38) = unaff_x25;
      *(undefined **)((long)plVar21 + -0x30) = puVar39;
      *(long *)((long)plVar21 + -0x28) = lVar32;
      *(long **)((long)plVar21 + -0x20) = plVar50;
      *(undefined8 *)((long)plVar21 + -0x18) = uVar36;
      *(undefined8 *)((long)plVar21 + -0x10) = uVar48;
      *(long **)((long)plVar21 + -8) = param_2;
      plVar49 = (long *)0x7e28000;
      puVar39 = puVar35;
      plVar45 = plVar51;
      lVar32 = param_4;
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
        puVar39 = extraout_x1_02;
      }
      lVar47 = *(long *)puVar34;
      *(undefined8 *)((long)plVar21 + -0x68) = 0;
      if (*(int *)(lVar47 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar47 = *(long *)puVar34;
        puVar39 = extraout_x1_03;
      }
      puVar52 = PTR_DAT_07810a28;
      puVar46 = PTR_DAT_07810a10;
      auVar60._8_8_ = puVar39;
      auVar60._0_8_ = lVar47;
      lVar47 = **(long **)(lVar47 + 0xb8);
      if (lVar47 != 0) {
        if (0 < (int)*(ulong *)(lVar47 + 0x18)) {
          unaff_x28 = (undefined *)0x0;
          puVar39 = (undefined *)(*(ulong *)(lVar47 + 0x18) & 0xffffffff);
          *(undefined **)((long)plVar21 + -0x78) = puVar35;
          do {
            if (puVar39 <= unaff_x28) goto LAB_068a03c8;
            unaff_x26 = puVar46;
            unaff_x29 = puVar52;
            if (*(long *)(lVar38 + 0x80) == 0) goto LAB_068a03c4;
            uVar28 = *(uint *)(lVar47 + (long)unaff_x28 * 4 + 0x20);
            puVar34 = (undefined *)(ulong)uVar28;
            lVar32 = *(long *)puVar52;
            plVar45 = (long *)((long)plVar21 + -0x68);
            auVar60 = func_0x04f63934(*(long *)(lVar38 + 0x80),puVar34);
            plVar50 = unaff_x25;
            if ((auVar60._0_8_ & 1) != 0) {
              if (*(long *)(lVar38 + 0xd0) == 0) goto LAB_068a03c4;
              plVar45 = *(long **)puVar46;
              unaff_d8 = func_0x03ce26ec(0,*(undefined8 *)(*(long *)(lVar38 + 0xd0) + 0x38),puVar34)
              ;
              plVar49 = *(long **)(lVar38 + 0x50);
              if (*(int *)(*(long *)PTR_DAT_077730b8 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              plVar50 = (long *)func_0x0624cb20(puVar34,0);
              if (plVar49 == (long *)0x0) goto LAB_068a03c4;
              lVar40 = *plVar49;
              uVar43 = (ulong)*(ushort *)(lVar40 + 0x12e);
              if (uVar43 != 0) {
                piVar44 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_07773688) {
                    puVar33 = (undefined8 *)(lVar40 + (long)(*piVar44 + 1) * 0x10 + 0x138);
                    goto LAB_0689ff3c;
                  }
                  uVar43 = uVar43 - 1;
                  piVar44 = piVar44 + 4;
                } while (uVar43 != 0);
              }
              puVar33 = (undefined8 *)func_0x03256b10(plVar49,*(long *)PTR_DAT_07773688,1);
LAB_0689ff3c:
              plVar45 = (long *)puVar33[1];
              lVar40 = (*(code *)*puVar33)(plVar49,plVar50);
              unaff_x25 = plVar50;
              if ((lVar40 == 0) || (param_4 == 0)) goto LAB_068a03c4;
              uVar25 = *(uint *)(lVar40 + 0x20);
              plVar49 = (long *)(ulong)uVar25;
              lVar32 = *(long *)PTR_DAT_07810a20;
              plVar45 = plVar49;
              auVar60 = func_0x04f5ce74(param_4,puVar34);
              if ((auVar60._0_8_ & 1) == 0) {
                iVar24 = func_0x04f5b400(param_4,puVar34,*(undefined8 *)PTR_DAT_07780070);
                plVar45 = (long *)(ulong)(iVar24 + uVar25);
                lVar32 = *(long *)PTR_DAT_07780078;
                auVar60 = func_0x04f5b488(param_4,puVar34);
              }
              if (0.0 < (float)unaff_d8) {
                plVar49 = *(long **)(lVar38 + 200);
                if (plVar49 == (long *)0x0) goto LAB_068a03c4;
                lVar40 = *plVar49;
                uVar43 = (ulong)*(ushort *)(lVar40 + 0x12e);
                if (uVar43 != 0) {
                  piVar44 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_0777a750) {
                      puVar33 = (undefined8 *)(lVar40 + (long)(*piVar44 + 0x54) * 0x10 + 0x138);
                      goto LAB_068a0014;
                    }
                    uVar43 = uVar43 - 1;
                    piVar44 = piVar44 + 4;
                  } while (uVar43 != 0);
                }
                puVar33 = (undefined8 *)func_0x03256b10(plVar49,*(long *)PTR_DAT_0777a750,0x54);
LAB_068a0014:
                uVar43 = (*(code *)*puVar33)(plVar49,puVar33[1]);
                if ((uVar43 & 1) == 0) {
                  plVar45 = (long *)0x0;
                  plVar30 = (long *)func_0x06378c74(unaff_d8,puVar34,*(undefined8 *)(lVar38 + 0x48))
                  ;
                  if (plVar30 == (long *)0x0) goto LAB_068a03c4;
                  lVar40 = *plVar30;
                  plVar49 = *(long **)(lVar38 + 0x40);
                  uVar43 = (ulong)*(ushort *)(lVar40 + 0x12e);
                  if (uVar43 != 0) {
                    piVar44 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_07779820) {
                        puVar33 = (undefined8 *)(lVar40 + (long)*piVar44 * 0x10 + 0x138);
                        goto LAB_068a00b0;
                      }
                      uVar43 = uVar43 - 1;
                      piVar44 = piVar44 + 4;
                    } while (uVar43 != 0);
                  }
                  plVar45 = (long *)0x0;
                  puVar33 = (undefined8 *)func_0x03256b10(plVar30);
LAB_068a00b0:
                  plVar50 = (long *)(*(code *)*puVar33)(plVar30,puVar33[1]);
                  unaff_x25 = plVar30;
                  if (plVar49 == (long *)0x0) goto LAB_068a03c4;
                  lVar40 = *plVar49;
                  uVar43 = (ulong)*(ushort *)(lVar40 + 0x12e);
                  if (uVar43 != 0) {
                    piVar44 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_0777a498) {
                        puVar33 = (undefined8 *)(lVar40 + (long)(*piVar44 + 0x19) * 0x10 + 0x138);
                        goto LAB_068a011c;
                      }
                      uVar43 = uVar43 - 1;
                      piVar44 = piVar44 + 4;
                    } while (uVar43 != 0);
                  }
                  puVar33 = (undefined8 *)func_0x03256b10(plVar49,*(long *)PTR_DAT_0777a498,0x19);
LAB_068a011c:
                  plVar45 = (long *)puVar33[1];
                  uVar26 = (*(code *)*puVar33)(plVar49,plVar50);
                  unaff_x25 = plVar50;
                  if (*(long *)(lVar38 + 0x88) == 0) goto LAB_068a03c4;
                  plVar45 = *(long **)PTR_DAT_0777c258;
                  uVar25 = func_0x04f2ba70(*(long *)(lVar38 + 0x88),uVar26);
                }
                else {
                  plVar45 = *(long **)(lVar38 + 0x88);
                  lVar32 = 0;
                  uVar25 = func_0x06379000(unaff_d8,puVar34);
                }
                plVar49 = (long *)(ulong)uVar25;
                unaff_x25 = plVar50;
                if (plVar51 == (long *)0x0) goto LAB_068a03c4;
                lVar32 = *(long *)PTR_DAT_07810a20;
                plVar45 = plVar49;
                uVar43 = func_0x04f5ce74(plVar51,puVar34);
                if ((uVar43 & 1) == 0) {
                  iVar24 = func_0x04f5b400(plVar51,puVar34,*(undefined8 *)PTR_DAT_07780070);
                  plVar45 = (long *)(ulong)(iVar24 + uVar25);
                  lVar32 = *(long *)PTR_DAT_07780078;
                  func_0x04f5b488(plVar51,puVar34);
                }
                if (puVar35 == (undefined *)0x0) goto LAB_068a03c4;
                plVar45 = *(long **)PTR_DAT_0777c2d8;
                uVar43 = func_0x0411ca30(puVar35,puVar34);
                if ((uVar43 & 1) == 0) {
                  lVar40 = *(long *)(puVar35 + 0x10);
                  lVar37 = *(long *)PTR_DAT_0777ffc8;
                  *(int *)(puVar35 + 0x1c) = *(int *)(puVar35 + 0x1c) + 1;
                  if (lVar40 == 0) goto LAB_068a03c4;
                  uVar25 = *(uint *)(puVar35 + 0x18);
                  if (uVar25 < *(uint *)(lVar40 + 0x18)) {
                    *(uint *)(puVar35 + 0x18) = uVar25 + 1;
                    *(uint *)(lVar40 + (long)(int)uVar25 * 4 + 0x20) = uVar28;
                  }
                  else {
                    plVar45 = *(long **)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x70);
                    func_0x0411c6b8(puVar35,puVar34);
                  }
                }
                unaff_x25 = *(long **)((long)plVar21 + -0x68);
                if (unaff_x25 == (long *)0x0) goto LAB_068a03c4;
                lVar40 = *unaff_x25;
                plVar49 = *(long **)(lVar38 + 0x88);
                uVar43 = (ulong)*(ushort *)(lVar40 + 0x12e);
                if (uVar43 != 0) {
                  piVar44 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_0777c248) {
                      puVar33 = (undefined8 *)(lVar40 + (long)*piVar44 * 0x10 + 0x138);
                      goto LAB_068a0284;
                    }
                    uVar43 = uVar43 - 1;
                    piVar44 = piVar44 + 4;
                  } while (uVar43 != 0);
                }
                plVar45 = (long *)0x0;
                puVar33 = (undefined8 *)func_0x03256b10(unaff_x25);
LAB_068a0284:
                lVar40 = (*(code *)*puVar33)(unaff_x25,puVar33[1]);
                puVar35 = puVar52;
                if ((lVar40 == 0) || (plVar49 == (long *)0x0)) goto LAB_068a03c4;
                uVar27 = func_0x04f2ba70(plVar49,*(undefined4 *)(lVar40 + 0x18),
                                         *(undefined8 *)PTR_DAT_0777c258);
                puVar39 = PTR_DAT_07780070;
                plVar49 = (long *)(ulong)uVar27;
                iVar24 = func_0x04f5b400(plVar51,puVar34,*(undefined8 *)PTR_DAT_07780070);
                plVar45 = *(long **)puVar39;
                uVar25 = 0;
                if (uVar27 != 0) {
                  uVar25 = iVar24 / (int)uVar27;
                }
                auVar58 = func_0x04f5b400(plVar51,uVar28);
                plVar50 = (long *)(auVar58._0_8_ & 0xffffffff);
                auVar60 = auVar58;
                if (0 < (int)uVar25) {
                  plVar45 = (long *)(ulong)uVar25;
                  lVar32 = *(long *)PTR_DAT_07810a20;
                  auVar60 = func_0x04f5ce74(param_4,uVar28);
                  if ((auVar60._0_8_ & 1) == 0) {
                    iVar24 = func_0x04f5b400(param_4,uVar28,*(undefined8 *)PTR_DAT_07780070);
                    plVar45 = (long *)(ulong)(iVar24 + uVar25);
                    lVar32 = *(long *)PTR_DAT_07780078;
                    auVar60 = func_0x04f5b488(param_4,puVar34);
                  }
                }
                puVar35 = *(undefined **)((long)plVar21 + -0x78);
                iVar24 = 0;
                if (uVar27 != 0) {
                  iVar24 = auVar58._0_4_ / (int)uVar27;
                }
                if (auVar58._0_4_ == iVar24 * uVar27) {
                  func_0x0411dd18(puVar35,puVar34,*(undefined8 *)PTR_DAT_07810a30);
                  plVar45 = *(long **)PTR_DAT_07810a18;
                  auVar60 = func_0x04f5c844(plVar51,puVar34);
                }
              }
            }
            puVar39 = (undefined *)(ulong)*(uint *)(lVar47 + 0x18);
            unaff_x28 = unaff_x28 + 1;
            unaff_x25 = plVar50;
          } while ((long)unaff_x28 < (long)(int)*(uint *)(lVar47 + 0x18));
        }
        return auVar60;
      }
LAB_068a03c4:
      puVar52 = unaff_x29;
      puVar46 = unaff_x26;
      func_0x03280cac();
LAB_068a03c8:
      auVar58 = func_0x03280cb4();
      puVar18 = PTR_DAT_07810a50;
      unaff_x26 = PTR_DAT_07810a48;
      unaff_x27 = PTR_DAT_07810a40;
      puVar39 = PTR_DAT_07810a38;
      lVar40 = auVar58._0_8_;
      *(undefined **)((long)plVar21 + -0xe0) = puVar52;
      *(undefined8 *)((long)plVar21 + -0xd8) = 0x68a03cc;
      *(undefined **)((long)plVar21 + -0xd0) = unaff_x28;
      *(long *)((long)plVar21 + -200) = lVar47;
      *(undefined **)((long)plVar21 + -0xc0) = puVar46;
      *(long **)((long)plVar21 + -0xb8) = unaff_x25;
      *(long **)((long)plVar21 + -0xb0) = plVar49;
      *(undefined **)((long)plVar21 + -0xa8) = puVar34;
      *(long *)((long)plVar21 + -0xa0) = lVar38;
      *(undefined **)((long)plVar21 + -0x98) = puVar35;
      *(long **)((long)plVar21 + -0x90) = plVar51;
      *(long *)((long)plVar21 + -0x88) = param_4;
      unaff_x29 = (undefined *)0x7e28000;
      param_3 = param_5;
      plVar51 = param_6;
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
      uVar48 = *(undefined8 *)puVar39;
      *(undefined4 *)((long)plVar21 + -0xe4) = 0;
      uVar48 = func_0x04d04a08(lVar40,lVar32,uVar48);
      uVar48 = func_0x04d04970(lVar40,auVar58._8_8_,uVar48,*(undefined8 *)unaff_x27);
      plVar50 = *(long **)unaff_x26;
      func_0x04d048bc(lVar40,uVar48,param_6);
      param_2 = *(long **)puVar18;
      uVar43 = func_0x04d04ac4(lVar40,uVar48);
      if (*(long *)(lVar40 + 0x80) != 0) {
        param_6 = (long *)(uVar43 & 0xffffffff);
        param_2 = *(long **)PTR_DAT_07810720;
        uVar36 = func_0x04f61e04(*(long *)(lVar40 + 0x80),param_6);
        if (param_5 != (long *)0x0) {
          param_2 = (long *)((long)plVar21 + -0xe4);
          plVar50 = *(long **)PTR_DAT_077d4228;
          func_0x04f5ce0c(param_5,param_6);
          puVar34 = PTR_DAT_07810a58;
          uVar48 = uVar36;
          if (lVar32 != 0) {
            uVar28 = func_0x0411ca30(lVar32,param_6,*(undefined8 *)PTR_DAT_0777c2d8);
            auVar58 = func_0x04d04de8(lVar40,plVar45,uVar36,uVar28 & 1,
                                      *(undefined4 *)((long)plVar21 + -0xe4),*(undefined8 *)puVar34)
            ;
            return auVar58;
          }
        }
      }
      auVar58 = func_0x03280cac();
      plVar30 = auVar58._8_8_;
      lVar38 = auVar58._0_8_;
      puVar22 = (undefined8 *)((long)plVar21 + -0x150);
      *(undefined8 *)((long)plVar21 + -0x140) = 0x68a059c;
      *(undefined **)((long)plVar21 + -0x138) = unaff_x27;
      *(undefined **)((long)plVar21 + -0x130) = unaff_x26;
      *(undefined **)((long)plVar21 + -0x128) = puVar18;
      *(undefined8 *)((long)plVar21 + -0x120) = uVar48;
      *(long **)((long)plVar21 + -0x118) = param_6;
      *(long **)((long)plVar21 + -0x110) = param_5;
      *(long *)((long)plVar21 + -0x108) = lVar32;
      *(long *)((long)plVar21 + -0x100) = lVar40;
      *(long **)((long)plVar21 + -0xf8) = plVar45;
      plVar49 = (long *)((ulong)param_2 & 0xffffffff);
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
      *(undefined4 *)((long)plVar21 + -0x144) = 0;
      unaff_x25 = (long *)0x7e28000;
      if (plVar30 != (long *)0x0) {
        lVar32 = *plVar30;
        unaff_x25 = *(long **)(lVar38 + 0x40);
        uVar43 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar43 != 0) {
          piVar44 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_07779820) {
              puVar33 = (undefined8 *)(lVar32 + (long)*piVar44 * 0x10 + 0x138);
              goto LAB_068a06e8;
            }
            uVar43 = uVar43 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar43 != 0);
        }
        param_2 = (long *)0x0;
        puVar33 = (undefined8 *)func_0x03256b10(plVar30);
LAB_068a06e8:
        uVar48 = (*(code *)*puVar33)(plVar30,puVar33[1]);
        auVar4._8_8_ = uVar48;
        auVar4._0_8_ = lVar38;
        if (unaff_x25 != (long *)0x0) {
          lVar32 = *unaff_x25;
          uVar43 = (ulong)*(ushort *)(lVar32 + 0x12e);
          if (uVar43 != 0) {
            piVar44 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
            do {
              if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_0777a498) {
                puVar33 = (undefined8 *)(lVar32 + (long)(*piVar44 + 4) * 0x10 + 0x138);
                goto LAB_068a0754;
              }
              uVar43 = uVar43 - 1;
              piVar44 = piVar44 + 4;
            } while (uVar43 != 0);
          }
          puVar33 = (undefined8 *)func_0x03256b10(unaff_x25,*(long *)PTR_DAT_0777a498,4);
LAB_068a0754:
          param_2 = (long *)puVar33[1];
          plVar45 = (long *)(*(code *)*puVar33)(unaff_x25,uVar48);
          auVar6._8_8_ = plVar45;
          auVar6._0_8_ = lVar38;
          auVar5._8_8_ = plVar45;
          auVar5._0_8_ = lVar38;
          auVar58 = auVar4;
          if (*(long *)(lVar38 + 0x78) != 0) {
            param_2 = (long *)((long)plVar21 + -0x144);
            auVar58 = func_0x04fb7738(*(long *)(lVar38 + 0x78),plVar45,param_2,
                                      *(undefined8 *)PTR_DAT_07810a60);
            puVar34 = PTR_DAT_0777c258;
            if ((auVar58._0_8_ & 1) == 0) {
              return auVar58;
            }
            auVar58 = auVar5;
            if (*(long *)(lVar38 + 0x88) != 0) {
              param_2 = *(long **)PTR_DAT_0777c258;
              uVar28 = func_0x04f2ba70(*(long *)(lVar38 + 0x88),plVar49);
              unaff_x25 = (long *)puVar34;
              auVar58 = auVar6;
              if (plVar45 != (long *)0x0) {
                lVar32 = *plVar45;
                lVar38 = *(long *)(lVar38 + 0x88);
                auVar8._8_8_ = plVar45;
                auVar8._0_8_ = lVar38;
                auVar7._8_8_ = plVar45;
                auVar7._0_8_ = lVar38;
                auVar58._8_8_ = plVar45;
                auVar58._0_8_ = lVar38;
                plVar49 = (long *)(ulong)uVar28;
                uVar43 = (ulong)*(ushort *)(lVar32 + 0x12e);
                if (uVar43 != 0) {
                  piVar44 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_0777c248) {
                      puVar33 = (undefined8 *)(lVar32 + (long)*piVar44 * 0x10 + 0x138);
                      goto LAB_068a080c;
                    }
                    uVar43 = uVar43 - 1;
                    piVar44 = piVar44 + 4;
                  } while (uVar43 != 0);
                }
                param_2 = (long *)0x0;
                puVar33 = (undefined8 *)func_0x03256b10(plVar45);
LAB_068a080c:
                lVar32 = (*(code *)*puVar33)(plVar45,puVar33[1]);
                if ((lVar32 != 0) && (auVar58 = auVar7, lVar38 != 0)) {
                  param_2 = *(long **)puVar34;
                  uVar25 = func_0x04f2ba70(lVar38,*(undefined4 *)(lVar32 + 0x18));
                  puVar34 = PTR_DAT_07810a20;
                  auVar58 = auVar8;
                  if (*param_3 != 0) {
                    uVar42 = CONCAT44(0,uVar25);
                    param_2 = plVar49;
                    uVar43 = func_0x04f5ce74(*param_3,*(undefined4 *)((long)plVar21 + -0x144),
                                             plVar49,*(undefined8 *)PTR_DAT_07810a20);
                    unaff_x26 = puVar34;
                    if ((uVar43 & 1) == 0) {
                      plVar45 = (long *)*param_3;
                      auVar58._8_8_ = plVar45;
                      auVar58._0_8_ = uVar42;
                      if (plVar45 == (long *)0x0) goto LAB_068a09f4;
                      unaff_x25 = (long *)(ulong)*(uint *)((long)plVar21 + -0x144);
                      iVar24 = func_0x04f5b400(plVar45,unaff_x25,*(undefined8 *)PTR_DAT_07780070);
                      param_2 = (long *)(ulong)(iVar24 + uVar28);
                      func_0x04f5b488(plVar45,unaff_x25,param_2,*(undefined8 *)PTR_DAT_07780078);
                    }
                    puVar35 = PTR_DAT_07780070;
                    auVar58._8_8_ = plVar45;
                    auVar58._0_8_ = uVar42;
                    if (*param_3 != 0) {
                      param_2 = *(long **)PTR_DAT_07780070;
                      uVar27 = func_0x04f5b400(*param_3,*(undefined4 *)((long)plVar21 + -0x144));
                      uVar28 = 0;
                      if (uVar25 != 0) {
                        uVar28 = (int)uVar27 / (int)uVar25;
                      }
                      plVar45 = (long *)(ulong)uVar28;
                      auVar13._8_4_ = uVar28;
                      auVar13._0_8_ = uVar42;
                      auVar13._12_4_ = 0;
                      auVar12._8_4_ = uVar28;
                      auVar12._0_8_ = uVar42;
                      auVar12._12_4_ = 0;
                      auVar11._8_4_ = uVar28;
                      auVar11._0_8_ = uVar42;
                      auVar11._12_4_ = 0;
                      auVar10._8_4_ = uVar28;
                      auVar10._0_8_ = uVar42;
                      auVar10._12_4_ = 0;
                      auVar9._8_4_ = uVar28;
                      auVar9._0_8_ = uVar42;
                      auVar9._12_4_ = 0;
                      auVar58._8_4_ = uVar28;
                      auVar58._12_4_ = 0;
                      plVar49 = (long *)(ulong)uVar27;
                      unaff_x27 = puVar35;
                      if (0 < (int)uVar28) {
                        if (*plVar51 == 0) goto LAB_068a09f4;
                        uVar43 = func_0x04f5ce74(*plVar51,*(undefined4 *)((long)plVar21 + -0x144),
                                                 plVar45,*(undefined8 *)puVar34);
                        param_2 = plVar45;
                        if ((uVar43 & 1) == 0) {
                          plVar51 = (long *)*plVar51;
                          auVar58 = auVar9;
                          if (plVar51 == (long *)0x0) goto LAB_068a09f4;
                          unaff_x25 = (long *)(ulong)*(uint *)((long)plVar21 + -0x144);
                          iVar24 = func_0x04f5b400(plVar51,unaff_x25,*(undefined8 *)puVar35);
                          param_2 = (long *)(ulong)(iVar24 + uVar28);
                          func_0x04f5b488(plVar51,unaff_x25,param_2,*(undefined8 *)PTR_DAT_07780078)
                          ;
                        }
                      }
                      auVar58 = auVar10;
                      if (*plVar50 != 0) {
                        if ((int)(uVar27 - uVar28 * uVar25) < 1) {
                          param_2 = *(long **)PTR_DAT_07810a30;
                          func_0x0411dd18(*plVar50,*(undefined4 *)((long)plVar21 + -0x144));
                          auVar58 = auVar13;
                          if (*param_3 != 0) {
                            auVar58 = func_0x04f5c844(*param_3,*(undefined4 *)
                                                                ((long)plVar21 + -0x144),
                                                      *(undefined8 *)PTR_DAT_07810a18);
                            return auVar58;
                          }
                        }
                        else {
                          param_2 = *(long **)PTR_DAT_0777c2d8;
                          auVar58 = func_0x0411ca30();
                          if ((auVar58._0_8_ & 1) != 0) {
                            return auVar58;
                          }
                          lVar32 = *plVar50;
                          auVar58 = auVar11;
                          if (lVar32 != 0) {
                            uVar26 = *(undefined4 *)((long)plVar21 + -0x144);
                            auVar14._8_4_ = uVar26;
                            auVar14._0_8_ = lVar32;
                            auVar14._12_4_ = 0;
                            lVar38 = *(long *)(lVar32 + 0x10);
                            lVar47 = *(long *)PTR_DAT_0777ffc8;
                            *(int *)(lVar32 + 0x1c) = *(int *)(lVar32 + 0x1c) + 1;
                            auVar58 = auVar12;
                            if (lVar38 != 0) {
                              uVar28 = *(uint *)(lVar32 + 0x18);
                              if (uVar28 < *(uint *)(lVar38 + 0x18)) {
                                *(uint *)(lVar32 + 0x18) = uVar28 + 1;
                                *(undefined4 *)(lVar38 + (long)(int)uVar28 * 4 + 0x20) = uVar26;
                                return auVar14;
                              }
                              auVar58 = func_0x0411c6b8(lVar32,uVar26,
                                                        *(undefined8 *)
                                                         (*(long *)(*(long *)(lVar47 + 0x20) + 0xc0)
                                                         + 0x70));
                              return auVar58;
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
      auVar17._8_8_ = plVar50;
      auVar17._0_8_ = plVar51;
      uVar48 = 0x68a09f8;
      auVar61 = func_0x03280cac();
      unaff_x28 = puVar39;
SUB_068a09f8:
      lVar38 = auVar61._8_8_;
      lVar32 = auVar61._0_8_;
      puVar39 = auVar58._8_8_;
      puVar20 = (undefined1 *)((long)puVar22 + -0x40);
      puVar23 = (undefined8 *)((long)puVar22 + -0x40);
      *(undefined8 *)((long)puVar22 + -0x40) = uVar48;
      *(undefined **)((long)puVar22 + -0x30) = puVar39;
      *(long **)((long)puVar22 + -0x28) = plVar49;
      *(long *)((long)puVar22 + -0x20) = auVar58._0_8_;
      *(long *)((long)puVar22 + -0x18) = auVar17._0_8_;
      *(long **)((long)puVar22 + -0x10) = param_3;
      *(long *)((long)puVar22 + -8) = auVar17._8_8_;
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
      plVar50 = (long *)0x7e28000;
      auVar15 = auVar61;
      if (((lVar38 != 0) &&
          (lVar47 = func_0x03ced81c(lVar38,*(undefined8 *)PTR_DAT_0777bf98), lVar47 != 0)) &&
         (plVar50 = *(long **)(lVar32 + 0xa0), plVar50 != (long *)0x0)) {
        lVar40 = *plVar50;
        uVar48 = *(undefined8 *)(lVar47 + 0x30);
        uVar43 = (ulong)*(ushort *)(lVar40 + 0x12e);
        if (uVar43 != 0) {
          piVar44 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar33 = (undefined8 *)(lVar40 + (long)(*piVar44 + 9) * 0x10 + 0x138);
              goto LAB_068a0b14;
            }
            uVar43 = uVar43 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar43 != 0);
        }
        puVar33 = (undefined8 *)func_0x03256b10(plVar50,*(long *)PTR_DAT_0777a498,9);
LAB_068a0b14:
        plVar51 = (long *)(*(code *)*puVar33)(plVar50,uVar48,puVar33[1]);
        plVar49 = *(long **)(lVar32 + 0xb0);
        if (plVar49 != (long *)0x0) {
          lVar47 = *plVar49;
          uVar48 = *(undefined8 *)(lVar38 + 0x10);
          auVar15._8_8_ = uVar48;
          auVar15._0_8_ = lVar32;
          uVar43 = (ulong)*(ushort *)(lVar47 + 0x12e);
          puVar39 = *(undefined **)PTR_DAT_0776b160;
          if (uVar43 != 0) {
            piVar44 = (int *)(*(long *)(lVar47 + 0xb0) + 8);
            do {
              if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_0777e4a0) {
                puVar33 = (undefined8 *)(lVar47 + (long)*piVar44 * 0x10 + 0x138);
                goto LAB_068a0b94;
              }
              uVar43 = uVar43 - 1;
              piVar44 = piVar44 + 4;
            } while (uVar43 != 0);
          }
          puVar33 = (undefined8 *)func_0x03256b10(plVar49,*(long *)PTR_DAT_0777e4a0,0);
LAB_068a0b94:
          plVar45 = (long *)(*(code *)*puVar33)(plVar49,puVar39,plVar51,uVar48,0,puVar33[1]);
          puVar34 = PTR_DAT_077cc918;
          puVar46 = PTR_DAT_077cc910;
          plVar50 = plVar51;
          if (plVar45 != (long *)0x0) {
            plVar49 = plVar45 + 4;
            if (*plVar49 == 0) {
              plVar45 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aa98);
              func_0x06a30df4(plVar45,0);
              *plVar49 = (long)plVar45;
              goto SUB_032809c4;
            }
            plVar49 = (long *)(*plVar49 + 0x40);
            *plVar49 = (long)param_2;
            func_0x032809c4(plVar49,param_2);
            param_2 = *(long **)(lVar32 + 0xb8);
            puVar35 = (undefined *)func_0x03280ca0(*(undefined8 *)puVar46);
            auVar16._8_8_ = plVar45;
            auVar16._0_8_ = puVar35;
            auVar15._8_8_ = plVar45;
            auVar15._0_8_ = puVar35;
            func_0x04143c38(puVar35,*(undefined8 *)puVar34);
            plVar50 = (long *)puVar46;
            plVar49 = (long *)puVar34;
            if (puVar35 != (undefined *)0x0) {
              lVar32 = *(long *)(puVar35 + 0x10);
              lVar38 = *(long *)PTR_DAT_0777e4a8;
              *(int *)(puVar35 + 0x1c) = *(int *)(puVar35 + 0x1c) + 1;
              auVar15 = auVar16;
              if (lVar32 != 0) {
                uVar28 = *(uint *)(puVar35 + 0x18);
                if (uVar28 < *(uint *)(lVar32 + 0x18)) {
                  *(uint *)(puVar35 + 0x18) = uVar28 + 1;
                  plVar49 = (long *)(lVar32 + (long)(int)uVar28 * 8 + 0x20);
                  *plVar49 = (long)plVar45;
                  goto SUB_032809c4;
                }
                lVar32 = *(long *)(*(long *)(*(long *)(lVar38 + 0x20) + 0xc0) + 0x70);
                uVar48 = 0x68a0c94;
                param_1 = puVar35;
                goto SUB_0414446c;
              }
            }
          }
        }
      }
      uVar48 = 0x68a0cc4;
      auVar62 = func_0x03280cac();
    }
    puVar34 = PTR_DAT_07810a78;
    plVar45 = (long *)PTR_DAT_07810a70;
    lVar32 = auVar62._0_8_;
    *(undefined8 *)((long)puVar23 + -0x70) = unaff_d8;
    *(undefined **)((long)puVar23 + -0x60) = unaff_x29;
    *(undefined8 *)((long)puVar23 + -0x58) = uVar48;
    *(undefined **)((long)puVar23 + -0x50) = unaff_x28;
    *(undefined **)((long)puVar23 + -0x48) = unaff_x27;
    *(undefined **)((long)puVar23 + -0x40) = unaff_x26;
    *(long **)((long)puVar23 + -0x38) = unaff_x25;
    *(undefined **)((long)puVar23 + -0x30) = puVar39;
    *(long **)((long)puVar23 + -0x28) = plVar49;
    *(long **)((long)puVar23 + -0x20) = plVar50;
    *(long *)((long)puVar23 + -0x18) = auVar15._8_8_;
    *(long *)((long)puVar23 + -0x10) = auVar15._0_8_;
    *(long **)((long)puVar23 + -8) = param_2;
    plVar49 = (long *)0x7e28000;
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
    uVar48 = *plVar45;
    *(undefined8 *)((long)puVar23 + -0x90) = 0;
    *(undefined8 *)((long)puVar23 + -0x88) = 0;
    *(undefined8 *)((long)puVar23 + -0x80) = 0;
    *(undefined4 *)((long)puVar23 + -100) = 0;
    auVar63._0_8_ = func_0x03280ca0(uVar48);
    func_0x040ab20c(auVar63._0_8_,*(undefined8 *)puVar34);
    puVar18 = PTR_DAT_07810a88;
    puVar52 = PTR_DAT_07810a80;
    puVar46 = PTR_DAT_07810a60;
    puVar35 = PTR_DAT_077db278;
    puVar34 = PTR_DAT_0777a498;
    if (auVar62._8_8_ != 0) {
      func_0x04145068((undefined1 *)((long)puVar23 + -0xa8),auVar62._8_8_,
                      *(undefined8 *)PTR_DAT_077db290);
      *(undefined8 *)((long)puVar23 + -0x88) = *(undefined8 *)((long)puVar23 + -0xa0);
      *(undefined8 *)((long)puVar23 + -0x90) = *(undefined8 *)((long)puVar23 + -0xa8);
      *(undefined8 *)((long)puVar23 + -0x80) = *(undefined8 *)((long)puVar23 + -0x98);
      plVar51 = plVar49;
      while (uVar43 = func_0x051159b4((undefined1 *)((long)puVar23 + -0x90),*(undefined8 *)puVar35),
            (uVar43 & 1) != 0) {
        plVar50 = *(long **)((long)puVar23 + -0x80);
        plVar49 = plVar51;
        if (plVar50 == (long *)0x0) {
LAB_068a11e4:
          func_0x03280cac();
          plVar51 = plVar49;
LAB_068a11e8:
          plVar49 = plVar51;
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
          puVar19 = puVar39;
LAB_068a1208:
          puVar39 = puVar19;
          func_0x03280cac();
LAB_068a120c:
          func_0x03280cac();
          unaff_x25 = (long *)puVar18;
          unaff_x26 = puVar35;
          goto LAB_068a1210;
        }
        lVar38 = *plVar50;
        plVar45 = *(long **)(lVar32 + 0x40);
        uVar43 = (ulong)*(ushort *)(lVar38 + 0x12e);
        if (uVar43 != 0) {
          piVar44 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_07779820) {
              puVar33 = (undefined8 *)(lVar38 + (long)*piVar44 * 0x10 + 0x138);
              goto LAB_068a0eb4;
            }
            uVar43 = uVar43 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar43 != 0);
        }
        puVar33 = (undefined8 *)func_0x03256b10(plVar50,*(long *)PTR_DAT_07779820,0);
LAB_068a0eb4:
        plVar49 = (long *)(*(code *)*puVar33)(plVar50,puVar33[1]);
        if (plVar45 == (long *)0x0) goto LAB_068a11e8;
        lVar38 = *plVar45;
        uVar43 = (ulong)*(ushort *)(lVar38 + 0x12e);
        if (uVar43 != 0) {
          piVar44 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == *(long *)puVar34) {
              puVar33 = (undefined8 *)(lVar38 + (long)(*piVar44 + 4) * 0x10 + 0x138);
              goto LAB_068a0f18;
            }
            uVar43 = uVar43 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar43 != 0);
        }
        puVar33 = (undefined8 *)func_0x03256b10(plVar45,*(long *)puVar34,4);
LAB_068a0f18:
        uVar48 = (*(code *)*puVar33)(plVar45,plVar49,puVar33[1]);
        if (*(long *)(lVar32 + 0x78) == 0) {
          func_0x03280cac(0,uVar48);
          goto LAB_068a11e4;
        }
        uVar43 = func_0x04fb7738(*(long *)(lVar32 + 0x78),uVar48,
                                 (undefined1 *)((long)puVar23 + -100),*(undefined8 *)puVar46);
        if ((uVar43 & 1) == 0) {
          uVar48 = *(undefined8 *)puVar18;
          *(undefined8 *)((long)puVar23 + -0xa8) = 0;
          *(undefined8 *)((long)puVar23 + -0xa0) = 0;
          func_0x048cbf28((undefined1 *)((long)puVar23 + -0xa8),plVar50,0,uVar48);
          if (auVar63._0_8_ == 0) goto LAB_068a11ec;
          lVar47 = *(long *)((long)puVar23 + -0xa8);
          uVar48 = *(undefined8 *)((long)puVar23 + -0xa0);
          lVar38 = *(long *)(auVar63._0_8_ + 0x10);
          lVar40 = *(long *)puVar52;
          *(int *)(auVar63._0_8_ + 0x1c) = *(int *)(auVar63._0_8_ + 0x1c) + 1;
          if (lVar38 == 0) goto LAB_068a11f0;
          uVar28 = *(uint *)(auVar63._0_8_ + 0x18);
          if (uVar28 < *(uint *)(lVar38 + 0x18)) {
            lVar38 = lVar38 + (long)(int)uVar28 * 0x10;
            *(uint *)(auVar63._0_8_ + 0x18) = uVar28 + 1;
            plVar49 = (long *)(lVar38 + 0x20);
            *plVar49 = lVar47;
            *(undefined8 *)(lVar38 + 0x28) = uVar48;
            plVar45 = (long *)0x0;
            goto SUB_032809c4;
          }
          func_0x040aba8c(auVar63._0_8_,lVar47,uVar48,
                          *(undefined8 *)(*(long *)(*(long *)(lVar40 + 0x20) + 0xc0) + 0x70));
          plVar51 = plVar49;
        }
        else {
          func_0x06378a30(plVar50,*(undefined8 *)(lVar32 + 0x40),0);
          if (*(long *)(lVar32 + 0xd0) == 0) goto LAB_068a11fc;
          func_0x069f7880(*(long *)(lVar32 + 0xd0),*(undefined4 *)((long)puVar23 + -100),0);
          if (*(long *)(lVar32 + 0xd0) == 0) goto LAB_068a11f8;
          unaff_d8 = func_0x069f793c(*(long *)(lVar32 + 0xd0),*(undefined4 *)((long)puVar23 + -100),
                                     0);
          if (100.0 <= (float)unaff_d8) {
            uVar26 = *(undefined4 *)((long)puVar23 + -100);
            plVar45 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
            func_0x06b21870(plVar45,uVar26,1,0,0);
            plVar49 = *(long **)(lVar32 + 0x50);
            uVar28 = *(uint *)((long)puVar23 + -100);
            if (*(int *)(*(long *)PTR_DAT_077730b8 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            puVar39 = (undefined *)func_0x0624cb20((undefined *)(ulong)uVar28,0);
            puVar19 = (undefined *)(ulong)uVar28;
            if (plVar49 == (long *)0x0) goto LAB_068a1208;
            lVar38 = *plVar49;
            uVar43 = (ulong)*(ushort *)(lVar38 + 0x12e);
            if (uVar43 != 0) {
              piVar44 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
              do {
                if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_07773688) {
                  puVar33 = (undefined8 *)(lVar38 + (long)(*piVar44 + 3) * 0x10 + 0x138);
                  goto LAB_068a10d0;
                }
                uVar43 = uVar43 - 1;
                piVar44 = piVar44 + 4;
              } while (uVar43 != 0);
            }
            puVar33 = (undefined8 *)func_0x03256b10(plVar49,*(long *)PTR_DAT_07773688,3);
LAB_068a10d0:
            (*(code *)*puVar33)(plVar49,puVar39,1,0,0x14,0,1,puVar33[1]);
            if (*(long *)(lVar32 + 0xd0) != 0) {
              lVar38 = *(long *)(*(long *)(lVar32 + 0xd0) + 0x38);
              if (lVar38 != 0) {
                func_0x04f654ac((float)unaff_d8 + -100.0,lVar38,
                                *(undefined4 *)((long)puVar23 + -100),
                                *(undefined8 *)PTR_DAT_077d9ff0);
                goto LAB_068a1124;
              }
              goto LAB_068a1204;
            }
            goto LAB_068a120c;
          }
          plVar45 = (long *)0x0;
LAB_068a1124:
          uVar48 = *(undefined8 *)puVar18;
          *(undefined8 *)((long)puVar23 + -0xa8) = 0;
          *(undefined8 *)((long)puVar23 + -0xa0) = 0;
          func_0x048cbf28((undefined1 *)((long)puVar23 + -0xa8),plVar50,plVar45,uVar48);
          if (auVar63._0_8_ == 0) goto LAB_068a1200;
          lVar47 = *(long *)((long)puVar23 + -0xa8);
          uVar48 = *(undefined8 *)((long)puVar23 + -0xa0);
          lVar38 = *(long *)(auVar63._0_8_ + 0x10);
          lVar40 = *(long *)puVar52;
          *(int *)(auVar63._0_8_ + 0x1c) = *(int *)(auVar63._0_8_ + 0x1c) + 1;
          if (lVar38 == 0) goto LAB_068a11f4;
          uVar28 = *(uint *)(auVar63._0_8_ + 0x18);
          if (uVar28 < *(uint *)(lVar38 + 0x18)) {
            lVar38 = lVar38 + (long)(int)uVar28 * 0x10;
            *(uint *)(auVar63._0_8_ + 0x18) = uVar28 + 1;
            plVar49 = (long *)(lVar38 + 0x20);
            *plVar49 = lVar47;
            *(undefined8 *)(lVar38 + 0x28) = uVar48;
            plVar45 = (long *)0x0;
            goto SUB_032809c4;
          }
          func_0x040aba8c(auVar63._0_8_,lVar47,uVar48,
                          *(undefined8 *)(*(long *)(*(long *)(lVar40 + 0x20) + 0xc0) + 0x70));
          plVar51 = plVar49;
        }
      }
      func_0x051159b0((undefined1 *)((long)puVar23 + -0x90),*(undefined8 *)PTR_DAT_077db270);
      uVar36 = extraout_x1_04;
LAB_068a11b8:
      auVar63._8_8_ = uVar36;
      return auVar63;
    }
LAB_068a1210:
    auVar64 = func_0x03280cac();
    uVar48 = auVar64._0_8_;
    if (auVar64._8_4_ == 1) {
      plVar51 = (long *)func_0x072ce910(uVar48);
      lVar32 = *plVar51;
      func_0x072ce920();
      func_0x051159b0((undefined1 *)((long)puVar23 + -0x90),*(undefined8 *)PTR_DAT_077db270);
      uVar36 = extraout_x1_05;
      if (lVar32 == 0) goto LAB_068a11b8;
      func_0x03280ca4(lVar32);
    }
    func_0x051159b0((undefined1 *)((long)puVar23 + -0x90),*(undefined8 *)PTR_DAT_077db270);
    func_0x03365958(uVar48);
    func_0x03280ca4(0);
    func_0x02f09514();
    puVar34 = PTR_DAT_07810a90;
    *(undefined8 *)((long)puVar23 + -0x110) = unaff_d9;
    *(undefined8 *)((long)puVar23 + -0x108) = unaff_d8;
    *(undefined8 *)((long)puVar23 + -0x100) = 0x68a12e0;
    *(undefined **)((long)puVar23 + -0xf0) = unaff_x26;
    *(long **)((long)puVar23 + -0xe8) = unaff_x25;
    *(undefined **)((long)puVar23 + -0xe0) = puVar39;
    *(long **)((long)puVar23 + -0xd8) = plVar49;
    *(long **)((long)puVar23 + -0xd0) = plVar45;
    *(undefined8 *)((long)puVar23 + -200) = 0;
    *(undefined8 *)((long)puVar23 + -0xc0) = uVar48;
    *(long *)((long)puVar23 + -0xb8) = auVar63._0_8_;
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
    auVar57._0_8_ = func_0x03280ca0(*(undefined8 *)puVar34);
    auVar57._8_8_ = 0;
    return auVar57;
  }
  lVar38 = *plVar45;
  uVar48 = *(undefined8 *)(lVar32 + 0x30);
  uVar43 = (ulong)*(ushort *)(lVar38 + 0x12e);
  if (uVar43 != 0) {
    piVar44 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
    do {
      if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar33 = (undefined8 *)(lVar38 + (long)(*piVar44 + 9) * 0x10 + 0x138);
        goto LAB_0689f6b8;
      }
      uVar43 = uVar43 - 1;
      piVar44 = piVar44 + 4;
    } while (uVar43 != 0);
  }
  puVar33 = (undefined8 *)func_0x03256b10(plVar45,*(long *)PTR_DAT_0777a498,9);
LAB_0689f6b8:
  param_3 = (long *)puVar33[1];
  plVar45 = (long *)(*(code *)*puVar33)(plVar45,uVar48);
  if (plVar45 == (long *)0x0) goto LAB_0689f880;
  lVar32 = *plVar45;
  plVar49 = *(long **)(param_1 + 0xa0);
  uVar43 = (ulong)*(ushort *)(lVar32 + 0x12e);
  if (uVar43 != 0) {
    piVar44 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
    do {
      if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_07779820) {
        puVar33 = (undefined8 *)(lVar32 + (long)*piVar44 * 0x10 + 0x138);
        goto LAB_0689f728;
      }
      uVar43 = uVar43 - 1;
      piVar44 = piVar44 + 4;
    } while (uVar43 != 0);
  }
  param_3 = (long *)0x0;
  puVar33 = (undefined8 *)func_0x03256b10(plVar45);
LAB_0689f728:
  puVar34 = (undefined *)(*(code *)*puVar33)(plVar45,puVar33[1]);
  if (plVar49 == (long *)0x0) goto LAB_0689f880;
  lVar32 = *plVar49;
  uVar43 = (ulong)*(ushort *)(lVar32 + 0x12e);
  if (uVar43 != 0) {
    piVar44 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
    do {
      if (*(long *)(piVar44 + -2) == *(long *)puVar39) {
        puVar33 = (undefined8 *)(lVar32 + (long)(*piVar44 + 4) * 0x10 + 0x138);
        goto LAB_0689f78c;
      }
      uVar43 = uVar43 - 1;
      piVar44 = piVar44 + 4;
    } while (uVar43 != 0);
  }
  puVar33 = (undefined8 *)func_0x03256b10(plVar49,*(long *)puVar39,4);
LAB_0689f78c:
  param_3 = (long *)puVar33[1];
  uVar48 = (*(code *)*puVar33)(plVar49,puVar34);
  if (*(long *)(param_1 + 0x78) == 0) goto LAB_0689f880;
  param_3 = *(long **)PTR_DAT_07780148;
  auVar58 = func_0x04fb5e4c(*(long *)(param_1 + 0x78),uVar48);
  if ((auVar58._0_8_ & 1) == 0) {
    return auVar58;
  }
  puVar35 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf4d0);
  func_0x04143c38(puVar35,*(undefined8 *)PTR_DAT_077cf4c8);
  if (puVar35 == (undefined *)0x0) goto LAB_0689f880;
  lVar32 = *(long *)(puVar35 + 0x10);
  lVar38 = *(long *)PTR_DAT_077db450;
  *(int *)(puVar35 + 0x1c) = *(int *)(puVar35 + 0x1c) + 1;
  if (lVar32 == 0) goto LAB_0689f880;
  uVar28 = *(uint *)(puVar35 + 0x18);
  if (uVar28 < *(uint *)(lVar32 + 0x18)) {
    *(uint *)(puVar35 + 0x18) = uVar28 + 1;
    plVar49 = (long *)(lVar32 + (long)(int)uVar28 * 8 + 0x20);
    *plVar49 = (long)plVar45;
    goto SUB_032809c4;
  }
  lVar32 = *(long *)(*(long *)(*(long *)(lVar38 + 0x20) + 0xc0) + 0x70);
  uVar48 = 0x689f860;
  puVar46 = puVar35;
SUB_0414446c:
  *(undefined8 *)(puVar20 + -0x30) = uVar48;
  *(undefined **)(puVar20 + -0x20) = puVar46;
  *(long **)(puVar20 + -0x18) = plVar45;
  *(undefined **)(puVar20 + -0x10) = param_1;
  *(long **)(puVar20 + -8) = param_2;
  uVar25 = *(uint *)(puVar35 + 0x18);
  uVar28 = uVar25 + 1;
  lVar32 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x78);
  func_0x04144aa0(puVar35,(ulong)uVar28);
  lVar38 = *(long *)(puVar35 + 0x10);
  *(uint *)(puVar35 + 0x18) = uVar28;
  if (lVar38 == 0) {
    func_0x03280cac();
  }
  else if (uVar25 < *(uint *)(lVar38 + 0x18)) {
    plVar49 = (long *)(lVar38 + (long)(int)uVar25 * 8 + 0x20);
    *plVar49 = (long)plVar45;
    goto SUB_032809c4;
  }
  auVar58 = func_0x03280cb4();
  lVar40 = auVar58._8_8_;
  lVar38 = auVar58._0_8_;
  *(undefined8 *)(puVar20 + -0x60) = 0x41444d8;
  *(long *)(puVar20 + -0x50) = (long)(int)uVar25;
  *(ulong *)(puVar20 + -0x48) = (ulong)uVar28;
  *(undefined **)(puVar20 + -0x40) = puVar35;
  *(long **)(puVar20 + -0x38) = plVar45;
  lVar37 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x58);
  func_0x03ec2768(lVar40,0x14);
  lVar47 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar47 + 0x135) & 1) == 0) {
    lVar47 = func_0x0325681c(lVar47);
  }
  if (lVar40 == 0) {
LAB_0414454c:
    plVar45 = (long *)0x0;
  }
  else {
    plVar45 = (long *)func_0x03280b90(lVar40,lVar47);
    if (plVar45 == (long *)0x0) {
      func_0x03281048(lVar40,lVar47);
      goto LAB_0414454c;
    }
  }
  lVar47 = *(long *)(lVar38 + 0x10);
  lVar41 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x80);
  *(int *)(lVar38 + 0x1c) = *(int *)(lVar38 + 0x1c) + 1;
  if (lVar47 != 0) {
    uVar28 = *(uint *)(lVar38 + 0x18);
    if (uVar28 < *(uint *)(lVar47 + 0x18)) {
      *(uint *)(lVar38 + 0x18) = uVar28 + 1;
      plVar49 = (long *)(lVar47 + (long)(int)uVar28 * 8 + 0x20);
      *plVar49 = (long)plVar45;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar31 = (ulong *)(((ulong)plVar49 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar31,0x10);
          if (bVar2) {
            *puVar31 = *puVar31 | 1L << ((ulong)plVar49 >> 0xc & 0x3f);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      auVar54._8_8_ = plVar45;
      auVar54._0_8_ = plVar49;
      return auVar54;
    }
    func_0x0414446c(lVar38,plVar45,
                    *(undefined8 *)(*(long *)(*(long *)(lVar41 + 0x20) + 0xc0) + 0x70));
    uVar48 = extraout_x1;
LAB_041445ac:
    auVar55._4_4_ = 0;
    auVar55._0_4_ = *(int *)(lVar38 + 0x18) - 1;
    auVar55._8_8_ = uVar48;
    return auVar55;
  }
  auVar64 = func_0x03280cac();
  uVar48 = auVar64._0_8_;
  if (auVar64._8_4_ == 1) {
    puVar33 = (undefined8 *)func_0x072ce910(uVar48);
    uVar48 = func_0x03280a2c(PTR_DAT_077542c0);
    uVar43 = func_0x032810d8(uVar48,*(undefined8 *)*puVar33);
    if ((uVar43 & 1) != 0) {
      func_0x072ce920();
      uVar48 = *(undefined8 *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x68);
      lVar32 = func_0x03280a2c(PTR_DAT_0774e558);
      if (*(int *)(lVar32 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar48 = func_0x057a51c4(uVar48,0);
      func_0x057b7b18(lVar40,uVar48,0);
      uVar48 = extraout_x1_00;
      goto LAB_041445ac;
    }
    puVar29 = (undefined8 *)func_0x072ce930(8);
    *puVar29 = *puVar33;
    lVar37 = 0;
    uVar48 = func_0x072ce940(puVar29,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
    func_0x072ce920();
  }
  func_0x03365958(uVar48);
  auVar58 = func_0x02f09514();
  plVar50 = auVar58._8_8_;
  plVar49 = auVar58._0_8_;
  uVar28 = *(uint *)(plVar49 + 3);
  lVar47 = *(long *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x90);
  uVar43 = (ulong)uVar28;
  *(undefined8 *)(puVar20 + -0xa0) = 0x4144678;
  *(long **)(puVar20 + -0x98) = unaff_x25;
  *(undefined **)(puVar20 + -0x90) = puVar39;
  *(undefined **)(puVar20 + -0x88) = puVar34;
  *(undefined8 *)(puVar20 + -0x80) = uVar48;
  *(long *)(puVar20 + -0x78) = lVar32;
  *(long *)(puVar20 + -0x70) = lVar40;
  *(long *)(puVar20 + -0x68) = lVar38;
  plVar51 = (long *)0x7e18000;
  plVar45 = plVar50;
  if ((bRam0000000007e18233 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e18233 = 1;
  }
  if (plVar50 == (long *)0x0) {
    func_0x057a867c(6,0);
  }
  if (*(uint *)(plVar49 + 3) < uVar28) {
    func_0x057b8434(0);
  }
  lVar32 = *(long *)(*(long *)(*(long *)(lVar47 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
    lVar32 = func_0x0325681c(lVar32);
  }
  plVar30 = (long *)func_0x03280b90(plVar50,lVar32);
  if (plVar30 == (long *)0x0) {
    if ((int)uVar28 < (int)plVar49[3]) {
      if (plVar50 == (long *)0x0) {
        func_0x03280cac();
      }
      else {
        lVar32 = *(long *)(*(long *)(*(long *)(lVar47 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
          lVar32 = func_0x0325681c(lVar32);
        }
        lVar38 = *plVar50;
        uVar42 = (ulong)*(ushort *)(lVar38 + 0x12e);
        if (uVar42 != 0) {
          piVar44 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == lVar32) {
              puVar33 = (undefined8 *)(lVar38 + (long)*piVar44 * 0x10 + 0x138);
              goto LAB_04145868;
            }
            uVar42 = uVar42 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar42 != 0);
        }
        plVar45 = (long *)0x0;
        puVar33 = (undefined8 *)func_0x03256b10(plVar50);
LAB_04145868:
        plVar51 = (long *)(*(code *)*puVar33)(plVar50,puVar33[1]);
        puVar39 = PTR_DAT_0774e8e0;
        if (plVar51 != (long *)0x0) {
          do {
            lVar32 = *plVar51;
            uVar42 = (ulong)*(ushort *)(lVar32 + 0x12e);
            if (uVar42 != 0) {
              piVar44 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
              do {
                if (*(long *)(piVar44 + -2) == *(long *)puVar39) {
                  puVar33 = (undefined8 *)(lVar32 + (long)*piVar44 * 0x10 + 0x138);
                  goto LAB_041458d0;
                }
                uVar42 = uVar42 - 1;
                piVar44 = piVar44 + 4;
              } while (uVar42 != 0);
            }
            plVar45 = (long *)0x0;
            puVar33 = (undefined8 *)func_0x03256b10(plVar51);
LAB_041458d0:
            auVar58 = (*(code *)*puVar33)(plVar51,puVar33[1]);
            if ((auVar58._0_8_ & 1) == 0) {
              uVar43 = 0;
              iVar24 = 5;
              if (plVar51 == (long *)0x0) goto LAB_041459e8;
              goto LAB_04145988;
            }
            lVar32 = *(long *)(*(long *)(*(long *)(lVar47 + 0x20) + 0xc0) + 0x148);
            if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
              lVar32 = func_0x0325681c(lVar32);
            }
            lVar38 = *plVar51;
            uVar42 = (ulong)*(ushort *)(lVar38 + 0x12e);
            if (uVar42 != 0) {
              piVar44 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
              do {
                if (*(long *)(piVar44 + -2) == lVar32) {
                  puVar33 = (undefined8 *)(lVar38 + (long)*piVar44 * 0x10 + 0x138);
                  goto LAB_04145948;
                }
                uVar42 = uVar42 - 1;
                piVar44 = piVar44 + 4;
              } while (uVar42 != 0);
            }
            puVar33 = (undefined8 *)func_0x03256b10(plVar51,lVar32,0);
LAB_04145948:
            plVar45 = (long *)(*(code *)*puVar33)(plVar51,puVar33[1]);
            func_0x04145380(plVar49,uVar43,plVar45,
                            *(undefined8 *)(*(long *)(*(long *)(lVar47 + 0x20) + 0xc0) + 0x160));
            uVar43 = (ulong)((int)uVar43 + 1);
          } while( true );
        }
      }
      func_0x03280cac();
      do {
        auVar64 = func_0x03280ca4(uVar43);
        if (auVar64._8_4_ != 1) {
          if (plVar51 == (long *)0x0) goto LAB_04145ae0;
          lVar32 = *plVar51;
          uVar43 = (ulong)*(ushort *)(lVar32 + 0x12e);
          if (uVar43 == 0) goto LAB_04145ab8;
          piVar44 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          goto LAB_04145aa0;
        }
        puVar31 = (ulong *)func_0x072ce910(auVar64._0_8_);
        uVar43 = *puVar31;
        auVar58 = func_0x072ce920();
        iVar24 = 0;
        if (plVar51 != (long *)0x0) {
LAB_04145988:
          lVar32 = *plVar51;
          uVar42 = (ulong)*(ushort *)(lVar32 + 0x12e);
          if (uVar42 != 0) {
            piVar44 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
            do {
              if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar33 = (undefined8 *)(lVar32 + (long)*piVar44 * 0x10 + 0x138);
                goto LAB_041459dc;
              }
              uVar42 = uVar42 - 1;
              piVar44 = piVar44 + 4;
            } while (uVar42 != 0);
          }
          plVar45 = (long *)0x0;
          puVar33 = (undefined8 *)func_0x03256b10(plVar51);
LAB_041459dc:
          auVar58 = (*(code *)*puVar33)(plVar51,puVar33[1]);
        }
LAB_041459e8:
      } while (uVar43 != 0);
      if (iVar24 == 5) goto LAB_04145a10;
      if (iVar24 != 0) {
        return auVar58;
      }
    }
    auVar58 = func_0x041462cc(plVar49,plVar50,
                              *(undefined8 *)(*(long *)(*(long *)(lVar47 + 0x20) + 0xc0) + 0x40));
  }
  else {
    lVar32 = *(long *)(*(long *)(*(long *)(lVar47 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = func_0x0325681c(lVar32);
    }
    lVar38 = *plVar30;
    uVar43 = (ulong)*(ushort *)(lVar38 + 0x12e);
    if (uVar43 != 0) {
      piVar44 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
      do {
        if (*(long *)(piVar44 + -2) == lVar32) {
          puVar33 = (undefined8 *)(lVar38 + (long)*piVar44 * 0x10 + 0x138);
          goto LAB_04145728;
        }
        uVar43 = uVar43 - 1;
        piVar44 = piVar44 + 4;
      } while (uVar43 != 0);
    }
    puVar33 = (undefined8 *)func_0x03256b10(plVar30,lVar32,0);
LAB_04145728:
    auVar58 = (*(code *)*puVar33)(plVar30,puVar33[1]);
    iVar24 = auVar58._0_4_;
    if (0 < iVar24) {
      func_0x04144aa0(plVar49,(int)plVar49[3] + iVar24,
                      *(undefined8 *)(*(long *)(*(long *)(lVar47 + 0x20) + 0xc0) + 0x78));
      iVar3 = (int)plVar49[3] - uVar28;
      if (iVar3 != 0 && (int)uVar28 <= (int)plVar49[3]) {
        func_0x057b9f30(plVar49[2],uVar28,plVar49[2],iVar24 + uVar28,iVar3,0);
      }
      if (plVar49 == plVar30) {
        func_0x057b9f30(plVar49[2],0,plVar49[2],uVar28,uVar28,0);
        auVar58 = func_0x057b9f30(plVar49[2],iVar24 + uVar28,plVar49[2],uVar28 << 1,
                                  (int)plVar49[3] - uVar28,0);
      }
      else {
        lVar38 = plVar49[2];
        lVar32 = *(long *)(*(long *)(*(long *)(lVar47 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
          lVar32 = func_0x0325681c(lVar32);
        }
        lVar47 = *plVar30;
        uVar43 = (ulong)*(ushort *)(lVar47 + 0x12e);
        if (uVar43 != 0) {
          piVar44 = (int *)(*(long *)(lVar47 + 0xb0) + 8);
          do {
            if (*(long *)(piVar44 + -2) == lVar32) {
              puVar33 = (undefined8 *)(lVar47 + (long)(*piVar44 + 5) * 0x10 + 0x138);
              goto LAB_04145838;
            }
            uVar43 = uVar43 - 1;
            piVar44 = piVar44 + 4;
          } while (uVar43 != 0);
        }
        puVar33 = (undefined8 *)func_0x03256b10(plVar30,lVar32,5);
LAB_04145838:
        auVar58 = (*(code *)*puVar33)(plVar30,lVar38,uVar28,puVar33[1]);
      }
      *(int *)(plVar49 + 3) = (int)plVar49[3] + iVar24;
    }
  }
LAB_04145a10:
  *(int *)((long)plVar49 + 0x1c) = *(int *)((long)plVar49 + 0x1c) + 1;
  return auVar58;
  while( true ) {
    uVar43 = uVar43 - 1;
    piVar44 = piVar44 + 4;
    if (uVar43 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar44 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar33 = (undefined8 *)(lVar32 + (long)*piVar44 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar45 = (long *)0x0;
  puVar33 = (undefined8 *)func_0x03256b10(plVar51);
LAB_04145ad4:
  (*(code *)*puVar33)(plVar51,puVar33[1]);
LAB_04145ae0:
  func_0x03365958(auVar64._0_8_);
  func_0x03280ca4(0);
  auVar58 = func_0x02f09514();
  lVar32 = auVar58._0_8_;
  *(undefined8 *)(puVar20 + -0xc0) = 0x4145af8;
  *(long *)(puVar20 + -0xb0) = lVar47;
  *(long **)(puVar20 + -0xa8) = plVar49;
  auVar58 = func_0x03f898d4(*(undefined8 *)(lVar32 + 0x10),auVar58._8_8_,0,
                            *(undefined4 *)(lVar32 + 0x18),
                            *(undefined8 *)
                             (*(long *)(*(long *)(*(long *)(*(long *)(plVar45[4] + 0xc0) + 0xd0) +
                                                 0x20) + 0xc0) + 0x158));
  uVar48 = auVar58._8_8_;
  if (-1 < (int)auVar58._0_4_) {
    func_0x04145da4(lVar32,auVar58._0_8_ & 0xffffffff);
    uVar48 = extraout_x1_01;
  }
  auVar56._4_4_ = 0;
  auVar56._0_4_ = ~auVar58._0_4_ >> 0x1f;
  auVar56._8_8_ = uVar48;
  return auVar56;
}

