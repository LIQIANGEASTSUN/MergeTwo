/* Ghidra 12.1.2 native pseudocode; RVA 0x4C0666C; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.CalculateItemsLevelSum; status ok */


/* WARNING: Possible PIC construction at 0x04d06738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04f5c4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04f5c5d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04f5c818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04f5c5f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d06954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d606f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d607b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d6083c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d6085c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03d60fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d06c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d06dd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d06ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04a44b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d07154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d0725c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d0760c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d07630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d07654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d07678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04d07658) */
/* WARNING: Removing unreachable block (ram,0x04d07634) */
/* WARNING: Removing unreachable block (ram,0x04d07610) */
/* WARNING: Removing unreachable block (ram,0x04a44b7c) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */
/* WARNING: Removing unreachable block (ram,0x04d06c34) */
/* WARNING: Removing unreachable block (ram,0x03d60860) */
/* WARNING: Removing unreachable block (ram,0x03d60840) */
/* WARNING: Removing unreachable block (ram,0x03d607bc) */
/* WARNING: Removing unreachable block (ram,0x03d6079c) */
/* WARNING: Removing unreachable block (ram,0x03d60718) */
/* WARNING: Removing unreachable block (ram,0x03d606f8) */
/* WARNING: Removing unreachable block (ram,0x04d06958) */
/* WARNING: Removing unreachable block (ram,0x04d0695c) */
/* WARNING: Removing unreachable block (ram,0x04d06978) */
/* WARNING: Removing unreachable block (ram,0x04d06980) */
/* WARNING: Removing unreachable block (ram,0x04d069a8) */
/* WARNING: Removing unreachable block (ram,0x04d0698c) */
/* WARNING: Removing unreachable block (ram,0x04d06998) */
/* WARNING: Removing unreachable block (ram,0x04d069b4) */
/* WARNING: Removing unreachable block (ram,0x04d069c4) */
/* WARNING: Removing unreachable block (ram,0x04d069c8) */
/* WARNING: Removing unreachable block (ram,0x04d069f8) */
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
/* WARNING: Removing unreachable block (ram,0x04d0673c) */
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
/* WARNING: Removing unreachable block (ram,0x04d0767c) */

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
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long extraout_x1;
  long *extraout_x1_00;
  long extraout_x1_01;
  long lVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint uVar24;
  long lVar25;
  undefined8 uVar26;
  int *piVar27;
  uint *puVar28;
  ulong uVar29;
  uint uVar30;
  undefined8 uVar31;
  long lVar32;
  uint *unaff_x24;
  uint *unaff_x25;
  uint *unaff_x26;
  long lVar33;
  undefined *unaff_x27;
  uint *unaff_x28;
  ulong unaff_x29;
  code *pcVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  
  uVar15 = param_3;
  puVar23 = param_4;
  if ((bRam0000000007e1ae89 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780048);
    func_0x03280a18(PTR_DAT_07780050);
    func_0x03280a18(PTR_DAT_07780058);
    func_0x03280a18(PTR_DAT_07780060);
    bRam0000000007e1ae89 = 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_4 + 8) + 0xc0) + 0xa8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar13 = func_0x03280ca0();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 8) + 0xc0) + 0xb0))();
  if (lVar13 == 0) {
    func_0x03280cac();
    puVar28 = (uint *)((ulong)puVar23 & 0xffffffff);
    uVar29 = uVar15 & 0xffffffff;
    auVar36._8_8_ = uVar29;
    auVar36._0_8_ = extraout_x1;
    puVar22 = puVar23;
    if ((bRam0000000007e1ae8a & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780068);
      func_0x03280a18(PTR_DAT_07780070);
      func_0x03280a18(PTR_DAT_07780078);
      bRam0000000007e1ae8a = 1;
    }
    puVar6 = PTR_DAT_07780078;
    if (extraout_x1 != 0) {
      uVar15 = func_0x04f5b688(extraout_x1,uVar29,*(undefined8 *)PTR_DAT_07780068);
      if ((uVar15 & 1) != 0) {
        iVar10 = func_0x04f5b400(extraout_x1,uVar29,*(undefined8 *)PTR_DAT_07780070);
        puVar28 = (uint *)(ulong)(uint)(iVar10 + (int)puVar23);
      }
      pcVar34 = MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T___AddOrUpdateDictionary;
      puVar23 = (uint *)0x1;
      lVar13 = *(long *)(*(long *)(*(long *)(*(long *)puVar6 + 0x20) + 0xc0) + 0x118);
      plVar14 = (long *)0x0;
      puVar9 = &stack0xffffffffffffffb0;
      do {
        lVar32 = auVar36._0_8_;
        *(ulong *)(puVar9 + -0x60) = unaff_x29;
        *(code **)(puVar9 + -0x58) = pcVar34;
        *(uint **)(puVar9 + -0x50) = unaff_x28;
        *(undefined **)(puVar9 + -0x48) = unaff_x27;
        *(uint **)(puVar9 + -0x40) = unaff_x26;
        *(uint **)(puVar9 + -0x38) = unaff_x25;
        *(uint **)(puVar9 + -0x30) = unaff_x24;
        *(long **)(puVar9 + -0x28) = plVar14;
        *(long **)(puVar9 + -0x20) = param_2;
        *(long *)(puVar9 + -0x18) = param_1;
        *(ulong *)(puVar9 + -0x10) = param_3;
        *(uint **)(puVar9 + -8) = param_4;
        *(int *)(puVar9 + -100) = auVar36._8_4_;
        uVar15 = auVar36._8_8_ & 0xffffffff;
        *(int *)(lVar32 + 0x2c) = *(int *)(lVar32 + 0x2c) + 1;
        puVar22 = puVar28;
        if (*(long *)(lVar32 + 0x10) == 0) {
          puVar22 = *(uint **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x10);
          func_0x04f5bdb8(lVar32,0);
        }
        plVar14 = *(long **)(lVar32 + 0x30);
        lVar33 = *(long *)(lVar32 + 0x18);
        if (plVar14 == (long *)0x0) {
          uVar12 = func_0x05793b44(puVar9 + -100,0);
        }
        else {
          lVar20 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
            lVar20 = func_0x0325681c(lVar20);
          }
          lVar25 = *plVar14;
          uVar29 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar29 != 0) {
            piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == lVar20) {
                puVar16 = (undefined8 *)(lVar25 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                goto LAB_04f5bf80;
              }
              uVar29 = uVar29 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar29 != 0);
          }
          puVar16 = (undefined8 *)func_0x03256b10(plVar14,lVar20,1);
LAB_04f5bf80:
          puVar22 = (uint *)puVar16[1];
          uVar12 = (*(code *)*puVar16)(plVar14,uVar15);
        }
        lVar20 = *(long *)(lVar32 + 0x10);
        unaff_x25 = puVar23;
        if (lVar20 == 0) goto LAB_04f5c2d4;
        uVar30 = *(uint *)(lVar20 + 0x18);
        uVar12 = uVar12 & 0x7fffffff;
        unaff_x27 = (undefined *)(ulong)uVar12;
        iVar10 = 0;
        if (uVar30 != 0) {
          iVar10 = (int)uVar12 / (int)uVar30;
        }
        uVar24 = uVar12 - iVar10 * uVar30;
        if (uVar30 <= uVar24) goto LAB_04f5c2d0;
        unaff_x28 = (uint *)(lVar20 + (ulong)uVar24 * 4 + 0x20);
        uVar30 = *unaff_x28 - 1;
        uVar15 = (ulong)uVar30;
        iVar10 = (int)puVar23;
        if (plVar14 == (long *)0x0) {
          if (lVar33 != 0) {
            uVar26 = *(undefined8 *)(lVar33 + 0x18);
            uVar24 = (uint)uVar26;
            if (uVar30 < uVar24) {
              param_2 = (long *)0x0;
              do {
                uVar30 = (uint)uVar26;
                uVar24 = (uint)uVar15;
                plVar14 = (long *)(long)(int)uVar24;
                if (*(uint *)(lVar33 + (long)(int)uVar24 * 0x10 + 0x20) == uVar12) {
                  plVar18 = (long *)func_0x03c56c24(*(undefined8 *)
                                                     (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                     0x18));
                  if (*(uint *)(lVar33 + 0x18) <= uVar24) goto LAB_04f5c2d0;
                  if (plVar18 == (long *)0x0) goto LAB_04f5c2d4;
                  puVar22 = (uint *)(ulong)*(uint *)(puVar9 + -100);
                  uVar29 = (**(code **)(*plVar18 + 0x1b8))
                                     (plVar18,*(undefined4 *)(lVar33 + (long)plVar14 * 0x10 + 0x28),
                                      puVar22,*(undefined8 *)(*plVar18 + 0x1c0));
                  if ((uVar29 & 1) != 0) {
                    if (iVar10 == 2) {
                      puVar21 = puVar9 + -0x68;
                      *(undefined4 *)(puVar9 + -0x68) = *(undefined4 *)(puVar9 + -100);
LAB_04f5c2b0:
                      uVar26 = func_0x03280b94(*(undefined8 *)
                                                (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70),
                                               puVar21);
                      func_0x057b8580(uVar26,0);
                      return (long *)0x0;
                    }
                    if (iVar10 != 1) {
                      return (long *)0x0;
                    }
                    plVar18 = plVar14;
                    if (uVar24 < *(uint *)(lVar33 + 0x18)) {
LAB_04f5c28c:
                      *(int *)(lVar33 + (long)plVar18 * 0x10 + 0x2c) = (int)puVar28;
                      return (long *)0x1;
                    }
                    goto LAB_04f5c2d0;
                  }
                  uVar30 = *(uint *)(lVar33 + 0x18);
                }
                if (uVar30 <= uVar24) goto LAB_04f5c2d0;
                uVar2 = *(uint *)(lVar33 + (long)plVar14 * 0x10 + 0x24);
                uVar15 = (ulong)uVar2;
                if ((int)uVar30 <= (int)param_2) {
                  func_0x057b8684(0);
                }
                uVar26 = *(undefined8 *)(lVar33 + 0x18);
                param_2 = (long *)(ulong)((int)param_2 + 1);
                uVar24 = (uint)uVar26;
              } while (uVar2 < uVar24);
            }
LAB_04f5c148:
            if (*(int *)(lVar32 + 0x28) < 1) {
              uVar30 = *(uint *)(lVar32 + 0x20);
              param_2 = (long *)(ulong)uVar30;
              unaff_x25 = puVar23;
              if (uVar30 == uVar24) {
                func_0x04f5c670(lVar32,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x1b8));
                lVar20 = *(long *)(lVar32 + 0x10);
                *(uint *)(lVar32 + 0x20) = uVar30 + 1;
                if (lVar20 == 0) goto LAB_04f5c2d4;
                uVar24 = *(uint *)(lVar20 + 0x18);
                iVar10 = 0;
                if (uVar24 != 0) {
                  iVar10 = (int)uVar12 / (int)uVar24;
                }
                uVar2 = uVar12 - iVar10 * uVar24;
                if (uVar24 <= uVar2) goto LAB_04f5c2d0;
                lVar33 = *(long *)(lVar32 + 0x18);
                unaff_x28 = (uint *)(lVar20 + (ulong)uVar2 * 4 + 0x20);
              }
              else {
                lVar33 = *(long *)(lVar32 + 0x18);
                *(uint *)(lVar32 + 0x20) = uVar30 + 1;
              }
              if (lVar33 == 0) goto LAB_04f5c2d4;
              if (uVar30 < *(uint *)(lVar33 + 0x18)) {
                lVar13 = (long)(int)uVar30;
LAB_04f5c1f4:
                lVar33 = lVar33 + lVar13 * 0x10;
                *(uint *)(lVar33 + 0x20) = uVar12;
                *(uint *)(lVar33 + 0x24) = *unaff_x28 - 1;
                *(undefined4 *)(lVar33 + 0x28) = *(undefined4 *)(puVar9 + -100);
                *(int *)(lVar33 + 0x2c) = (int)puVar28;
                *unaff_x28 = uVar30 + 1;
                return (long *)0x1;
              }
            }
            else {
              *(int *)(lVar32 + 0x28) = *(int *)(lVar32 + 0x28) + -1;
              uVar30 = *(uint *)(lVar32 + 0x24);
              param_2 = (long *)(ulong)uVar30;
              if (uVar30 < *(uint *)(lVar33 + 0x18)) {
                lVar13 = (long)(int)uVar30;
                *(undefined4 *)(lVar32 + 0x24) = *(undefined4 *)(lVar33 + lVar13 * 0x10 + 0x24);
                goto LAB_04f5c1f4;
              }
            }
LAB_04f5c2d0:
            func_0x03280cb4();
            unaff_x25 = puVar23;
          }
        }
        else if (lVar33 != 0) {
          uVar26 = *(undefined8 *)(lVar33 + 0x18);
          uVar24 = (uint)uVar26;
          if (uVar30 < uVar24) {
            unaff_x29 = 0;
            *(int *)(puVar9 + -0x70) = iVar10;
            do {
              uVar30 = (uint)uVar26;
              uVar24 = (uint)uVar15;
              param_2 = (long *)(long)(int)uVar24;
              if (*(uint *)(lVar33 + (long)(int)uVar24 * 0x10 + 0x20) == uVar12) {
                puVar23 = (uint *)(ulong)*(uint *)(puVar9 + -100);
                lVar20 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 8);
                uVar15 = (ulong)*(uint *)(lVar33 + (long)param_2 * 0x10 + 0x28);
                if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
                  lVar20 = func_0x0325681c(lVar20);
                }
                lVar25 = *plVar14;
                uVar29 = (ulong)*(ushort *)(lVar25 + 0x12e);
                if (uVar29 != 0) {
                  piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar20) {
                      puVar16 = (undefined8 *)(lVar25 + (long)*piVar27 * 0x10 + 0x138);
                      goto LAB_04f5c060;
                    }
                    uVar29 = uVar29 - 1;
                    piVar27 = piVar27 + 4;
                  } while (uVar29 != 0);
                }
                puVar16 = (undefined8 *)func_0x03256b10(plVar14,lVar20,0);
LAB_04f5c060:
                puVar22 = puVar23;
                uVar29 = (*(code *)*puVar16)(plVar14,uVar15,puVar23,puVar16[1]);
                if ((uVar29 & 1) != 0) {
                  if ((*(uint *)(puVar9 + -0x70) & 0xff) == 2) {
                    puVar21 = puVar9 + -0x6c;
                    *(undefined4 *)(puVar9 + -0x6c) = *(undefined4 *)(puVar9 + -100);
                    goto LAB_04f5c2b0;
                  }
                  if ((*(uint *)(puVar9 + -0x70) & 0xff) != 1) {
                    return (long *)0x0;
                  }
                  plVar18 = param_2;
                  if (*(uint *)(lVar33 + 0x18) <= uVar24) goto LAB_04f5c2d0;
                  goto LAB_04f5c28c;
                }
                uVar30 = *(uint *)(lVar33 + 0x18);
              }
              if (uVar30 <= uVar24) goto LAB_04f5c2d0;
              uVar2 = *(uint *)(lVar33 + (long)param_2 * 0x10 + 0x24);
              uVar15 = (ulong)uVar2;
              if ((int)uVar30 <= (int)unaff_x29) {
                func_0x057b8684(0);
              }
              uVar26 = *(undefined8 *)(lVar33 + 0x18);
              unaff_x29 = (ulong)((int)unaff_x29 + 1);
              uVar24 = (uint)uVar26;
            } while (uVar2 < uVar24);
          }
          goto LAB_04f5c148;
        }
LAB_04f5c2d4:
        lVar20 = func_0x03280cac();
        unaff_x26 = (uint *)PTR_DAT_07781380;
        *(undefined8 *)(puVar9 + -0xc0) = 0x4f5c2d8;
        *(undefined **)(puVar9 + -0xb8) = unaff_x27;
        *(long *)(puVar9 + -0xb0) = lVar33;
        *(uint **)(puVar9 + -0xa8) = unaff_x25;
        *(ulong *)(puVar9 + -0xa0) = uVar15;
        *(long **)(puVar9 + -0x98) = plVar14;
        *(long **)(puVar9 + -0x90) = param_2;
        *(long *)(puVar9 + -0x88) = lVar13;
        *(long *)(puVar9 + -0x80) = lVar32;
        *(ulong *)(puVar9 + -0x78) = (ulong)puVar28 & 0xffffffff;
        uVar29 = 0x7e1b000;
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
        *(undefined8 *)(puVar9 + -200) = 0;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar13 = func_0x057624fc(0);
        if (lVar13 != 0) {
          func_0x04e91150(lVar13,lVar20,puVar9 + -200,*(undefined8 *)PTR_DAT_07781618);
          if (*(long *)(puVar9 + -200) == 0) {
            return (long *)0x0;
          }
          uVar17 = func_0x056933d8(*(long *)(puVar9 + -200),*(undefined8 *)PTR_DAT_0775b648,0);
          puVar6 = PTR_DAT_0774e558;
          if (*(long *)(puVar9 + -200) != 0) {
            uVar29 = uVar17 & 0xffffffff;
            uVar15 = func_0x056933d8(*(long *)(puVar9 + -200),*(undefined8 *)PTR_DAT_07781600,0);
            lVar13 = *(long *)puVar6;
            lVar32 = *(long *)(puVar9 + -200);
            param_2 = (long *)(uVar15 & 0xffffffff);
            uVar15 = *(ulong *)(*(long *)(*(long *)(puVar22 + 8) + 0xc0) + 0x170);
            if (*(int *)(lVar13 + 0xe0) == 0) {
              func_0x03280b8c(lVar13);
            }
            uVar26 = func_0x057a51c4(uVar15,0);
            plVar14 = (long *)0x0;
            unaff_x27 = puVar6;
            if (lVar32 != 0) {
              lVar13 = func_0x05690f88(lVar32,*(undefined8 *)PTR_DAT_0777e440,uVar26,0);
              lVar32 = *(long *)(*(long *)(*(long *)(puVar22 + 8) + 0xc0) + 8);
              if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
                lVar32 = func_0x0325681c(lVar32);
              }
              if (lVar13 == 0) {
LAB_04f5c48c:
                lVar33 = 0;
              }
              else {
                lVar33 = func_0x03280b90(lVar13,lVar32);
                if (lVar33 == 0) {
                  func_0x03281048(lVar13,lVar32);
                  goto LAB_04f5c48c;
                }
              }
              plVar14 = (long *)(lVar20 + 0x30);
              *plVar14 = lVar33;
              lVar32 = *(long *)(*(long *)(*(long *)(puVar22 + 8) + 0xc0) + 8);
              if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
                lVar32 = func_0x0325681c(lVar32);
              }
              if ((lVar13 != 0) && (lVar33 = func_0x03280b90(lVar13,lVar32), lVar33 == 0)) {
                func_0x03281048(lVar13,lVar32);
              }
              goto SUB_032809c4;
            }
          }
        }
        func_0x03280cac();
        func_0x057b819c(0x10,0);
        func_0x03280cac();
        auVar36 = func_0x03281048(uVar15,plVar14);
        puVar6 = PTR_DAT_07781380;
        lVar13 = auVar36._0_8_;
        *(undefined8 *)(puVar9 + -0x100) = 0x4f5c670;
        *(long **)(puVar9 + -0xf0) = param_2;
        *(ulong *)(puVar9 + -0xe8) = uVar29;
        *(uint **)(puVar9 + -0xe0) = puVar22;
        *(long *)(puVar9 + -0xd8) = lVar20;
        if ((bRam0000000007e1b778 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07781380);
          bRam0000000007e1b778 = 1;
        }
        uVar3 = *(undefined4 *)(lVar13 + 0x20);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar12 = func_0x05762478(uVar3,0);
        puVar6 = PTR_DAT_07754420;
        uVar29 = (ulong)uVar12;
        lVar32 = *(long *)(*(long *)(*(long *)(auVar36._8_8_ + 0x20) + 0xc0) + 0x1c8);
        *(undefined8 *)(puVar9 + -0x110) = *(undefined8 *)(puVar9 + -0x100);
        *(ulong *)(puVar9 + -0x100) = uVar15;
        *(long **)(puVar9 + -0xf8) = plVar14;
        *(undefined8 *)(puVar9 + -0xf0) = *(undefined8 *)(puVar9 + -0xf0);
        *(undefined8 *)(puVar9 + -0xe8) = *(undefined8 *)(puVar9 + -0xe8);
        *(undefined8 *)(puVar9 + -0xe0) = *(undefined8 *)(puVar9 + -0xe0);
        *(undefined8 *)(puVar9 + -0xd8) = *(undefined8 *)(puVar9 + -0xd8);
        if ((bRam0000000007e1b779 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07754420,uVar29,0);
          bRam0000000007e1b779 = 1;
        }
        plVar18 = (long *)func_0x03280afc(*(undefined8 *)puVar6,uVar29);
        lVar32 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x1b0);
        if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
          lVar32 = func_0x0325681c(lVar32);
        }
        puVar23 = (uint *)func_0x03280afc(lVar32,uVar29);
        uVar30 = *(uint *)(lVar13 + 0x20);
        unaff_x24 = (uint *)(ulong)uVar30;
        param_1 = 0;
        puVar22 = puVar23;
        func_0x057b9f30(*(undefined8 *)(lVar13 + 0x18),0,puVar23,0,unaff_x24,0);
        if ((int)uVar30 < 1) {
LAB_04f5c80c:
          plVar14 = (long *)(lVar13 + 0x10);
          *plVar14 = (long)plVar18;
          goto SUB_032809c4;
        }
        if (puVar23 != (uint *)0x0) {
          uVar30 = puVar23[6];
          puVar28 = (uint *)0x0;
          while (puVar28 < (uint *)(ulong)uVar30) {
            uVar24 = puVar23[(long)puVar28 * 4 + 8];
            if (-1 < (int)uVar24) {
              if (plVar18 == (long *)0x0) goto LAB_04f5c840;
              iVar10 = 0;
              if (uVar12 != 0) {
                iVar10 = (int)uVar24 / (int)uVar12;
              }
              uVar24 = uVar24 - iVar10 * uVar12;
              if (*(uint *)(plVar18 + 3) <= uVar24) break;
              puVar23[(long)puVar28 * 4 + 9] =
                   *(int *)((long)plVar18 + (ulong)uVar24 * 4 + 0x20) - 1;
              *(int *)((long)plVar18 + (ulong)uVar24 * 4 + 0x20) = (int)puVar28 + 1;
            }
            puVar28 = (uint *)((long)puVar28 + 1);
            if (puVar28 == unaff_x24) goto LAB_04f5c80c;
          }
          func_0x03280cb4();
        }
LAB_04f5c840:
        auVar37 = func_0x03280cac();
        lVar32 = auVar37._0_8_;
        *(ulong *)(puVar9 + -0x170) = unaff_x29;
        *(undefined8 *)(puVar9 + -0x168) = 0x4f5c844;
        *(uint **)(puVar9 + -0x160) = unaff_x28;
        *(undefined **)(puVar9 + -0x158) = unaff_x27;
        *(uint **)(puVar9 + -0x150) = unaff_x26;
        *(uint **)(puVar9 + -0x148) = unaff_x25;
        *(uint **)(puVar9 + -0x140) = unaff_x24;
        *(uint **)(puVar9 + -0x138) = puVar23;
        *(undefined8 **)(puVar9 + -0x130) = (undefined8 *)(lVar13 + 0x18);
        *(long **)(puVar9 + -0x128) = plVar18;
        *(ulong *)(puVar9 + -0x120) = uVar29;
        *(long *)(puVar9 + -0x118) = lVar13;
        *(uint *)(puVar9 + -0x174) = auVar37._8_4_;
        if (*(long *)(lVar32 + 0x10) == 0) {
          return (long *)0x0;
        }
        param_2 = *(long **)(lVar32 + 0x30);
        if (param_2 == (long *)0x0) {
          param_4 = puVar22;
          uVar12 = func_0x05793b44(puVar9 + -0x174,0);
        }
        else {
          plVar18 = (long *)(ulong)auVar37._8_4_;
          lVar13 = *(long *)(*(long *)(*(long *)(puVar22 + 8) + 0xc0) + 8);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c(lVar13);
          }
          lVar33 = *param_2;
          uVar15 = (ulong)*(ushort *)(lVar33 + 0x12e);
          if (uVar15 != 0) {
            piVar27 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == lVar13) {
                puVar16 = (undefined8 *)(lVar33 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                goto LAB_04f5c8fc;
              }
              uVar15 = uVar15 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar15 != 0);
          }
          puVar16 = (undefined8 *)func_0x03256b10(param_2,lVar13,1);
LAB_04f5c8fc:
          param_4 = (uint *)puVar16[1];
          uVar12 = (*(code *)*puVar16)(param_2,plVar18);
        }
        lVar13 = *(long *)(lVar32 + 0x10);
        if (lVar13 == 0) {
LAB_04f5cb14:
          func_0x03280cac();
        }
        else {
          uVar30 = *(uint *)(lVar13 + 0x18);
          uVar12 = uVar12 & 0x7fffffff;
          unaff_x27 = (undefined *)(ulong)uVar12;
          iVar10 = 0;
          if (uVar30 != 0) {
            iVar10 = (int)uVar12 / (int)uVar30;
          }
          uVar24 = uVar12 - iVar10 * uVar30;
          if (uVar24 < uVar30) {
            uVar30 = *(int *)(lVar13 + (ulong)uVar24 * 4 + 0x20) - 1;
            if ((int)uVar30 < 0) {
              return (long *)0x0;
            }
            plVar14 = (long *)0x0;
            unaff_x29 = 0xffffffff;
            *(ulong *)(puVar9 + -0x180) = (ulong)uVar24;
            while( true ) {
              unaff_x24 = (uint *)(ulong)uVar30;
              unaff_x26 = *(uint **)(lVar32 + 0x18);
              param_2 = plVar14;
              if (unaff_x26 == (uint *)0x0) break;
              if (unaff_x26[6] <= uVar30) goto LAB_04f5cb18;
              unaff_x25 = unaff_x26 + (ulong)uVar30 * 4 + 8;
              unaff_x28 = unaff_x24;
              if (*unaff_x25 == uVar12) {
                plVar18 = *(long **)(lVar32 + 0x30);
                if (plVar18 == (long *)0x0) {
                  plVar19 = (long *)func_0x03c56c24(*(undefined8 *)
                                                     (*(long *)(*(long *)(puVar22 + 8) + 0xc0) +
                                                     0x18));
                  plVar18 = plVar14;
                  if (plVar19 == (long *)0x0) break;
                  param_4 = (uint *)(ulong)*(uint *)(puVar9 + -0x174);
                  param_1 = *(long *)(*plVar19 + 0x1c0);
                  uVar15 = (**(code **)(*plVar19 + 0x1b8))
                                     (plVar19,unaff_x26[(long)unaff_x24 * 4 + 10]);
                }
                else {
                  if (plVar18 == (long *)0x0) break;
                  puVar23 = (uint *)(ulong)*(uint *)(puVar9 + -0x174);
                  lVar13 = *(long *)(*(long *)(*(long *)(puVar22 + 8) + 0xc0) + 8);
                  uVar24 = unaff_x26[(long)unaff_x24 * 4 + 10];
                  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                    lVar13 = func_0x0325681c(lVar13);
                  }
                  lVar33 = *plVar18;
                  uVar15 = (ulong)*(ushort *)(lVar33 + 0x12e);
                  if (uVar15 != 0) {
                    piVar27 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar13) {
                        puVar16 = (undefined8 *)(lVar33 + (long)*piVar27 * 0x10 + 0x138);
                        goto LAB_04f5ca38;
                      }
                      uVar15 = uVar15 - 1;
                      piVar27 = piVar27 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar16 = (undefined8 *)func_0x03256b10(plVar18,lVar13,0);
LAB_04f5ca38:
                  param_1 = puVar16[1];
                  param_4 = puVar23;
                  uVar15 = (*(code *)*puVar16)(plVar18,(long *)(ulong)uVar24);
                  plVar14 = plVar18;
                  param_2 = (long *)(ulong)uVar24;
                }
                if ((uVar15 & 1) != 0) {
                  plVar18 = plVar14;
                  if ((int)(uint)unaff_x29 < 0) {
                    lVar13 = *(long *)(lVar32 + 0x10);
                    if (lVar13 == 0) break;
                    if (*(uint *)(lVar13 + 0x18) <= (uint)*(long *)(puVar9 + -0x180))
                    goto LAB_04f5cb18;
                    *(uint *)(lVar13 + *(long *)(puVar9 + -0x180) * 4 + 0x20) =
                         unaff_x26[(long)unaff_x24 * 4 + 9] + 1;
                  }
                  else {
                    lVar13 = *(long *)(lVar32 + 0x18);
                    if (lVar13 == 0) break;
                    if (*(uint *)(lVar13 + 0x18) <= (uint)unaff_x29) goto LAB_04f5cb18;
                    *(uint *)(lVar13 + unaff_x29 * 0x10 + 0x24) = unaff_x26[(long)unaff_x24 * 4 + 9]
                    ;
                  }
                  *unaff_x25 = 0xffffffff;
                  unaff_x26[(long)unaff_x24 * 4 + 9] = *(uint *)(lVar32 + 0x24);
                  *(uint *)(lVar32 + 0x24) = uVar30;
                  *(ulong *)(lVar32 + 0x28) =
                       CONCAT44((int)((ulong)*(undefined8 *)(lVar32 + 0x28) >> 0x20) + 1,
                                (int)*(undefined8 *)(lVar32 + 0x28) + 1);
                  return (long *)0x1;
                }
              }
              unaff_x29 = (ulong)uVar30;
              plVar18 = plVar14;
              uVar30 = unaff_x26[(long)unaff_x24 * 4 + 9];
              if ((int)unaff_x26[(long)unaff_x24 * 4 + 9] < 0) {
                return (long *)0x0;
              }
            }
            goto LAB_04f5cb14;
          }
        }
LAB_04f5cb18:
        auVar37 = func_0x03280cb4();
        lVar13 = auVar37._0_8_;
        *(ulong *)(puVar9 + -0x1e0) = unaff_x29;
        *(undefined8 *)(puVar9 + -0x1d8) = 0x4f5cb1c;
        *(uint **)(puVar9 + -0x1d0) = unaff_x28;
        *(undefined **)(puVar9 + -0x1c8) = unaff_x27;
        *(uint **)(puVar9 + -0x1c0) = unaff_x26;
        *(uint **)(puVar9 + -0x1b8) = unaff_x25;
        *(uint **)(puVar9 + -0x1b0) = unaff_x24;
        *(uint **)(puVar9 + -0x1a8) = puVar23;
        *(long **)(puVar9 + -0x1a0) = param_2;
        *(long **)(puVar9 + -0x198) = plVar18;
        *(uint **)(puVar9 + -400) = puVar22;
        *(long *)(puVar9 + -0x188) = lVar32;
        *(uint *)(puVar9 + -0x1e4) = auVar37._8_4_;
        lVar32 = *(long *)(lVar13 + 0x10);
        *(uint **)(puVar9 + -0x1f0) = param_4;
        if (lVar32 == 0) {
LAB_04f5cd44:
          **(undefined4 **)(puVar9 + -0x1f0) = 0;
          return (long *)0x0;
        }
        plVar14 = *(long **)(lVar13 + 0x30);
        lVar32 = param_1;
        if (plVar14 == (long *)0x0) {
          uVar12 = func_0x05793b44(puVar9 + -0x1e4,0);
        }
        else {
          param_2 = (long *)(ulong)auVar37._8_4_;
          lVar33 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
            lVar33 = func_0x0325681c(lVar33);
          }
          lVar20 = *plVar14;
          uVar15 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar15 != 0) {
            piVar27 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == lVar33) {
                puVar16 = (undefined8 *)(lVar20 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                goto LAB_04f5cbd8;
              }
              uVar15 = uVar15 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar15 != 0);
          }
          puVar16 = (undefined8 *)func_0x03256b10(plVar14,lVar33,1);
LAB_04f5cbd8:
          param_4 = (uint *)puVar16[1];
          uVar12 = (*(code *)*puVar16)(plVar14,param_2);
        }
        lVar33 = *(long *)(lVar13 + 0x10);
        if (lVar33 == 0) {
LAB_04f5ce04:
          func_0x03280cac();
        }
        else {
          uVar30 = *(uint *)(lVar33 + 0x18);
          uVar12 = uVar12 & 0x7fffffff;
          unaff_x28 = (uint *)(ulong)uVar12;
          iVar10 = 0;
          if (uVar30 != 0) {
            iVar10 = (int)uVar12 / (int)uVar30;
          }
          uVar24 = uVar12 - iVar10 * uVar30;
          if (uVar24 < uVar30) {
            iVar10 = *(int *)(lVar33 + (ulong)uVar24 * 4 + 0x20);
            *(ulong *)(puVar9 + -0x1f8) = (ulong)uVar24;
            uVar30 = iVar10 - 1;
            if ((int)uVar30 < 0) goto LAB_04f5cd44;
            plVar18 = (long *)0x0;
            unaff_x29 = 0xffffffff;
            while( true ) {
              unaff_x25 = (uint *)(ulong)uVar30;
              unaff_x27 = *(undefined **)(lVar13 + 0x18);
              plVar14 = plVar18;
              if (unaff_x27 == (undefined *)0x0) break;
              if (*(uint *)(unaff_x27 + 0x18) <= uVar30) goto LAB_04f5ce08;
              puVar22 = (uint *)(unaff_x27 + (ulong)uVar30 * 0x10 + 0x20);
              unaff_x26 = unaff_x25;
              if (*puVar22 == uVar12) {
                param_2 = *(long **)(lVar13 + 0x30);
                if (param_2 == (long *)0x0) {
                  plVar19 = (long *)func_0x03c56c24(*(undefined8 *)
                                                     (*(long *)(*(long *)(param_1 + 0x20) + 0xc0) +
                                                     0x18));
                  param_2 = plVar18;
                  if (plVar19 == (long *)0x0) break;
                  param_4 = (uint *)(ulong)*(uint *)(puVar9 + -0x1e4);
                  lVar32 = *(long *)(*plVar19 + 0x1c0);
                  uVar15 = (**(code **)(*plVar19 + 0x1b8))
                                     (plVar19,*(undefined4 *)
                                               (unaff_x27 + (long)unaff_x25 * 0x10 + 0x28));
                }
                else {
                  if (param_2 == (long *)0x0) break;
                  unaff_x24 = (uint *)(ulong)*(uint *)(puVar9 + -0x1e4);
                  lVar32 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + 8);
                  uVar24 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x28);
                  if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
                    lVar32 = func_0x0325681c(lVar32);
                  }
                  lVar33 = *param_2;
                  uVar15 = (ulong)*(ushort *)(lVar33 + 0x12e);
                  if (uVar15 != 0) {
                    piVar27 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar32) {
                        puVar16 = (undefined8 *)(lVar33 + (long)*piVar27 * 0x10 + 0x138);
                        goto LAB_04f5cd14;
                      }
                      uVar15 = uVar15 - 1;
                      piVar27 = piVar27 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar16 = (undefined8 *)func_0x03256b10(param_2,lVar32,0);
LAB_04f5cd14:
                  lVar32 = puVar16[1];
                  param_4 = unaff_x24;
                  uVar15 = (*(code *)*puVar16)(param_2,(long *)(ulong)uVar24);
                  plVar18 = param_2;
                  plVar14 = (long *)(ulong)uVar24;
                }
                if ((uVar15 & 1) != 0) {
                  param_2 = plVar18;
                  if ((int)(uint)unaff_x29 < 0) {
                    lVar33 = *(long *)(lVar13 + 0x10);
                    if (lVar33 == 0) break;
                    if (*(uint *)(lVar33 + 0x18) <= (uint)*(long *)(puVar9 + -0x1f8))
                    goto LAB_04f5ce08;
                    *(int *)(lVar33 + *(long *)(puVar9 + -0x1f8) * 4 + 0x20) =
                         *(int *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24) + 1;
                  }
                  else {
                    lVar33 = *(long *)(lVar13 + 0x18);
                    if (lVar33 == 0) break;
                    if (*(uint *)(lVar33 + 0x18) <= (uint)unaff_x29) goto LAB_04f5ce08;
                    *(undefined4 *)(lVar33 + unaff_x29 * 0x10 + 0x24) =
                         *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24);
                  }
                  **(undefined4 **)(puVar9 + -0x1f0) =
                       *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x2c);
                  *puVar22 = 0xffffffff;
                  *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24) =
                       *(undefined4 *)(lVar13 + 0x24);
                  *(uint *)(lVar13 + 0x24) = uVar30;
                  *(ulong *)(lVar13 + 0x28) =
                       CONCAT44((int)((ulong)*(undefined8 *)(lVar13 + 0x28) >> 0x20) + 1,
                                (int)*(undefined8 *)(lVar13 + 0x28) + 1);
                  return (long *)0x1;
                }
              }
              unaff_x29 = (ulong)uVar30;
              param_2 = plVar18;
              uVar30 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24);
              if ((int)*(uint *)(unaff_x27 + (long)unaff_x25 * 0x10 + 0x24) < 0) goto LAB_04f5cd44;
            }
            goto LAB_04f5ce04;
          }
        }
LAB_04f5ce08:
        param_3 = func_0x03280cb4();
        *(undefined8 *)(puVar9 + -0x220) = 0x4f5ce0c;
        *(uint **)(puVar9 + -0x210) = puVar22;
        *(long *)(puVar9 + -0x208) = lVar13;
        puVar28 = *(uint **)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x110);
        uVar12 = func_0x04f5baf4();
        if ((int)uVar12 < 0) {
          *param_4 = 0;
          goto LAB_04f5ce58;
        }
        lVar13 = *(long *)(param_3 + 0x18);
        if (lVar13 == 0) {
          func_0x03280cac();
        }
        else if (uVar12 < *(uint *)(lVar13 + 0x18)) {
          *param_4 = *(uint *)(lVar13 + (ulong)uVar12 * 0x10 + 0x2c);
LAB_04f5ce58:
          return (long *)(ulong)(~uVar12 >> 0x1f);
        }
        pcVar34 = (code *)0x4f5ce74;
        auVar36 = func_0x03280cb4();
        puVar23 = (uint *)0x0;
        lVar13 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x118);
        puVar9 = puVar9 + -0x220;
      } while( true );
    }
    lVar13 = func_0x03280cac();
    uVar29 = param_5;
    if ((bRam0000000007e1ae8b & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777c258);
      func_0x03280a18(PTR_DAT_07780080);
      func_0x03280a18(PTR_DAT_07780088);
      func_0x03280a18(PTR_DAT_07780090);
      func_0x03280a18(PTR_DAT_0777c248);
      func_0x03280a18(PTR_DAT_0777e508);
      bRam0000000007e1ae8b = 1;
    }
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 200) + 0x135) & 1) == 0)
    {
      func_0x0325681c();
    }
    lVar32 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xd0))();
    if (lVar32 == 0) {
      auVar36 = func_0x03280cac();
      lVar13 = auVar36._0_8_;
      uVar17 = uVar15;
      if ((bRam0000000007e1ae8c & 1) == 0) {
        func_0x03280a18(PTR_DAT_07780098);
        bRam0000000007e1ae8c = 1;
      }
      if (*(long *)(lVar13 + 0x68) != 0) {
        lVar32 = *(long *)(lVar13 + 0x90);
        uVar26 = func_0x0644eae4(*(long *)(lVar13 + 0x68),0);
        if (lVar32 != 0) {
          plVar14 = (long *)func_0x06897e70(lVar32,uVar26,uVar15,0);
          if ((plVar14 != (long *)0x0) && (0 < (int)plVar14[4])) {
                    /* WARNING: Could not recover jumptable at 0x04d06b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar14 = (long *)(*(code *)**(undefined8 **)
                                          (*(long *)(*(long *)(puVar22 + 8) + 0xc0) + 0xe0))
                                        (lVar13,auVar36._8_8_,plVar14);
            return plVar14;
          }
          return plVar14;
        }
      }
      func_0x03280cac();
      puVar7 = PTR_DAT_077800a8;
      puVar6 = PTR_DAT_077800a0;
      if ((bRam0000000007e1ae8d & 1) == 0) {
        func_0x03280a18(PTR_DAT_077800a8);
        func_0x03280a18(PTR_DAT_077800a0);
        func_0x03280a18(PTR_DAT_077800b0);
        bRam0000000007e1ae8d = 1;
      }
      lVar13 = *(long *)puVar6;
      uVar26 = func_0x03d87b94(extraout_x1_00,uVar17);
      plVar14 = (long *)func_0x03d601c0(uVar26,*(undefined8 *)puVar7);
      if (plVar14 != (long *)0x0) {
        plVar18 = extraout_x1_00;
        if ((int)plVar14[3] != 0) {
          plVar18 = plVar14;
        }
        return plVar18;
      }
      func_0x03280cac();
      lVar32 = lVar13;
      if ((bRam0000000007e1ae8e & 1) == 0) {
        func_0x03280a18(PTR_DAT_077800b8);
        bRam0000000007e1ae8e = 1;
      }
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0xe8) + 0x135) & 1) == 0
         ) {
        func_0x0325681c();
      }
      lVar33 = func_0x03280ca0();
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0xf0))();
      if (lVar33 == 0) {
        auVar36 = func_0x03280cac();
        if ((bRam0000000007e1ae8f & 1) == 0) {
          func_0x03280a18(PTR_DAT_077800c0);
          func_0x03280a18(PTR_DAT_077800c8);
          func_0x03280a18(PTR_DAT_077800d0);
          func_0x03280a18(PTR_DAT_077800d8);
          func_0x03280a18(PTR_DAT_077800e0);
          bRam0000000007e1ae8f = 1;
        }
        lVar13 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c();
        }
        if (*(int *)(lVar13 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar13 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c();
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
        if (lVar13 == 0) {
          lVar13 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
          }
          if (*(int *)(lVar13 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar13 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
          }
          uVar31 = **(undefined8 **)(lVar13 + 0xb8);
          uVar26 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c0);
          func_0x0535ab4c(uVar26,uVar31,
                          *(undefined8 *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x100),0);
          lVar33 = *(long *)(*(long *)(lVar32 + 0x20) + 0xc0);
          lVar13 = *(long *)(lVar33 + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
            lVar33 = *(long *)(*(long *)(lVar32 + 0x20) + 0xc0);
          }
          *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18) = uVar26;
          lVar13 = *(long *)(lVar33 + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = func_0x0325681c();
          }
          plVar14 = (long *)(*(long *)(lVar13 + 0xb8) + 0x18);
        }
        else {
          lVar33 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
            lVar33 = func_0x0325681c();
          }
          if (*(int *)(lVar33 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar33 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
            lVar33 = func_0x0325681c();
          }
          plVar14 = *(long **)(*(long *)(lVar33 + 0xb8) + 0x20);
          if (plVar14 == (long *)0x0) {
            lVar13 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
            }
            if (*(int *)(lVar13 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            lVar13 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
            }
            uVar31 = **(undefined8 **)(lVar13 + 0xb8);
            uVar26 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800c8);
            func_0x0535ac00(uVar26,uVar31,
                            *(undefined8 *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x108),0);
            lVar33 = *(long *)(*(long *)(lVar32 + 0x20) + 0xc0);
            lVar13 = *(long *)(lVar33 + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
              lVar33 = *(long *)(*(long *)(lVar32 + 0x20) + 0xc0);
            }
            *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x20) = uVar26;
            lVar13 = *(long *)(lVar33 + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
            }
            plVar14 = (long *)(*(long *)(lVar13 + 0xb8) + 0x20);
          }
          else {
            uVar15 = *(ulong *)PTR_DAT_077800e0;
            lVar13 = func_0x03f36e88(auVar36._8_8_,lVar13);
            plVar18 = *(long **)(auVar36._0_8_ + 0x60);
            if (plVar18 != (long *)0x0) {
              lVar32 = *plVar18;
              uVar17 = (ulong)*(ushort *)(lVar32 + 0x12e);
              if (uVar17 != 0) {
                piVar27 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_077800d0) {
                    puVar16 = (undefined8 *)(lVar32 + (long)*piVar27 * 0x10 + 0x138);
                    goto LAB_04d06f58;
                  }
                  uVar17 = uVar17 - 1;
                  piVar27 = piVar27 + 4;
                } while (uVar17 != 0);
              }
              plVar14 = (long *)0x0;
              puVar16 = (undefined8 *)func_0x03256b10(plVar18);
LAB_04d06f58:
              plVar18 = (long *)(*(code *)*puVar16)(plVar18,puVar16[1]);
              if (lVar13 != 0) {
                lVar33 = *(long *)PTR_DAT_077800d8;
                lVar32 = *(long *)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0xa0);
                if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
                  lVar32 = func_0x0325681c(lVar32);
                }
                lVar32 = func_0x03280ca0(lVar32);
                func_0x04c1b8d8(lVar32,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0xa8));
                if ((plVar18 != (long *)0x0) &&
                   (iVar10 = (**(code **)(*plVar18 + 0x1a8))
                                       (plVar18,*(undefined4 *)(lVar13 + 0x18),
                                        *(undefined8 *)(*plVar18 + 0x1b0)), lVar32 != 0)) {
                  *(int *)(lVar32 + 0x10) = iVar10 + 1;
                  uVar26 = *(undefined8 *)(lVar13 + 0x10);
                  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0xb8) +
                                0x135) & 1) == 0) {
                    func_0x0325681c();
                  }
                  uVar31 = func_0x03280ca0();
                  lVar13 = *(long *)(*(long *)(lVar33 + 0x20) + 0xc0);
                  func_0x05355fbc(uVar31,lVar32,*(undefined8 *)(lVar13 + 0xb0),
                                  *(undefined8 *)(lVar13 + 0xc0));
                  lVar13 = func_0x03d4294c(uVar26,uVar31,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 200));
                  if (lVar13 != 0) {
                    return (long *)(ulong)*(uint *)(lVar13 + 0x10);
                  }
                }
                auVar36 = func_0x03280cac();
                lVar13 = *(long *)(*(long *)(*(long *)(auVar36._8_8_ + 0x20) + 0xc0) + 8);
                if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                  lVar13 = func_0x0325681c(lVar13);
                }
                lVar13 = func_0x03280ca0(lVar13);
                func_0x04143c38(lVar13,*(undefined8 *)
                                        (*(long *)(*(long *)(auVar36._8_8_ + 0x20) + 0xc0) + 0xe0));
                plVar14 = (long *)(auVar36._0_8_ + 0x10);
                *plVar14 = lVar13;
                goto SUB_032809c4;
              }
            }
            auVar36 = func_0x03280cac();
            uVar26 = auVar36._8_8_;
            uStack_1f0 = 0x4d06f94;
            if ((bRam0000000007e1ae90 & 1) == 0) {
              func_0x03280a18(PTR_DAT_077800e8);
              func_0x03280a18(PTR_DAT_0777c248);
              func_0x03280a18(PTR_DAT_077800d0);
              func_0x03280a18(PTR_DAT_0777e510);
              func_0x03280a18(PTR_DAT_077800f0);
              func_0x03280a18(PTR_DAT_077800f8);
              func_0x03280a18(PTR_DAT_07780100);
              bRam0000000007e1ae90 = 1;
            }
            if ((uVar15 & 1) != 0) {
              uVar26 = (*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x110))
                                 (auVar36._0_8_,uVar26,uVar29 & 0xffffffff,plVar14);
            }
            lVar13 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
            }
            if (*(int *)(lVar13 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            lVar13 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x0325681c();
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x28);
            if (lVar13 == 0) {
              lVar13 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = func_0x0325681c();
              }
              if (*(int *)(lVar13 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              lVar13 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = func_0x0325681c();
              }
              uVar31 = **(undefined8 **)(lVar13 + 0xb8);
              uVar26 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
              func_0x0535ad68(uVar26,uVar31,
                              *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x118),0
                             );
              lVar32 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
              lVar13 = *(long *)(lVar32 + 0x20);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = func_0x0325681c();
                lVar32 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
              }
              *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x28) = uVar26;
              lVar13 = *(long *)(lVar32 + 0x20);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = func_0x0325681c();
              }
              plVar14 = (long *)(*(long *)(lVar13 + 0xb8) + 0x28);
            }
            else {
              lVar32 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
              if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
                lVar32 = func_0x0325681c();
              }
              if (*(int *)(lVar32 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              lVar32 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
              if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
                lVar32 = func_0x0325681c();
              }
              lVar32 = *(long *)(*(long *)(lVar32 + 0xb8) + 0x30);
              if (lVar32 == 0) {
                lVar13 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
                if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                  lVar13 = func_0x0325681c();
                }
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                lVar13 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x20);
                if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                  lVar13 = func_0x0325681c();
                }
                uVar31 = **(undefined8 **)(lVar13 + 0xb8);
                uVar26 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
                func_0x0535ad68(uVar26,uVar31,
                                *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x120)
                                ,0);
                lVar32 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
                lVar13 = *(long *)(lVar32 + 0x20);
                if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                  lVar13 = func_0x0325681c();
                  lVar32 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
                }
                *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x30) = uVar26;
                lVar13 = *(long *)(lVar32 + 0x20);
                if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                  lVar13 = func_0x0325681c();
                }
                plVar14 = (long *)(*(long *)(lVar13 + 0xb8) + 0x30);
              }
              else {
                lVar33 = *(long *)PTR_DAT_07780100;
                lVar13 = func_0x03f372e4(uVar26,lVar13);
                plVar18 = *(long **)(auVar36._0_8_ + 0x60);
                if (plVar18 != (long *)0x0) {
                  lVar20 = *plVar18;
                  uVar15 = (ulong)*(ushort *)(lVar20 + 0x12e);
                  if (uVar15 != 0) {
                    piVar27 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_077800d0) {
                        puVar16 = (undefined8 *)(lVar20 + (long)*piVar27 * 0x10 + 0x138);
                        goto LAB_04d072d4;
                      }
                      uVar15 = uVar15 - 1;
                      piVar27 = piVar27 + 4;
                    } while (uVar15 != 0);
                  }
                  lVar32 = 0;
                  puVar16 = (undefined8 *)func_0x03256b10(plVar18);
LAB_04d072d4:
                  uVar26 = (*(code *)*puVar16)(plVar18,puVar16[1]);
                  if (lVar13 != 0) {
                    lVar32 = *(long *)PTR_DAT_077800f8;
                    iVar10 = func_0x04a44654(lVar13,uVar26);
                    if (plVar14 != (long *)0x0) {
                      lVar13 = *plVar14;
                      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                      if (uVar15 != 0) {
                        piVar27 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0777c248) {
                            puVar16 = (undefined8 *)(lVar13 + (long)*piVar27 * 0x10 + 0x138);
                            goto LAB_04d07358;
                          }
                          uVar15 = uVar15 - 1;
                          piVar27 = piVar27 + 4;
                        } while (uVar15 != 0);
                      }
                      lVar32 = 0;
                      puVar16 = (undefined8 *)func_0x03256b10(plVar14);
LAB_04d07358:
                      lVar13 = (*(code *)*puVar16)(plVar14,puVar16[1]);
                      puVar6 = PTR_DAT_077800f0;
                      if (lVar13 != 0) {
                        uVar26 = func_0x0414419c(lVar13,iVar10 + -1,*(undefined8 *)PTR_DAT_0777e510)
                        ;
                        plStack_200 = (long *)0x0;
                        uStack_1f8 = 0;
                        func_0x048c959c(&plStack_200,uVar26,iVar10,*(undefined8 *)puVar6);
                        return plStack_200;
                      }
                    }
                  }
                }
                auVar36 = func_0x03280cac();
                lVar13 = auVar36._8_8_;
                plVar14 = auVar36._0_8_;
                if ((bRam0000000007e1ae91 & 1) == 0) {
                  func_0x03280a18(PTR_DAT_07780108);
                  func_0x03280a18(PTR_DAT_077800b0);
                  func_0x03280a18(PTR_DAT_07780110);
                  plVar14 = (long *)func_0x03280a18(PTR_DAT_07780118);
                  bRam0000000007e1ae91 = 1;
                }
                puVar8 = PTR_DAT_07780118;
                puVar7 = PTR_DAT_07780110;
                puVar6 = PTR_DAT_07780108;
                if (lVar13 != 0) {
                  if (0 < *(int *)(lVar13 + 0x18)) {
                    iVar10 = 0;
                    do {
                      uVar15 = func_0x041e65b8(lVar13,iVar10,*(undefined8 *)puVar7);
                      if (lVar32 == 0) goto LAB_04d07528;
                      plVar14 = (long *)func_0x053bbf78(lVar32,uVar15 >> 0x20,*(undefined8 *)puVar6)
                      ;
                      if (((ulong)plVar14 & 1) != 0) {
                        fVar35 = (float)(*(code *)**(undefined8 **)
                                                    (*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) +
                                                    0x128))(auVar36._0_8_);
                        iVar11 = func_0x041e65b8(lVar13,iVar10,*(undefined8 *)puVar7);
                        uVar29 = func_0x041e65b8(lVar13,iVar10,*(undefined8 *)puVar7);
                        uVar15 = 0x80000000;
                        if (fVar35 * (float)iVar11 != INFINITY) {
                          uVar15 = (ulong)(uint)(int)(fVar35 * (float)iVar11);
                        }
                        plVar14 = (long *)func_0x041e660c(lVar13,iVar10,
                                                          uVar15 | uVar29 & 0xffffffff00000000,
                                                          *(undefined8 *)puVar8);
                      }
                      iVar10 = iVar10 + 1;
                    } while (iVar10 < *(int *)(lVar13 + 0x18));
                  }
                  return plVar14;
                }
LAB_04d07528:
                lVar13 = func_0x03280cac();
                puVar7 = PTR_DAT_07780128;
                puVar6 = PTR_DAT_07780120;
                if ((bRam0000000007e1ae92 & 1) == 0) {
                  func_0x03280a18(PTR_DAT_07780128);
                  func_0x03280a18(PTR_DAT_0777ebb0);
                  func_0x03280a18(PTR_DAT_07780138);
                  func_0x03280a18(PTR_DAT_07780130);
                  func_0x03280a18(PTR_DAT_0777ebc8);
                  func_0x03280a18(PTR_DAT_07780120);
                  func_0x03280a18(PTR_DAT_07780140);
                  bRam0000000007e1ae92 = 1;
                }
                lVar32 = func_0x03280ca0(*(undefined8 *)puVar6);
                func_0x04fb4e7c(lVar32,*(undefined8 *)puVar7);
                plVar14 = (long *)(lVar13 + 0x78);
                *plVar14 = lVar32;
              }
            }
          }
        }
      }
      else {
        plVar14 = (long *)(lVar33 + 0x10);
        *plVar14 = extraout_x1_01;
      }
    }
    else {
      plVar14 = (long *)(lVar32 + 0x10);
      *plVar14 = lVar13;
    }
  }
  else {
    plVar14 = (long *)(lVar13 + 0x10);
    *plVar14 = (long)param_2;
  }
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
}

