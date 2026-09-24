/* Ghidra 12.1.2 native pseudocode; RVA 0x6A62D1C; Merger.MergeBoardSkipCooldownCapability.Logic.TimeCycleSkipCooldownStrategy.IsOnCooldown; status ok */


/* WARNING: Possible PIC construction at 0x06b62eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b63014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b62eb4) */
/* WARNING: Removing unreachable block (ram,0x06b62eb8) */
/* WARNING: Removing unreachable block (ram,0x06b62ed4) */
/* WARNING: Removing unreachable block (ram,0x06b62ef0) */
/* WARNING: Removing unreachable block (ram,0x06b62fc8) */
/* WARNING: Removing unreachable block (ram,0x072ce774) */
/* WARNING: Removing unreachable block (ram,0x06b63004) */
/* WARNING: Removing unreachable block (ram,0x06b63018) */
/* WARNING: Removing unreachable block (ram,0x06b63020) */
/* WARNING: Removing unreachable block (ram,0x06b63024) */
/* WARNING: Removing unreachable block (ram,0x06b63068) */
/* WARNING: Removing unreachable block (ram,0x06b63038) */
/* WARNING: Removing unreachable block (ram,0x06b63050) */

ulong Merger_MergeBoardSkipCooldownCapability_Logic_TimeCycleSkipCooldownStrategy__IsOnCooldown
                (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000007e2a685 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a548);
    bRam0000000007e2a685 = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_2 != 0) {
    uVar3 = func_0x03d1fc04(param_2,&uStack_70,*(undefined8 *)PTR_DAT_0777a548);
    if (((uVar3 & 1) == 0) || (uStack_40._4_4_ != 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = func_0x06b9c478(&uStack_70,0);
      uVar2 = uVar2 ^ 1;
    }
    return (ulong)(uVar2 & 1);
  }
  func_0x03280cac();
  puVar1 = PTR_DAT_07830890;
  if ((bRam0000000007e2a67c & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830840);
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07830898);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_078308a0);
    func_0x03280a18(PTR_DAT_078308a8);
    func_0x03280a18(PTR_DAT_078308b0);
    func_0x03280a18(PTR_DAT_078308b8);
    func_0x03280a18(PTR_DAT_07830870);
    func_0x03280a18(PTR_DAT_07830878);
    func_0x03280a18(PTR_DAT_078308c0);
    func_0x03280a18(PTR_DAT_078308c8);
    func_0x03280a18(PTR_DAT_07830890);
    bRam0000000007e2a67c = 1;
  }
  uVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
  return uVar3;
}

