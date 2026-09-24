
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c00f70(int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
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
  
  pcVar8 = (char *)(_UNK_02c01184 + 0x2c00f88);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c01188 + 0x2c00f9c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0118c + 0x2c00fa8));
    func_0x01438628(*(undefined4 *)(_UNK_02c01190 + 0x2c00fb4));
    func_0x01438628(*(undefined4 *)(_UNK_02c01194 + 0x2c00fc0));
    func_0x01438628(*(undefined4 *)(_UNK_02c01198 + 0x2c00fcc));
    func_0x01438628(*(undefined4 *)(_UNK_02c0119c + 0x2c00fd8));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x02953fd4(0xfb0,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0xfb0,0);
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
    iVar6 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar3 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar5,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(param_2 + 0x14) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 2;
    if (*(char *)(param_2 + 0x28) == '\0') {
      uVar7 = 1;
    }
  }
  iVar3 = *(int *)(param_1 + 0xd0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x04722c90(iVar3,uVar7,**(undefined4 **)(_UNK_02c011a0 + 0x2c01078));
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0xd0);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c011a4 + 0x2c01094));
    func_0x024eed9c(uVar5,**(undefined4 **)(_UNK_02c011a8 + 0x2c010ac));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x04722a1c(iVar3,uVar7,uVar5,**(undefined4 **)(_UNK_02c011ac + 0x2c010d4));
  }
  iVar3 = *(int *)(param_1 + 0xd0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x0472298c(iVar3,uVar7,**(undefined4 **)(_UNK_02c011b0 + 0x2c010fc));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar3 + 8);
  uVar10 = *(uint *)(iVar3 + 0xc);
  piVar4 = *(int **)(_UNK_02c011b4 + 0x2c01134);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  iVar6 = *piVar4;
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  if (uVar10 < *(uint *)(iVar9 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar10 + 1;
    piVar4 = (int *)(iVar9 + uVar10 * 4 + 0x10);
    *piVar4 = param_2;
    if (*(int *)(_UNK_01408518 + 0x14084d8) == 0) {
      return;
    }
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)piVar4 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar4 & 0x1ffff) >> 0xc);
    return;
  }
  (*(code *)&SUB_04cfda38)
            (iVar3,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
  return;
}

