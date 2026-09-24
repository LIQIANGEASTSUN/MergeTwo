/* Ghidra 12.1.2 native pseudocode; RVA 0x4C044D0; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.CalculateItemsLevelSum; status ok */


/* WARNING: Possible PIC construction at 0x04d04598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04f5c4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04f5c5d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04f5c818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04f5c5f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d047b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d606f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d607b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d6083c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d6085c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d05448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d0546c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d05490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d054b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d04a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d04c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d04d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04a44b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d04ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d04fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d050ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04a44b7c) */
/* WARNING: Removing unreachable block (ram,0x04d04a88) */
/* WARNING: Removing unreachable block (ram,0x04d054b8) */
/* WARNING: Removing unreachable block (ram,0x04cec730) */
/* WARNING: Removing unreachable block (ram,0x046f0424) */
/* WARNING: Removing unreachable block (ram,0x064a7540) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */
/* WARNING: Removing unreachable block (ram,0x04d05494) */
/* WARNING: Removing unreachable block (ram,0x04d05470) */
/* WARNING: Removing unreachable block (ram,0x04d0544c) */
/* WARNING: Removing unreachable block (ram,0x03d60860) */
/* WARNING: Removing unreachable block (ram,0x03d60840) */
/* WARNING: Removing unreachable block (ram,0x03d607bc) */
/* WARNING: Removing unreachable block (ram,0x03d6079c) */
/* WARNING: Removing unreachable block (ram,0x03d60718) */
/* WARNING: Removing unreachable block (ram,0x03d606f8) */
/* WARNING: Removing unreachable block (ram,0x04d047b4) */
/* WARNING: Removing unreachable block (ram,0x04d047b8) */
/* WARNING: Removing unreachable block (ram,0x04d047d4) */
/* WARNING: Removing unreachable block (ram,0x04d047dc) */
/* WARNING: Removing unreachable block (ram,0x04d04804) */
/* WARNING: Removing unreachable block (ram,0x04d047e8) */
/* WARNING: Removing unreachable block (ram,0x04d047f4) */
/* WARNING: Removing unreachable block (ram,0x04d04810) */
/* WARNING: Removing unreachable block (ram,0x04d04820) */
/* WARNING: Removing unreachable block (ram,0x04d04824) */
/* WARNING: Removing unreachable block (ram,0x04d04854) */
/* WARNING: Removing unreachable block (ram,0x03d6023c) */
/* WARNING: Removing unreachable block (ram,0x03d60254) */
/* WARNING: Removing unreachable block (ram,0x03d6025c) */
/* WARNING: Removing unreachable block (ram,0x03d6029c) */
/* WARNING: Removing unreachable block (ram,0x03d602d0) */
/* WARNING: Removing unreachable block (ram,0x03d602d8) */
/* WARNING: Removing unreachable block (ram,0x03d6031c) */
/* WARNING: Removing unreachable block (ram,0x03d60350) */
/* WARNING: Removing unreachable block (ram,0x03d60358) */
/* WARNING: Removing unreachable block (ram,0x03d60398) */
/* WARNING: Removing unreachable block (ram,0x03d603d0) */
/* WARNING: Removing unreachable block (ram,0x03d603d8) */
/* WARNING: Removing unreachable block (ram,0x03d60400) */
/* WARNING: Removing unreachable block (ram,0x03d603dc) */
/* WARNING: Removing unreachable block (ram,0x03d6040c) */
/* WARNING: Removing unreachable block (ram,0x03d60414) */
/* WARNING: Removing unreachable block (ram,0x03d60444) */
/* WARNING: Removing unreachable block (ram,0x03d6044c) */
/* WARNING: Removing unreachable block (ram,0x03d60474) */
/* WARNING: Removing unreachable block (ram,0x03d60450) */
/* WARNING: Removing unreachable block (ram,0x03d60480) */
/* WARNING: Removing unreachable block (ram,0x03d60488) */
/* WARNING: Removing unreachable block (ram,0x03d604b8) */
/* WARNING: Removing unreachable block (ram,0x03d604c0) */
/* WARNING: Removing unreachable block (ram,0x03d604e8) */
/* WARNING: Removing unreachable block (ram,0x03d604c4) */
/* WARNING: Removing unreachable block (ram,0x03d604f4) */
/* WARNING: Removing unreachable block (ram,0x03d604fc) */
/* WARNING: Removing unreachable block (ram,0x03d6052c) */
/* WARNING: Removing unreachable block (ram,0x03d60534) */
/* WARNING: Removing unreachable block (ram,0x03d60560) */
/* WARNING: Removing unreachable block (ram,0x03d60538) */
/* WARNING: Removing unreachable block (ram,0x03d6056c) */
/* WARNING: Removing unreachable block (ram,0x03d60574) */
/* WARNING: Removing unreachable block (ram,0x03d605ac) */
/* WARNING: Removing unreachable block (ram,0x03d605b4) */
/* WARNING: Removing unreachable block (ram,0x03d605e0) */
/* WARNING: Removing unreachable block (ram,0x03d605b8) */
/* WARNING: Removing unreachable block (ram,0x03d605ec) */
/* WARNING: Removing unreachable block (ram,0x03d605f4) */
/* WARNING: Removing unreachable block (ram,0x03d6062c) */
/* WARNING: Removing unreachable block (ram,0x03d60634) */
/* WARNING: Removing unreachable block (ram,0x03d60664) */
/* WARNING: Removing unreachable block (ram,0x03d60638) */
/* WARNING: Removing unreachable block (ram,0x03d60670) */
/* WARNING: Removing unreachable block (ram,0x03d60678) */
/* WARNING: Removing unreachable block (ram,0x03d6063c) */
/* WARNING: Removing unreachable block (ram,0x03d605bc) */
/* WARNING: Removing unreachable block (ram,0x03d6053c) */
/* WARNING: Removing unreachable block (ram,0x03d604c8) */
/* WARNING: Removing unreachable block (ram,0x03d60454) */
/* WARNING: Removing unreachable block (ram,0x03d603e0) */
/* WARNING: Removing unreachable block (ram,0x03d6068c) */
/* WARNING: Removing unreachable block (ram,0x03d606b0) */
/* WARNING: Removing unreachable block (ram,0x03d606bc) */
/* WARNING: Removing unreachable block (ram,0x03d606c8) */
/* WARNING: Removing unreachable block (ram,0x03d606cc) */
/* WARNING: Removing unreachable block (ram,0x03d6072c) */
/* WARNING: Removing unreachable block (ram,0x03d60730) */
/* WARNING: Removing unreachable block (ram,0x03d60754) */
/* WARNING: Removing unreachable block (ram,0x03d60760) */
/* WARNING: Removing unreachable block (ram,0x03d6076c) */
/* WARNING: Removing unreachable block (ram,0x03d60770) */
/* WARNING: Removing unreachable block (ram,0x03d607d0) */
/* WARNING: Removing unreachable block (ram,0x03d607d4) */
/* WARNING: Removing unreachable block (ram,0x03d607f8) */
/* WARNING: Removing unreachable block (ram,0x03d60804) */
/* WARNING: Removing unreachable block (ram,0x03d60810) */
/* WARNING: Removing unreachable block (ram,0x03d60814) */
/* WARNING: Removing unreachable block (ram,0x03d60874) */
/* WARNING: Removing unreachable block (ram,0x03d6089c) */
/* WARNING: Removing unreachable block (ram,0x03d608a8) */
/* WARNING: Removing unreachable block (ram,0x03d608b4) */
/* WARNING: Removing unreachable block (ram,0x03d608b8) */
/* WARNING: Removing unreachable block (ram,0x03d60940) */
/* WARNING: Removing unreachable block (ram,0x03d60964) */
/* WARNING: Removing unreachable block (ram,0x03d6096c) */
/* WARNING: Removing unreachable block (ram,0x03d60bdc) */
/* WARNING: Removing unreachable block (ram,0x03d60970) */
/* WARNING: Removing unreachable block (ram,0x03d60be8) */
/* WARNING: Removing unreachable block (ram,0x03d60bf0) */
/* WARNING: Removing unreachable block (ram,0x03d60974) */
/* WARNING: Removing unreachable block (ram,0x03d60984) */
/* WARNING: Removing unreachable block (ram,0x03d60988) */
/* WARNING: Removing unreachable block (ram,0x03d6099c) */
/* WARNING: Removing unreachable block (ram,0x03d60ab8) */
/* WARNING: Removing unreachable block (ram,0x03d60ac8) */
/* WARNING: Removing unreachable block (ram,0x03d60adc) */
/* WARNING: Removing unreachable block (ram,0x03d60ae8) */
/* WARNING: Removing unreachable block (ram,0x03d60afc) */
/* WARNING: Removing unreachable block (ram,0x03d60b0c) */
/* WARNING: Removing unreachable block (ram,0x03d60b20) */
/* WARNING: Removing unreachable block (ram,0x03d60b2c) */
/* WARNING: Removing unreachable block (ram,0x03d60b40) */
/* WARNING: Removing unreachable block (ram,0x03d609b0) */
/* WARNING: Removing unreachable block (ram,0x03d609c0) */
/* WARNING: Removing unreachable block (ram,0x03d609cc) */
/* WARNING: Removing unreachable block (ram,0x03d60a3c) */
/* WARNING: Removing unreachable block (ram,0x03d60a48) */
/* WARNING: Removing unreachable block (ram,0x03d60a4c) */
/* WARNING: Removing unreachable block (ram,0x03d60a60) */
/* WARNING: Removing unreachable block (ram,0x03d60b60) */
/* WARNING: Removing unreachable block (ram,0x03d60b70) */
/* WARNING: Removing unreachable block (ram,0x03d60b74) */
/* WARNING: Removing unreachable block (ram,0x03d60b8c) */
/* WARNING: Removing unreachable block (ram,0x03d60b98) */
/* WARNING: Removing unreachable block (ram,0x03d60bac) */
/* WARNING: Removing unreachable block (ram,0x03d60c04) */
/* WARNING: Removing unreachable block (ram,0x03d60bc0) */
/* WARNING: Removing unreachable block (ram,0x03d60a74) */
/* WARNING: Removing unreachable block (ram,0x03d60a84) */
/* WARNING: Removing unreachable block (ram,0x03d60a88) */
/* WARNING: Removing unreachable block (ram,0x03d609dc) */
/* WARNING: Removing unreachable block (ram,0x03d609e8) */
/* WARNING: Removing unreachable block (ram,0x03d609ec) */
/* WARNING: Removing unreachable block (ram,0x03d60a04) */
/* WARNING: Removing unreachable block (ram,0x03d60a10) */
/* WARNING: Removing unreachable block (ram,0x03d60c0c) */
/* WARNING: Removing unreachable block (ram,0x03d60c38) */
/* WARNING: Removing unreachable block (ram,0x03d60c40) */
/* WARNING: Removing unreachable block (ram,0x03d60eb0) */
/* WARNING: Removing unreachable block (ram,0x03d60c44) */
/* WARNING: Removing unreachable block (ram,0x03d60ebc) */
/* WARNING: Removing unreachable block (ram,0x03d60ec4) */
/* WARNING: Removing unreachable block (ram,0x03d60c48) */
/* WARNING: Removing unreachable block (ram,0x03d60c58) */
/* WARNING: Removing unreachable block (ram,0x03d60c5c) */
/* WARNING: Removing unreachable block (ram,0x03d60c70) */
/* WARNING: Removing unreachable block (ram,0x03d60d8c) */
/* WARNING: Removing unreachable block (ram,0x03d60d9c) */
/* WARNING: Removing unreachable block (ram,0x03d60db0) */
/* WARNING: Removing unreachable block (ram,0x03d60dbc) */
/* WARNING: Removing unreachable block (ram,0x03d60dd0) */
/* WARNING: Removing unreachable block (ram,0x03d60de0) */
/* WARNING: Removing unreachable block (ram,0x03d60df4) */
/* WARNING: Removing unreachable block (ram,0x03d60e00) */
/* WARNING: Removing unreachable block (ram,0x03d60e14) */
/* WARNING: Removing unreachable block (ram,0x03d60c84) */
/* WARNING: Removing unreachable block (ram,0x03d60c94) */
/* WARNING: Removing unreachable block (ram,0x03d60ca0) */
/* WARNING: Removing unreachable block (ram,0x03d60d10) */
/* WARNING: Removing unreachable block (ram,0x03d60d1c) */
/* WARNING: Removing unreachable block (ram,0x03d60d20) */
/* WARNING: Removing unreachable block (ram,0x03d60d34) */
/* WARNING: Removing unreachable block (ram,0x03d60e34) */
/* WARNING: Removing unreachable block (ram,0x03d60e44) */
/* WARNING: Removing unreachable block (ram,0x03d60e48) */
/* WARNING: Removing unreachable block (ram,0x03d60e60) */
/* WARNING: Removing unreachable block (ram,0x03d60e6c) */
/* WARNING: Removing unreachable block (ram,0x03d60e80) */
/* WARNING: Removing unreachable block (ram,0x03d60ed8) */
/* WARNING: Removing unreachable block (ram,0x03d60e94) */
/* WARNING: Removing unreachable block (ram,0x03d60d48) */
/* WARNING: Removing unreachable block (ram,0x03d60d58) */
/* WARNING: Removing unreachable block (ram,0x03d60d5c) */
/* WARNING: Removing unreachable block (ram,0x03d60cb0) */
/* WARNING: Removing unreachable block (ram,0x03d60cbc) */
/* WARNING: Removing unreachable block (ram,0x03d60cc0) */
/* WARNING: Removing unreachable block (ram,0x03d60cd8) */
/* WARNING: Removing unreachable block (ram,0x03d60ce4) */
/* WARNING: Removing unreachable block (ram,0x03d60ee0) */
/* WARNING: Removing unreachable block (ram,0x03d60f04) */
/* WARNING: Removing unreachable block (ram,0x03d60f08) */
/* WARNING: Removing unreachable block (ram,0x03d60f18) */
/* WARNING: Removing unreachable block (ram,0x03d60f1c) */
/* WARNING: Removing unreachable block (ram,0x03d60fac) */
/* WARNING: Removing unreachable block (ram,0x03d60f2c) */
/* WARNING: Removing unreachable block (ram,0x03d60f38) */
/* WARNING: Removing unreachable block (ram,0x03d60f3c) */
/* WARNING: Removing unreachable block (ram,0x03d60f5c) */
/* WARNING: Removing unreachable block (ram,0x03d60f60) */
/* WARNING: Removing unreachable block (ram,0x03d60f70) */
/* WARNING: Removing unreachable block (ram,0x03d60f74) */
/* WARNING: Removing unreachable block (ram,0x03d60f88) */
/* WARNING: Removing unreachable block (ram,0x03d60f8c) */
/* WARNING: Removing unreachable block (ram,0x03d60f9c) */
/* WARNING: Removing unreachable block (ram,0x03d60fa0) */
/* WARNING: Removing unreachable block (ram,0x03d60cf4) */
/* WARNING: Removing unreachable block (ram,0x03d60d78) */
/* WARNING: Removing unreachable block (ram,0x03d60a20) */
/* WARNING: Removing unreachable block (ram,0x03d60aa4) */
/* WARNING: Removing unreachable block (ram,0x03d608d8) */
/* WARNING: Removing unreachable block (ram,0x03d60830) */
/* WARNING: Removing unreachable block (ram,0x03d6078c) */
/* WARNING: Removing unreachable block (ram,0x03d606e8) */
/* WARNING: Removing unreachable block (ram,0x03d6035c) */
/* WARNING: Removing unreachable block (ram,0x03d6036c) */
/* WARNING: Removing unreachable block (ram,0x03d60370) */
/* WARNING: Removing unreachable block (ram,0x03d602dc) */
/* WARNING: Removing unreachable block (ram,0x03d602ec) */
/* WARNING: Removing unreachable block (ram,0x03d602f0) */
/* WARNING: Removing unreachable block (ram,0x03d60260) */
/* WARNING: Removing unreachable block (ram,0x03d60270) */
/* WARNING: Removing unreachable block (ram,0x03d60274) */
/* WARNING: Removing unreachable block (ram,0x04f5c81c) */
/* WARNING: Removing unreachable block (ram,0x04f5c5d4) */
/* WARNING: Removing unreachable block (ram,0x04f5c5e8) */
/* WARNING: Removing unreachable block (ram,0x04f5c4e8) */
/* WARNING: Removing unreachable block (ram,0x04f5c5ec) */
/* WARNING: Removing unreachable block (ram,0x04f5c4ec) */
/* WARNING: Removing unreachable block (ram,0x04f5c520) */
/* WARNING: Removing unreachable block (ram,0x04f5c524) */
/* WARNING: Removing unreachable block (ram,0x04f5c534) */
/* WARNING: Removing unreachable block (ram,0x04f5c568) */
/* WARNING: Removing unreachable block (ram,0x04f5c574) */
/* WARNING: Removing unreachable block (ram,0x04f5c578) */
/* WARNING: Removing unreachable block (ram,0x04f5c588) */
/* WARNING: Removing unreachable block (ram,0x04f5c5fc) */
/* WARNING: Removing unreachable block (ram,0x04f5c60c) */
/* WARNING: Removing unreachable block (ram,0x04f5c610) */
/* WARNING: Removing unreachable block (ram,0x04f5c61c) */
/* WARNING: Removing unreachable block (ram,0x04f5c598) */
/* WARNING: Removing unreachable block (ram,0x04f5c5a0) */
/* WARNING: Removing unreachable block (ram,0x04f5c64c) */
/* WARNING: Removing unreachable block (ram,0x04f5c5ac) */
/* WARNING: Removing unreachable block (ram,0x04d0459c) */
/* WARNING: Removing unreachable block (ram,0x03d598d0) */
/* WARNING: Removing unreachable block (ram,0x03d598e8) */
/* WARNING: Removing unreachable block (ram,0x03d598f8) */
/* WARNING: Removing unreachable block (ram,0x05ac7820) */
/* WARNING: Removing unreachable block (ram,0x05ac783c) */
/* WARNING: Removing unreachable block (ram,0x05ac7880) */
/* WARNING: Removing unreachable block (ram,0x05ac7a58) */
/* WARNING: Removing unreachable block (ram,0x05ac7884) */
/* WARNING: Removing unreachable block (ram,0x05ac789c) */
/* WARNING: Removing unreachable block (ram,0x05ac78a4) */
/* WARNING: Removing unreachable block (ram,0x05ac78cc) */
/* WARNING: Removing unreachable block (ram,0x05ac78b0) */
/* WARNING: Removing unreachable block (ram,0x05ac78bc) */
/* WARNING: Removing unreachable block (ram,0x05ac78d8) */
/* WARNING: Removing unreachable block (ram,0x05ac7a84) */
/* WARNING: Removing unreachable block (ram,0x05ac78f4) */
/* WARNING: Removing unreachable block (ram,0x05ac7908) */
/* WARNING: Removing unreachable block (ram,0x05ac791c) */
/* WARNING: Removing unreachable block (ram,0x05ac7924) */
/* WARNING: Removing unreachable block (ram,0x05ac794c) */
/* WARNING: Removing unreachable block (ram,0x05ac7930) */
/* WARNING: Removing unreachable block (ram,0x05ac793c) */
/* WARNING: Removing unreachable block (ram,0x05ac7958) */
/* WARNING: Removing unreachable block (ram,0x05ac7968) */
/* WARNING: Removing unreachable block (ram,0x05ac7978) */
/* WARNING: Removing unreachable block (ram,0x05ac7980) */
/* WARNING: Removing unreachable block (ram,0x05ac79a8) */
/* WARNING: Removing unreachable block (ram,0x05ac798c) */
/* WARNING: Removing unreachable block (ram,0x05ac7998) */
/* WARNING: Removing unreachable block (ram,0x05ac79b4) */
/* WARNING: Removing unreachable block (ram,0x05ac79cc) */
/* WARNING: Removing unreachable block (ram,0x05ac79e0) */
/* WARNING: Removing unreachable block (ram,0x05ac79e4) */
/* WARNING: Removing unreachable block (ram,0x05ac79e8) */
/* WARNING: Removing unreachable block (ram,0x05ac79f8) */
/* WARNING: Removing unreachable block (ram,0x05ac7a00) */
/* WARNING: Removing unreachable block (ram,0x05ac7a28) */
/* WARNING: Removing unreachable block (ram,0x05ac7a0c) */
/* WARNING: Removing unreachable block (ram,0x05ac7a18) */
/* WARNING: Removing unreachable block (ram,0x05ac7a34) */
/* WARNING: Removing unreachable block (ram,0x05ac7a40) */
/* WARNING: Removing unreachable block (ram,0x05ac7a88) */
/* WARNING: Removing unreachable block (ram,0x05ac7aa0) */
/* WARNING: Removing unreachable block (ram,0x05ac7ab8) */
/* WARNING: Removing unreachable block (ram,0x05ac7ac8) */
/* WARNING: Removing unreachable block (ram,0x05ac7acc) */
/* WARNING: Removing unreachable block (ram,0x05ac7adc) */
/* WARNING: Removing unreachable block (ram,0x05ac7ae4) */
/* WARNING: Removing unreachable block (ram,0x05ac7b0c) */
/* WARNING: Removing unreachable block (ram,0x05ac7af0) */
/* WARNING: Removing unreachable block (ram,0x05ac7afc) */
/* WARNING: Removing unreachable block (ram,0x05ac7b18) */
/* WARNING: Removing unreachable block (ram,0x05ac7b24) */
/* WARNING: Removing unreachable block (ram,0x05ac7b28) */
/* WARNING: Removing unreachable block (ram,0x05ac7b30) */
/* WARNING: Removing unreachable block (ram,0x05ac7b5c) */
/* WARNING: Removing unreachable block (ram,0x05ac7b94) */
/* WARNING: Removing unreachable block (ram,0x05ac7d68) */
/* WARNING: Removing unreachable block (ram,0x05ac7b98) */
/* WARNING: Removing unreachable block (ram,0x05ac7bb0) */
/* WARNING: Removing unreachable block (ram,0x05ac7bb8) */
/* WARNING: Removing unreachable block (ram,0x05ac7be0) */
/* WARNING: Removing unreachable block (ram,0x05ac7bc4) */
/* WARNING: Removing unreachable block (ram,0x05ac7bd0) */
/* WARNING: Removing unreachable block (ram,0x05ac7bec) */
/* WARNING: Removing unreachable block (ram,0x05ac7d94) */
/* WARNING: Removing unreachable block (ram,0x05ac7c08) */
/* WARNING: Removing unreachable block (ram,0x05ac7c1c) */
/* WARNING: Removing unreachable block (ram,0x05ac7c2c) */
/* WARNING: Removing unreachable block (ram,0x05ac7c34) */
/* WARNING: Removing unreachable block (ram,0x05ac7c5c) */
/* WARNING: Removing unreachable block (ram,0x05ac7c40) */
/* WARNING: Removing unreachable block (ram,0x05ac7c4c) */
/* WARNING: Removing unreachable block (ram,0x05ac7c68) */
/* WARNING: Removing unreachable block (ram,0x05ac7cdc) */
/* WARNING: Removing unreachable block (ram,0x05ac7ce8) */
/* WARNING: Removing unreachable block (ram,0x05ac7cf8) */
/* WARNING: Removing unreachable block (ram,0x05ac7d00) */
/* WARNING: Removing unreachable block (ram,0x05ac7d28) */
/* WARNING: Removing unreachable block (ram,0x05ac7d0c) */
/* WARNING: Removing unreachable block (ram,0x05ac7d18) */
/* WARNING: Removing unreachable block (ram,0x05ac7d34) */
/* WARNING: Removing unreachable block (ram,0x05ac7d40) */
/* WARNING: Removing unreachable block (ram,0x05ac7d98) */
/* WARNING: Removing unreachable block (ram,0x05ac7db4) */
/* WARNING: Removing unreachable block (ram,0x05ac7dd8) */
/* WARNING: Removing unreachable block (ram,0x05ac7de4) */
/* WARNING: Removing unreachable block (ram,0x05ac7de8) */
/* WARNING: Removing unreachable block (ram,0x05ac7df8) */
/* WARNING: Removing unreachable block (ram,0x05ac7e00) */
/* WARNING: Removing unreachable block (ram,0x05ac7e28) */
/* WARNING: Removing unreachable block (ram,0x05ac7e0c) */
/* WARNING: Removing unreachable block (ram,0x05ac7e18) */
/* WARNING: Removing unreachable block (ram,0x05ac7e34) */
/* WARNING: Removing unreachable block (ram,0x05ac7e40) */
/* WARNING: Removing unreachable block (ram,0x05ac7e44) */
/* WARNING: Removing unreachable block (ram,0x05ac7e4c) */
/* WARNING: Removing unreachable block (ram,0x05ac7e78) */
/* WARNING: Removing unreachable block (ram,0x05ac7eb0) */
/* WARNING: Removing unreachable block (ram,0x05ac8088) */
/* WARNING: Removing unreachable block (ram,0x05ac7eb4) */
/* WARNING: Removing unreachable block (ram,0x05ac7ecc) */
/* WARNING: Removing unreachable block (ram,0x05ac7ed4) */
/* WARNING: Removing unreachable block (ram,0x05ac7efc) */
/* WARNING: Removing unreachable block (ram,0x05ac7ee0) */
/* WARNING: Removing unreachable block (ram,0x05ac7eec) */
/* WARNING: Removing unreachable block (ram,0x05ac7f08) */
/* WARNING: Removing unreachable block (ram,0x05ac809c) */
/* WARNING: Removing unreachable block (ram,0x05ac7f24) */
/* WARNING: Removing unreachable block (ram,0x05ac7f3c) */
/* WARNING: Removing unreachable block (ram,0x05ac7f4c) */
/* WARNING: Removing unreachable block (ram,0x05ac7f54) */
/* WARNING: Removing unreachable block (ram,0x05ac7f7c) */
/* WARNING: Removing unreachable block (ram,0x05ac7f60) */
/* WARNING: Removing unreachable block (ram,0x05ac7f6c) */
/* WARNING: Removing unreachable block (ram,0x05ac7f88) */
/* WARNING: Removing unreachable block (ram,0x05ac8008) */
/* WARNING: Removing unreachable block (ram,0x05ac800c) */
/* WARNING: Removing unreachable block (ram,0x05ac8010) */
/* WARNING: Removing unreachable block (ram,0x05ac8020) */
/* WARNING: Removing unreachable block (ram,0x05ac8028) */
/* WARNING: Removing unreachable block (ram,0x05ac8050) */
/* WARNING: Removing unreachable block (ram,0x05ac8034) */
/* WARNING: Removing unreachable block (ram,0x05ac8040) */
/* WARNING: Removing unreachable block (ram,0x05ac805c) */
/* WARNING: Removing unreachable block (ram,0x05ac8068) */
/* WARNING: Removing unreachable block (ram,0x05ac80a0) */
/* WARNING: Removing unreachable block (ram,0x05ac806c) */
/* WARNING: Removing unreachable block (ram,0x05ac80a8) */
/* WARNING: Removing unreachable block (ram,0x05ac80ac) */
/* WARNING: Removing unreachable block (ram,0x05ac80e4) */
/* WARNING: Removing unreachable block (ram,0x05ac8100) */
/* WARNING: Removing unreachable block (ram,0x05ac810c) */
/* WARNING: Removing unreachable block (ram,0x05ac8110) */
/* WARNING: Removing unreachable block (ram,0x05ac8120) */
/* WARNING: Removing unreachable block (ram,0x05ac8128) */
/* WARNING: Removing unreachable block (ram,0x05ac8150) */
/* WARNING: Removing unreachable block (ram,0x05ac8134) */
/* WARNING: Removing unreachable block (ram,0x05ac8140) */
/* WARNING: Removing unreachable block (ram,0x05ac815c) */
/* WARNING: Removing unreachable block (ram,0x05ac8168) */
/* WARNING: Removing unreachable block (ram,0x05ac816c) */
/* WARNING: Removing unreachable block (ram,0x05ac8174) */
/* WARNING: Removing unreachable block (ram,0x05ac81a0) */
/* WARNING: Removing unreachable block (ram,0x05ac81d8) */
/* WARNING: Removing unreachable block (ram,0x05ac83b0) */
/* WARNING: Removing unreachable block (ram,0x05ac81dc) */
/* WARNING: Removing unreachable block (ram,0x05ac81f4) */
/* WARNING: Removing unreachable block (ram,0x05ac81fc) */
/* WARNING: Removing unreachable block (ram,0x05ac8224) */
/* WARNING: Removing unreachable block (ram,0x05ac8208) */
/* WARNING: Removing unreachable block (ram,0x05ac8214) */
/* WARNING: Removing unreachable block (ram,0x05ac8230) */
/* WARNING: Removing unreachable block (ram,0x05ac83c4) */
/* WARNING: Removing unreachable block (ram,0x05ac824c) */
/* WARNING: Removing unreachable block (ram,0x05ac8264) */
/* WARNING: Removing unreachable block (ram,0x05ac8274) */
/* WARNING: Removing unreachable block (ram,0x05ac827c) */
/* WARNING: Removing unreachable block (ram,0x05ac82a4) */
/* WARNING: Removing unreachable block (ram,0x05ac8288) */
/* WARNING: Removing unreachable block (ram,0x05ac8294) */
/* WARNING: Removing unreachable block (ram,0x05ac82b0) */
/* WARNING: Removing unreachable block (ram,0x05ac8330) */
/* WARNING: Removing unreachable block (ram,0x05ac8334) */
/* WARNING: Removing unreachable block (ram,0x05ac8338) */
/* WARNING: Removing unreachable block (ram,0x05ac8348) */
/* WARNING: Removing unreachable block (ram,0x05ac8350) */
/* WARNING: Removing unreachable block (ram,0x05ac8378) */
/* WARNING: Removing unreachable block (ram,0x05ac835c) */
/* WARNING: Removing unreachable block (ram,0x05ac8368) */
/* WARNING: Removing unreachable block (ram,0x05ac8384) */
/* WARNING: Removing unreachable block (ram,0x05ac8390) */
/* WARNING: Removing unreachable block (ram,0x05ac83c8) */
/* WARNING: Removing unreachable block (ram,0x05ac8394) */
/* WARNING: Removing unreachable block (ram,0x05ac83d0) */
/* WARNING: Removing unreachable block (ram,0x05ac83d4) */
/* WARNING: Removing unreachable block (ram,0x05ac840c) */
/* WARNING: Removing unreachable block (ram,0x05ac8428) */
/* WARNING: Removing unreachable block (ram,0x05ac8434) */
/* WARNING: Removing unreachable block (ram,0x05ac8438) */
/* WARNING: Removing unreachable block (ram,0x05ac8448) */
/* WARNING: Removing unreachable block (ram,0x05ac8450) */
/* WARNING: Removing unreachable block (ram,0x05ac8478) */
/* WARNING: Removing unreachable block (ram,0x05ac845c) */
/* WARNING: Removing unreachable block (ram,0x05ac8468) */
/* WARNING: Removing unreachable block (ram,0x05ac8484) */
/* WARNING: Removing unreachable block (ram,0x05ac8490) */
/* WARNING: Removing unreachable block (ram,0x05ac8494) */
/* WARNING: Removing unreachable block (ram,0x05ac849c) */
/* WARNING: Removing unreachable block (ram,0x05ac84cc) */
/* WARNING: Removing unreachable block (ram,0x05ac8504) */
/* WARNING: Removing unreachable block (ram,0x05ac8508) */
/* WARNING: Removing unreachable block (ram,0x05ac8520) */
/* WARNING: Removing unreachable block (ram,0x05ac8528) */
/* WARNING: Removing unreachable block (ram,0x05ac8550) */
/* WARNING: Removing unreachable block (ram,0x05ac8534) */
/* WARNING: Removing unreachable block (ram,0x05ac8540) */
/* WARNING: Removing unreachable block (ram,0x05ac855c) */
/* WARNING: Removing unreachable block (ram,0x05ac8590) */
/* WARNING: Removing unreachable block (ram,0x05ac85a0) */
/* WARNING: Removing unreachable block (ram,0x05ac870c) */
/* WARNING: Removing unreachable block (ram,0x05ac8710) */
/* WARNING: Removing unreachable block (ram,0x05ac85a4) */
/* WARNING: Removing unreachable block (ram,0x05ac85b4) */
/* WARNING: Removing unreachable block (ram,0x05ac85bc) */
/* WARNING: Removing unreachable block (ram,0x05ac85e4) */
/* WARNING: Removing unreachable block (ram,0x05ac85c8) */
/* WARNING: Removing unreachable block (ram,0x05ac85d4) */
/* WARNING: Removing unreachable block (ram,0x05ac85f0) */
/* WARNING: Removing unreachable block (ram,0x05ac8678) */
/* WARNING: Removing unreachable block (ram,0x05ac8684) */
/* WARNING: Removing unreachable block (ram,0x05ac8694) */
/* WARNING: Removing unreachable block (ram,0x05ac869c) */
/* WARNING: Removing unreachable block (ram,0x05ac86c4) */
/* WARNING: Removing unreachable block (ram,0x05ac86a8) */
/* WARNING: Removing unreachable block (ram,0x05ac86b4) */
/* WARNING: Removing unreachable block (ram,0x05ac86d0) */
/* WARNING: Removing unreachable block (ram,0x05ac86dc) */
/* WARNING: Removing unreachable block (ram,0x05ac8724) */
/* WARNING: Removing unreachable block (ram,0x05ac86e0) */
/* WARNING: Removing unreachable block (ram,0x05ac86e8) */
/* WARNING: Removing unreachable block (ram,0x05ac86ec) */
/* WARNING: Removing unreachable block (ram,0x05ac872c) */
/* WARNING: Removing unreachable block (ram,0x05ac8730) */
/* WARNING: Removing unreachable block (ram,0x05ac875c) */
/* WARNING: Removing unreachable block (ram,0x05ac877c) */
/* WARNING: Removing unreachable block (ram,0x05ac878c) */
/* WARNING: Removing unreachable block (ram,0x05ac8790) */
/* WARNING: Removing unreachable block (ram,0x05ac87a0) */
/* WARNING: Removing unreachable block (ram,0x05ac87a8) */
/* WARNING: Removing unreachable block (ram,0x05ac87d0) */
/* WARNING: Removing unreachable block (ram,0x05ac87b4) */
/* WARNING: Removing unreachable block (ram,0x05ac87c0) */
/* WARNING: Removing unreachable block (ram,0x05ac87dc) */
/* WARNING: Removing unreachable block (ram,0x05ac87e8) */
/* WARNING: Removing unreachable block (ram,0x05ac87ec) */
/* WARNING: Removing unreachable block (ram,0x05ac87f4) */
/* WARNING: Removing unreachable block (ram,0x05ac8764) */
/* WARNING: Removing unreachable block (ram,0x05ac8778) */
/* WARNING: Removing unreachable block (ram,0x05ac86f0) */
/* WARNING: Removing unreachable block (ram,0x05ac8600) */
/* WARNING: Removing unreachable block (ram,0x05ac8610) */
/* WARNING: Removing unreachable block (ram,0x05ac8618) */
/* WARNING: Removing unreachable block (ram,0x05ac8640) */
/* WARNING: Removing unreachable block (ram,0x05ac8624) */
/* WARNING: Removing unreachable block (ram,0x05ac8630) */
/* WARNING: Removing unreachable block (ram,0x05ac864c) */
/* WARNING: Removing unreachable block (ram,0x05ac865c) */
/* WARNING: Removing unreachable block (ram,0x05ac8660) */
/* WARNING: Removing unreachable block (ram,0x05ac8668) */
/* WARNING: Removing unreachable block (ram,0x05ac8670) */
/* WARNING: Removing unreachable block (ram,0x05ac8674) */
/* WARNING: Removing unreachable block (ram,0x05ac8414) */
/* WARNING: Removing unreachable block (ram,0x05ac8398) */
/* WARNING: Removing unreachable block (ram,0x05ac82c0) */
/* WARNING: Removing unreachable block (ram,0x05ac82d0) */
/* WARNING: Removing unreachable block (ram,0x05ac82d8) */
/* WARNING: Removing unreachable block (ram,0x05ac8300) */
/* WARNING: Removing unreachable block (ram,0x05ac82e4) */
/* WARNING: Removing unreachable block (ram,0x05ac82f0) */
/* WARNING: Removing unreachable block (ram,0x05ac830c) */
/* WARNING: Removing unreachable block (ram,0x05ac831c) */
/* WARNING: Removing unreachable block (ram,0x05ac8324) */
/* WARNING: Removing unreachable block (ram,0x05ac80ec) */
/* WARNING: Removing unreachable block (ram,0x05ac8070) */
/* WARNING: Removing unreachable block (ram,0x05ac7f98) */
/* WARNING: Removing unreachable block (ram,0x05ac7fa8) */
/* WARNING: Removing unreachable block (ram,0x05ac7fb0) */
/* WARNING: Removing unreachable block (ram,0x05ac7fd8) */
/* WARNING: Removing unreachable block (ram,0x05ac7fbc) */
/* WARNING: Removing unreachable block (ram,0x05ac7fc8) */
/* WARNING: Removing unreachable block (ram,0x05ac7fe4) */
/* WARNING: Removing unreachable block (ram,0x05ac7ff4) */
/* WARNING: Removing unreachable block (ram,0x05ac7ffc) */
/* WARNING: Removing unreachable block (ram,0x05ac7dbc) */
/* WARNING: Removing unreachable block (ram,0x05ac7dd4) */
/* WARNING: Removing unreachable block (ram,0x05ac7d44) */
/* WARNING: Removing unreachable block (ram,0x05ac7d4c) */
/* WARNING: Removing unreachable block (ram,0x05ac7d50) */
/* WARNING: Removing unreachable block (ram,0x05ac7d54) */
/* WARNING: Removing unreachable block (ram,0x05ac7c78) */
/* WARNING: Removing unreachable block (ram,0x05ac7c88) */
/* WARNING: Removing unreachable block (ram,0x05ac7c90) */
/* WARNING: Removing unreachable block (ram,0x05ac7cb8) */
/* WARNING: Removing unreachable block (ram,0x05ac7c9c) */
/* WARNING: Removing unreachable block (ram,0x05ac7ca8) */
/* WARNING: Removing unreachable block (ram,0x05ac7cc4) */
/* WARNING: Removing unreachable block (ram,0x05ac7aa8) */
/* WARNING: Removing unreachable block (ram,0x05ac7a44) */
/* WARNING: Removing unreachable block (ram,0x04d04ea4) */

long * MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___CalculateItemsLevelSum
                 (long param_1,long *param_2,ulong param_3,uint *param_4,ulong param_5,long param_6)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar12;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long extraout_x1;
  long *extraout_x1_00;
  long extraout_x1_01;
  long lVar22;
  undefined1 *puVar23;
  uint *puVar24;
  uint *puVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  undefined8 uVar29;
  int *piVar30;
  uint *puVar31;
  ulong uVar32;
  uint uVar33;
  long *plVar34;
  undefined *puVar35;
  long *plVar36;
  uint *unaff_x24;
  uint *unaff_x25;
  uint *unaff_x26;
  undefined *unaff_x27;
  uint *unaff_x28;
  ulong unaff_x29;
  code *pcVar37;
  float fVar38;
  undefined8 unaff_d8;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  undefined8 auStack_80 [2];
  long *plStack_70;
  long lStack_68;
  ulong uStack_60;
  uint *puStack_58;
  
  uVar15 = param_3;
  puVar24 = param_4;
  if ((bRam0000000007e1ae75 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780048);
    func_0x03280a18(PTR_DAT_07780050);
    func_0x03280a18(PTR_DAT_07780058);
    func_0x03280a18(PTR_DAT_07780060);
    bRam0000000007e1ae75 = 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_4 + 8) + 0xc0) + 0xa8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar13 = func_0x03280ca0();
  func_0x0404d984(lVar13,*(undefined8 *)(*(long *)(*(long *)(param_4 + 8) + 0xc0) + 0xb0));
  if (lVar13 == 0) {
    func_0x03280cac();
    auStack_80[0] = 0x4d04634;
    lVar13 = 0x7e1a000;
    puVar31 = (uint *)((ulong)puVar24 & 0xffffffff);
    uVar32 = uVar15 & 0xffffffff;
    auVar40._8_8_ = uVar32;
    auVar40._0_8_ = extraout_x1;
    puVar25 = puVar24;
    plStack_70 = param_2;
    lStack_68 = param_1;
    uStack_60 = param_3;
    puStack_58 = param_4;
    if ((bRam0000000007e1ae76 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780068);
      func_0x03280a18(PTR_DAT_07780070);
      func_0x03280a18(PTR_DAT_07780078);
      bRam0000000007e1ae76 = 1;
    }
    puVar35 = PTR_DAT_07780078;
    if (extraout_x1 == 0) {
      uVar29 = 0x4d046ec;
      auVar40 = func_0x03280cac();
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar32;
      puVar18 = auStack_80;
      uVar32 = 0;
      do {
        plVar36 = auVar40._0_8_;
        *(undefined8 *)((long)puVar18 + -0x50) = uVar29;
        *(uint **)((long)puVar18 + -0x40) = unaff_x26;
        *(uint **)((long)puVar18 + -0x38) = unaff_x25;
        *(uint **)((long)puVar18 + -0x30) = unaff_x24;
        *(ulong *)((long)puVar18 + -0x28) = uVar32;
        *(long *)((long)puVar18 + -0x20) = lVar13;
        *(long *)((long)puVar18 + -0x18) = auVar39._8_8_;
        *(long *)((long)puVar18 + -0x10) = auVar39._0_8_;
        *(uint **)((long)puVar18 + -8) = puVar31;
        uVar19 = uVar15 & 0xffffffff;
        puVar24 = puVar25;
        uVar32 = param_5;
        lVar13 = param_6;
        if ((bRam0000000007e1ae77 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777c258);
          func_0x03280a18(PTR_DAT_07780080);
          func_0x03280a18(PTR_DAT_07780088);
          func_0x03280a18(PTR_DAT_07780090);
          func_0x03280a18(PTR_DAT_0777c248);
          func_0x03280a18(PTR_DAT_0777e508);
          bRam0000000007e1ae77 = 1;
          lVar13 = param_6;
        }
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 200) + 0x135) & 1) ==
            0) {
          func_0x0325681c();
        }
        lVar26 = func_0x03280ca0();
        func_0x0404e58c(lVar26,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xd0));
        if (lVar26 != 0) {
          plVar14 = (long *)(lVar26 + 0x10);
          *plVar14 = (long)plVar36;
          goto SUB_032809c4;
        }
        auVar39 = func_0x03280cac();
        lVar26 = auVar39._0_8_;
        *(code **)((long)puVar18 + -0x80) =
             MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___ApplyMetagameWeightBoosts;
        *(undefined8 *)((long)puVar18 + -0x78) = 0;
        *(uint **)((long)puVar18 + -0x70) = puVar25;
        *(ulong *)((long)puVar18 + -0x68) = uVar19;
        *(ulong *)((long)puVar18 + -0x60) = param_5;
        *(long *)((long)puVar18 + -0x58) = auVar40._8_8_;
        uVar29 = 0x7e1a000;
        uVar19 = uVar15;
        if ((bRam0000000007e1ae78 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07780098);
          bRam0000000007e1ae78 = 1;
        }
        if (*(long *)(lVar26 + 0x68) != 0) {
          lVar20 = *(long *)(lVar26 + 0x90);
          uVar16 = func_0x0644eae4(*(long *)(lVar26 + 0x68),0);
          uVar29 = 0;
          if (lVar20 != 0) {
            plVar14 = (long *)func_0x06897e70(lVar20,uVar16,uVar15,0);
            if ((plVar14 == (long *)0x0) || ((int)plVar14[4] < 1)) {
              return plVar14;
            }
            uVar15 = *(ulong *)((long)puVar18 + -0x60);
            puVar25 = *(uint **)((long)puVar18 + -0x58);
            lVar13 = *(long *)((long)puVar18 + -0x70);
            plVar34 = *(long **)((long)puVar18 + -0x68);
            puVar9 = (undefined1 *)((long)puVar18 + -0x50);
            pcVar37 = *(code **)((long)puVar18 + -0x80);
            puVar35 = *(undefined **)((long)puVar18 + -0x78);
            goto code_r0x04d05210;
          }
        }
        func_0x03280cac();
        puVar6 = PTR_DAT_077800a8;
        puVar35 = PTR_DAT_077800a0;
        *(code **)((long)puVar18 + -0xb0) =
             MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___ApplyToolFiltering;
        *(undefined8 *)((long)puVar18 + -0xa8) = uVar29;
        *(ulong *)((long)puVar18 + -0xa0) = uVar15;
        *(long *)((long)puVar18 + -0x98) = lVar26;
        *(uint **)((long)puVar18 + -0x90) = puVar24;
        *(long *)((long)puVar18 + -0x88) = auVar39._8_8_;
        if ((bRam0000000007e1ae79 & 1) == 0) {
          func_0x03280a18(PTR_DAT_077800a8);
          func_0x03280a18(PTR_DAT_077800a0);
          func_0x03280a18(PTR_DAT_077800b0);
          bRam0000000007e1ae79 = 1;
        }
        lVar26 = *(long *)puVar35;
        uVar29 = func_0x03d87b94(extraout_x1_00,uVar19);
        plVar14 = (long *)func_0x03d601c0(uVar29,*(undefined8 *)puVar6);
        if (plVar14 != (long *)0x0) {
          plVar36 = extraout_x1_00;
          if ((int)plVar14[3] != 0) {
            plVar36 = plVar14;
          }
          return plVar36;
        }
        func_0x03280cac();
        *(undefined8 *)((long)puVar18 + -0xe0) = 0x4d04a08;
        *(undefined8 *)((long)puVar18 + -0xd0) = 0x7e1a000;
        *(undefined **)((long)puVar18 + -200) = puVar6;
        *(ulong *)((long)puVar18 + -0xc0) = uVar19;
        *(long **)((long)puVar18 + -0xb8) = extraout_x1_00;
        lVar20 = lVar26;
        if ((bRam0000000007e1ae7a & 1) == 0) {
          func_0x03280a18(PTR_DAT_077800b8);
          bRam0000000007e1ae7a = 1;
        }
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0xe8) + 0x135) & 1) ==
            0) {
          func_0x0325681c();
        }
        lVar22 = func_0x03280ca0();
        func_0x04054968(lVar22,*(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0xf0));
        if (lVar22 != 0) {
          plVar14 = (long *)(lVar22 + 0x10);
          *plVar14 = extraout_x1_01;
          goto SUB_032809c4;
        }
        auVar40 = func_0x03280cac();
        lVar22 = auVar40._0_8_;
        *(undefined8 *)((long)puVar18 + -0x120) = 0x4d04ac4;
        *(uint **)((long)puVar18 + -0x118) = unaff_x25;
        *(long **)((long)puVar18 + -0x110) = plVar36;
        *(undefined **)((long)puVar18 + -0x108) = puVar35;
        *(undefined8 *)((long)puVar18 + -0x100) = 0x7e1a000;
        *(undefined8 *)((long)puVar18 + -0xf8) = 0;
        *(long *)((long)puVar18 + -0xf0) = extraout_x1_01;
        *(long *)((long)puVar18 + -0xe8) = lVar26;
        if ((bRam0000000007e1ae7b & 1) == 0) {
          func_0x03280a18(PTR_DAT_077800c0);
          func_0x03280a18(PTR_DAT_077800c8);
          func_0x03280a18(PTR_DAT_077800d0);
          func_0x03280a18(PTR_DAT_077800d8);
          func_0x03280a18(PTR_DAT_077800e0);
          bRam0000000007e1ae7b = 1;
        }
        lVar26 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = func_0x0325681c();
        }
        if (*(int *)(lVar26 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar26 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = func_0x0325681c();
        }
        lVar26 = *(long *)(*(long *)(lVar26 + 0xb8) + 0x18);
        if (lVar26 == 0) {
          lVar13 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
          }
          if (*(int *)(lVar13 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar13 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
          }
          uVar16 = **(undefined8 **)(lVar13 + 0xb8);
          uVar29 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c0);
          func_0x0535ab4c(uVar29,uVar16,
                          *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x100),0);
          lVar26 = *(long *)(*(long *)(lVar20 + 0x20) + 0xc0);
          lVar13 = *(long *)(lVar26 + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
            lVar26 = *(long *)(*(long *)(lVar20 + 0x20) + 0xc0);
          }
          *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18) = uVar29;
          lVar13 = *(long *)(lVar26 + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
          }
          plVar14 = (long *)(*(long *)(lVar13 + 0xb8) + 0x18);
          goto SUB_032809c4;
        }
        lVar28 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          lVar28 = func_0x0325681c();
        }
        if (*(int *)(lVar28 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar28 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          lVar28 = func_0x0325681c();
        }
        puVar35 = PTR_DAT_077800e0;
        puVar24 = *(uint **)(*(long *)(lVar28 + 0xb8) + 0x20);
        if (puVar24 == (uint *)0x0) {
          lVar13 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
          }
          if (*(int *)(lVar13 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar13 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
          }
          uVar16 = **(undefined8 **)(lVar13 + 0xb8);
          uVar29 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c8);
          func_0x0535ac00(uVar29,uVar16,
                          *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x108),0);
          lVar26 = *(long *)(*(long *)(lVar20 + 0x20) + 0xc0);
          lVar13 = *(long *)(lVar26 + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
            lVar26 = *(long *)(*(long *)(lVar20 + 0x20) + 0xc0);
          }
          *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x20) = uVar29;
          lVar13 = *(long *)(lVar26 + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
          }
          plVar14 = (long *)(*(long *)(lVar13 + 0xb8) + 0x20);
          goto SUB_032809c4;
        }
        uVar19 = *(ulong *)PTR_DAT_077800e0;
        puVar25 = puVar24;
        lVar28 = func_0x03f36e88(auVar40._8_8_,lVar26);
        plVar14 = *(long **)(lVar22 + 0x60);
        if (plVar14 != (long *)0x0) {
          lVar22 = *plVar14;
          uVar15 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar15 != 0) {
            piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_077800d0) {
                puVar17 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
                goto LAB_04d04dac;
              }
              uVar15 = uVar15 - 1;
              piVar30 = piVar30 + 4;
            } while (uVar15 != 0);
          }
          puVar25 = (uint *)0x0;
          puVar17 = (undefined8 *)func_0x03256b10(plVar14);
LAB_04d04dac:
          plVar34 = (long *)(*(code *)*puVar17)(plVar14,puVar17[1]);
          lVar22 = 0;
          if (lVar28 != 0) {
            lVar26 = *(long *)PTR_DAT_077800d8;
            *(undefined8 *)((long)puVar18 + -0x110) = *(undefined8 *)((long)puVar18 + -0x120);
            *(undefined8 *)((long)puVar18 + -0x100) = *(undefined8 *)((long)puVar18 + -0x100);
            *(undefined8 *)((long)puVar18 + -0xf8) = *(undefined8 *)((long)puVar18 + -0xf8);
            *(undefined8 *)((long)puVar18 + -0xf0) = *(undefined8 *)((long)puVar18 + -0xf0);
            *(undefined8 *)((long)puVar18 + -0xe8) = *(undefined8 *)((long)puVar18 + -0xe8);
            lVar13 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0xa0);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c(lVar13);
            }
            lVar13 = func_0x03280ca0(lVar13);
            func_0x04c1b8d8(lVar13,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0xa8));
            if ((plVar34 != (long *)0x0) &&
               (iVar11 = (**(code **)(*plVar34 + 0x1a8))
                                   (plVar34,*(undefined4 *)(lVar28 + 0x18),
                                    *(undefined8 *)(*plVar34 + 0x1b0)), lVar13 != 0)) {
              *(int *)(lVar13 + 0x10) = iVar11 + 1;
              uVar29 = *(undefined8 *)(lVar28 + 0x10);
              if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0xb8) + 0x135) &
                  1) == 0) {
                func_0x0325681c();
              }
              uVar16 = func_0x03280ca0();
              lVar20 = *(long *)(*(long *)(lVar26 + 0x20) + 0xc0);
              func_0x05355fbc(uVar16,lVar13,*(undefined8 *)(lVar20 + 0xb0),
                              *(undefined8 *)(lVar20 + 0xc0));
              lVar20 = func_0x03d4294c(uVar29,uVar16,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 200));
              if (lVar20 != 0) {
                return (long *)(ulong)*(uint *)(lVar20 + 0x10);
              }
            }
            auVar40 = func_0x03280cac();
            *(undefined8 *)((long)puVar18 + -0x130) = 0x4a44b20;
            *(long *)((long)puVar18 + -0x120) = lVar13;
            *(long *)((long)puVar18 + -0x118) = lVar26;
            lVar13 = *(long *)(*(long *)(*(long *)(auVar40._8_8_ + 0x20) + 0xc0) + 8);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c(lVar13);
            }
            lVar13 = func_0x03280ca0(lVar13);
            func_0x04143c38(lVar13,*(undefined8 *)
                                    (*(long *)(*(long *)(auVar40._8_8_ + 0x20) + 0xc0) + 0xe0));
            plVar14 = (long *)(auVar40._0_8_ + 0x10);
            *plVar14 = lVar13;
            goto SUB_032809c4;
          }
        }
        auVar40 = func_0x03280cac();
        puVar9 = (undefined1 *)((long)puVar18 + -0x180);
        *(undefined8 *)((long)puVar18 + -0x170) = 0x4d04de8;
        *(uint **)((long)puVar18 + -0x160) = unaff_x26;
        *(undefined **)((long)puVar18 + -0x158) = puVar35;
        *(long **)((long)puVar18 + -0x150) = plVar36;
        *(uint **)((long)puVar18 + -0x148) = puVar24;
        *(long *)((long)puVar18 + -0x140) = lVar26;
        *(long *)((long)puVar18 + -0x138) = lVar20;
        *(long **)((long)puVar18 + -0x130) = plVar14;
        *(long *)((long)puVar18 + -0x128) = lVar22;
        unaff_x25 = (uint *)0x7e1a000;
        uVar15 = uVar32 & 0xffffffff;
        unaff_x24 = (uint *)(uVar19 & 0xffffffff);
        param_6 = lVar13;
        if ((bRam0000000007e1ae7c & 1) == 0) {
          func_0x03280a18(PTR_DAT_077800e8);
          func_0x03280a18(PTR_DAT_0777c248);
          func_0x03280a18(PTR_DAT_077800d0);
          func_0x03280a18(PTR_DAT_0777e510);
          func_0x03280a18(PTR_DAT_077800f0);
          func_0x03280a18(PTR_DAT_077800f8);
          func_0x03280a18(PTR_DAT_07780100);
          bRam0000000007e1ae7c = 1;
        }
        if ((uVar19 & 1) == 0) goto LAB_04d04ea8;
        param_5 = *(ulong *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x110);
        uVar29 = 0x4d04ea4;
        puVar18 = (undefined8 *)((long)puVar18 + -0x180);
        puVar31 = puVar25;
        uVar32 = uVar15;
        auVar39 = auVar40;
      } while( true );
    }
    uVar15 = func_0x04f5b688(extraout_x1,uVar32,*(undefined8 *)PTR_DAT_07780068);
    if ((uVar15 & 1) != 0) {
      iVar11 = func_0x04f5b400(extraout_x1,uVar32,*(undefined8 *)PTR_DAT_07780070);
      puVar31 = (uint *)(ulong)(uint)(iVar11 + (int)puVar24);
    }
    puVar25 = (uint *)0x1;
    lVar26 = *(long *)(*(long *)(*(long *)(*(long *)puVar35 + 0x20) + 0xc0) + 0x118);
    plVar36 = (long *)0x0;
    puVar10 = &stack0xffffffffffffffb0;
    puVar24 = puStack_58;
    uVar15 = uStack_60;
    lVar13 = lStack_68;
    plVar14 = plStack_70;
    uVar29 = auStack_80[0];
    do {
      lVar20 = auVar40._0_8_;
      *(ulong *)(puVar10 + -0x60) = unaff_x29;
      *(undefined8 *)(puVar10 + -0x58) = uVar29;
      *(uint **)(puVar10 + -0x50) = unaff_x28;
      *(undefined **)(puVar10 + -0x48) = unaff_x27;
      *(uint **)(puVar10 + -0x40) = unaff_x26;
      *(uint **)(puVar10 + -0x38) = unaff_x25;
      *(uint **)(puVar10 + -0x30) = unaff_x24;
      *(long **)(puVar10 + -0x28) = plVar36;
      *(long **)(puVar10 + -0x20) = plVar14;
      *(long *)(puVar10 + -0x18) = lVar13;
      *(ulong *)(puVar10 + -0x10) = uVar15;
      *(uint **)(puVar10 + -8) = puVar24;
      *(int *)(puVar10 + -100) = auVar40._8_4_;
      uVar15 = auVar40._8_8_ & 0xffffffff;
      *(int *)(lVar20 + 0x2c) = *(int *)(lVar20 + 0x2c) + 1;
      puVar24 = puVar31;
      if (*(long *)(lVar20 + 0x10) == 0) {
        puVar24 = *(uint **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x10);
        func_0x04f5bdb8(lVar20,0);
      }
      plVar36 = *(long **)(lVar20 + 0x30);
      lVar13 = *(long *)(lVar20 + 0x18);
      if (plVar36 == (long *)0x0) {
        uVar12 = func_0x05793b44(puVar10 + -100,0);
      }
      else {
        lVar22 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
        }
        lVar28 = *plVar36;
        uVar32 = (ulong)*(ushort *)(lVar28 + 0x12e);
        if (uVar32 != 0) {
          piVar30 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == lVar22) {
              puVar18 = (undefined8 *)(lVar28 + (long)(*piVar30 + 1) * 0x10 + 0x138);
              goto LAB_04f5bf80;
            }
            uVar32 = uVar32 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar32 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar36,lVar22,1);
LAB_04f5bf80:
        puVar24 = (uint *)puVar18[1];
        uVar12 = (*(code *)*puVar18)(plVar36,uVar15);
      }
      lVar22 = *(long *)(lVar20 + 0x10);
      unaff_x25 = puVar25;
      if (lVar22 == 0) goto LAB_04f5c2d4;
      uVar33 = *(uint *)(lVar22 + 0x18);
      uVar12 = uVar12 & 0x7fffffff;
      unaff_x27 = (undefined *)(ulong)uVar12;
      iVar11 = 0;
      if (uVar33 != 0) {
        iVar11 = (int)uVar12 / (int)uVar33;
      }
      uVar27 = uVar12 - iVar11 * uVar33;
      if (uVar33 <= uVar27) goto LAB_04f5c2d0;
      unaff_x28 = (uint *)(lVar22 + (ulong)uVar27 * 4 + 0x20);
      uVar33 = *unaff_x28 - 1;
      uVar15 = (ulong)uVar33;
      iVar11 = (int)puVar25;
      if (plVar36 == (long *)0x0) {
        if (lVar13 != 0) {
          uVar29 = *(undefined8 *)(lVar13 + 0x18);
          uVar27 = (uint)uVar29;
          if (uVar33 < uVar27) {
            plVar14 = (long *)0x0;
            do {
              uVar33 = (uint)uVar29;
              uVar27 = (uint)uVar15;
              plVar36 = (long *)(long)(int)uVar27;
              if (*(uint *)(lVar13 + (long)(int)uVar27 * 0x10 + 0x20) == uVar12) {
                plVar34 = (long *)func_0x03c56c24(*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) +
                                                   0x18));
                if (*(uint *)(lVar13 + 0x18) <= uVar27) goto LAB_04f5c2d0;
                if (plVar34 == (long *)0x0) goto LAB_04f5c2d4;
                puVar24 = (uint *)(ulong)*(uint *)(puVar10 + -100);
                uVar32 = (**(code **)(*plVar34 + 0x1b8))
                                   (plVar34,*(undefined4 *)(lVar13 + (long)plVar36 * 0x10 + 0x28),
                                    puVar24,*(undefined8 *)(*plVar34 + 0x1c0));
                if ((uVar32 & 1) != 0) {
                  if (iVar11 == 2) {
                    puVar23 = puVar10 + -0x68;
                    *(undefined4 *)(puVar10 + -0x68) = *(undefined4 *)(puVar10 + -100);
LAB_04f5c2b0:
                    uVar29 = func_0x03280b94(*(undefined8 *)
                                              (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70),
                                             puVar23);
                    func_0x057b8580(uVar29,0);
                    return (long *)0x0;
                  }
                  if (iVar11 != 1) {
                    return (long *)0x0;
                  }
                  plVar34 = plVar36;
                  if (uVar27 < *(uint *)(lVar13 + 0x18)) {
LAB_04f5c28c:
                    *(int *)(lVar13 + (long)plVar34 * 0x10 + 0x2c) = (int)puVar31;
                    return (long *)0x1;
                  }
                  goto LAB_04f5c2d0;
                }
                uVar33 = *(uint *)(lVar13 + 0x18);
              }
              if (uVar33 <= uVar27) goto LAB_04f5c2d0;
              uVar2 = *(uint *)(lVar13 + (long)plVar36 * 0x10 + 0x24);
              uVar15 = (ulong)uVar2;
              if ((int)uVar33 <= (int)plVar14) {
                func_0x057b8684(0);
              }
              uVar29 = *(undefined8 *)(lVar13 + 0x18);
              plVar14 = (long *)(ulong)((int)plVar14 + 1);
              uVar27 = (uint)uVar29;
            } while (uVar2 < uVar27);
          }
LAB_04f5c148:
          if (*(int *)(lVar20 + 0x28) < 1) {
            uVar33 = *(uint *)(lVar20 + 0x20);
            plVar14 = (long *)(ulong)uVar33;
            unaff_x25 = puVar25;
            if (uVar33 == uVar27) {
              func_0x04f5c670(lVar20,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x1b8));
              lVar22 = *(long *)(lVar20 + 0x10);
              *(uint *)(lVar20 + 0x20) = uVar33 + 1;
              if (lVar22 == 0) goto LAB_04f5c2d4;
              uVar27 = *(uint *)(lVar22 + 0x18);
              iVar11 = 0;
              if (uVar27 != 0) {
                iVar11 = (int)uVar12 / (int)uVar27;
              }
              uVar2 = uVar12 - iVar11 * uVar27;
              if (uVar27 <= uVar2) goto LAB_04f5c2d0;
              lVar13 = *(long *)(lVar20 + 0x18);
              unaff_x28 = (uint *)(lVar22 + (ulong)uVar2 * 4 + 0x20);
            }
            else {
              lVar13 = *(long *)(lVar20 + 0x18);
              *(uint *)(lVar20 + 0x20) = uVar33 + 1;
            }
            if (lVar13 == 0) goto LAB_04f5c2d4;
            if (uVar33 < *(uint *)(lVar13 + 0x18)) {
              lVar26 = (long)(int)uVar33;
LAB_04f5c1f4:
              lVar13 = lVar13 + lVar26 * 0x10;
              *(uint *)(lVar13 + 0x20) = uVar12;
              *(uint *)(lVar13 + 0x24) = *unaff_x28 - 1;
              *(undefined4 *)(lVar13 + 0x28) = *(undefined4 *)(puVar10 + -100);
              *(int *)(lVar13 + 0x2c) = (int)puVar31;
              *unaff_x28 = uVar33 + 1;
              return (long *)0x1;
            }
          }
          else {
            *(int *)(lVar20 + 0x28) = *(int *)(lVar20 + 0x28) + -1;
            uVar33 = *(uint *)(lVar20 + 0x24);
            plVar14 = (long *)(ulong)uVar33;
            if (uVar33 < *(uint *)(lVar13 + 0x18)) {
              lVar26 = (long)(int)uVar33;
              *(undefined4 *)(lVar20 + 0x24) = *(undefined4 *)(lVar13 + lVar26 * 0x10 + 0x24);
              goto LAB_04f5c1f4;
            }
          }
LAB_04f5c2d0:
          func_0x03280cb4();
          unaff_x25 = puVar25;
        }
      }
      else if (lVar13 != 0) {
        uVar29 = *(undefined8 *)(lVar13 + 0x18);
        uVar27 = (uint)uVar29;
        if (uVar33 < uVar27) {
          unaff_x29 = 0;
          *(int *)(puVar10 + -0x70) = iVar11;
          do {
            uVar33 = (uint)uVar29;
            uVar27 = (uint)uVar15;
            plVar14 = (long *)(long)(int)uVar27;
            if (*(uint *)(lVar13 + (long)(int)uVar27 * 0x10 + 0x20) == uVar12) {
              puVar25 = (uint *)(ulong)*(uint *)(puVar10 + -100);
              lVar22 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 8);
              uVar15 = (ulong)*(uint *)(lVar13 + (long)plVar14 * 0x10 + 0x28);
              if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
                lVar22 = func_0x0325681c(lVar22);
              }
              lVar28 = *plVar36;
              uVar32 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar32 != 0) {
                piVar30 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar30 + -2) == lVar22) {
                    puVar18 = (undefined8 *)(lVar28 + (long)*piVar30 * 0x10 + 0x138);
                    goto LAB_04f5c060;
                  }
                  uVar32 = uVar32 - 1;
                  piVar30 = piVar30 + 4;
                } while (uVar32 != 0);
              }
              puVar18 = (undefined8 *)func_0x03256b10(plVar36,lVar22,0);
LAB_04f5c060:
              puVar24 = puVar25;
              uVar32 = (*(code *)*puVar18)(plVar36,uVar15,puVar25,puVar18[1]);
              if ((uVar32 & 1) != 0) {
                if ((*(uint *)(puVar10 + -0x70) & 0xff) == 2) {
                  puVar23 = puVar10 + -0x6c;
                  *(undefined4 *)(puVar10 + -0x6c) = *(undefined4 *)(puVar10 + -100);
                  goto LAB_04f5c2b0;
                }
                if ((*(uint *)(puVar10 + -0x70) & 0xff) != 1) {
                  return (long *)0x0;
                }
                plVar34 = plVar14;
                if (*(uint *)(lVar13 + 0x18) <= uVar27) goto LAB_04f5c2d0;
                goto LAB_04f5c28c;
              }
              uVar33 = *(uint *)(lVar13 + 0x18);
            }
            if (uVar33 <= uVar27) goto LAB_04f5c2d0;
            uVar2 = *(uint *)(lVar13 + (long)plVar14 * 0x10 + 0x24);
            uVar15 = (ulong)uVar2;
            if ((int)uVar33 <= (int)unaff_x29) {
              func_0x057b8684(0);
            }
            uVar29 = *(undefined8 *)(lVar13 + 0x18);
            unaff_x29 = (ulong)((int)unaff_x29 + 1);
            uVar27 = (uint)uVar29;
          } while (uVar2 < uVar27);
        }
        goto LAB_04f5c148;
      }
LAB_04f5c2d4:
      lVar22 = func_0x03280cac();
      unaff_x26 = (uint *)PTR_DAT_07781380;
      *(undefined8 *)(puVar10 + -0xc0) = 0x4f5c2d8;
      *(undefined **)(puVar10 + -0xb8) = unaff_x27;
      *(long *)(puVar10 + -0xb0) = lVar13;
      *(uint **)(puVar10 + -0xa8) = unaff_x25;
      *(ulong *)(puVar10 + -0xa0) = uVar15;
      *(long **)(puVar10 + -0x98) = plVar36;
      *(long **)(puVar10 + -0x90) = plVar14;
      *(long *)(puVar10 + -0x88) = lVar26;
      *(long *)(puVar10 + -0x80) = lVar20;
      *(ulong *)(puVar10 + -0x78) = (ulong)puVar31 & 0xffffffff;
      uVar32 = 0x7e1b000;
      if ((bRam0000000007e1b777 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07781610);
        func_0x03280a18(PTR_DAT_07781618);
        func_0x03280a18(PTR_DAT_07781380);
        func_0x03280a18(PTR_DAT_0774e558);
        func_0x03280a18(PTR_DAT_07781600);
        func_0x03280a18(PTR_DAT_0777e440);
        func_0x03280a18(PTR_DAT_07781608);
        func_0x03280a18(PTR_DAT_0775b648);
        bRam0000000007e1b777 = 1;
      }
      lVar13 = *(long *)unaff_x26;
      *(undefined8 *)(puVar10 + -200) = 0;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar13 = func_0x057624fc(0);
      if (lVar13 != 0) {
        func_0x04e91150(lVar13,lVar22,puVar10 + -200,*(undefined8 *)PTR_DAT_07781618);
        if (*(long *)(puVar10 + -200) == 0) {
          return (long *)0x0;
        }
        uVar19 = func_0x056933d8(*(long *)(puVar10 + -200),*(undefined8 *)PTR_DAT_0775b648,0);
        puVar35 = PTR_DAT_0774e558;
        if (*(long *)(puVar10 + -200) != 0) {
          uVar32 = uVar19 & 0xffffffff;
          uVar15 = func_0x056933d8(*(long *)(puVar10 + -200),*(undefined8 *)PTR_DAT_07781600,0);
          lVar13 = *(long *)puVar35;
          lVar26 = *(long *)(puVar10 + -200);
          plVar14 = (long *)(uVar15 & 0xffffffff);
          uVar15 = *(ulong *)(*(long *)(*(long *)(puVar24 + 8) + 0xc0) + 0x170);
          if (*(int *)(lVar13 + 0xe0) == 0) {
            func_0x03280b8c(lVar13);
          }
          uVar29 = func_0x057a51c4(uVar15,0);
          plVar36 = (long *)0x0;
          unaff_x27 = puVar35;
          if (lVar26 != 0) {
            lVar13 = func_0x05690f88(lVar26,*(undefined8 *)PTR_DAT_0777e440,uVar29,0);
            lVar26 = *(long *)(*(long *)(*(long *)(puVar24 + 8) + 0xc0) + 8);
            if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
              lVar26 = func_0x0325681c(lVar26);
            }
            if (lVar13 == 0) {
LAB_04f5c48c:
              lVar20 = 0;
            }
            else {
              lVar20 = func_0x03280b90(lVar13,lVar26);
              if (lVar20 == 0) {
                func_0x03281048(lVar13,lVar26);
                goto LAB_04f5c48c;
              }
            }
            plVar14 = (long *)(lVar22 + 0x30);
            *plVar14 = lVar20;
            lVar26 = *(long *)(*(long *)(*(long *)(puVar24 + 8) + 0xc0) + 8);
            if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
              lVar26 = func_0x0325681c(lVar26);
            }
            if ((lVar13 != 0) && (lVar20 = func_0x03280b90(lVar13,lVar26), lVar20 == 0)) {
              func_0x03281048(lVar13,lVar26);
            }
            goto SUB_032809c4;
          }
        }
      }
      func_0x03280cac();
      func_0x057b819c(0x10,0);
      func_0x03280cac();
      auVar40 = func_0x03281048(uVar15,plVar36);
      puVar35 = PTR_DAT_07781380;
      lVar26 = auVar40._0_8_;
      *(undefined8 *)(puVar10 + -0x100) = 0x4f5c670;
      *(long **)(puVar10 + -0xf0) = plVar14;
      *(ulong *)(puVar10 + -0xe8) = uVar32;
      *(uint **)(puVar10 + -0xe0) = puVar24;
      *(long *)(puVar10 + -0xd8) = lVar22;
      if ((bRam0000000007e1b778 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07781380);
        bRam0000000007e1b778 = 1;
      }
      uVar3 = *(undefined4 *)(lVar26 + 0x20);
      if (*(int *)(*(long *)puVar35 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar12 = func_0x05762478(uVar3,0);
      puVar35 = PTR_DAT_07754420;
      uVar32 = (ulong)uVar12;
      lVar13 = *(long *)(*(long *)(*(long *)(auVar40._8_8_ + 0x20) + 0xc0) + 0x1c8);
      *(undefined8 *)(puVar10 + -0x110) = *(undefined8 *)(puVar10 + -0x100);
      *(ulong *)(puVar10 + -0x100) = uVar15;
      *(long **)(puVar10 + -0xf8) = plVar36;
      *(undefined8 *)(puVar10 + -0xf0) = *(undefined8 *)(puVar10 + -0xf0);
      *(undefined8 *)(puVar10 + -0xe8) = *(undefined8 *)(puVar10 + -0xe8);
      *(undefined8 *)(puVar10 + -0xe0) = *(undefined8 *)(puVar10 + -0xe0);
      *(undefined8 *)(puVar10 + -0xd8) = *(undefined8 *)(puVar10 + -0xd8);
      if ((bRam0000000007e1b779 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07754420,uVar32,0);
        bRam0000000007e1b779 = 1;
      }
      plVar36 = (long *)func_0x03280afc(*(undefined8 *)puVar35,uVar32);
      lVar13 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x1b0);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      puVar25 = (uint *)func_0x03280afc(lVar13,uVar32);
      uVar33 = *(uint *)(lVar26 + 0x20);
      unaff_x24 = (uint *)(ulong)uVar33;
      lVar13 = 0;
      puVar31 = puVar25;
      func_0x057b9f30(*(undefined8 *)(lVar26 + 0x18),0,puVar25,0,unaff_x24,0);
      if ((int)uVar33 < 1) {
LAB_04f5c80c:
        plVar14 = (long *)(lVar26 + 0x10);
        *plVar14 = (long)plVar36;
        goto SUB_032809c4;
      }
      if (puVar25 != (uint *)0x0) {
        uVar33 = puVar25[6];
        puVar24 = (uint *)0x0;
        while (puVar24 < (uint *)(ulong)uVar33) {
          uVar27 = puVar25[(long)puVar24 * 4 + 8];
          if (-1 < (int)uVar27) {
            if (plVar36 == (long *)0x0) goto LAB_04f5c840;
            iVar11 = 0;
            if (uVar12 != 0) {
              iVar11 = (int)uVar27 / (int)uVar12;
            }
            uVar27 = uVar27 - iVar11 * uVar12;
            if (*(uint *)(plVar36 + 3) <= uVar27) break;
            puVar25[(long)puVar24 * 4 + 9] = *(int *)((long)plVar36 + (ulong)uVar27 * 4 + 0x20) - 1;
            *(int *)((long)plVar36 + (ulong)uVar27 * 4 + 0x20) = (int)puVar24 + 1;
          }
          puVar24 = (uint *)((long)puVar24 + 1);
          if (puVar24 == unaff_x24) goto LAB_04f5c80c;
        }
        func_0x03280cb4();
      }
LAB_04f5c840:
      auVar41 = func_0x03280cac();
      lVar20 = auVar41._0_8_;
      *(ulong *)(puVar10 + -0x170) = unaff_x29;
      *(undefined8 *)(puVar10 + -0x168) = 0x4f5c844;
      *(uint **)(puVar10 + -0x160) = unaff_x28;
      *(undefined **)(puVar10 + -0x158) = unaff_x27;
      *(uint **)(puVar10 + -0x150) = unaff_x26;
      *(uint **)(puVar10 + -0x148) = unaff_x25;
      *(uint **)(puVar10 + -0x140) = unaff_x24;
      *(uint **)(puVar10 + -0x138) = puVar25;
      *(undefined8 **)(puVar10 + -0x130) = (undefined8 *)(lVar26 + 0x18);
      *(long **)(puVar10 + -0x128) = plVar36;
      *(ulong *)(puVar10 + -0x120) = uVar32;
      *(long *)(puVar10 + -0x118) = lVar26;
      *(uint *)(puVar10 + -0x174) = auVar41._8_4_;
      if (*(long *)(lVar20 + 0x10) == 0) {
        return (long *)0x0;
      }
      plVar14 = *(long **)(lVar20 + 0x30);
      if (plVar14 == (long *)0x0) {
        puVar24 = puVar31;
        uVar12 = func_0x05793b44(puVar10 + -0x174,0);
      }
      else {
        plVar36 = (long *)(ulong)auVar41._8_4_;
        lVar26 = *(long *)(*(long *)(*(long *)(puVar31 + 8) + 0xc0) + 8);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = func_0x0325681c(lVar26);
        }
        lVar22 = *plVar14;
        uVar15 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar15 != 0) {
          piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == lVar26) {
              puVar18 = (undefined8 *)(lVar22 + (long)(*piVar30 + 1) * 0x10 + 0x138);
              goto LAB_04f5c8fc;
            }
            uVar15 = uVar15 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar15 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar14,lVar26,1);
LAB_04f5c8fc:
        puVar24 = (uint *)puVar18[1];
        uVar12 = (*(code *)*puVar18)(plVar14,plVar36);
      }
      lVar26 = *(long *)(lVar20 + 0x10);
      if (lVar26 == 0) {
LAB_04f5cb14:
        func_0x03280cac();
      }
      else {
        uVar33 = *(uint *)(lVar26 + 0x18);
        uVar12 = uVar12 & 0x7fffffff;
        unaff_x27 = (undefined *)(ulong)uVar12;
        iVar11 = 0;
        if (uVar33 != 0) {
          iVar11 = (int)uVar12 / (int)uVar33;
        }
        uVar27 = uVar12 - iVar11 * uVar33;
        if (uVar27 < uVar33) {
          uVar33 = *(int *)(lVar26 + (ulong)uVar27 * 4 + 0x20) - 1;
          if ((int)uVar33 < 0) {
            return (long *)0x0;
          }
          plVar34 = (long *)0x0;
          unaff_x29 = 0xffffffff;
          *(ulong *)(puVar10 + -0x180) = (ulong)uVar27;
          while( true ) {
            unaff_x24 = (uint *)(ulong)uVar33;
            unaff_x26 = *(uint **)(lVar20 + 0x18);
            plVar14 = plVar34;
            if (unaff_x26 == (uint *)0x0) break;
            if (unaff_x26[6] <= uVar33) goto LAB_04f5cb18;
            unaff_x25 = unaff_x26 + (ulong)uVar33 * 4 + 8;
            unaff_x28 = unaff_x24;
            if (*unaff_x25 == uVar12) {
              plVar36 = *(long **)(lVar20 + 0x30);
              if (plVar36 == (long *)0x0) {
                plVar21 = (long *)func_0x03c56c24(*(undefined8 *)
                                                   (*(long *)(*(long *)(puVar31 + 8) + 0xc0) + 0x18)
                                                 );
                plVar36 = plVar34;
                if (plVar21 == (long *)0x0) break;
                puVar24 = (uint *)(ulong)*(uint *)(puVar10 + -0x174);
                lVar13 = *(long *)(*plVar21 + 0x1c0);
                uVar15 = (**(code **)(*plVar21 + 0x1b8))
                                   (plVar21,unaff_x26[(long)unaff_x24 * 4 + 10]);
              }
              else {
                if (plVar36 == (long *)0x0) break;
                puVar25 = (uint *)(ulong)*(uint *)(puVar10 + -0x174);
                lVar13 = *(long *)(*(long *)(*(long *)(puVar31 + 8) + 0xc0) + 8);
                uVar27 = unaff_x26[(long)unaff_x24 * 4 + 10];
                if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                  lVar13 = func_0x0325681c(lVar13);
                }
                lVar26 = *plVar36;
                uVar15 = (ulong)*(ushort *)(lVar26 + 0x12e);
                if (uVar15 != 0) {
                  piVar30 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar30 + -2) == lVar13) {
                      puVar18 = (undefined8 *)(lVar26 + (long)*piVar30 * 0x10 + 0x138);
                      goto LAB_04f5ca38;
                    }
                    uVar15 = uVar15 - 1;
                    piVar30 = piVar30 + 4;
                  } while (uVar15 != 0);
                }
                puVar18 = (undefined8 *)func_0x03256b10(plVar36,lVar13,0);
LAB_04f5ca38:
                lVar13 = puVar18[1];
                puVar24 = puVar25;
                uVar15 = (*(code *)*puVar18)(plVar36,(long *)(ulong)uVar27);
                plVar34 = plVar36;
                plVar14 = (long *)(ulong)uVar27;
              }
              if ((uVar15 & 1) != 0) {
                plVar36 = plVar34;
                if ((int)(uint)unaff_x29 < 0) {
                  lVar26 = *(long *)(lVar20 + 0x10);
                  if (lVar26 == 0) break;
                  if (*(uint *)(lVar26 + 0x18) <= (uint)*(long *)(puVar10 + -0x180))
                  goto LAB_04f5cb18;
                  *(uint *)(lVar26 + *(long *)(puVar10 + -0x180) * 4 + 0x20) =
                       unaff_x26[(long)unaff_x24 * 4 + 9] + 1;
                }
                else {
                  lVar26 = *(long *)(lVar20 + 0x18);
                  if (lVar26 == 0) break;
                  if (*(uint *)(lVar26 + 0x18) <= (uint)unaff_x29) goto LAB_04f5cb18;
                  *(uint *)(lVar26 + unaff_x29 * 0x10 + 0x24) = unaff_x26[(long)unaff_x24 * 4 + 9];
                }
                *unaff_x25 = 0xffffffff;
                unaff_x26[(long)unaff_x24 * 4 + 9] = *(uint *)(lVar20 + 0x24);
                *(uint *)(lVar20 + 0x24) = uVar33;
                *(ulong *)(lVar20 + 0x28) =
                     CONCAT44((int)((ulong)*(undefined8 *)(lVar20 + 0x28) >> 0x20) + 1,
                              (int)*(undefined8 *)(lVar20 + 0x28) + 1);
                return (long *)0x1;
              }
            }
            unaff_x29 = (ulong)uVar33;
            plVar36 = plVar34;
            uVar33 = unaff_x26[(long)unaff_x24 * 4 + 9];
            if ((int)unaff_x26[(long)unaff_x24 * 4 + 9] < 0) {
              return (long *)0x0;
            }
          }
          goto LAB_04f5cb14;
        }
      }
LAB_04f5cb18:
      auVar41 = func_0x03280cb4();
      lVar26 = auVar41._0_8_;
      *(ulong *)(puVar10 + -0x1e0) = unaff_x29;
      *(undefined8 *)(puVar10 + -0x1d8) = 0x4f5cb1c;
      *(uint **)(puVar10 + -0x1d0) = unaff_x28;
      *(undefined **)(puVar10 + -0x1c8) = unaff_x27;
      *(uint **)(puVar10 + -0x1c0) = unaff_x26;
      *(uint **)(puVar10 + -0x1b8) = unaff_x25;
      *(uint **)(puVar10 + -0x1b0) = unaff_x24;
      *(uint **)(puVar10 + -0x1a8) = puVar25;
      *(long **)(puVar10 + -0x1a0) = plVar14;
      *(long **)(puVar10 + -0x198) = plVar36;
      *(uint **)(puVar10 + -400) = puVar31;
      *(long *)(puVar10 + -0x188) = lVar20;
      *(uint *)(puVar10 + -0x1e4) = auVar41._8_4_;
      lVar20 = *(long *)(lVar26 + 0x10);
      *(uint **)(puVar10 + -0x1f0) = puVar24;
      if (lVar20 == 0) {
LAB_04f5cd44:
        **(undefined4 **)(puVar10 + -0x1f0) = 0;
        return (long *)0x0;
      }
      plVar36 = *(long **)(lVar26 + 0x30);
      lVar20 = lVar13;
      if (plVar36 == (long *)0x0) {
        uVar12 = func_0x05793b44(puVar10 + -0x1e4,0);
      }
      else {
        plVar14 = (long *)(ulong)auVar41._8_4_;
        lVar22 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = func_0x0325681c(lVar22);
        }
        lVar28 = *plVar36;
        uVar15 = (ulong)*(ushort *)(lVar28 + 0x12e);
        if (uVar15 != 0) {
          piVar30 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == lVar22) {
              puVar18 = (undefined8 *)(lVar28 + (long)(*piVar30 + 1) * 0x10 + 0x138);
              goto LAB_04f5cbd8;
            }
            uVar15 = uVar15 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar15 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar36,lVar22,1);
LAB_04f5cbd8:
        puVar24 = (uint *)puVar18[1];
        uVar12 = (*(code *)*puVar18)(plVar36,plVar14);
      }
      lVar22 = *(long *)(lVar26 + 0x10);
      if (lVar22 == 0) {
LAB_04f5ce04:
        func_0x03280cac();
      }
      else {
        uVar33 = *(uint *)(lVar22 + 0x18);
        uVar12 = uVar12 & 0x7fffffff;
        unaff_x28 = (uint *)(ulong)uVar12;
        iVar11 = 0;
        if (uVar33 != 0) {
          iVar11 = (int)uVar12 / (int)uVar33;
        }
        uVar27 = uVar12 - iVar11 * uVar33;
        if (uVar27 < uVar33) {
          iVar11 = *(int *)(lVar22 + (ulong)uVar27 * 4 + 0x20);
          *(ulong *)(puVar10 + -0x1f8) = (ulong)uVar27;
          uVar33 = iVar11 - 1;
          if ((int)uVar33 < 0) goto LAB_04f5cd44;
          plVar34 = (long *)0x0;
          unaff_x29 = 0xffffffff;
          while( true ) {
            unaff_x25 = (uint *)(ulong)uVar33;
            unaff_x27 = *(undefined **)(lVar26 + 0x18);
            plVar36 = plVar34;
            if (unaff_x27 == (undefined *)0x0) break;
            if (*(uint *)(unaff_x27 + 0x18) <= uVar33) goto LAB_04f5ce08;
            puVar31 = (uint *)(unaff_x27 + (ulong)uVar33 * 0x10 + 0x20);
            unaff_x26 = unaff_x25;
            if (*puVar31 == uVar12) {
              plVar14 = *(long **)(lVar26 + 0x30);
              if (plVar14 == (long *)0x0) {
                plVar21 = (long *)func_0x03c56c24(*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                   0x18));
                plVar14 = plVar34;
                if (plVar21 == (long *)0x0) break;
                puVar24 = (uint *)(ulong)*(uint *)(puVar10 + -0x1e4);
                lVar20 = *(long *)(*plVar21 + 0x1c0);
                uVar15 = (**(code **)(*plVar21 + 0x1b8))
                                   (plVar21,*(undefined4 *)
                                             (unaff_x27 + (long)unaff_x25 * 0x10 + 0x28));
              }
              else {
                if (plVar14 == (long *)0x0) break;
                unaff_x24 = (uint *)(ulong)*(uint *)(puVar10 + -0x1e4);
                lVar20 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 8);
                uVar27 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x28);
                if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
                  lVar20 = func_0x0325681c(lVar20);
                }
                lVar22 = *plVar14;
                uVar15 = (ulong)*(ushort *)(lVar22 + 0x12e);
                if (uVar15 != 0) {
                  piVar30 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar30 + -2) == lVar20) {
                      puVar18 = (undefined8 *)(lVar22 + (long)*piVar30 * 0x10 + 0x138);
                      goto LAB_04f5cd14;
                    }
                    uVar15 = uVar15 - 1;
                    piVar30 = piVar30 + 4;
                  } while (uVar15 != 0);
                }
                puVar18 = (undefined8 *)func_0x03256b10(plVar14,lVar20,0);
LAB_04f5cd14:
                lVar20 = puVar18[1];
                puVar24 = unaff_x24;
                uVar15 = (*(code *)*puVar18)(plVar14,(long *)(ulong)uVar27);
                plVar34 = plVar14;
                plVar36 = (long *)(ulong)uVar27;
              }
              if ((uVar15 & 1) != 0) {
                plVar14 = plVar34;
                if ((int)(uint)unaff_x29 < 0) {
                  lVar22 = *(long *)(lVar26 + 0x10);
                  if (lVar22 == 0) break;
                  if (*(uint *)(lVar22 + 0x18) <= (uint)*(long *)(puVar10 + -0x1f8))
                  goto LAB_04f5ce08;
                  *(int *)(lVar22 + *(long *)(puVar10 + -0x1f8) * 4 + 0x20) =
                       *(int *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24) + 1;
                }
                else {
                  lVar22 = *(long *)(lVar26 + 0x18);
                  if (lVar22 == 0) break;
                  if (*(uint *)(lVar22 + 0x18) <= (uint)unaff_x29) goto LAB_04f5ce08;
                  *(undefined4 *)(lVar22 + unaff_x29 * 0x10 + 0x24) =
                       *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24);
                }
                **(undefined4 **)(puVar10 + -0x1f0) =
                     *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x2c);
                *puVar31 = 0xffffffff;
                *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24) =
                     *(undefined4 *)(lVar26 + 0x24);
                *(uint *)(lVar26 + 0x24) = uVar33;
                *(ulong *)(lVar26 + 0x28) =
                     CONCAT44((int)((ulong)*(undefined8 *)(lVar26 + 0x28) >> 0x20) + 1,
                              (int)*(undefined8 *)(lVar26 + 0x28) + 1);
                return (long *)0x1;
              }
            }
            unaff_x29 = (ulong)uVar33;
            plVar14 = plVar34;
            uVar33 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24);
            if ((int)*(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24) < 0) goto LAB_04f5cd44;
          }
          goto LAB_04f5ce04;
        }
      }
LAB_04f5ce08:
      uVar15 = func_0x03280cb4();
      *(undefined8 *)(puVar10 + -0x220) = 0x4f5ce0c;
      *(uint **)(puVar10 + -0x210) = puVar31;
      *(long *)(puVar10 + -0x208) = lVar26;
      puVar31 = *(uint **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x110);
      uVar12 = func_0x04f5baf4();
      if ((int)uVar12 < 0) {
        *puVar24 = 0;
        goto LAB_04f5ce58;
      }
      lVar26 = *(long *)(uVar15 + 0x18);
      if (lVar26 == 0) {
        func_0x03280cac();
      }
      else if (uVar12 < *(uint *)(lVar26 + 0x18)) {
        *puVar24 = *(uint *)(lVar26 + (ulong)uVar12 * 0x10 + 0x2c);
LAB_04f5ce58:
        return (long *)(ulong)(~uVar12 >> 0x1f);
      }
      uVar29 = 0x4f5ce74;
      auVar40 = func_0x03280cb4();
      puVar25 = (uint *)0x0;
      lVar26 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x118);
      puVar10 = puVar10 + -0x220;
    } while( true );
  }
  plVar14 = (long *)(lVar13 + 0x10);
  *plVar14 = (long)param_2;
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar14 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  return plVar14;
LAB_04d04ea8:
  lVar26 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  if (*(int *)(lVar26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar26 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  puVar35 = *(undefined **)(*(long *)(lVar26 + 0xb8) + 0x28);
  if (puVar35 == (undefined *)0x0) {
    lVar26 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    if (*(int *)(lVar26 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar26 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    uVar16 = **(undefined8 **)(lVar26 + 0xb8);
    uVar29 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
    func_0x0535ad68(uVar29,uVar16,
                    *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x118),0);
    lVar20 = *(long *)(*(long *)(lVar13 + 0x20) + 0xc0);
    lVar26 = *(long *)(lVar20 + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
      lVar20 = *(long *)(*(long *)(lVar13 + 0x20) + 0xc0);
    }
    *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x28) = uVar29;
    lVar13 = *(long *)(lVar20 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c();
    }
    plVar14 = (long *)(*(long *)(lVar13 + 0xb8) + 0x28);
  }
  else {
    lVar26 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    if (*(int *)(lVar26 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar26 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c();
    }
    unaff_x26 = (uint *)PTR_DAT_07780100;
    plVar36 = *(long **)(*(long *)(lVar26 + 0xb8) + 0x30);
    if (plVar36 == (long *)0x0) {
      lVar26 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c();
      }
      if (*(int *)(lVar26 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar26 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c();
      }
      uVar16 = **(undefined8 **)(lVar26 + 0xb8);
      uVar29 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
      func_0x0535ad68(uVar29,uVar16,
                      *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x120),0);
      lVar20 = *(long *)(*(long *)(lVar13 + 0x20) + 0xc0);
      lVar26 = *(long *)(lVar20 + 0x20);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c();
        lVar20 = *(long *)(*(long *)(lVar13 + 0x20) + 0xc0);
      }
      *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x30) = uVar29;
      lVar13 = *(long *)(lVar20 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
      }
      plVar14 = (long *)(*(long *)(lVar13 + 0xb8) + 0x30);
    }
    else {
      plVar14 = plVar36;
      uVar32 = func_0x03f372e4(auVar40._8_8_,puVar35,plVar36,*(undefined8 *)PTR_DAT_07780100);
      plVar34 = *(long **)(auVar40._0_8_ + 0x60);
      uVar15 = auVar40._0_8_;
      if (plVar34 != (long *)0x0) {
        lVar26 = *plVar34;
        uVar15 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar15 != 0) {
          piVar30 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_077800d0) {
              puVar17 = (undefined8 *)(lVar26 + (long)*piVar30 * 0x10 + 0x138);
              goto LAB_04d05124;
            }
            uVar15 = uVar15 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar15 != 0);
        }
        plVar14 = (long *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar34);
LAB_04d05124:
        uVar29 = (*(code *)*puVar17)(plVar34,puVar17[1]);
        uVar15 = uVar32;
        if (uVar32 != 0) {
          plVar14 = *(long **)PTR_DAT_077800f8;
          uVar12 = func_0x04a44654(uVar32,uVar29);
          if (puVar25 != (uint *)0x0) {
            lVar26 = *(long *)puVar25;
            uVar15 = (ulong)uVar12;
            uVar32 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar32 != 0) {
              piVar30 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_0777c248) {
                  puVar17 = (undefined8 *)(lVar26 + (long)*piVar30 * 0x10 + 0x138);
                  goto LAB_04d051a8;
                }
                uVar32 = uVar32 - 1;
                piVar30 = piVar30 + 4;
              } while (uVar32 != 0);
            }
            plVar14 = (long *)0x0;
            puVar17 = (undefined8 *)func_0x03256b10(puVar25);
LAB_04d051a8:
            lVar26 = (*(code *)*puVar17)(puVar25,puVar17[1]);
            puVar6 = PTR_DAT_077800f0;
            if (lVar26 != 0) {
              uVar29 = func_0x0414419c(lVar26,uVar12 - 1,*(undefined8 *)PTR_DAT_0777e510);
              uVar16 = *(undefined8 *)puVar6;
              *(undefined8 *)((long)puVar18 + -0x180) = 0;
              *(undefined8 *)((long)puVar18 + -0x178) = 0;
              func_0x048c959c((undefined1 *)((long)puVar18 + -0x180),uVar29,uVar12,uVar16);
              return *(long **)((long)puVar18 + -0x180);
            }
          }
        }
      }
      pcVar37 = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___BoostRequiredToolWeights;
      auVar39 = func_0x03280cac();
code_r0x04d05210:
      lVar26 = auVar39._8_8_;
      *(undefined8 *)(puVar9 + -0x60) = unaff_d8;
      *(code **)(puVar9 + -0x58) = pcVar37;
      *(uint **)(puVar9 + -0x50) = unaff_x28;
      *(undefined **)(puVar9 + -0x48) = unaff_x27;
      *(uint **)(puVar9 + -0x40) = unaff_x26;
      *(uint **)(puVar9 + -0x38) = unaff_x25;
      *(long **)(puVar9 + -0x30) = plVar36;
      *(undefined **)(puVar9 + -0x28) = puVar35;
      *(long *)(puVar9 + -0x20) = lVar13;
      *(long **)(puVar9 + -0x18) = plVar34;
      *(ulong *)(puVar9 + -0x10) = uVar15;
      *(uint **)(puVar9 + -8) = puVar25;
      uVar15 = 0x7e1a000;
      plVar34 = auVar39._0_8_;
      if ((bRam0000000007e1ae7d & 1) == 0) {
        func_0x03280a18(PTR_DAT_07780108);
        func_0x03280a18(PTR_DAT_077800b0);
        func_0x03280a18(PTR_DAT_07780110);
        plVar34 = (long *)func_0x03280a18(PTR_DAT_07780118);
        bRam0000000007e1ae7d = 1;
      }
      puVar8 = PTR_DAT_07780118;
      puVar7 = PTR_DAT_07780110;
      puVar6 = PTR_DAT_07780108;
      if (lVar26 != 0) {
        if (0 < *(int *)(lVar26 + 0x18)) {
          uVar15 = 0;
          unaff_x26 = (uint *)0x7f800000;
          unaff_x27 = (undefined *)0x80000000;
          do {
            uVar32 = func_0x041e65b8(lVar26,uVar15,*(undefined8 *)puVar7);
            puVar35 = puVar7;
            plVar36 = (long *)puVar6;
            unaff_x25 = (uint *)puVar8;
            if (plVar14 == (long *)0x0) goto LAB_04d05364;
            plVar34 = (long *)func_0x053bbf78(plVar14,uVar32 >> 0x20,*(undefined8 *)puVar6);
            if (((ulong)plVar34 & 1) != 0) {
              fVar38 = (float)func_0x04d03610(auVar39._0_8_);
              iVar11 = func_0x041e65b8(lVar26,uVar15,*(undefined8 *)puVar7);
              unaff_x28 = (uint *)(ulong)(uint)(int)(fVar38 * (float)iVar11);
              uVar32 = func_0x041e65b8(lVar26,uVar15,*(undefined8 *)puVar7);
              puVar24 = (uint *)0x80000000;
              if (fVar38 * (float)iVar11 != INFINITY) {
                puVar24 = unaff_x28;
              }
              plVar34 = (long *)func_0x041e660c(lVar26,uVar15,
                                                (ulong)puVar24 | uVar32 & 0xffffffff00000000,
                                                *(undefined8 *)puVar8);
            }
            uVar12 = (int)uVar15 + 1;
            uVar15 = (ulong)uVar12;
          } while ((int)uVar12 < *(int *)(lVar26 + 0x18));
        }
        return plVar34;
      }
LAB_04d05364:
      lVar13 = func_0x03280cac();
      puVar7 = PTR_DAT_07780128;
      puVar6 = PTR_DAT_07780120;
      *(code **)(puVar9 + -0xc0) = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T____ctor;
      *(uint **)(puVar9 + -0xb0) = unaff_x28;
      *(undefined **)(puVar9 + -0xa8) = unaff_x27;
      *(uint **)(puVar9 + -0xa0) = unaff_x26;
      *(uint **)(puVar9 + -0x98) = unaff_x25;
      *(long **)(puVar9 + -0x90) = plVar36;
      *(undefined **)(puVar9 + -0x88) = puVar35;
      *(ulong *)(puVar9 + -0x80) = uVar15;
      *(undefined1 (*) [16])(puVar9 + -0x78) = auVar39;
      *(long **)(puVar9 + -0x68) = plVar14;
      if ((bRam0000000007e1ae7e & 1) == 0) {
        func_0x03280a18(PTR_DAT_07780128);
        func_0x03280a18(PTR_DAT_0777ebb0);
        func_0x03280a18(PTR_DAT_07780138);
        func_0x03280a18(PTR_DAT_07780130);
        func_0x03280a18(PTR_DAT_0777ebc8);
        func_0x03280a18(PTR_DAT_07780120);
        func_0x03280a18(PTR_DAT_07780140);
        bRam0000000007e1ae7e = 1;
      }
      lVar26 = func_0x03280ca0(*(undefined8 *)puVar6);
      func_0x04fb4e7c(lVar26,*(undefined8 *)puVar7);
      plVar14 = (long *)(lVar13 + 0x78);
      *plVar14 = lVar26;
    }
  }
  goto SUB_032809c4;
}

