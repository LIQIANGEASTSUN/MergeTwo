/* Ghidra 12.1.2 native pseudocode; RVA 0x6A4E898; Merger.MergeBoard.Utils.SpawningItemsUtils.GetItemToSpawn; status ok */


/* WARNING: Possible PIC construction at 0x06b4e9b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b4e9bc) */

long Merger_MergeBoard_Utils_SpawningItemsUtils__GetItemToSpawn
               (long param_1,long *param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e0 [80];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar5 = param_3;
  if ((bRam0000000007e2a5aa & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782ff30);
    func_0x03280a18(PTR_DAT_0782ff38);
    bRam0000000007e2a5aa = 1;
  }
  if (*param_2 != 0) {
    uVar2 = func_0x060e8960(*param_2,0);
    if ((uVar2 & 1) != 0) {
LAB_06b4e99c:
      uStack_110 = param_4[4];
      uStack_128 = param_4[1];
      uStack_130 = *param_4;
      uStack_118 = param_4[3];
      uStack_120 = param_4[2];
      auVar7._8_8_ = &uStack_130;
      auVar7._0_8_ = *param_2;
      lVar5 = 0;
      goto SUB_06b4e9d8;
    }
    *(undefined4 *)(param_3 + 0x38) = 0;
    iVar1 = *(int *)(param_3 + 0x40) + 1;
    *(int *)(param_3 + 0x40) = iVar1;
    if (*param_2 != 0) {
      func_0x060e8b04(*param_2,(int)param_2[1] + iVar1,param_4[2],0);
      lVar5 = 0x50;
      func_0x072ce970(auStack_e0,param_3,0x50);
      if (param_1 != 0) {
        uVar6 = *(undefined8 *)PTR_DAT_0782ff38;
        func_0x072ce970(&lStack_90,auStack_e0,0x50);
        func_0x03d1dcc8(param_1,&lStack_90,uVar6);
        lStack_f8 = param_2[1];
        lStack_100 = *param_2;
        lStack_f0 = param_2[2];
        lStack_90 = lStack_100;
        lStack_88 = lStack_f8;
        lStack_80 = lStack_f0;
        func_0x03d1db24(param_1,&lStack_90,*(undefined8 *)PTR_DAT_0782ff30);
        goto LAB_06b4e99c;
      }
    }
  }
  auVar7 = func_0x03280cac();
SUB_06b4e9d8:
  if ((bRam0000000007e2a5ac & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_077e75c0);
    func_0x03280a18(PTR_DAT_0782ff40);
    bRam0000000007e2a5ac = 1;
  }
  if (auVar7._0_8_ == 0) {
    if (*(int *)(*(long *)PTR_DAT_0774e598 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    func_0x06faa078(*(undefined8 *)PTR_DAT_0782ff40,0);
  }
  else {
    uVar6 = func_0x03280afc(*(undefined8 *)PTR_DAT_077e75c0,0);
    lVar5 = func_0x060e9bf4(auVar7._0_8_,uVar6,*(undefined8 *)(auVar7._8_8_ + 0x10),lVar5,0);
    if (lVar5 != 0) {
      plVar3 = *(long **)(lVar5 + 0x10);
      if (plVar3 == (long *)0x0) {
        return 0;
      }
      lVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
      if (lVar4 == 0) {
        return 0;
      }
      return lVar5;
    }
  }
  return 0;
}

