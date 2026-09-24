/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MBBoardEffect_OrderBoxDie$$Setup RVA 0x228ee20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0229ee20(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar10 = (char *)(_UNK_0229f058 + 0x229ee3c);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0229f05c + 0x229ee50));
    func_0x01384978(*(undefined4 *)(_UNK_0229f060 + 0x229ee5c));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f80);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  piVar2 = (int *)FUN_021566f4(0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar11 = *(int **)(_UNK_0229f064 + 0x229eed0);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar8 = *piVar11;
  if (uVar5 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar8) {
        puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x100);
        goto LAB_0229ef18;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar8,8);
LAB_0229ef18:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
  piVar2 = (int *)FUN_021566f4(0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar2;
  iVar4 = *piVar11;
  uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar4) {
        puVar3 = (undefined4 *)(iVar8 + *piVar11 * 8 + 0x110);
        goto LAB_0229ef98;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,10);
LAB_0229ef98:
  iVar8 = (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = *(undefined4 *)(iVar1 + 0x1c);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0267cc24(iVar4,uVar9,0);
  uVar9 = *(undefined4 *)(param_1 + 0x14);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar8 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_0229f068 + 0x229f00c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_24 = 0;
  uStack_28 = 1;
  iVar8 = iVar1 >> 0x1f;
  iVar1 = iVar1 / 1000 + iVar8;
  iVar8 = iVar1 - iVar8;
  func_0x02089060(uVar9,iVar1,iVar8,iVar8 >> 0x1f);
  return;
}



// ===== FAT.Merge.MBBoardEffect_OrderBoxDie$$.ctor RVA 0x228f1c8 =====

void FUN_0229f1c8(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


