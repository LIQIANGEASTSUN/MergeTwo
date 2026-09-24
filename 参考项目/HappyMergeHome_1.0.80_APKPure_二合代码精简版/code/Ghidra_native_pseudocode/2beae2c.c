
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bfae2c(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
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
  
  pcVar9 = (char *)(_UNK_02bfaf28 + 0x2bfae44);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfaf2c + 0x2bfae58));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5d4b,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5d4b,0);
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
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar3 == 0) {
      uVar6 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar6,0,0);
    return;
  }
  iVar3 = *(int *)(param_1 + 0xac);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar3 + 8);
  uVar10 = *(uint *)(iVar3 + 0xc);
  piVar5 = *(int **)(_UNK_02bfaf30 + 0x2bfaed8);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  iVar11 = *piVar5;
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar7 + 0xc) <= uVar10) {
    (*(code *)&SUB_04cfda38)
              (iVar3,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
    return;
  }
  *(uint *)(iVar3 + 0xc) = uVar10 + 1;
  puVar4 = (undefined4 *)(iVar7 + uVar10 * 4 + 0x10);
  *puVar4 = param_2;
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)puVar4 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

