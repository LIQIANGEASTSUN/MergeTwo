
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c19954(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
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
  
  pcVar9 = (char *)(_UNK_02c19a54 + 0x2c1996c);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c19a58 + 0x2c19980));
    func_0x01438628(*(undefined4 *)(_UNK_02c19a5c + 0x2c1998c));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fec,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fec,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar3 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_02c19a60 + 0x2c199e8);
  *(undefined4 *)(param_1 + 0x114) = param_2;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c19a64 + 0x2c19a08));
  uVar5 = *(undefined4 *)(param_1 + 0x114);
  uVar8 = FUN_02c0c0ac(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar8 = FUN_02bad204(iVar3,uVar5,uVar8,0);
  puVar6 = (undefined4 *)(param_1 + 0x11c);
  *puVar6 = uVar8;
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)puVar6 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar6 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

