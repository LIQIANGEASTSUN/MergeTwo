/* Ghidra 12.1.2 native pseudocode; RVA 0x678B208; MergeEngine.ECS.Systems.Items.CollectSystem.ProcessComponent; status ok */


/* WARNING: Possible PIC construction at 0x0688b2c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0688b2f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x069fd250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x069fd2f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x069fd0ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x069fd2fc) */
/* WARNING: Removing unreachable block (ram,0x0688b2f4) */
/* WARNING: Removing unreachable block (ram,0x0688b2fc) */
/* WARNING: Removing unreachable block (ram,0x0688b314) */
/* WARNING: Removing unreachable block (ram,0x0688b320) */
/* WARNING: Removing unreachable block (ram,0x0688b330) */
/* WARNING: Removing unreachable block (ram,0x0688b350) */
/* WARNING: Removing unreachable block (ram,0x0688b354) */
/* WARNING: Removing unreachable block (ram,0x0688b35c) */
/* WARNING: Removing unreachable block (ram,0x0688b364) */
/* WARNING: Removing unreachable block (ram,0x0688b420) */
/* WARNING: Removing unreachable block (ram,0x0688b380) */
/* WARNING: Removing unreachable block (ram,0x0688b388) */
/* WARNING: Removing unreachable block (ram,0x0688b3b4) */
/* WARNING: Removing unreachable block (ram,0x0688b3d4) */
/* WARNING: Removing unreachable block (ram,0x0688b3f0) */
/* WARNING: Removing unreachable block (ram,0x0688b3f8) */
/* WARNING: Removing unreachable block (ram,0x0688b428) */
/* WARNING: Removing unreachable block (ram,0x0688b404) */
/* WARNING: Removing unreachable block (ram,0x0688b410) */
/* WARNING: Removing unreachable block (ram,0x0688b438) */
/* WARNING: Removing unreachable block (ram,0x0688b450) */
/* WARNING: Removing unreachable block (ram,0x0688b458) */
/* WARNING: Removing unreachable block (ram,0x0688b484) */
/* WARNING: Removing unreachable block (ram,0x0688b48c) */
/* WARNING: Removing unreachable block (ram,0x0688b4b4) */
/* WARNING: Removing unreachable block (ram,0x0688b498) */
/* WARNING: Removing unreachable block (ram,0x0688b4a4) */
/* WARNING: Removing unreachable block (ram,0x0688b4c0) */
/* WARNING: Removing unreachable block (ram,0x0688b4e4) */
/* WARNING: Removing unreachable block (ram,0x0688b4f4) */
/* WARNING: Removing unreachable block (ram,0x0688b508) */
/* WARNING: Removing unreachable block (ram,0x0688b510) */
/* WARNING: Removing unreachable block (ram,0x0688b528) */
/* WARNING: Removing unreachable block (ram,0x069fcf84) */
/* WARNING: Removing unreachable block (ram,0x069fcfa4) */
/* WARNING: Removing unreachable block (ram,0x069fcff4) */
/* WARNING: Removing unreachable block (ram,0x069fd000) */
/* WARNING: Removing unreachable block (ram,0x069fd030) */
/* WARNING: Removing unreachable block (ram,0x069fd038) */
/* WARNING: Removing unreachable block (ram,0x069fd054) */
/* WARNING: Removing unreachable block (ram,0x069fd084) */
/* WARNING: Removing unreachable block (ram,0x069fd09c) */
/* WARNING: Removing unreachable block (ram,0x069fd0a4) */
/* WARNING: Removing unreachable block (ram,0x069fd0c4) */
/* WARNING: Removing unreachable block (ram,0x069fd0f4) */
/* WARNING: Removing unreachable block (ram,0x069fd0d4) */
/* WARNING: Removing unreachable block (ram,0x069fd018) */
/* WARNING: Removing unreachable block (ram,0x069fd118) */
/* WARNING: Removing unreachable block (ram,0x069fd144) */
/* WARNING: Removing unreachable block (ram,0x069fd1a0) */
/* WARNING: Removing unreachable block (ram,0x069fd1ac) */
/* WARNING: Removing unreachable block (ram,0x069fd1cc) */
/* WARNING: Removing unreachable block (ram,0x069fd1e0) */
/* WARNING: Removing unreachable block (ram,0x069fd1e8) */
/* WARNING: Removing unreachable block (ram,0x069fd254) */
/* WARNING: Removing unreachable block (ram,0x069fd26c) */
/* WARNING: Removing unreachable block (ram,0x069fd280) */
/* WARNING: Removing unreachable block (ram,0x069fd2b4) */
/* WARNING: Removing unreachable block (ram,0x069fd2d4) */
/* WARNING: Removing unreachable block (ram,0x069fd2e8) */
/* WARNING: Removing unreachable block (ram,0x069fd288) */
/* WARNING: Removing unreachable block (ram,0x069fd1fc) */
/* WARNING: Removing unreachable block (ram,0x069fd204) */
/* WARNING: Removing unreachable block (ram,0x069fd20c) */
/* WARNING: Removing unreachable block (ram,0x069fd01c) */
/* WARNING: Removing unreachable block (ram,0x0688b338) */
/* WARNING: Removing unreachable block (ram,0x0688b2cc) */
/* WARNING: Removing unreachable block (ram,0x0688b580) */
/* WARNING: Removing unreachable block (ram,0x0688b2d0) */
/* WARNING: Removing unreachable block (ram,0x032809c4) */
/* WARNING: Removing unreachable block (ram,0x03281be4) */
/* WARNING: Removing unreachable block (ram,0x032f7084) */
/* WARNING: Removing unreachable block (ram,0x032f7090) */
/* WARNING: Removing unreachable block (ram,0x032f70b8) */
/* WARNING: Removing unreachable block (ram,0x032f70c0) */
/* WARNING: Removing unreachable block (ram,0x032f70c8) */
/* WARNING: Removing unreachable block (ram,0x069fd0f0) */
/* WARNING: Removing unreachable block (ram,0x069fd108) */

void MergeEngine_ECS_Systems_Items_CollectSystem__ProcessComponent(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07810320;
  if ((bRam0000000007e28d41 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_07810328);
    func_0x03280a18(PTR_DAT_077e6760);
    func_0x03280a18(PTR_DAT_0777e638);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_07810330);
    func_0x03280a18(PTR_DAT_07810338);
    func_0x03280a18(PTR_DAT_07810320);
    func_0x03280a18(PTR_DAT_0776b160);
    bRam0000000007e28d41 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}

