/* Ghidra 12.1.2 native pseudocode; RVA 0x6739208; Merger.Game.Views.BoardItem.ViewBehaviours.LockBehaviour.TryGetParticleSystemByType; status ok */


/* WARNING: Possible PIC construction at 0x06839338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06839464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0683933c) */
/* WARNING: Removing unreachable block (ram,0x06839340) */
/* WARNING: Removing unreachable block (ram,0x06839350) */
/* WARNING: Removing unreachable block (ram,0x06839354) */
/* WARNING: Removing unreachable block (ram,0x06839370) */
/* WARNING: Removing unreachable block (ram,0x06839394) */
/* WARNING: Removing unreachable block (ram,0x0683939c) */
/* WARNING: Removing unreachable block (ram,0x068393f4) */
/* WARNING: Removing unreachable block (ram,0x06839418) */
/* WARNING: Removing unreachable block (ram,0x06839444) */
/* WARNING: Removing unreachable block (ram,0x06839454) */
/* WARNING: Removing unreachable block (ram,0x06839458) */
/* WARNING: Removing unreachable block (ram,0x068393c4) */
/* WARNING: Removing unreachable block (ram,0x06839468) */
/* WARNING: Removing unreachable block (ram,0x0683946c) */
/* WARNING: Removing unreachable block (ram,0x06839474) */
/* WARNING: Removing unreachable block (ram,0x068394cc) */
/* WARNING: Removing unreachable block (ram,0x0683947c) */
/* WARNING: Removing unreachable block (ram,0x06839484) */
/* WARNING: Removing unreachable block (ram,0x0683949c) */
/* WARNING: Removing unreachable block (ram,0x068394a4) */
/* WARNING: Removing unreachable block (ram,0x068394d4) */
/* WARNING: Removing unreachable block (ram,0x068394b0) */
/* WARNING: Removing unreachable block (ram,0x068394bc) */
/* WARNING: Removing unreachable block (ram,0x068394e4) */
/* WARNING: Removing unreachable block (ram,0x068394f4) */
/* WARNING: Removing unreachable block (ram,0x06839508) */
/* WARNING: Removing unreachable block (ram,0x0683952c) */
/* WARNING: Removing unreachable block (ram,0x068327c0) */
/* WARNING: Removing unreachable block (ram,0x068327e0) */
/* WARNING: Removing unreachable block (ram,0x068327f4) */
/* WARNING: Removing unreachable block (ram,0x04d189dc) */
/* WARNING: Removing unreachable block (ram,0x04a31d7c) */
/* WARNING: Removing unreachable block (ram,0x069a2bc0) */
/* WARNING: Removing unreachable block (ram,0x06fe10d4) */
/* WARNING: Removing unreachable block (ram,0x06fdb424) */
/* WARNING: Removing unreachable block (ram,0x06fdb444) */
/* WARNING: Removing unreachable block (ram,0x06fdb458) */
/* WARNING: Removing unreachable block (ram,0x06fdb464) */
/* WARNING: Removing unreachable block (ram,0x06fdb468) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */
/* WARNING: Removing unreachable block (ram,0x06839510) */
/* WARNING: Removing unreachable block (ram,0x06839520) */

uint Merger_Game_Views_BoardItem_ViewBehaviours_LockBehaviour__TryGetParticleSystemByType
               (long param_1,int param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar6;
  undefined8 unaff_x30;
  undefined1 auVar7 [16];
  code *apcStack_70 [2];
  
  puVar2 = PTR_DAT_0774e4e0;
  auVar1._8_8_ = unaff_x20;
  auVar1._0_8_ = unaff_x19;
  auVar7._8_8_ = unaff_x20;
  auVar7._0_8_ = unaff_x19;
  if ((bRam0000000007e289eb & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    bRam0000000007e289eb = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar4 = func_0x06fe04ec(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x48);
    if (lVar5 == 0) {
      auVar7 = func_0x03280cac();
      puVar2 = PTR_DAT_0774e4e0;
      register0x00000008 = (BADSPACEBASE *)apcStack_70;
      apcStack_70[0] =
           Merger_Game_Views_BoardItem_ViewBehaviours_LockBehaviour__InstantiateBlockerItem;
      if ((bRam0000000007e289ec & 1) == 0) {
        func_0x03280a18(PTR_DAT_0780d990);
        func_0x03280a18(PTR_DAT_0780dbf0);
        func_0x03280a18(PTR_DAT_0774e4e0);
        bRam0000000007e289ec = 1;
      }
      unaff_x21 = (undefined8 *)(auVar7._0_8_ + 0x48);
      uVar6 = *unaff_x21;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      unaff_x30 = 0x683933c;
      unaff_x22 = uVar6;
    }
    else {
      if ((bRam0000000007e28833 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e4e0,param_2,param_3,0);
        bRam0000000007e28833 = 1;
      }
      if (param_2 != 0) {
        *param_3 = 0;
        func_0x032809c4(param_3,0);
        return 0;
      }
      *param_3 = *(undefined8 *)(lVar5 + 0x50);
      func_0x032809c4(param_3);
      uVar6 = *param_3;
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c();
        auVar7 = auVar1;
      }
    }
    puVar2 = PTR_DAT_0774e4e0;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x10) = auVar7._8_8_;
    *(long *)((long)register0x00000008 + -8) = auVar7._0_8_;
    if ((bRam0000000007e2fe38 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e4e0,0,0);
      bRam0000000007e2fe38 = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar3 = func_0x06fe3474(uVar6,0);
    return ~uVar3 & 1;
  }
  *param_3 = 0;
  func_0x032809c4(param_3,0);
  return 0;
}

