/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/PlayerModel.txt
 * Cpp2IL method: System.Void SetupInitialProducerInventory()
 * Ghidra function entry: 0366d7d0
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x03672c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0366db48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0366db70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03666460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036664f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036665ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0366660c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036666e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036667b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03666950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03666aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03667380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03667418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036678d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036679a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03667a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03667aa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03667b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03667b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03667c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03667c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026e3bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026e3cc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x026e2e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03667e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036680b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03668388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03666be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03666df0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0366838c) */
/* WARNING: Removing unreachable block (ram,0x036683a8) */
/* WARNING: Removing unreachable block (ram,0x036683b8) */
/* WARNING: Removing unreachable block (ram,0x036683fc) */
/* WARNING: Removing unreachable block (ram,0x036680b4) */
/* WARNING: Removing unreachable block (ram,0x0366849c) */
/* WARNING: Removing unreachable block (ram,0x036680d0) */
/* WARNING: Removing unreachable block (ram,0x036680e0) */
/* WARNING: Removing unreachable block (ram,0x03668124) */
/* WARNING: Removing unreachable block (ram,0x03667e1c) */
/* WARNING: Removing unreachable block (ram,0x03667e24) */
/* WARNING: Removing unreachable block (ram,0x03667e80) */
/* WARNING: Removing unreachable block (ram,0x03667ed4) */
/* WARNING: Removing unreachable block (ram,0x03667eec) */
/* WARNING: Removing unreachable block (ram,0x03667ef4) */
/* WARNING: Removing unreachable block (ram,0x03667f1c) */
/* WARNING: Removing unreachable block (ram,0x03667f00) */
/* WARNING: Removing unreachable block (ram,0x03667f0c) */
/* WARNING: Removing unreachable block (ram,0x03667f28) */
/* WARNING: Removing unreachable block (ram,0x0366812c) */
/* WARNING: Removing unreachable block (ram,0x03667f44) */
/* WARNING: Removing unreachable block (ram,0x03667f70) */
/* WARNING: Removing unreachable block (ram,0x03667f80) */
/* WARNING: Removing unreachable block (ram,0x03667f88) */
/* WARNING: Removing unreachable block (ram,0x03667fb0) */
/* WARNING: Removing unreachable block (ram,0x03667f94) */
/* WARNING: Removing unreachable block (ram,0x03667fa0) */
/* WARNING: Removing unreachable block (ram,0x03667fbc) */
/* WARNING: Removing unreachable block (ram,0x03668130) */
/* WARNING: Removing unreachable block (ram,0x03668148) */
/* WARNING: Removing unreachable block (ram,0x03668158) */
/* WARNING: Removing unreachable block (ram,0x03668160) */
/* WARNING: Removing unreachable block (ram,0x03668188) */
/* WARNING: Removing unreachable block (ram,0x0366816c) */
/* WARNING: Removing unreachable block (ram,0x03668178) */
/* WARNING: Removing unreachable block (ram,0x03668194) */
/* WARNING: Removing unreachable block (ram,0x036681a0) */
/* WARNING: Removing unreachable block (ram,0x036681a4) */
/* WARNING: Removing unreachable block (ram,0x036681ac) */
/* WARNING: Removing unreachable block (ram,0x036681c4) */
/* WARNING: Removing unreachable block (ram,0x036681cc) */
/* WARNING: Removing unreachable block (ram,0x036681f4) */
/* WARNING: Removing unreachable block (ram,0x036681d8) */
/* WARNING: Removing unreachable block (ram,0x036681e4) */
/* WARNING: Removing unreachable block (ram,0x03668200) */
/* WARNING: Removing unreachable block (ram,0x03668404) */
/* WARNING: Removing unreachable block (ram,0x0366821c) */
/* WARNING: Removing unreachable block (ram,0x03668248) */
/* WARNING: Removing unreachable block (ram,0x03668258) */
/* WARNING: Removing unreachable block (ram,0x03668260) */
/* WARNING: Removing unreachable block (ram,0x03668288) */
/* WARNING: Removing unreachable block (ram,0x0366826c) */
/* WARNING: Removing unreachable block (ram,0x03668278) */
/* WARNING: Removing unreachable block (ram,0x03668294) */
/* WARNING: Removing unreachable block (ram,0x03668408) */
/* WARNING: Removing unreachable block (ram,0x036682a4) */
/* WARNING: Removing unreachable block (ram,0x036682ac) */
/* WARNING: Removing unreachable block (ram,0x036682c4) */
/* WARNING: Removing unreachable block (ram,0x036682cc) */
/* WARNING: Removing unreachable block (ram,0x036682f4) */
/* WARNING: Removing unreachable block (ram,0x036682d8) */
/* WARNING: Removing unreachable block (ram,0x036682e4) */
/* WARNING: Removing unreachable block (ram,0x03668300) */
/* WARNING: Removing unreachable block (ram,0x03668358) */
/* WARNING: Removing unreachable block (ram,0x03668360) */
/* WARNING: Removing unreachable block (ram,0x03668374) */
/* WARNING: Removing unreachable block (ram,0x0366837c) */
/* WARNING: Removing unreachable block (ram,0x03667fcc) */
/* WARNING: Removing unreachable block (ram,0x03667fd4) */
/* WARNING: Removing unreachable block (ram,0x03667fec) */
/* WARNING: Removing unreachable block (ram,0x03667ff4) */
/* WARNING: Removing unreachable block (ram,0x0366801c) */
/* WARNING: Removing unreachable block (ram,0x03668000) */
/* WARNING: Removing unreachable block (ram,0x0366800c) */
/* WARNING: Removing unreachable block (ram,0x03668028) */
/* WARNING: Removing unreachable block (ram,0x036684a0) */
/* WARNING: Removing unreachable block (ram,0x03668080) */
/* WARNING: Removing unreachable block (ram,0x03668088) */
/* WARNING: Removing unreachable block (ram,0x0366809c) */
/* WARNING: Removing unreachable block (ram,0x036684a4) */
/* WARNING: Removing unreachable block (ram,0x036684a8) */
/* WARNING: Removing unreachable block (ram,0x036684ac) */
/* WARNING: Removing unreachable block (ram,0x036684b0) */
/* WARNING: Removing unreachable block (ram,0x036684b4) */
/* WARNING: Removing unreachable block (ram,0x036684b8) */
/* WARNING: Removing unreachable block (ram,0x036684bc) */
/* WARNING: Removing unreachable block (ram,0x036684c8) */
/* WARNING: Removing unreachable block (ram,0x036680a4) */
/* WARNING: Removing unreachable block (ram,0x026e3ccc) */
/* WARNING: Removing unreachable block (ram,0x026e3cdc) */
/* WARNING: Removing unreachable block (ram,0x026e3bd4) */
/* WARNING: Removing unreachable block (ram,0x026e3c00) */
/* WARNING: Removing unreachable block (ram,0x026e3be4) */
/* WARNING: Removing unreachable block (ram,0x03667c34) */
/* WARNING: Removing unreachable block (ram,0x03667b7c) */
/* WARNING: Removing unreachable block (ram,0x03667b84) */
/* WARNING: Removing unreachable block (ram,0x03667b98) */
/* WARNING: Removing unreachable block (ram,0x03667ba0) */
/* WARNING: Removing unreachable block (ram,0x03667c0c) */
/* WARNING: Removing unreachable block (ram,0x03667bb4) */
/* WARNING: Removing unreachable block (ram,0x03667bbc) */
/* WARNING: Removing unreachable block (ram,0x03667bc8) */
/* WARNING: Removing unreachable block (ram,0x03667aa4) */
/* WARNING: Removing unreachable block (ram,0x03667aac) */
/* WARNING: Removing unreachable block (ram,0x03667ad8) */
/* WARNING: Removing unreachable block (ram,0x03667ae4) */
/* WARNING: Removing unreachable block (ram,0x03667b54) */
/* WARNING: Removing unreachable block (ram,0x03667af8) */
/* WARNING: Removing unreachable block (ram,0x03667b00) */
/* WARNING: Removing unreachable block (ram,0x03667b10) */
/* WARNING: Removing unreachable block (ram,0x036678d8) */
/* WARNING: Removing unreachable block (ram,0x036678e4) */
/* WARNING: Removing unreachable block (ram,0x036678fc) */
/* WARNING: Removing unreachable block (ram,0x03667928) */
/* WARNING: Removing unreachable block (ram,0x03667934) */
/* WARNING: Removing unreachable block (ram,0x036679ac) */
/* WARNING: Removing unreachable block (ram,0x036679cc) */
/* WARNING: Removing unreachable block (ram,0x036679f8) */
/* WARNING: Removing unreachable block (ram,0x03667a04) */
/* WARNING: Removing unreachable block (ram,0x03667a7c) */
/* WARNING: Removing unreachable block (ram,0x03667a20) */
/* WARNING: Removing unreachable block (ram,0x03667a28) */
/* WARNING: Removing unreachable block (ram,0x03667a38) */
/* WARNING: Removing unreachable block (ram,0x03667950) */
/* WARNING: Removing unreachable block (ram,0x03667958) */
/* WARNING: Removing unreachable block (ram,0x03667968) */
/* WARNING: Removing unreachable block (ram,0x03666610) */
/* WARNING: Removing unreachable block (ram,0x0366665c) */
/* WARNING: Removing unreachable block (ram,0x03666668) */
/* WARNING: Removing unreachable block (ram,0x036666ec) */
/* WARNING: Removing unreachable block (ram,0x0366672c) */
/* WARNING: Removing unreachable block (ram,0x03666738) */
/* WARNING: Removing unreachable block (ram,0x036667b8) */
/* WARNING: Removing unreachable block (ram,0x036667ec) */
/* WARNING: Removing unreachable block (ram,0x03666828) */
/* WARNING: Removing unreachable block (ram,0x03666bd0) */
/* WARNING: Removing unreachable block (ram,0x03666840) */
/* WARNING: Removing unreachable block (ram,0x03666874) */
/* WARNING: Removing unreachable block (ram,0x0366685c) */
/* WARNING: Removing unreachable block (ram,0x03666878) */
/* WARNING: Removing unreachable block (ram,0x03666888) */
/* WARNING: Removing unreachable block (ram,0x0366688c) */
/* WARNING: Removing unreachable block (ram,0x036668e8) */
/* WARNING: Removing unreachable block (ram,0x036668f0) */
/* WARNING: Removing unreachable block (ram,0x03666954) */
/* WARNING: Removing unreachable block (ram,0x03666a18) */
/* WARNING: Removing unreachable block (ram,0x03666a20) */
/* WARNING: Removing unreachable block (ram,0x03666ab0) */
/* WARNING: Removing unreachable block (ram,0x03666b14) */
/* WARNING: Removing unreachable block (ram,0x03666b20) */
/* WARNING: Removing unreachable block (ram,0x03666b30) */
/* WARNING: Removing unreachable block (ram,0x03666b34) */
/* WARNING: Removing unreachable block (ram,0x03666b3c) */
/* WARNING: Removing unreachable block (ram,0x03666b40) */
/* WARNING: Removing unreachable block (ram,0x03666b54) */
/* WARNING: Removing unreachable block (ram,0x03666b58) */
/* WARNING: Removing unreachable block (ram,0x03666b74) */
/* WARNING: Removing unreachable block (ram,0x03666b78) */
/* WARNING: Removing unreachable block (ram,0x03666a44) */
/* WARNING: Removing unreachable block (ram,0x03666a4c) */
/* WARNING: Removing unreachable block (ram,0x03666a60) */
/* WARNING: Removing unreachable block (ram,0x036668fc) */
/* WARNING: Removing unreachable block (ram,0x03666904) */
/* WARNING: Removing unreachable block (ram,0x03666910) */
/* WARNING: Removing unreachable block (ram,0x0366675c) */
/* WARNING: Removing unreachable block (ram,0x03666764) */
/* WARNING: Removing unreachable block (ram,0x03666774) */
/* WARNING: Removing unreachable block (ram,0x03666690) */
/* WARNING: Removing unreachable block (ram,0x03666698) */
/* WARNING: Removing unreachable block (ram,0x036666a8) */
/* WARNING: Removing unreachable block (ram,0x03666464) */
/* WARNING: Removing unreachable block (ram,0x03666474) */
/* WARNING: Removing unreachable block (ram,0x03666480) */
/* WARNING: Removing unreachable block (ram,0x036664f8) */
/* WARNING: Removing unreachable block (ram,0x03666518) */
/* WARNING: Removing unreachable block (ram,0x03666520) */
/* WARNING: Removing unreachable block (ram,0x03666544) */
/* WARNING: Removing unreachable block (ram,0x03666550) */
/* WARNING: Removing unreachable block (ram,0x036665f0) */
/* WARNING: Removing unreachable block (ram,0x026e2ba4) */
/* WARNING: Removing unreachable block (ram,0x026e2bc0) */
/* WARNING: Removing unreachable block (ram,0x026e2bc8) */
/* WARNING: Removing unreachable block (ram,0x026e2bec) */
/* WARNING: Removing unreachable block (ram,0x026e2bcc) */
/* WARNING: Removing unreachable block (ram,0x026e2bf8) */
/* WARNING: Removing unreachable block (ram,0x026e2c00) */
/* WARNING: Removing unreachable block (ram,0x026e2bd0) */
/* WARNING: Removing unreachable block (ram,0x026e2c14) */
/* WARNING: Removing unreachable block (ram,0x026e2c34) */
/* WARNING: Removing unreachable block (ram,0x026e2c40) */
/* WARNING: Removing unreachable block (ram,0x026e2c50) */
/* WARNING: Removing unreachable block (ram,0x026e2c54) */
/* WARNING: Removing unreachable block (ram,0x026e2cbc) */
/* WARNING: Removing unreachable block (ram,0x026e2d04) */
/* WARNING: Removing unreachable block (ram,0x026e2d10) */
/* WARNING: Removing unreachable block (ram,0x026e2d44) */
/* WARNING: Removing unreachable block (ram,0x026e2d50) */
/* WARNING: Removing unreachable block (ram,0x026e2d78) */
/* WARNING: Removing unreachable block (ram,0x026e2df4) */
/* WARNING: Removing unreachable block (ram,0x026e2e3c) */
/* WARNING: Removing unreachable block (ram,0x026e2df8) */
/* WARNING: Removing unreachable block (ram,0x026e2e4c) */
/* WARNING: Removing unreachable block (ram,0x026e2d88) */
/* WARNING: Removing unreachable block (ram,0x026e2d98) */
/* WARNING: Removing unreachable block (ram,0x026e2db0) */
/* WARNING: Removing unreachable block (ram,0x026e2db4) */
/* WARNING: Removing unreachable block (ram,0x026e2db8) */
/* WARNING: Removing unreachable block (ram,0x026e2dc4) */
/* WARNING: Removing unreachable block (ram,0x026e2dcc) */
/* WARNING: Removing unreachable block (ram,0x026e2e00) */
/* WARNING: Removing unreachable block (ram,0x026e2dd8) */
/* WARNING: Removing unreachable block (ram,0x026e2de4) */
/* WARNING: Removing unreachable block (ram,0x026e2e10) */
/* WARNING: Removing unreachable block (ram,0x026e2e60) */
/* WARNING: Removing unreachable block (ram,0x026e2e94) */
/* WARNING: Removing unreachable block (ram,0x026e2e98) */
/* WARNING: Removing unreachable block (ram,0x026e2ee4) */
/* WARNING: Removing unreachable block (ram,0x026e2f04) */
/* WARNING: Removing unreachable block (ram,0x026e2f10) */
/* WARNING: Removing unreachable block (ram,0x026e2f4c) */
/* WARNING: Removing unreachable block (ram,0x026e2f58) */
/* WARNING: Removing unreachable block (ram,0x026e2f5c) */
/* WARNING: Removing unreachable block (ram,0x026e2f70) */
/* WARNING: Removing unreachable block (ram,0x026e2f7c) */
/* WARNING: Removing unreachable block (ram,0x026e2f88) */
/* WARNING: Removing unreachable block (ram,0x026e2f90) */
/* WARNING: Removing unreachable block (ram,0x026e2fb8) */
/* WARNING: Removing unreachable block (ram,0x026e2f9c) */
/* WARNING: Removing unreachable block (ram,0x026e2fa8) */
/* WARNING: Removing unreachable block (ram,0x026e2fc4) */
/* WARNING: Removing unreachable block (ram,0x026e2fdc) */
/* WARNING: Removing unreachable block (ram,0x026e3270) */
/* WARNING: Removing unreachable block (ram,0x026e3284) */
/* WARNING: Removing unreachable block (ram,0x026e2fe4) */
/* WARNING: Removing unreachable block (ram,0x026e2ffc) */
/* WARNING: Removing unreachable block (ram,0x026e3004) */
/* WARNING: Removing unreachable block (ram,0x026e302c) */
/* WARNING: Removing unreachable block (ram,0x026e3010) */
/* WARNING: Removing unreachable block (ram,0x026e301c) */
/* WARNING: Removing unreachable block (ram,0x026e3038) */
/* WARNING: Removing unreachable block (ram,0x026e31c0) */
/* WARNING: Removing unreachable block (ram,0x026e304c) */
/* WARNING: Removing unreachable block (ram,0x026e3288) */
/* WARNING: Removing unreachable block (ram,0x026e329c) */
/* WARNING: Removing unreachable block (ram,0x026e3054) */
/* WARNING: Removing unreachable block (ram,0x026e3068) */
/* WARNING: Removing unreachable block (ram,0x026e3074) */
/* WARNING: Removing unreachable block (ram,0x026e3080) */
/* WARNING: Removing unreachable block (ram,0x026e3088) */
/* WARNING: Removing unreachable block (ram,0x026e30b0) */
/* WARNING: Removing unreachable block (ram,0x026e3094) */
/* WARNING: Removing unreachable block (ram,0x026e30a0) */
/* WARNING: Removing unreachable block (ram,0x026e30bc) */
/* WARNING: Removing unreachable block (ram,0x026e3104) */
/* WARNING: Removing unreachable block (ram,0x026e32a0) */
/* WARNING: Removing unreachable block (ram,0x026e32b4) */
/* WARNING: Removing unreachable block (ram,0x026e32b8) */
/* WARNING: Removing unreachable block (ram,0x026e32d8) */
/* WARNING: Removing unreachable block (ram,0x026e3110) */
/* WARNING: Removing unreachable block (ram,0x026e3120) */
/* WARNING: Removing unreachable block (ram,0x026e3130) */
/* WARNING: Removing unreachable block (ram,0x026e3144) */
/* WARNING: Removing unreachable block (ram,0x026e314c) */
/* WARNING: Removing unreachable block (ram,0x026e3158) */
/* WARNING: Removing unreachable block (ram,0x026e3160) */
/* WARNING: Removing unreachable block (ram,0x026e3188) */
/* WARNING: Removing unreachable block (ram,0x026e316c) */
/* WARNING: Removing unreachable block (ram,0x026e3178) */
/* WARNING: Removing unreachable block (ram,0x026e3194) */
/* WARNING: Removing unreachable block (ram,0x026e31b8) */
/* WARNING: Removing unreachable block (ram,0x026e31c8) */
/* WARNING: Removing unreachable block (ram,0x026e31cc) */
/* WARNING: Removing unreachable block (ram,0x026e31d4) */
/* WARNING: Removing unreachable block (ram,0x026e31ec) */
/* WARNING: Removing unreachable block (ram,0x026e31f4) */
/* WARNING: Removing unreachable block (ram,0x026e321c) */
/* WARNING: Removing unreachable block (ram,0x026e3200) */
/* WARNING: Removing unreachable block (ram,0x026e320c) */
/* WARNING: Removing unreachable block (ram,0x026e3228) */
/* WARNING: Removing unreachable block (ram,0x026e3234) */
/* WARNING: Removing unreachable block (ram,0x026e32e8) */
/* WARNING: Removing unreachable block (ram,0x026e32fc) */
/* WARNING: Removing unreachable block (ram,0x026e3318) */
/* WARNING: Removing unreachable block (ram,0x026e3348) */
/* WARNING: Removing unreachable block (ram,0x026e3364) */
/* WARNING: Removing unreachable block (ram,0x026e3324) */
/* WARNING: Removing unreachable block (ram,0x026e3238) */
/* WARNING: Removing unreachable block (ram,0x026e336c) */
/* WARNING: Removing unreachable block (ram,0x026e3394) */
/* WARNING: Removing unreachable block (ram,0x026e33c0) */
/* WARNING: Removing unreachable block (ram,0x026e33c8) */
/* WARNING: Removing unreachable block (ram,0x026e33d0) */
/* WARNING: Removing unreachable block (ram,0x026e33e4) */
/* WARNING: Removing unreachable block (ram,0x026e33f0) */
/* WARNING: Removing unreachable block (ram,0x026e3458) */
/* WARNING: Removing unreachable block (ram,0x026e34c0) */
/* WARNING: Removing unreachable block (ram,0x026e34d4) */
/* WARNING: Removing unreachable block (ram,0x026e34e0) */
/* WARNING: Removing unreachable block (ram,0x026e34ec) */
/* WARNING: Removing unreachable block (ram,0x026e34f4) */
/* WARNING: Removing unreachable block (ram,0x026e3548) */
/* WARNING: Removing unreachable block (ram,0x026e3500) */
/* WARNING: Removing unreachable block (ram,0x026e350c) */
/* WARNING: Removing unreachable block (ram,0x026e3554) */
/* WARNING: Removing unreachable block (ram,0x026e3570) */
/* WARNING: Removing unreachable block (ram,0x026e3584) */
/* WARNING: Removing unreachable block (ram,0x026e3594) */
/* WARNING: Removing unreachable block (ram,0x026e359c) */
/* WARNING: Removing unreachable block (ram,0x026e35c4) */
/* WARNING: Removing unreachable block (ram,0x026e35a8) */
/* WARNING: Removing unreachable block (ram,0x026e35b4) */
/* WARNING: Removing unreachable block (ram,0x026e35d0) */
/* WARNING: Removing unreachable block (ram,0x026e35e0) */
/* WARNING: Removing unreachable block (ram,0x026e3684) */
/* WARNING: Removing unreachable block (ram,0x026e3690) */
/* WARNING: Removing unreachable block (ram,0x026e36ac) */
/* WARNING: Removing unreachable block (ram,0x026e35e8) */
/* WARNING: Removing unreachable block (ram,0x026e35f4) */
/* WARNING: Removing unreachable block (ram,0x026e35f8) */
/* WARNING: Removing unreachable block (ram,0x026e3600) */
/* WARNING: Removing unreachable block (ram,0x026e3608) */
/* WARNING: Removing unreachable block (ram,0x026e3620) */
/* WARNING: Removing unreachable block (ram,0x026e3628) */
/* WARNING: Removing unreachable block (ram,0x026e3650) */
/* WARNING: Removing unreachable block (ram,0x026e3634) */
/* WARNING: Removing unreachable block (ram,0x026e3640) */
/* WARNING: Removing unreachable block (ram,0x026e365c) */
/* WARNING: Removing unreachable block (ram,0x026e3668) */
/* WARNING: Removing unreachable block (ram,0x026e36b4) */
/* WARNING: Removing unreachable block (ram,0x026e36d0) */
/* WARNING: Removing unreachable block (ram,0x026e36f8) */
/* WARNING: Removing unreachable block (ram,0x026e374c) */
/* WARNING: Removing unreachable block (ram,0x026e376c) */
/* WARNING: Removing unreachable block (ram,0x026e3778) */
/* WARNING: Removing unreachable block (ram,0x026e37a8) */
/* WARNING: Removing unreachable block (ram,0x026e3a58) */
/* WARNING: Removing unreachable block (ram,0x026e37ac) */
/* WARNING: Removing unreachable block (ram,0x026e37bc) */
/* WARNING: Removing unreachable block (ram,0x026e37c8) */
/* WARNING: Removing unreachable block (ram,0x026e37d4) */
/* WARNING: Removing unreachable block (ram,0x026e37dc) */
/* WARNING: Removing unreachable block (ram,0x026e3804) */
/* WARNING: Removing unreachable block (ram,0x026e37e8) */
/* WARNING: Removing unreachable block (ram,0x026e37f4) */
/* WARNING: Removing unreachable block (ram,0x026e3810) */
/* WARNING: Removing unreachable block (ram,0x026e3838) */
/* WARNING: Removing unreachable block (ram,0x026e3a24) */
/* WARNING: Removing unreachable block (ram,0x026e3a34) */
/* WARNING: Removing unreachable block (ram,0x026e3840) */
/* WARNING: Removing unreachable block (ram,0x026e3850) */
/* WARNING: Removing unreachable block (ram,0x026e3858) */
/* WARNING: Removing unreachable block (ram,0x026e3880) */
/* WARNING: Removing unreachable block (ram,0x026e3864) */
/* WARNING: Removing unreachable block (ram,0x026e3870) */
/* WARNING: Removing unreachable block (ram,0x026e388c) */
/* WARNING: Removing unreachable block (ram,0x026e397c) */
/* WARNING: Removing unreachable block (ram,0x026e389c) */
/* WARNING: Removing unreachable block (ram,0x026e3a38) */
/* WARNING: Removing unreachable block (ram,0x026e3a48) */
/* WARNING: Removing unreachable block (ram,0x026e3a4c) */
/* WARNING: Removing unreachable block (ram,0x026e3a60) */
/* WARNING: Removing unreachable block (ram,0x026e3a74) */
/* WARNING: Removing unreachable block (ram,0x026e38a4) */
/* WARNING: Removing unreachable block (ram,0x026e38b8) */
/* WARNING: Removing unreachable block (ram,0x026e38c4) */
/* WARNING: Removing unreachable block (ram,0x026e38d0) */
/* WARNING: Removing unreachable block (ram,0x026e38d8) */
/* WARNING: Removing unreachable block (ram,0x026e3900) */
/* WARNING: Removing unreachable block (ram,0x026e38e4) */
/* WARNING: Removing unreachable block (ram,0x026e38f0) */
/* WARNING: Removing unreachable block (ram,0x026e390c) */
/* WARNING: Removing unreachable block (ram,0x026e394c) */
/* WARNING: Removing unreachable block (ram,0x026e3950) */
/* WARNING: Removing unreachable block (ram,0x026e396c) */
/* WARNING: Removing unreachable block (ram,0x026e3a9c) */
/* WARNING: Removing unreachable block (ram,0x026e3ab0) */
/* WARNING: Removing unreachable block (ram,0x026e3ad8) */
/* WARNING: Removing unreachable block (ram,0x026e3b00) */
/* WARNING: Removing unreachable block (ram,0x026e3b18) */
/* WARNING: Removing unreachable block (ram,0x026e3ae0) */
/* WARNING: Removing unreachable block (ram,0x026e3984) */
/* WARNING: Removing unreachable block (ram,0x026e398c) */
/* WARNING: Removing unreachable block (ram,0x026e39a4) */
/* WARNING: Removing unreachable block (ram,0x026e39ac) */
/* WARNING: Removing unreachable block (ram,0x026e39d4) */
/* WARNING: Removing unreachable block (ram,0x026e39b8) */
/* WARNING: Removing unreachable block (ram,0x026e39c4) */
/* WARNING: Removing unreachable block (ram,0x026e39e0) */
/* WARNING: Removing unreachable block (ram,0x026e39ec) */
/* WARNING: Removing unreachable block (ram,0x026e3a84) */
/* WARNING: Removing unreachable block (ram,0x026e3a94) */
/* WARNING: Removing unreachable block (ram,0x026e39f0) */
/* WARNING: Removing unreachable block (ram,0x026e3b20) */
/* WARNING: Removing unreachable block (ram,0x026e3b5c) */
/* WARNING: Removing unreachable block (ram,0x026e3b6c) */
/* WARNING: Removing unreachable block (ram,0x026e3bb4) */
/* WARNING: Removing unreachable block (ram,0x026e3bac) */
/* WARNING: Removing unreachable block (ram,0x026e3bc4) */
/* WARNING: Removing unreachable block (ram,0x026e3c04) */
/* WARNING: Removing unreachable block (ram,0x026e3c48) */
/* WARNING: Removing unreachable block (ram,0x026e3c54) */
/* WARNING: Removing unreachable block (ram,0x026e3cfc) */
/* WARNING: Removing unreachable block (ram,0x026e3d18) */
/* WARNING: Removing unreachable block (ram,0x026e3d28) */
/* WARNING: Removing unreachable block (ram,0x026e3c80) */
/* WARNING: Removing unreachable block (ram,0x026e3c94) */
/* WARNING: Removing unreachable block (ram,0x026e3cac) */
/* WARNING: Removing unreachable block (ram,0x026e3ca4) */
/* WARNING: Removing unreachable block (ram,0x026e3cbc) */
/* WARNING: Removing unreachable block (ram,0x026e3d2c) */
/* WARNING: Removing unreachable block (ram,0x026e3d6c) */
/* WARNING: Removing unreachable block (ram,0x026e3d78) */
/* WARNING: Removing unreachable block (ram,0x026e3da4) */
/* WARNING: Removing unreachable block (ram,0x026e3da8) */
/* WARNING: Removing unreachable block (ram,0x026e3e50) */
/* WARNING: Removing unreachable block (ram,0x026e3e60) */
/* WARNING: Removing unreachable block (ram,0x026e3dc4) */
/* WARNING: Removing unreachable block (ram,0x026e3dfc) */
/* WARNING: Removing unreachable block (ram,0x026e3e64) */
/* WARNING: Removing unreachable block (ram,0x026e3e80) */
/* WARNING: Removing unreachable block (ram,0x026e3e88) */
/* WARNING: Removing unreachable block (ram,0x026e3ea8) */
/* WARNING: Removing unreachable block (ram,0x026e3ee0) */
/* WARNING: Removing unreachable block (ram,0x026e3ee8) */
/* WARNING: Removing unreachable block (ram,0x026e3f08) */
/* WARNING: Removing unreachable block (ram,0x026e3eec) */
/* WARNING: Removing unreachable block (ram,0x026e3e8c) */
/* WARNING: Removing unreachable block (ram,0x026e3f24) */
/* WARNING: Removing unreachable block (ram,0x026e3f44) */
/* WARNING: Removing unreachable block (ram,0x026e3f50) */
/* WARNING: Removing unreachable block (ram,0x026e3f60) */
/* WARNING: Removing unreachable block (ram,0x026e3f64) */
/* WARNING: Removing unreachable block (ram,0x026e3fcc) */
/* WARNING: Removing unreachable block (ram,0x026e4014) */
/* WARNING: Removing unreachable block (ram,0x026e4034) */
/* WARNING: Removing unreachable block (ram,0x026e4040) */
/* WARNING: Removing unreachable block (ram,0x026e4080) */
/* WARNING: Removing unreachable block (ram,0x026e4090) */
/* WARNING: Removing unreachable block (ram,0x026e409c) */
/* WARNING: Removing unreachable block (ram,0x026e410c) */
/* WARNING: Removing unreachable block (ram,0x026e441c) */
/* WARNING: Removing unreachable block (ram,0x026e4438) */
/* WARNING: Removing unreachable block (ram,0x026e4110) */
/* WARNING: Removing unreachable block (ram,0x026e4124) */
/* WARNING: Removing unreachable block (ram,0x026e4130) */
/* WARNING: Removing unreachable block (ram,0x026e413c) */
/* WARNING: Removing unreachable block (ram,0x026e4144) */
/* WARNING: Removing unreachable block (ram,0x026e41a0) */
/* WARNING: Removing unreachable block (ram,0x026e4150) */
/* WARNING: Removing unreachable block (ram,0x026e415c) */
/* WARNING: Removing unreachable block (ram,0x026e41ac) */
/* WARNING: Removing unreachable block (ram,0x026e41c8) */
/* WARNING: Removing unreachable block (ram,0x026e41d4) */
/* WARNING: Removing unreachable block (ram,0x026e41e4) */
/* WARNING: Removing unreachable block (ram,0x026e41ec) */
/* WARNING: Removing unreachable block (ram,0x026e4214) */
/* WARNING: Removing unreachable block (ram,0x026e41f8) */
/* WARNING: Removing unreachable block (ram,0x026e4204) */
/* WARNING: Removing unreachable block (ram,0x026e4220) */
/* WARNING: Removing unreachable block (ram,0x026e43c8) */
/* WARNING: Removing unreachable block (ram,0x026e43ec) */
/* WARNING: Removing unreachable block (ram,0x026e43f4) */
/* WARNING: Removing unreachable block (ram,0x026e4410) */
/* WARNING: Removing unreachable block (ram,0x026e4440) */
/* WARNING: Removing unreachable block (ram,0x026e4230) */
/* WARNING: Removing unreachable block (ram,0x026e4234) */
/* WARNING: Removing unreachable block (ram,0x026e4240) */
/* WARNING: Removing unreachable block (ram,0x026e4250) */
/* WARNING: Removing unreachable block (ram,0x026e4254) */
/* WARNING: Removing unreachable block (ram,0x026e425c) */
/* WARNING: Removing unreachable block (ram,0x026e4270) */
/* WARNING: Removing unreachable block (ram,0x026e427c) */
/* WARNING: Removing unreachable block (ram,0x026e4288) */
/* WARNING: Removing unreachable block (ram,0x026e4290) */
/* WARNING: Removing unreachable block (ram,0x026e42b8) */
/* WARNING: Removing unreachable block (ram,0x026e429c) */
/* WARNING: Removing unreachable block (ram,0x026e42a8) */
/* WARNING: Removing unreachable block (ram,0x026e42c4) */
/* WARNING: Removing unreachable block (ram,0x026e42fc) */
/* WARNING: Removing unreachable block (ram,0x026e4304) */
/* WARNING: Removing unreachable block (ram,0x026e431c) */
/* WARNING: Removing unreachable block (ram,0x026e4324) */
/* WARNING: Removing unreachable block (ram,0x026e434c) */
/* WARNING: Removing unreachable block (ram,0x026e4330) */
/* WARNING: Removing unreachable block (ram,0x026e433c) */
/* WARNING: Removing unreachable block (ram,0x026e4358) */
/* WARNING: Removing unreachable block (ram,0x026e4364) */
/* WARNING: Removing unreachable block (ram,0x026e4448) */
/* WARNING: Removing unreachable block (ram,0x026e4458) */
/* WARNING: Removing unreachable block (ram,0x026e4460) */
/* WARNING: Removing unreachable block (ram,0x026e4470) */
/* WARNING: Removing unreachable block (ram,0x026e4480) */
/* WARNING: Removing unreachable block (ram,0x026e44b0) */
/* WARNING: Removing unreachable block (ram,0x026e44c8) */
/* WARNING: Removing unreachable block (ram,0x026e448c) */
/* WARNING: Removing unreachable block (ram,0x026e4368) */
/* WARNING: Removing unreachable block (ram,0x026e4370) */
/* WARNING: Removing unreachable block (ram,0x026e4374) */
/* WARNING: Removing unreachable block (ram,0x026e40a8) */
/* WARNING: Removing unreachable block (ram,0x026e40c0) */
/* WARNING: Removing unreachable block (ram,0x026e40cc) */
/* WARNING: Removing unreachable block (ram,0x026e40dc) */
/* WARNING: Removing unreachable block (ram,0x026e40e4) */
/* WARNING: Removing unreachable block (ram,0x026e416c) */
/* WARNING: Removing unreachable block (ram,0x026e40f0) */
/* WARNING: Removing unreachable block (ram,0x026e40fc) */
/* WARNING: Removing unreachable block (ram,0x026e4178) */
/* WARNING: Removing unreachable block (ram,0x026e4388) */
/* WARNING: Removing unreachable block (ram,0x026e4398) */
/* WARNING: Removing unreachable block (ram,0x026e44d0) */
/* WARNING: Removing unreachable block (ram,0x026e451c) */
/* WARNING: Removing unreachable block (ram,0x026e453c) */
/* WARNING: Removing unreachable block (ram,0x026e4548) */
/* WARNING: Removing unreachable block (ram,0x026e4984) */
/* WARNING: Removing unreachable block (ram,0x026e49a0) */
/* WARNING: Removing unreachable block (ram,0x026e4588) */
/* WARNING: Removing unreachable block (ram,0x026e458c) */
/* WARNING: Removing unreachable block (ram,0x026e459c) */
/* WARNING: Removing unreachable block (ram,0x026e45a8) */
/* WARNING: Removing unreachable block (ram,0x026e4614) */
/* WARNING: Removing unreachable block (ram,0x026e4624) */
/* WARNING: Removing unreachable block (ram,0x026e4630) */
/* WARNING: Removing unreachable block (ram,0x026e463c) */
/* WARNING: Removing unreachable block (ram,0x026e4644) */
/* WARNING: Removing unreachable block (ram,0x026e46ec) */
/* WARNING: Removing unreachable block (ram,0x026e4650) */
/* WARNING: Removing unreachable block (ram,0x026e465c) */
/* WARNING: Removing unreachable block (ram,0x026e46f8) */
/* WARNING: Removing unreachable block (ram,0x026e4714) */
/* WARNING: Removing unreachable block (ram,0x026e4720) */
/* WARNING: Removing unreachable block (ram,0x026e4730) */
/* WARNING: Removing unreachable block (ram,0x026e4738) */
/* WARNING: Removing unreachable block (ram,0x026e4760) */
/* WARNING: Removing unreachable block (ram,0x026e4744) */
/* WARNING: Removing unreachable block (ram,0x026e4750) */
/* WARNING: Removing unreachable block (ram,0x026e476c) */
/* WARNING: Removing unreachable block (ram,0x026e477c) */
/* WARNING: Removing unreachable block (ram,0x026e47ac) */
/* WARNING: Removing unreachable block (ram,0x026e47b4) */
/* WARNING: Removing unreachable block (ram,0x026e47c8) */
/* WARNING: Removing unreachable block (ram,0x026e47d4) */
/* WARNING: Removing unreachable block (ram,0x026e47e0) */
/* WARNING: Removing unreachable block (ram,0x026e47e8) */
/* WARNING: Removing unreachable block (ram,0x026e484c) */
/* WARNING: Removing unreachable block (ram,0x026e47f4) */
/* WARNING: Removing unreachable block (ram,0x026e4800) */
/* WARNING: Removing unreachable block (ram,0x026e4858) */
/* WARNING: Removing unreachable block (ram,0x026e4780) */
/* WARNING: Removing unreachable block (ram,0x026e478c) */
/* WARNING: Removing unreachable block (ram,0x026e479c) */
/* WARNING: Removing unreachable block (ram,0x026e47a0) */
/* WARNING: Removing unreachable block (ram,0x026e488c) */
/* WARNING: Removing unreachable block (ram,0x026e4890) */
/* WARNING: Removing unreachable block (ram,0x026e4898) */
/* WARNING: Removing unreachable block (ram,0x026e48b0) */
/* WARNING: Removing unreachable block (ram,0x026e48b8) */
/* WARNING: Removing unreachable block (ram,0x026e48e0) */
/* WARNING: Removing unreachable block (ram,0x026e48c4) */
/* WARNING: Removing unreachable block (ram,0x026e48d0) */
/* WARNING: Removing unreachable block (ram,0x026e48ec) */
/* WARNING: Removing unreachable block (ram,0x026e48f8) */
/* WARNING: Removing unreachable block (ram,0x026e49b0) */
/* WARNING: Removing unreachable block (ram,0x026e49c0) */
/* WARNING: Removing unreachable block (ram,0x026e49c8) */
/* WARNING: Removing unreachable block (ram,0x026e49d8) */
/* WARNING: Removing unreachable block (ram,0x026e49e4) */
/* WARNING: Removing unreachable block (ram,0x026e4a14) */
/* WARNING: Removing unreachable block (ram,0x026e4a2c) */
/* WARNING: Removing unreachable block (ram,0x026e49f0) */
/* WARNING: Removing unreachable block (ram,0x026e48fc) */
/* WARNING: Removing unreachable block (ram,0x026e4900) */
/* WARNING: Removing unreachable block (ram,0x026e4934) */
/* WARNING: Removing unreachable block (ram,0x026e4908) */
/* WARNING: Removing unreachable block (ram,0x026e45b8) */
/* WARNING: Removing unreachable block (ram,0x026e45cc) */
/* WARNING: Removing unreachable block (ram,0x026e45d8) */
/* WARNING: Removing unreachable block (ram,0x026e45e4) */
/* WARNING: Removing unreachable block (ram,0x026e45ec) */
/* WARNING: Removing unreachable block (ram,0x026e466c) */
/* WARNING: Removing unreachable block (ram,0x026e45f8) */
/* WARNING: Removing unreachable block (ram,0x026e4604) */
/* WARNING: Removing unreachable block (ram,0x026e4678) */
/* WARNING: Removing unreachable block (ram,0x026e4910) */
/* WARNING: Removing unreachable block (ram,0x026e468c) */
/* WARNING: Removing unreachable block (ram,0x026e46a0) */
/* WARNING: Removing unreachable block (ram,0x026e46ac) */
/* WARNING: Removing unreachable block (ram,0x026e46bc) */
/* WARNING: Removing unreachable block (ram,0x026e46c4) */
/* WARNING: Removing unreachable block (ram,0x026e4810) */
/* WARNING: Removing unreachable block (ram,0x026e46d0) */
/* WARNING: Removing unreachable block (ram,0x026e46dc) */
/* WARNING: Removing unreachable block (ram,0x026e481c) */
/* WARNING: Removing unreachable block (ram,0x026e494c) */
/* WARNING: Removing unreachable block (ram,0x026e4954) */
/* WARNING: Removing unreachable block (ram,0x026e4a34) */
/* WARNING: Removing unreachable block (ram,0x026e4a4c) */
/* WARNING: Removing unreachable block (ram,0x026e4a58) */
/* WARNING: Removing unreachable block (ram,0x026e4a68) */
/* WARNING: Removing unreachable block (ram,0x026e4a6c) */
/* WARNING: Removing unreachable block (ram,0x026e4a74) */
/* WARNING: Removing unreachable block (ram,0x026e4a78) */
/* WARNING: Removing unreachable block (ram,0x026e4a8c) */
/* WARNING: Removing unreachable block (ram,0x026e4a90) */
/* WARNING: Removing unreachable block (ram,0x026e4964) */
/* WARNING: Removing unreachable block (ram,0x026e43a8) */
/* WARNING: Removing unreachable block (ram,0x026e3f80) */
/* WARNING: Removing unreachable block (ram,0x026e3e30) */
/* WARNING: Removing unreachable block (ram,0x026e3a00) */
/* WARNING: Removing unreachable block (ram,0x026e3974) */
/* WARNING: Removing unreachable block (ram,0x026e36d8) */
/* WARNING: Removing unreachable block (ram,0x026e366c) */
/* WARNING: Removing unreachable block (ram,0x026e3470) */
/* WARNING: Removing unreachable block (ram,0x026e3484) */
/* WARNING: Removing unreachable block (ram,0x026e348c) */
/* WARNING: Removing unreachable block (ram,0x026e351c) */
/* WARNING: Removing unreachable block (ram,0x026e3498) */
/* WARNING: Removing unreachable block (ram,0x026e34a4) */
/* WARNING: Removing unreachable block (ram,0x026e33fc) */
/* WARNING: Removing unreachable block (ram,0x026e3414) */
/* WARNING: Removing unreachable block (ram,0x026e3420) */
/* WARNING: Removing unreachable block (ram,0x026e342c) */
/* WARNING: Removing unreachable block (ram,0x026e3434) */
/* WARNING: Removing unreachable block (ram,0x026e34b4) */
/* WARNING: Removing unreachable block (ram,0x026e3528) */
/* WARNING: Removing unreachable block (ram,0x026e3440) */
/* WARNING: Removing unreachable block (ram,0x026e344c) */
/* WARNING: Removing unreachable block (ram,0x026e34ac) */
/* WARNING: Removing unreachable block (ram,0x026e352c) */
/* WARNING: Removing unreachable block (ram,0x026e324c) */
/* WARNING: Removing unreachable block (ram,0x026e2e70) */
/* WARNING: Removing unreachable block (ram,0x026e2c70) */
/* WARNING: Removing unreachable block (ram,0x03666584) */
/* WARNING: Removing unreachable block (ram,0x0366658c) */
/* WARNING: Removing unreachable block (ram,0x036665a4) */
/* WARNING: Removing unreachable block (ram,0x0366649c) */
/* WARNING: Removing unreachable block (ram,0x036664a4) */
/* WARNING: Removing unreachable block (ram,0x036664b4) */
/* WARNING: Removing unreachable block (ram,0x0366db74) */
/* WARNING: Removing unreachable block (ram,0x0366db4c) */
/* WARNING: Removing unreachable block (ram,0x03672c30) */
/* WARNING: Removing unreachable block (ram,0x03672ca8) */
/* WARNING: Removing unreachable block (ram,0x03666bec) */
/* WARNING: Removing unreachable block (ram,0x03666c00) */
/* WARNING: Removing unreachable block (ram,0x03666c1c) */
/* WARNING: Removing unreachable block (ram,0x03666c24) */
/* WARNING: Removing unreachable block (ram,0x03666c4c) */
/* WARNING: Removing unreachable block (ram,0x03666c30) */
/* WARNING: Removing unreachable block (ram,0x03666c3c) */
/* WARNING: Removing unreachable block (ram,0x03666c58) */
/* WARNING: Removing unreachable block (ram,0x03666c74) */
/* WARNING: Removing unreachable block (ram,0x03666c80) */
/* WARNING: Removing unreachable block (ram,0x03666c90) */
/* WARNING: Removing unreachable block (ram,0x03666c98) */
/* WARNING: Removing unreachable block (ram,0x03666cc0) */
/* WARNING: Removing unreachable block (ram,0x03666ca4) */
/* WARNING: Removing unreachable block (ram,0x03666cb0) */
/* WARNING: Removing unreachable block (ram,0x03666ccc) */
/* WARNING: Removing unreachable block (ram,0x03667048) */
/* WARNING: Removing unreachable block (ram,0x03666cdc) */
/* WARNING: Removing unreachable block (ram,0x03666ce4) */
/* WARNING: Removing unreachable block (ram,0x03666cfc) */
/* WARNING: Removing unreachable block (ram,0x03666d04) */
/* WARNING: Removing unreachable block (ram,0x03666d2c) */
/* WARNING: Removing unreachable block (ram,0x03666d10) */
/* WARNING: Removing unreachable block (ram,0x03666d1c) */
/* WARNING: Removing unreachable block (ram,0x03666d38) */
/* WARNING: Removing unreachable block (ram,0x03666d4c) */
/* WARNING: Removing unreachable block (ram,0x03666d70) */
/* WARNING: Removing unreachable block (ram,0x03666d80) */
/* WARNING: Removing unreachable block (ram,0x03666df4) */
/* WARNING: Removing unreachable block (ram,0x03666e14) */
/* WARNING: Removing unreachable block (ram,0x03666e2c) */
/* WARNING: Removing unreachable block (ram,0x03666e34) */
/* WARNING: Removing unreachable block (ram,0x03666e5c) */
/* WARNING: Removing unreachable block (ram,0x03666e40) */
/* WARNING: Removing unreachable block (ram,0x03666e4c) */
/* WARNING: Removing unreachable block (ram,0x03666e68) */
/* WARNING: Removing unreachable block (ram,0x03666e84) */
/* WARNING: Removing unreachable block (ram,0x03666e94) */
/* WARNING: Removing unreachable block (ram,0x03666e9c) */
/* WARNING: Removing unreachable block (ram,0x03666ec4) */
/* WARNING: Removing unreachable block (ram,0x03666ea8) */
/* WARNING: Removing unreachable block (ram,0x03666eb4) */
/* WARNING: Removing unreachable block (ram,0x03666ed0) */
/* WARNING: Removing unreachable block (ram,0x03666f70) */
/* WARNING: Removing unreachable block (ram,0x03666f84) */
/* WARNING: Removing unreachable block (ram,0x03666f9c) */
/* WARNING: Removing unreachable block (ram,0x03666fa4) */
/* WARNING: Removing unreachable block (ram,0x03666fcc) */
/* WARNING: Removing unreachable block (ram,0x03666fb0) */
/* WARNING: Removing unreachable block (ram,0x03666fbc) */
/* WARNING: Removing unreachable block (ram,0x03666fd8) */
/* WARNING: Removing unreachable block (ram,0x03666fe4) */
/* WARNING: Removing unreachable block (ram,0x03666fe8) */
/* WARNING: Removing unreachable block (ram,0x03666ff0) */
/* WARNING: Removing unreachable block (ram,0x0366704c) */
/* WARNING: Removing unreachable block (ram,0x03666ff4) */
/* WARNING: Removing unreachable block (ram,0x03666ffc) */
/* WARNING: Removing unreachable block (ram,0x03666ee0) */
/* WARNING: Removing unreachable block (ram,0x03667000) */
/* WARNING: Removing unreachable block (ram,0x03666ee8) */
/* WARNING: Removing unreachable block (ram,0x03666ef8) */
/* WARNING: Removing unreachable block (ram,0x03666f00) */
/* WARNING: Removing unreachable block (ram,0x03666f28) */
/* WARNING: Removing unreachable block (ram,0x03666f0c) */
/* WARNING: Removing unreachable block (ram,0x03666f18) */
/* WARNING: Removing unreachable block (ram,0x03666f34) */
/* WARNING: Removing unreachable block (ram,0x03666f68) */
/* WARNING: Removing unreachable block (ram,0x036675b8) */
/* WARNING: Removing unreachable block (ram,0x036676b4) */
/* WARNING: Removing unreachable block (ram,0x036676dc) */
/* WARNING: Removing unreachable block (ram,0x036676bc) */
/* WARNING: Removing unreachable block (ram,0x03667064) */
/* WARNING: Removing unreachable block (ram,0x03667070) */
/* WARNING: Removing unreachable block (ram,0x03667088) */
/* WARNING: Removing unreachable block (ram,0x03667090) */
/* WARNING: Removing unreachable block (ram,0x036670b8) */
/* WARNING: Removing unreachable block (ram,0x0366709c) */
/* WARNING: Removing unreachable block (ram,0x036670a8) */
/* WARNING: Removing unreachable block (ram,0x036670c4) */
/* WARNING: Removing unreachable block (ram,0x036670d0) */
/* WARNING: Removing unreachable block (ram,0x03667770) */
/* WARNING: Removing unreachable block (ram,0x03667780) */
/* WARNING: Removing unreachable block (ram,0x036670d8) */
/* WARNING: Removing unreachable block (ram,0x036670e4) */
/* WARNING: Removing unreachable block (ram,0x036670e8) */
/* WARNING: Removing unreachable block (ram,0x036670f0) */
/* WARNING: Removing unreachable block (ram,0x03667140) */
/* WARNING: Removing unreachable block (ram,0x03667154) */
/* WARNING: Removing unreachable block (ram,0x03667158) */
/* WARNING: Removing unreachable block (ram,0x0366716c) */
/* WARNING: Removing unreachable block (ram,0x03667188) */
/* WARNING: Removing unreachable block (ram,0x03667190) */
/* WARNING: Removing unreachable block (ram,0x036671b8) */
/* WARNING: Removing unreachable block (ram,0x0366719c) */
/* WARNING: Removing unreachable block (ram,0x036671a8) */
/* WARNING: Removing unreachable block (ram,0x036671c4) */
/* WARNING: Removing unreachable block (ram,0x036671e0) */
/* WARNING: Removing unreachable block (ram,0x03667580) */
/* WARNING: Removing unreachable block (ram,0x03667584) */
/* WARNING: Removing unreachable block (ram,0x03667588) */
/* WARNING: Removing unreachable block (ram,0x0366758c) */
/* WARNING: Removing unreachable block (ram,0x03667590) */
/* WARNING: Removing unreachable block (ram,0x036671e8) */
/* WARNING: Removing unreachable block (ram,0x036671f8) */
/* WARNING: Removing unreachable block (ram,0x03667200) */
/* WARNING: Removing unreachable block (ram,0x03667228) */
/* WARNING: Removing unreachable block (ram,0x0366720c) */
/* WARNING: Removing unreachable block (ram,0x03667218) */
/* WARNING: Removing unreachable block (ram,0x03667234) */
/* WARNING: Removing unreachable block (ram,0x03667480) */
/* WARNING: Removing unreachable block (ram,0x03667494) */
/* WARNING: Removing unreachable block (ram,0x036674ac) */
/* WARNING: Removing unreachable block (ram,0x036674b4) */
/* WARNING: Removing unreachable block (ram,0x036674dc) */
/* WARNING: Removing unreachable block (ram,0x036674c0) */
/* WARNING: Removing unreachable block (ram,0x036674cc) */
/* WARNING: Removing unreachable block (ram,0x036674e8) */
/* WARNING: Removing unreachable block (ram,0x036674f4) */
/* WARNING: Removing unreachable block (ram,0x036674f8) */
/* WARNING: Removing unreachable block (ram,0x03667500) */
/* WARNING: Removing unreachable block (ram,0x03667504) */
/* WARNING: Removing unreachable block (ram,0x03667508) */
/* WARNING: Removing unreachable block (ram,0x03667510) */
/* WARNING: Removing unreachable block (ram,0x03667560) */
/* WARNING: Removing unreachable block (ram,0x03667244) */
/* WARNING: Removing unreachable block (ram,0x03667598) */
/* WARNING: Removing unreachable block (ram,0x0366724c) */
/* WARNING: Removing unreachable block (ram,0x0366725c) */
/* WARNING: Removing unreachable block (ram,0x03667264) */
/* WARNING: Removing unreachable block (ram,0x0366728c) */
/* WARNING: Removing unreachable block (ram,0x03667270) */
/* WARNING: Removing unreachable block (ram,0x0366727c) */
/* WARNING: Removing unreachable block (ram,0x03667298) */
/* WARNING: Removing unreachable block (ram,0x0366759c) */
/* WARNING: Removing unreachable block (ram,0x036675a0) */
/* WARNING: Removing unreachable block (ram,0x036675a4) */
/* WARNING: Removing unreachable block (ram,0x036675a8) */
/* WARNING: Removing unreachable block (ram,0x036675ac) */
/* WARNING: Removing unreachable block (ram,0x036675b0) */
/* WARNING: Removing unreachable block (ram,0x036672ac) */
/* WARNING: Removing unreachable block (ram,0x036672bc) */
/* WARNING: Removing unreachable block (ram,0x036672c4) */
/* WARNING: Removing unreachable block (ram,0x036672ec) */
/* WARNING: Removing unreachable block (ram,0x036672d0) */
/* WARNING: Removing unreachable block (ram,0x036672dc) */
/* WARNING: Removing unreachable block (ram,0x036672fc) */
/* WARNING: Removing unreachable block (ram,0x03667318) */
/* WARNING: Removing unreachable block (ram,0x03667320) */
/* WARNING: Removing unreachable block (ram,0x03667384) */
/* WARNING: Removing unreachable block (ram,0x036673b0) */
/* WARNING: Removing unreachable block (ram,0x036673b8) */
/* WARNING: Removing unreachable block (ram,0x0366741c) */
/* WARNING: Removing unreachable block (ram,0x0366742c) */
/* WARNING: Removing unreachable block (ram,0x03667434) */
/* WARNING: Removing unreachable block (ram,0x0366745c) */
/* WARNING: Removing unreachable block (ram,0x03667440) */
/* WARNING: Removing unreachable block (ram,0x0366744c) */
/* WARNING: Removing unreachable block (ram,0x0366746c) */
/* WARNING: Removing unreachable block (ram,0x036673c4) */
/* WARNING: Removing unreachable block (ram,0x036673cc) */
/* WARNING: Removing unreachable block (ram,0x036673d8) */
/* WARNING: Removing unreachable block (ram,0x0366732c) */
/* WARNING: Removing unreachable block (ram,0x03667334) */
/* WARNING: Removing unreachable block (ram,0x03667340) */
/* WARNING: Removing unreachable block (ram,0x03666d8c) */
/* WARNING: Removing unreachable block (ram,0x03666d94) */
/* WARNING: Removing unreachable block (ram,0x03666da8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong ******* FUN_0366d7d0(long param_1,undefined8 param_2,ulong *******param_3,ulong **param_4)

{
  bool bVar1;
  uint uVar2;
  ulong *puVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong *******pppppppuVar7;
  ulong **ppuVar8;
  long *plVar9;
  ulong *******pppppppuVar10;
  long *plVar11;
  ulong *******pppppppuVar12;
  ulong ****ppppuVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  char *pcVar18;
  ulong ******ppppppuVar19;
  long lVar20;
  ulong *****pppppuVar21;
  ulong ***pppuVar22;
  long **pplVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  ulong ******ppppppuVar27;
  undefined *puVar28;
  long *plVar29;
  ulong uVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined *unaff_x22;
  long lVar35;
  ulong *******unaff_x23;
  ulong ****unaff_x24;
  ulong *******unaff_x27;
  ulong *****unaff_x28;
  undefined *unaff_x29;
  ulong unaff_x30;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  undefined4 uStack_4cc;
  ulong **ppuStack_4c8;
  long **pplStack_4c0;
  long *plStack_4b8;
  undefined *puStack_4b0;
  undefined8 uStack_4a8;
  ulong *****pppppuStack_4a0;
  ulong *******pppppppuStack_498;
  long *plStack_490;
  ulong ******ppppppuStack_488;
  ulong ****ppppuStack_480;
  ulong *******pppppppuStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  ulong *******pppppppuStack_460;
  undefined *puStack_458;
  ulong ******ppppppuStack_450;
  long lStack_448;
  undefined8 uStack_440;
  undefined4 uStack_434;
  ulong *******pppppppuStack_430;
  ulong *****pppppuStack_428;
  undefined *puStack_420;
  undefined8 uStack_418;
  ulong *****pppppuStack_410;
  ulong *******pppppppuStack_408;
  long *plStack_400;
  ulong *******pppppppuStack_3f8;
  ulong ****ppppuStack_3f0;
  ulong *******pppppppuStack_3e8;
  undefined *puStack_3e0;
  ulong ******ppppppuStack_3d8;
  ulong *******pppppppuStack_3d0;
  long lStack_3c8;
  ulong ******ppppppuStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  ulong *****pppppuStack_3a0;
  ulong *******pppppppuStack_398;
  long *plStack_390;
  ulong *******pppppppuStack_388;
  ulong ****ppppuStack_380;
  ulong *******pppppppuStack_378;
  long *plStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined4 uStack_34c;
  ulong *******pppppppuStack_348;
  long **pplStack_340;
  long *plStack_338;
  undefined1 auStack_2d0 [24];
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 auStack_240 [2];
  ulong ******ppppppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_40;
  long lStack_38;
  
  uVar30 = 0x5e2d000;
  if ((bRam0000000005e2d6c4 & 1) == 0) {
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_059ccc80);
    bRam0000000005e2d6c4 = 1;
  }
  plVar15 = (long *)func_0x0365f528(param_1);
  if (plVar15 != (long *)0x0) {
    lVar24 = *plVar15;
    unaff_x22 = &DAT_059dfe60;
    uVar30 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar30 != 0) {
      piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == _DAT_059dfe60) {
          puVar16 = (undefined8 *)(lVar24 + (long)(*piVar26 + 0x50) * 0x10 + 0x138);
          goto LAB_0366d874;
        }
        uVar30 = uVar30 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar30 != 0);
    }
    param_3 = (ulong *******)0x50;
    puVar16 = (undefined8 *)func_0x024d927c(plVar15);
LAB_0366d874:
    uVar17 = (*(code *)*puVar16)(plVar15,puVar16[1]);
    uVar30 = func_0x034bc704(uVar17,0);
    uVar30 = uVar30 & 0xffffffff;
    plVar15 = (long *)func_0x0365f528(param_1);
    if (plVar15 != (long *)0x0) {
      lVar24 = *plVar15;
      uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059dfe60) {
            puVar16 = (undefined8 *)(lVar24 + (long)(*piVar26 + 0x50) * 0x10 + 0x138);
            goto LAB_0366d8ec;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      param_3 = (ulong *******)0x50;
      puVar16 = (undefined8 *)func_0x024d927c(plVar15);
LAB_0366d8ec:
      plVar15 = (long *)(*(code *)*puVar16)(plVar15,puVar16[1]);
      if (plVar15 != (long *)0x0) {
        lVar24 = *plVar15;
        uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == _DAT_059ccc80) {
              puVar16 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_0366d954;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar16 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059ccc80,0);
LAB_0366d954:
        uVar6 = (*(code *)*puVar16)(plVar15,puVar16[1]);
        uStack_40 = unaff_x30;
        if ((bRam0000000005e2d6c5 & 1) == 0) {
          func_0x0249f8e4(&DAT_059d9b78);
          func_0x0249f8e4(&DAT_05a418b0);
          func_0x0249f8e4(&DAT_05a44610);
          func_0x0249f8e4(&DAT_059e48c8);
          bRam0000000005e2d6c5 = 1;
        }
        if (*(long *)(param_1 + 0x350) == 0) {
          pppppppuVar7 = (ulong *******)(param_1 + 0x350);
          ppppppuVar19 = (ulong ******)func_0x0249fb80(_DAT_059d9b78);
          func_0x0362ced8(ppppppuVar19,0);
          *pppppppuVar7 = ppppppuVar19;
          puVar3 = &uStack_40;
          uVar30 = 0x3672c30;
        }
        else {
          func_0x0362d0fc(*(long *)(param_1 + 0x350),uVar30,0);
          if (*(int *)(_DAT_059e48c8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar17 = func_0x03676450(uVar30,uVar6);
          uVar17 = func_0x026e290c(uVar17,_DAT_05a418b0);
          uVar17 = func_0x026ec394(uVar17,_DAT_05a44610);
          pppppppuVar7 = (ulong *******)(param_1 + 0x3c8);
          *(undefined8 *)(param_1 + 0x3c8) = uVar17;
          puVar3 = (ulong *)register0x00000008;
          uVar30 = uStack_40;
        }
        goto SUB_0249f888;
      }
    }
  }
  lVar24 = func_0x0249fb90();
  uStack_60 = 0x366d980;
  uStack_40 = uVar30;
  lStack_38 = param_1;
  if ((bRam0000000005e2d66c & 1) == 0) {
    func_0x0249f8e4(&DAT_059d8918);
    func_0x0249f8e4(&DAT_059d8bc8);
    func_0x0249f8e4(&DAT_059d8c20);
    func_0x0249f8e4(&DAT_059e29f8);
    func_0x0249f8e4(&DAT_059e2ba0);
    func_0x0249f8e4(&DAT_05a2aaf0);
    func_0x0249f8e4(&DAT_05a2ab68);
    func_0x0249f8e4(&DAT_05a2ac58);
    bRam0000000005e2d66c = 1;
  }
  puVar33 = &DAT_05a2aaf0;
  if (*(long *)(lVar24 + 0x218) != 0) {
    param_3 = (ulong *******)0x0;
    func_0x03686e28(*(long *)(lVar24 + 0x218),lVar24);
  }
  uVar17 = func_0x028a379c(lVar24,_DAT_05a2aaf0);
  plVar15 = (long *)func_0x0249f90c(lVar24,*(long *)(**(long **)(*(long *)(_DAT_05a2ac58 + 0x20) +
                                                                0xc0) + 0x80) + 0x260);
  lStack_68 = lVar24;
  if (*plVar15 != 0) {
    puVar33 = *(undefined **)(*plVar15 + 0x20);
    if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    param_3 = (ulong *******)0x0;
    uVar17 = func_0x0430dcac(uVar17,puVar33);
    pcVar18 = (char *)func_0x0249f90c(lVar24,*(long *)(**(long **)(*(long *)(_DAT_05a2ab68 + 0x20) +
                                                                  0xc0) + 0x80) + 0x160);
    if (*pcVar18 == '\0') {
SUB_0366bae8:
      func_0x0386e7ec(lVar24,1,0);
      uVar34 = func_0x0249fb80(_DAT_059d8918);
      func_0x03852728(uVar34,lVar24,1,0);
      uStack_90 = 0x366db4c;
      uStack_88 = &DAT_059d8bc8;
      puStack_80 = &DAT_059d8c20;
      puStack_78 = (undefined *)uVar34;
      uStack_70 = uVar17;
      if ((bRam0000000005e2d6a1 & 1) == 0) {
        func_0x0249f8e4(&DAT_059fa9a0);
        func_0x0249f8e4(&DAT_05a2ab18);
        func_0x0249f8e4(&DAT_05a2ab68);
        bRam0000000005e2d6a1 = 1;
      }
      auStack_a0._0_8_ = 0;
      auStack_a0._8_8_ = 0;
      pppppppuVar7 = (ulong *******)
                     func_0x0249f90c(lVar24,*(long *)(**(long **)(*(long *)(_DAT_05a2ab68 + 0x20) +
                                                                 0xc0) + 0x80) + 0x160);
      if (*(char *)pppppppuVar7 != '\0') {
        auStack_a0 = func_0x028a36c0(lVar24,_DAT_05a2ab18);
        pppppppuVar7 = (ulong *******)func_0x02a2156c(auStack_a0,uVar34,_DAT_059fa9a0);
      }
      return pppppppuVar7;
    }
    lVar35 = *(long *)(lVar24 + 0x208);
    unaff_x22 = (undefined *)0x0;
    if (lVar35 != 0) {
      uVar34 = *(undefined8 *)(lVar35 + 0x30);
      if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar34 = func_0x042543bc(uVar34,uVar17,0);
      *(undefined8 *)(lVar35 + 0x30) = uVar34;
      goto SUB_0366bae8;
    }
  }
  lVar24 = func_0x0249fb90();
  uStack_90 = 0x366dbb0;
  puStack_80 = unaff_x22;
  puStack_78 = puVar33;
  uStack_70 = uVar17;
  if ((bRam0000000005e2d66d & 1) == 0) {
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_05a2aaf0);
    bRam0000000005e2d66d = 1;
  }
  uVar17 = func_0x028a379c(lVar24,_DAT_05a2aaf0);
  if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059e2c00);
  }
  pppppppuVar7 = (ulong *******)func_0x03530158(uVar17,0);
  if ((bRam0000000005e2d69e & 1) == 0) {
    func_0x0249f8e4(&DAT_05a06c98);
    func_0x0249f8e4(&DAT_05a06ca0);
    func_0x0249f8e4(&DAT_05a0e8e8);
    func_0x0249f8e4(&DAT_05a21ac8);
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2d69e = 1;
  }
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_88 = (undefined *)(ulong)(uint)uStack_88;
  ppppppuStack_b8 = (ulong ******)0x0;
  if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  ppuVar8 = (ulong **)func_0x0364f9d4(lVar24,0);
  if (*(long *)(lVar24 + 0x218) != 0) {
    func_0x0368775c(*(long *)(lVar24 + 0x218),lVar24,pppppppuVar7,ppuVar8,0);
    auVar36._8_8_ = auStack_a0._8_8_;
    auVar36._0_8_ = auStack_a0._0_8_;
    param_3 = pppppppuVar7;
    param_4 = ppuVar8;
    if ((*(long *)(lVar24 + 0x218) != 0) &&
       (lVar35 = *(long *)(*(long *)(lVar24 + 0x218) + 0x90), auStack_a0 = auVar36, lVar35 != 0)) {
      auStack_a0 = func_0x02853258(lVar35,_DAT_05a21ac8);
      pppppppuVar7 = (ulong *******)func_0x02a67b7c(auStack_a0,_DAT_05a06c98);
      while( true ) {
        if (((ulong)pppppppuVar7 & 1) == 0) {
          return pppppppuVar7;
        }
        puVar16 = (undefined8 *)func_0x02a67ca0(auStack_a0,_DAT_05a06ca0);
        uStack_a8 = puVar16[1];
        uStack_b0 = *puVar16;
        param_3 = &ppppppuStack_b8;
        param_4 = _DAT_05a0e8e8;
        func_0x02b08c20(&uStack_b0,(long)&uStack_88 + 4);
        if (ppppppuStack_b8 == (ulong ******)0x0) break;
        func_0x0362b5f8(ppppppuStack_b8,lVar24,uStack_88._4_4_,0);
        pppppppuVar7 = (ulong *******)func_0x02a67b7c(auStack_a0,_DAT_05a06c98);
      }
    }
  }
  lVar24 = func_0x0249fb90();
  plVar15 = (long *)&DAT_059f1778;
  pppppppuVar7 = param_3;
  if ((bRam0000000005e2d6b4 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a364e0);
    func_0x0249f8e4(&DAT_059fdcf0);
    func_0x0249f8e4(&DAT_05a41978);
    func_0x0249f8e4(&DAT_05a41c58);
    func_0x0249f8e4(&DAT_05a42628);
    func_0x0249f8e4(&DAT_05a42840);
    func_0x0249f8e4(&DAT_05a43700);
    func_0x0249f8e4(&DAT_05a436f8);
    func_0x0249f8e4(&DAT_05a43048);
    func_0x0249f8e4(&DAT_05a43058);
    func_0x0249f8e4(&DAT_05a43e20);
    func_0x0249f8e4(&DAT_05a43e48);
    func_0x0249f8e4(&DAT_05a44518);
    func_0x0249f8e4(&DAT_05a44708);
    func_0x0249f8e4(&DAT_05a07c08);
    func_0x0249f8e4(&DAT_05a07c10);
    func_0x0249f8e4(&DAT_05a07c18);
    func_0x0249f8e4(&DAT_059c5580);
    func_0x0249f8e4(&DAT_059c6b38);
    func_0x0249f8e4(&DAT_059c6510);
    func_0x0249f8e4(&DAT_059c65f8);
    func_0x0249f8e4(&DAT_059c6b50);
    func_0x0249f8e4(&DAT_059c59a8);
    func_0x0249f8e4(&DAT_059c5718);
    func_0x0249f8e4(&DAT_059c5710);
    func_0x0249f8e4(&DAT_059c6608);
    func_0x0249f8e4(&DAT_059c5578);
    func_0x0249f8e4(&DAT_059c6538);
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca768);
    func_0x0249f8e4(&DAT_059ca9b0);
    func_0x0249f8e4(&DAT_059c9f90);
    func_0x0249f8e4(&DAT_059cbd30);
    func_0x0249f8e4(&DAT_059cb2d8);
    func_0x0249f8e4(&DAT_059cbac8);
    func_0x0249f8e4(&DAT_059df6e0);
    func_0x0249f8e4(&DAT_05a0f740);
    func_0x0249f8e4(&DAT_05a17e00);
    func_0x0249f8e4(&DAT_059e2738);
    func_0x0249f8e4(&DAT_059e46b8);
    func_0x0249f8e4(&DAT_05a2aba0);
    func_0x0249f8e4(&DAT_05a538e0);
    func_0x0249f8e4(&DAT_05a538e8);
    func_0x0249f8e4(&DAT_05a538f0);
    func_0x0249f8e4(&DAT_059d4870);
    func_0x0249f8e4(&DAT_05a57998);
    func_0x0249f8e4(&DAT_05a6c0b0);
    func_0x0249f8e4(&DAT_05a6c0c0);
    func_0x0249f8e4(&DAT_05a6c0c8);
    func_0x0249f8e4(&DAT_05a6c0d0);
    func_0x0249f8e4(&DAT_05a6c0d8);
    func_0x0249f8e4(&DAT_05a6c0e0);
    func_0x0249f8e4(&DAT_05a6c0b8);
    func_0x0249f8e4(&DAT_05a6c0e8);
    func_0x0249f8e4(&DAT_05a6c0f0);
    func_0x0249f8e4(&DAT_059f1778);
    func_0x0249f8e4(&DAT_05a7f2e0);
    func_0x0249f8e4(&DAT_05a8c8c0);
    func_0x0249f8e4(&DAT_05a991f8);
    func_0x0249f8e4(&DAT_05a991f0);
    func_0x0249f8e4(&DAT_05a98910);
    func_0x0249f8e4(&DAT_05a77118);
    func_0x0249f8e4(&DAT_05a98908);
    func_0x0249f8e4(&DAT_05a80998);
    func_0x0249f8e4(&DAT_05a991e8);
    bRam0000000005e2d6b4 = 1;
  }
  puVar3 = auStack_240;
  auStack_240[0] = 0x3666464;
  if ((bRam0000000005e2d678 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a41970);
    func_0x0249f8e4(&DAT_05a42e70);
    func_0x0249f8e4(&DAT_05a42bc8);
    func_0x0249f8e4(&DAT_05a43190);
    func_0x0249f8e4(&DAT_05a433e8);
    func_0x0249f8e4(&DAT_059c5708);
    func_0x0249f8e4(&DAT_059c7030);
    func_0x0249f8e4(&DAT_059c5f68);
    func_0x0249f8e4(&DAT_059c69c8);
    func_0x0249f8e4(&DAT_05a4e828);
    func_0x0249f8e4(&DAT_059d76a8);
    func_0x0249f8e4(&DAT_05a1fcf8);
    func_0x0249f8e4(&DAT_05a1ff08);
    func_0x0249f8e4(&DAT_05a20128);
    func_0x0249f8e4(&DAT_05a6c128);
    func_0x0249f8e4(&DAT_05a6c130);
    func_0x0249f8e4(&DAT_05a6c138);
    func_0x0249f8e4(&DAT_05a6c140);
    func_0x0249f8e4(&DAT_059f1778);
    bRam0000000005e2d678 = 1;
  }
  lVar35 = func_0x0249f9d4(_DAT_059d76a8,2);
  if (lVar35 == 0) {
    func_0x0249fb90();
  }
  else if (*(int *)(lVar35 + 0x18) != 0) {
    pppppppuVar7 = (ulong *******)(lVar35 + 0x20);
    *pppppppuVar7 = *(ulong *******)(lVar24 + 0x240);
    uVar30 = 0x36678d8;
    goto SUB_0249f888;
  }
  auVar36 = func_0x0249fb98();
  lVar24 = auVar36._8_8_;
  puVar3 = (ulong *)auStack_2d0;
  if ((bRam0000000005e2d6ac & 1) == 0) {
    func_0x0249f8e4(&DAT_05a44870);
    func_0x0249f8e4(&DAT_059c64a0);
    func_0x0249f8e4(&DAT_059de988);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca720);
    func_0x0249f8e4(&DAT_059cba80);
    func_0x0249f8e4(&DAT_059df6e0);
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_059d7860);
    func_0x0249f8e4(&DAT_05a2aba0);
    func_0x0249f8e4(&DAT_05a6c168);
    func_0x0249f8e4(&DAT_05a6c170);
    func_0x0249f8e4(&DAT_059f1798);
    func_0x0249f8e4(&DAT_05a988b0);
    func_0x0249f8e4(&DAT_05a98850);
    func_0x0249f8e4(&DAT_05a98930);
    func_0x0249f8e4(&DAT_05a98928);
    func_0x0249f8e4(&DAT_05a988a8);
    bRam0000000005e2d6ac = 1;
  }
  uStack_2a8 = 0;
  lVar35 = func_0x0249fb80(_DAT_059f1798);
  func_0x045ecdec(lVar35,0);
  plVar9 = (long *)func_0x0365f528(auVar36._0_8_);
  plVar29 = (long *)0x5e2d000;
  if (plVar9 != (long *)0x0) {
    lVar20 = *plVar9;
    uVar30 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar30 != 0) {
      piVar26 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == _DAT_059dfe60) {
          puVar16 = (undefined8 *)(lVar20 + (long)(*piVar26 + 0x3b) * 0x10 + 0x138);
          goto LAB_03667dfc;
        }
        uVar30 = uVar30 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar30 != 0);
    }
    pppppppuVar7 = (ulong *******)0x3b;
    puVar16 = (undefined8 *)func_0x024d927c(plVar9);
LAB_03667dfc:
    ppppppuVar19 = (ulong ******)(*(code *)*puVar16)(plVar9,puVar16[1]);
    plVar29 = plVar9;
    if (lVar35 != 0) {
      pppppppuVar7 = (ulong *******)(lVar35 + 0x10);
      *pppppppuVar7 = ppppppuVar19;
      uVar30 = 0x3667e1c;
SUB_0249f888:
      if (iRam0000000006058428 != 0) {
        *(ulong *)((long)puVar3 + -0x10) = uVar30;
        pppppppuVar7 = (ulong *******)
                       func_0x0258f520(1L << ((ulong)pppppppuVar7 >> 0xc & 0x3f),
                                       ((ulong)pppppppuVar7 >> 0x12 & 0x7fff) * 8 + 0x5e8c400);
      }
      return pppppppuVar7;
    }
  }
  func_0x0249fb90();
  func_0x0249fb88(plVar29);
  while( true ) {
    auVar38 = func_0x0249fb88(lVar24);
    if (auVar38._8_4_ != 1) break;
    plVar29 = (long *)func_0x054ed080();
    lVar24 = *plVar29;
    lStack_2b8 = lVar24;
    pppppppuVar10 = (ulong *******)func_0x054ed090();
    plVar29 = (long *)*puStack_2b0;
    if (plVar29 != (long *)0x0) {
      lVar35 = *plVar29;
      uVar30 = (ulong)*(ushort *)(lVar35 + 0x12e);
      if (uVar30 != 0) {
        piVar26 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059df598) {
            puVar16 = (undefined8 *)(lVar35 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_0366846c;
          }
          uVar30 = uVar30 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar30 != 0);
      }
      pppppppuVar7 = (ulong *******)0x0;
      puVar16 = (undefined8 *)func_0x024d927c(plVar29);
LAB_0366846c:
      pppppppuVar10 = (ulong *******)(*(code *)*puVar16)(plVar29,puVar16[1]);
    }
    if (lVar24 == 0) {
      return pppppppuVar10;
    }
  }
  func_0x022bd79c(&lStack_2b8);
  func_0x0258f7ac(auVar38._0_8_);
  auVar36 = func_0x022bd790();
  lVar24 = auVar36._0_8_;
  plVar29 = (long *)0x5e2d000;
  plVar9 = (long *)(auVar36._8_8_ & 0xffffffff);
  pppppppuVar10 = pppppppuVar7;
  if ((bRam0000000005e2d6ad & 1) == 0) {
    func_0x0249f8e4(&DAT_059de988);
    func_0x0249f8e4(&DAT_059dec98);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca7c8);
    func_0x0249f8e4(&DAT_059cbb20);
    func_0x0249f8e4(&DAT_059df6e0);
    func_0x0249f8e4(&DAT_059dfa78);
    func_0x0249f8e4(&DAT_059e2940);
    func_0x0249f8e4(&DAT_059e8d00);
    func_0x0249f8e4(&DAT_05a8eb60);
    func_0x0249f8e4(&DAT_05a8e9f8);
    bRam0000000005e2d6ad = 1;
  }
  plStack_338 = (long *)0x0;
  plVar11 = (long *)func_0x03674084(lVar24);
  if (plVar11 == (long *)0x0) {
LAB_03668bd0:
    func_0x0249fb90();
    plVar11 = plVar29;
    goto LAB_03668bd4;
  }
  lVar35 = *plVar11;
  uVar30 = (ulong)*(ushort *)(lVar35 + 0x12e);
  if (uVar30 != 0) {
    piVar26 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == _DAT_059ca7c8) {
        puVar16 = (undefined8 *)(lVar35 + (long)*piVar26 * 0x10 + 0x138);
        goto LAB_036686d8;
      }
      uVar30 = uVar30 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar30 != 0);
  }
  pppppppuVar10 = (ulong *******)0x0;
  puVar16 = (undefined8 *)func_0x024d927c(plVar11);
LAB_036686d8:
  plStack_338 = (long *)(*(code *)*puVar16)(plVar11,puVar16[1]);
  pplStack_340 = &plStack_338;
  pppppppuStack_348 = (ulong *******)0x0;
  if (plStack_338 != (long *)0x0) {
    plVar15 = (long *)&DAT_059df6e0;
    unaff_x27 = (ulong *******)&DAT_059cbb20;
    unaff_x28 = (ulong *****)&DAT_059dfa78;
    unaff_x29 = &DAT_059e2940;
    do {
      plVar11 = plStack_338;
      lVar35 = *plStack_338;
      uVar30 = (ulong)*(ushort *)(lVar35 + 0x12e);
      if (uVar30 != 0) {
        piVar26 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059df6e0) {
            puVar16 = (undefined8 *)(lVar35 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03668764;
          }
          uVar30 = uVar30 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar30 != 0);
      }
      pppppppuVar10 = (ulong *******)0x0;
      puVar16 = (undefined8 *)func_0x024d927c(plStack_338);
LAB_03668764:
      pppppppuVar12 = (ulong *******)(*(code *)*puVar16)(plVar11,puVar16[1]);
      plVar29 = plStack_338;
      if (((ulong)pppppppuVar12 & 1) == 0) goto LAB_03668b2c;
      if (plStack_338 == (long *)0x0) {
        func_0x0249fb90();
LAB_03668bc4:
        func_0x0249fb90();
LAB_03668bc8:
        func_0x0249fb90();
LAB_03668bcc:
        func_0x0249fb90();
        goto LAB_03668bd0;
      }
      lVar35 = *plStack_338;
      uVar30 = (ulong)*(ushort *)(lVar35 + 0x12e);
      if (uVar30 != 0) {
        piVar26 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059cbb20) {
            puVar16 = (undefined8 *)(lVar35 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_036687c8;
          }
          uVar30 = uVar30 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar30 != 0);
      }
      pppppppuVar10 = (ulong *******)0x0;
      puVar16 = (undefined8 *)func_0x024d927c(plStack_338);
LAB_036687c8:
      plVar29 = (long *)(*(code *)*puVar16)(plVar29,puVar16[1]);
      if (plVar29 == (long *)0x0) goto LAB_03668bc4;
      lVar35 = *plVar29;
      uVar30 = (ulong)*(ushort *)(lVar35 + 0x12e);
      if (uVar30 != 0) {
        piVar26 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059dfa78) {
            puVar16 = (undefined8 *)(lVar35 + (long)(*piVar26 + 0x36) * 0x10 + 0x138);
            goto LAB_0366882c;
          }
          uVar30 = uVar30 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar30 != 0);
      }
      puVar16 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,0x36);
LAB_0366882c:
      uVar30 = (*(code *)*puVar16)(plVar29,puVar16[1]);
      if ((uVar30 & 1) == 0) {
LAB_03668850:
        lVar35 = *plVar29;
        uVar30 = (ulong)*(ushort *)(lVar35 + 0x12e);
        if (uVar30 != 0) {
          piVar26 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == _DAT_059dfa78) {
              puVar16 = (undefined8 *)(lVar35 + (long)(*piVar26 + 0x23) * 0x10 + 0x138);
              goto LAB_036688a0;
            }
            uVar30 = uVar30 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar30 != 0);
        }
        puVar16 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,0x23);
LAB_036688a0:
        uVar30 = (*(code *)*puVar16)(plVar29,puVar16[1]);
        if ((uVar30 & 1) == 0) {
          uVar5 = 0;
LAB_03668994:
          lVar35 = *plVar29;
          uVar2 = uVar5 | 2;
          if ((auVar36._8_8_ & 1) == 0) {
            uVar2 = uVar5;
          }
          unaff_x23 = (ulong *******)(ulong)uVar2;
          uVar30 = (ulong)*(ushort *)(lVar35 + 0x12e);
          if (uVar30 != 0) {
            piVar26 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == _DAT_059dfa78) {
                puVar16 = (undefined8 *)(lVar35 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                goto LAB_036689f0;
              }
              uVar30 = uVar30 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar30 != 0);
          }
          puVar16 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,1);
LAB_036689f0:
          uVar30 = (*(code *)*puVar16)(plVar29,puVar16[1]);
          param_3 = (ulong *******)(uVar30 & 0xffffffff);
          unaff_x24 = (ulong ****)func_0x0249fb80(_DAT_059e8d00);
          param_4 = (ulong **)0x0;
          pppppppuVar10 = unaff_x23;
          func_0x0382958c(unaff_x24,param_3);
          if (unaff_x24 != (ulong ****)0x0) {
            param_4 = (*unaff_x24)[0x34];
            pppppppuVar10 = (ulong *******)0x1;
            unaff_x23 = (ulong *******)(*(code *)(*unaff_x24)[0x33])(unaff_x24,lVar24);
            if (*(int *)(_DAT_059e2940 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            if ((pppppppuVar7 != (ulong *******)0x0) &&
               (unaff_x23 == (ulong *******)**(undefined8 **)(_DAT_059e2940 + 0xb8))) {
              lVar35 = *plVar29;
              uVar30 = (ulong)*(ushort *)(lVar35 + 0x12e);
              if (uVar30 != 0) {
                piVar26 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == _DAT_059dfa78) {
                    puVar16 = (undefined8 *)(lVar35 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                    goto LAB_03668ac4;
                  }
                  uVar30 = uVar30 - 1;
                  piVar26 = piVar26 + 4;
                } while (uVar30 != 0);
              }
              puVar16 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,1);
LAB_03668ac4:
              uStack_34c = (*(code *)*puVar16)(plVar29,puVar16[1]);
              uVar17 = func_0x0249fa6c(_DAT_059de988,&uStack_34c);
              pppppppuVar10 = (ulong *******)func_0x04414b40(_DAT_05a8e9f8,uVar17,0);
              param_4 = (ulong **)0x0;
              func_0x0367e6a8(pppppppuVar7,_DAT_05a8eb60);
            }
            goto LAB_03668b20;
          }
          goto LAB_03668bc8;
        }
        lVar35 = *plVar29;
        uVar30 = (ulong)*(ushort *)(lVar35 + 0x12e);
        if (uVar30 != 0) {
          piVar26 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == _DAT_059dfa78) {
              puVar16 = (undefined8 *)(lVar35 + (long)(*piVar26 + 0x22) * 0x10 + 0x138);
              goto LAB_03668908;
            }
            uVar30 = uVar30 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar30 != 0);
        }
        puVar16 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059dfa78,0x22);
LAB_03668908:
        pppppppuVar10 = (ulong *******)puVar16[1];
        plVar11 = (long *)(*(code *)*puVar16)(plVar29,lVar24);
        unaff_x23 = (ulong *******)0x0;
        if (plVar11 != (long *)0x0) {
          lVar35 = *plVar11;
          uVar6 = *(undefined4 *)(lVar24 + 0x4e4);
          uVar30 = (ulong)*(ushort *)(lVar35 + 0x12e);
          if (uVar30 != 0) {
            piVar26 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == _DAT_059dec98) {
                puVar16 = (undefined8 *)(lVar35 + (long)(*piVar26 + 0x1d) * 0x10 + 0x138);
                goto LAB_0366897c;
              }
              uVar30 = uVar30 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar30 != 0);
          }
          puVar16 = (undefined8 *)func_0x024d927c(plVar11,_DAT_059dec98,0x1d);
LAB_0366897c:
          uVar5 = (*(code *)*puVar16)(plVar11,lVar24,uVar6,puVar16[1]);
          uVar5 = uVar5 & 1;
          goto LAB_03668994;
        }
        goto LAB_03668bcc;
      }
      pppppppuVar10 = (ulong *******)0x0;
      uVar30 = func_0x033c9e48(plVar29,lVar24);
      if ((uVar30 & 1) != 0) goto LAB_03668850;
LAB_03668b20:
      plVar11 = plStack_338;
    } while (plStack_338 != (long *)0x0);
  }
  pppppppuVar12 = (ulong *******)func_0x0249fb90();
LAB_03668b2c:
  pppppppuVar7 = (ulong *******)0x0;
  pplVar23 = &plStack_338;
  do {
    plVar9 = *pplVar23;
    if (plVar9 != (long *)0x0) {
      lVar35 = *plVar9;
      uVar30 = (ulong)*(ushort *)(lVar35 + 0x12e);
      if (uVar30 != 0) {
        piVar26 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059df598) {
            puVar16 = (undefined8 *)(lVar35 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03668b90;
          }
          uVar30 = uVar30 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar30 != 0);
      }
      pppppppuVar10 = (ulong *******)0x0;
      puVar16 = (undefined8 *)func_0x024d927c(plVar9);
LAB_03668b90:
      pppppppuVar12 = (ulong *******)(*(code *)*puVar16)(plVar9,puVar16[1]);
    }
    if (pppppppuVar7 == (ulong *******)0x0) {
      return pppppppuVar12;
    }
LAB_03668bd4:
    auVar38 = func_0x0249fb88(pppppppuVar7);
    uStack_358 = auVar38._0_8_;
    if (auVar38._8_4_ != 1) goto LAB_03668c4c;
    puVar16 = (undefined8 *)func_0x054ed080(uStack_358);
    pppppppuVar7 = (ulong *******)*puVar16;
    pppppppuStack_348 = pppppppuVar7;
    pppppppuVar12 = (ulong *******)func_0x054ed090();
    pplVar23 = pplStack_340;
  } while( true );
LAB_036692e4:
  ppppuVar13 = unaff_x24;
  ppppppuVar19 = ppppppuStack_450;
  plVar15 = plVar29;
  if ((int)unaff_x29 == 0) {
LAB_036692f4:
    unaff_x24 = ppppuVar13;
    puVar31 = &DAT_05a2abb8;
    plVar29 = (long *)func_0x0249f90c(uStack_440,
                                      *(long *)(**(long **)(*(long *)(_DAT_05a2abb8 + 0x20) + 0xc0)
                                               + 0x80) + 0x440);
    unaff_x27 = (ulong *******)&DAT_05a1a6a0;
    if (*plVar29 == 0) goto LAB_036693c0;
    pppppppuVar10 = _DAT_05a1a680;
    pppppppuVar12 = (ulong *******)func_0x02831fec(*plVar29,unaff_x23);
    if (lStack_448 != 0) {
      ppppppuVar27 = unaff_x23[2];
      if (ppppppuVar27 == (ulong ******)0x0) goto LAB_036693c0;
      pppppuStack_428 = ppppppuVar27[3];
      pppppppuStack_430 = (ulong *******)ppppppuVar27[2];
      uVar17 = func_0x0249fa6c(_DAT_059e2a10,&pppppppuStack_430);
      uVar17 = func_0x04414b40(_DAT_05a98898,uVar17,0);
      pppppppuVar12 = (ulong *******)func_0x0367e6a8(lStack_448,_DAT_05a98858,uVar17,0);
    }
  }
LAB_03669394:
  bVar1 = (int)uVar5 < 1;
  uVar5 = uVar5 - 1;
  if (bVar1) {
    return pppppppuVar12;
  }
  goto LAB_03669018;
LAB_03668c4c:
  func_0x022bd79c(&pppppppuStack_348);
  func_0x0258f7ac(uStack_358);
  auVar36 = func_0x022bd790();
  lVar35 = auVar36._8_8_;
  pppppppuVar7 = auVar36._0_8_;
  uStack_3a8 = 0x3668c60;
  puVar33 = &DAT_05a2abb8;
  puStack_3b0 = unaff_x29;
  pppppuStack_3a0 = unaff_x28;
  pppppppuStack_398 = unaff_x27;
  plStack_390 = plVar15;
  pppppppuStack_388 = param_3;
  ppppuStack_380 = unaff_x24;
  pppppppuStack_378 = unaff_x23;
  plStack_370 = plVar11;
  lStack_368 = lVar24;
  plStack_360 = plVar9;
  if ((bRam0000000005e2d65d & 1) == 0) {
    func_0x0249f8e4(&DAT_059e0280);
    func_0x0249f8e4(&DAT_05a1a690);
    func_0x0249f8e4(&DAT_05a1a698);
    func_0x0249f8e4(&DAT_05a1a6a0);
    func_0x0249f8e4(&DAT_059e2ba0);
    func_0x0249f8e4(&DAT_05a2aaf0);
    func_0x0249f8e4(&DAT_05a2abb8);
    func_0x0249f8e4(&DAT_059e85d8);
    func_0x0249f8e4(&DAT_05a98840);
    func_0x0249f8e4(&DAT_05a98880);
    bRam0000000005e2d65d = 1;
  }
  pppppppuVar12 =
       (ulong *******)
       func_0x0249f90c(pppppppuVar7,
                       *(long *)(**(long **)(*(long *)(_DAT_05a2abb8 + 0x20) + 0xc0) + 0x80) + 0x440
                      );
  ppppppuVar19 = *pppppppuVar12;
  if (ppppppuVar19 == (ulong ******)0x0) {
LAB_03668ee8:
    auVar37 = func_0x0249fb90();
    lStack_448 = auVar37._8_8_;
    uStack_440 = auVar37._0_8_;
    uStack_418 = 0x3668eec;
    puVar28 = (undefined *)0x5e2d000;
    puVar31 = &DAT_05a2abb8;
    puStack_420 = unaff_x29;
    pppppuStack_410 = unaff_x28;
    pppppppuStack_408 = unaff_x27;
    plStack_400 = plVar15;
    pppppppuStack_3f8 = param_3;
    ppppuStack_3f0 = unaff_x24;
    pppppppuStack_3e8 = unaff_x23;
    puStack_3e0 = puVar33;
    ppppppuStack_3d8 = ppppppuVar19;
    pppppppuStack_3d0 = pppppppuVar7;
    lStack_3c8 = lVar35;
    if ((bRam0000000005e2d65e & 1) == 0) {
      func_0x0249f8e4(&DAT_05a414c0);
      func_0x0249f8e4(&DAT_059c99a8);
      func_0x0249f8e4(&DAT_059ccb40);
      func_0x0249f8e4(&DAT_05a1a680);
      func_0x0249f8e4(&DAT_05a1a698);
      func_0x0249f8e4(&DAT_05a1a6a0);
      func_0x0249f8e4(&DAT_059e2a10);
      func_0x0249f8e4(&DAT_05a2abb8);
      func_0x0249f8e4(&DAT_059e6030);
      func_0x0249f8e4(&DAT_059e60f0);
      func_0x0249f8e4(&DAT_05a98858);
      func_0x0249f8e4(&DAT_05a98898);
      func_0x0249f8e4(&DAT_05a8ea38);
      auVar37._8_8_ = lStack_448;
      auVar37._0_8_ = uStack_440;
      bRam0000000005e2d65e = 1;
    }
    lStack_448 = auVar37._8_8_;
    uStack_440 = auVar37._0_8_;
    pppppppuVar12 =
         (ulong *******)
         func_0x0249f90c(uStack_440,
                         *(long *)(**(long **)(*(long *)(_DAT_05a2abb8 + 0x20) + 0xc0) + 0x80) +
                         0x440);
    ppppppuVar19 = *pppppppuVar12;
    if (ppppppuVar19 != (ulong ******)0x0) {
      if ((int)(*(int *)(ppppppuVar19 + 3) - 1U) < 0) {
        return pppppppuVar12;
      }
      puVar28 = &DAT_059ccb40;
      unaff_x28 = (ulong *****)&DAT_059e60f0;
      uVar5 = *(int *)(ppppppuVar19 + 3) - 1U;
      ppppppuStack_450 = ppppppuVar19;
LAB_03669018:
      puVar33 = (undefined *)(ulong)uVar5;
      pppppppuVar10 = (ulong *******)&pppppppuStack_430;
      param_4 = _DAT_05a1a6a0;
      pppppppuVar12 = (ulong *******)func_0x0282f3c4(ppppppuVar19,puVar33);
      unaff_x23 = pppppppuStack_430;
      if (pppppppuStack_430 != (ulong *******)0x0) {
        ppppppuVar27 = pppppppuStack_430[2];
        pppppppuVar12 = (ulong *******)0x0;
        if (ppppppuVar27 == (ulong ******)0x0) goto LAB_03669394;
        ppppuVar13 = (ulong ****)
                     (*(code *)(*ppppppuVar27)[0x31])(ppppppuVar27,(*ppppppuVar27)[0x32]);
        pppppppuVar12 = (ulong *******)0x0;
        if (ppppuVar13 == (ulong ****)0x0) goto LAB_03669394;
        pppppppuVar12 = (ulong *******)func_0x026e2084(ppppuVar13,_DAT_05a414c0);
        if (((ulong)pppppppuVar12 & 1) == 0) goto LAB_03669394;
        unaff_x24 = (ulong ****)func_0x0249fa68(ppppuVar13,_DAT_059ccb40);
        if (unaff_x24 != (ulong ****)0x0) {
          ppppppuVar19 = (ulong ******)0x0;
          unaff_x29 = (undefined *)0x0;
          plVar29 = plVar15;
          do {
            puVar31 = &DAT_059c99a8;
            pppuVar22 = *unaff_x24;
            uVar30 = (ulong)*(ushort *)((long)pppuVar22 + 0x12e);
            if (uVar30 != 0) {
              ppuVar8 = pppuVar22[0x16] + 1;
              do {
                if (ppuVar8[-1] == _DAT_059c99a8) {
                  pppuVar22 = pppuVar22 + (long)*(int *)ppuVar8 * 2 + 0x27;
                  goto LAB_036690d4;
                }
                uVar30 = uVar30 - 1;
                ppuVar8 = ppuVar8 + 2;
              } while (uVar30 != 0);
            }
            pppppppuVar10 = (ulong *******)0x0;
            pppuVar22 = (ulong ***)func_0x024d927c(unaff_x24);
LAB_036690d4:
            pppppppuVar12 = (ulong *******)(*(code *)*pppuVar22)(unaff_x24,pppuVar22[1]);
            if ((int)pppppppuVar12 <= (int)ppppppuVar19) goto LAB_036692e4;
            pppuVar22 = *unaff_x24;
            uVar30 = (ulong)*(ushort *)((long)pppuVar22 + 0x12e);
            if (uVar30 != 0) {
              ppuVar8 = pppuVar22[0x16] + 1;
              do {
                if (ppuVar8[-1] == _DAT_059ccb40) {
                  pppuVar22 = pppuVar22 + (long)*(int *)ppuVar8 * 2 + 0x27;
                  goto LAB_03669134;
                }
                uVar30 = uVar30 - 1;
                ppuVar8 = ppuVar8 + 2;
              } while (uVar30 != 0);
            }
            pppuVar22 = (ulong ***)func_0x024d927c(unaff_x24,_DAT_059ccb40,0);
LAB_03669134:
            pppppppuVar10 = (ulong *******)pppuVar22[1];
            plVar15 = (long *)(*(code *)*pppuVar22)(unaff_x24,ppppppuVar19);
            if (plVar15 == (long *)0x0) {
LAB_03669178:
              plVar15 = plVar29;
              unaff_x29 = (undefined *)0x1;
            }
            else {
              plVar29 = plVar15;
              if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(_DAT_059e60f0 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(_DAT_059e60f0 + 0x130) * 8
                           + -8) != _DAT_059e60f0)) goto LAB_03669178;
              plVar29 = (long *)plVar15[3];
              uVar17 = func_0x0365f528(uStack_440);
              pppppppuVar7 = (ulong *******)&DAT_05a1a6a0;
              unaff_x27 = (ulong *******)0x0;
              if (plVar29 == (long *)0x0) goto LAB_036693c0;
              pppppppuVar10 = *(ulong ********)(*plVar29 + 0x1d0);
              lVar24 = (**(code **)(*plVar29 + 0x1c8))(plVar29,uVar17);
              if (lVar24 == 0) {
                lVar24 = plVar15[4];
                unaff_x27 = (ulong *******)func_0x0249fb80(_DAT_059e6030);
                puVar31 = &DAT_059c99a8;
                func_0x0383ed48(unaff_x27,(int)lVar24,0x60,0);
                pppuVar22 = *unaff_x24;
                uVar30 = (ulong)*(ushort *)((long)pppuVar22 + 0x12e);
                if (uVar30 != 0) {
                  ppuVar8 = pppuVar22[0x16] + 1;
                  do {
                    if (ppuVar8[-1] == _DAT_059ccb40) {
                      pppuVar22 = pppuVar22 + (long)(*(int *)ppuVar8 + 1) * 2 + 0x27;
                      goto LAB_03669238;
                    }
                    uVar30 = uVar30 - 1;
                    ppuVar8 = ppuVar8 + 2;
                  } while (uVar30 != 0);
                }
                pppuVar22 = (ulong ***)func_0x024d927c(unaff_x24,_DAT_059ccb40,1);
LAB_03669238:
                param_4 = pppuVar22[1];
                pppppppuVar10 = unaff_x27;
                (*(code *)*pppuVar22)(unaff_x24,ppppppuVar19);
                if (lStack_448 != 0) {
                  ppppppuVar27 = unaff_x23[2];
                  if (ppppppuVar27 == (ulong ******)0x0) goto LAB_036693c0;
                  pppppuStack_428 = ppppppuVar27[3];
                  pppppppuStack_430 = (ulong *******)ppppppuVar27[2];
                  uVar17 = func_0x0249fa6c(_DAT_059e2a10,&pppppppuStack_430);
                  uStack_434 = (undefined4)plVar15[4];
                  plVar15 = (long *)plVar15[3];
                  uVar34 = func_0x0249fa6c(uRam0000000005e45758,&uStack_434);
                  pppppppuVar10 =
                       (ulong *******)func_0x044251f0(_DAT_05a8ea38,uVar17,plVar15,uVar34,0);
                  param_4 = (ulong **)0x0;
                  func_0x0367e6a8(lStack_448,_DAT_05a98858);
                }
              }
              else {
                unaff_x29 = (undefined *)0x1;
              }
            }
            ppppppuVar19 = (ulong ******)(ulong)((int)ppppppuVar19 + 1);
            plVar29 = plVar15;
          } while( true );
        }
        goto LAB_036692f4;
      }
      goto LAB_03669394;
    }
LAB_036693c0:
    auVar36 = func_0x0249fb90();
    plVar29 = auVar36._8_8_;
    uStack_4a8 = 0x36693c4;
    pppppppuVar12 = pppppppuVar10;
    puStack_4b0 = unaff_x29;
    pppppuStack_4a0 = unaff_x28;
    pppppppuStack_498 = unaff_x27;
    plStack_490 = plVar15;
    ppppppuStack_488 = ppppppuVar19;
    ppppuStack_480 = unaff_x24;
    pppppppuStack_478 = unaff_x23;
    puStack_470 = puVar33;
    puStack_468 = puVar31;
    pppppppuStack_460 = pppppppuVar7;
    puStack_458 = puVar28;
    if ((bRam0000000005e2d663 & 1) == 0) {
      func_0x0249f8e4(&DAT_059defb8);
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059ca9d0);
      func_0x0249f8e4(&DAT_059cbd50);
      func_0x0249f8e4(&DAT_059df6e0);
      func_0x0249f8e4(&DAT_059e2c00);
      func_0x0249f8e4(&DAT_05a2aaf0);
      func_0x0249f8e4(&DAT_05a2aba0);
      func_0x0249f8e4(&DAT_05a7f8d8);
      func_0x0249f8e4(&DAT_05a7f8d0);
      bRam0000000005e2d663 = 1;
    }
    plStack_4b8 = (long *)0x0;
    if (plVar29 != (long *)0x0) {
      lVar24 = *plVar29;
      uVar30 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar30 != 0) {
        piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == _DAT_059defb8) {
            puVar16 = (undefined8 *)(lVar24 + (long)(*piVar26 + 3) * 0x10 + 0x138);
            goto LAB_036694dc;
          }
          uVar30 = uVar30 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar30 != 0);
      }
      pppppppuVar12 = (ulong *******)0x3;
      puVar16 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059defb8,3);
LAB_036694dc:
      plVar15 = (long *)(*(code *)*puVar16)(plVar29,puVar16[1]);
      if (plVar15 != (long *)0x0) {
        lVar24 = *plVar15;
        uVar30 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar30 != 0) {
          piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == _DAT_059ca9d0) {
              puVar16 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03669544;
            }
            uVar30 = uVar30 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar30 != 0);
        }
        pppppppuVar12 = (ulong *******)0x0;
        puVar16 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059ca9d0,0);
LAB_03669544:
        plVar15 = (long *)(*(code *)*puVar16)(plVar15,puVar16[1]);
        pplStack_4c0 = &plStack_4b8;
        ppuStack_4c8 = (ulong **)0x0;
        do {
          plStack_4b8 = plVar15;
          if (plVar15 == (long *)0x0) {
            pppppppuVar7 = (ulong *******)func_0x0249fb90();
LAB_0366979c:
            param_4 = (ulong **)0x0;
            pplVar23 = &plStack_4b8;
            goto LAB_036697a4;
          }
          lVar24 = *plVar15;
          uVar30 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar30 != 0) {
            piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == _DAT_059df6e0) {
                puVar16 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_036695d8;
              }
              uVar30 = uVar30 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar30 != 0);
          }
          pppppppuVar12 = (ulong *******)0x0;
          puVar16 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df6e0,0);
LAB_036695d8:
          pppppppuVar7 = (ulong *******)(*(code *)*puVar16)(plVar15,puVar16[1]);
          plVar15 = plStack_4b8;
          if (((ulong)pppppppuVar7 & 1) == 0) goto LAB_0366979c;
          if (plStack_4b8 == (long *)0x0) {
LAB_03669834:
            func_0x0249fb90();
            break;
          }
          lVar24 = *plStack_4b8;
          uVar30 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar30 != 0) {
            piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == _DAT_059cbd50) {
                puVar16 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_0366963c;
              }
              uVar30 = uVar30 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar30 != 0);
          }
          pppppppuVar12 = (ulong *******)0x0;
          puVar16 = (undefined8 *)func_0x024d927c(plStack_4b8,_DAT_059cbd50,0);
LAB_0366963c:
          lVar24 = (*(code *)*puVar16)(plVar15,puVar16[1]);
          uVar17 = func_0x028a379c(auVar36._0_8_,_DAT_05a2aaf0);
          if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar17 = func_0x03530158(uVar17,0);
          puVar16 = (undefined8 *)
                    func_0x0249f90c(auVar36._0_8_,
                                    *(long *)(**(long **)(*(long *)(_DAT_05a2aba0 + 0x20) + 0xc0) +
                                             0x80) + 0x40);
          if (lVar24 == 0) {
            func_0x0249fb90();
            goto LAB_03669834;
          }
          pppppppuVar12 = (ulong *******)*puVar16;
          bVar4 = func_0x036e4abc(lVar24,uVar17,pppppppuVar12,pppppppuVar10,0);
          plVar15 = plStack_4b8;
          if ((param_4 != (ulong **)0x0 & bVar4) != 0) {
            uStack_4cc = func_0x036d392c(lVar24,0);
            uVar17 = func_0x0249fa6c(uRam0000000005e45758,&uStack_4cc);
            lVar24 = *plVar29;
            uVar30 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar30 != 0) {
              piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == _DAT_059defb8) {
                  puVar16 = (undefined8 *)(lVar24 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                  goto LAB_0366974c;
                }
                uVar30 = uVar30 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar30 != 0);
            }
            puVar16 = (undefined8 *)func_0x024d927c(plVar29,_DAT_059defb8,1);
LAB_0366974c:
            uVar34 = (*(code *)*puVar16)(plVar29,puVar16[1]);
            pppppppuVar12 = (ulong *******)func_0x044251ac(_DAT_05a7f8d8,uVar17,uVar34,0);
            func_0x0367e6a8(param_4,_DAT_05a7f8d0,pppppppuVar12,0);
            plVar15 = plStack_4b8;
          }
        } while( true );
      }
    }
    func_0x0249fb90();
    do {
      auVar38 = func_0x0249fb88(param_4);
      if (auVar38._8_4_ != 1) {
        func_0x022bd79c(&ppuStack_4c8);
        func_0x0258f7ac(auVar38._0_8_);
        auVar36 = func_0x022bd790();
        lVar24 = auVar36._0_8_;
        if ((bRam0000000005e2d65a & 1) == 0) {
          func_0x0249f8e4(&DAT_059daec8);
          func_0x0249f8e4(&DAT_059e2730);
          func_0x0249f8e4(&DAT_05a2ab38);
          func_0x0249f8e4(&DAT_05a2ab48);
          bRam0000000005e2d65a = 1;
        }
        puVar16 = (undefined8 *)
                  func_0x0249f90c(lVar24,*(long *)(**(long **)(*(long *)(_DAT_05a2ab38 + 0x20) +
                                                              0xc0) + 0x80) + 0x300);
        uVar17 = *puVar16;
        puVar16 = (undefined8 *)
                  func_0x0249f90c(lVar24,*(long *)(**(long **)(*(long *)(_DAT_05a2ab48 + 0x20) +
                                                              0xc0) + 0x80) + 0x400);
        uVar34 = *puVar16;
        if (*(int *)(_DAT_059daec8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar14 = func_0x03503880(lVar24,0);
        uVar32 = *(undefined8 *)(lVar24 + 0x3a8);
        pppppppuVar7 = (ulong *******)func_0x0249fb80(_DAT_059e2730);
        func_0x03637834(pppppppuVar7,auVar36._8_8_,pppppppuVar12,uVar17,uVar34,uVar14,uVar32,0);
        return pppppppuVar7;
      }
      plVar15 = (long *)func_0x054ed080(auVar38._0_8_);
      param_4 = (ulong **)*plVar15;
      ppuStack_4c8 = param_4;
      pppppppuVar7 = (ulong *******)func_0x054ed090();
      pplVar23 = pplStack_4c0;
LAB_036697a4:
      plVar15 = *pplVar23;
      if (plVar15 != (long *)0x0) {
        lVar24 = *plVar15;
        uVar30 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar30 != 0) {
          piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == _DAT_059df598) {
              puVar16 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03669800;
            }
            uVar30 = uVar30 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar30 != 0);
        }
        pppppppuVar12 = (ulong *******)0x0;
        puVar16 = (undefined8 *)func_0x024d927c(plVar15,_DAT_059df598,0);
LAB_03669800:
        pppppppuVar7 = (ulong *******)(*(code *)*puVar16)(plVar15,puVar16[1]);
      }
      if (param_4 == (ulong **)0x0) {
        return pppppppuVar7;
      }
    } while( true );
  }
  uVar5 = *(uint *)(ppppppuVar19 + 3);
  puVar33 = (undefined *)(ulong)uVar5;
  if (uVar5 != 0) {
    unaff_x23 = (ulong *******)func_0x028a379c(pppppppuVar7,_DAT_05a2aaf0);
    pppppppuVar12 = unaff_x23;
    if (-1 < (int)(uVar5 - 1)) {
      param_3 = (ulong *******)&DAT_05a1a6a0;
      plVar15 = (long *)&DAT_059e85d8;
      unaff_x27 = (ulong *******)&DAT_059e2ba0;
      unaff_x29 = (undefined *)0x0;
      do {
        uVar5 = (int)puVar33 - 1;
        puVar33 = (undefined *)(ulong)uVar5;
        pppppppuVar10 = &ppppppuStack_3b8;
        param_4 = _DAT_05a1a6a0;
        pppppppuVar12 = (ulong *******)func_0x0282f3c4(ppppppuVar19,puVar33);
        if (ppppppuStack_3b8 == (ulong ******)0x0) goto LAB_03668ee8;
        unaff_x28 = ppppppuStack_3b8[2];
        if ((unaff_x28 != (ulong *****)0x0) && (*unaff_x28 == _DAT_059e85d8)) {
          unaff_x24 = unaff_x28[0x12];
          if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          pppppppuVar10 = (ulong *******)0x0;
          pppppppuVar12 = (ulong *******)func_0x0430deb0(unaff_x23,unaff_x24);
          if (((ulong)pppppppuVar12 & 1) != 0) {
            pppppppuVar10 = _DAT_05a1a690;
            pppppppuVar12 = (ulong *******)func_0x02832544(ppppppuVar19,puVar33);
            if (lVar35 != 0) {
              ppppppuStack_3b8 = (ulong ******)unaff_x28[0x12];
              uVar17 = func_0x0249fa6c(_DAT_059e2ba0,&ppppppuStack_3b8);
              pppppppuVar10 = (ulong *******)func_0x04414b40(_DAT_05a98880,uVar17,0);
              param_4 = (ulong **)0x0;
              pppppppuVar12 = (ulong *******)func_0x0367e6a8(lVar35,_DAT_05a98840);
            }
            unaff_x29 = (undefined *)0x1;
          }
        }
      } while (0 < (int)uVar5);
      if ((int)unaff_x29 != 0) {
        ppppppuVar27 = pppppppuVar7[0x3c];
        lVar35 = 0;
        if (ppppppuVar27 == (ulong ******)0x0) goto LAB_03668ee8;
        pppppuVar21 = *ppppppuVar27;
        uVar30 = (ulong)*(ushort *)((long)pppppuVar21 + 0x12e);
        if (uVar30 != 0) {
          ppppuVar13 = pppppuVar21[0x16] + 1;
          do {
            if (ppppuVar13[-1] == _DAT_059e0280) {
              pppppuVar21 = pppppuVar21 + (long)(*(int *)ppppuVar13 + 0x2d) * 2 + 0x27;
              goto LAB_03668ebc;
            }
            uVar30 = uVar30 - 1;
            ppppuVar13 = ppppuVar13 + 2;
          } while (uVar30 != 0);
        }
        pppppuVar21 = (ulong *****)func_0x024d927c(ppppppuVar27,_DAT_059e0280,0x2d);
LAB_03668ebc:
        pppppppuVar12 = (ulong *******)(*(code *)*pppppuVar21)(ppppppuVar27,pppppuVar21[1]);
      }
    }
  }
  return pppppppuVar12;
}

