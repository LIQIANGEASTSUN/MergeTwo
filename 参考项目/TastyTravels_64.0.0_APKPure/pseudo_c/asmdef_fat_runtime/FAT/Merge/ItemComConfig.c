/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemComConfig$$CloneForBoardSkin RVA 0x210b074 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0211b074(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_0211b180 + 0x211b088);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211b184 + 0x211b09c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b1d,0);
  if (iVar1 == 0) {
    piVar2 = (int *)func_0x024548e4(param_1,0);
    piVar3 = (int *)0x0;
    if (piVar2 != (int *)0x0) {
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_0211b188 + 0x211b10c) + 0xb8);
      if ((*(byte *)(*piVar2 + 0xb8) < uVar4) ||
         (piVar3 = piVar2,
         *(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_0211b188 + 0x211b10c)
         )) {
        func_0x01384fb4();
        piVar3 = (int *)0x0;
      }
    }
    piVar2 = *(int **)(param_1 + 0x50);
    if (piVar2 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(*piVar2 + 0x140))(piVar2,*(undefined4 *)(*piVar2 + 0x144));
    }
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    piVar3[0x14] = iVar1;
    return piVar3;
  }
  iVar1 = func_0x0229f13c(0x7b1d,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_02254894 + 0x22547b4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02254898 + 0x22547c8),param_1,0);
    *pcVar6 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_30,uVar5,0,0);
  piVar3 = (int *)func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0225489c + 0x2254884));
  return piVar3;
}



// ===== FAT.Merge.ItemComConfig$$.ctor RVA 0x210b18c =====

void FUN_0211b18c(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}


