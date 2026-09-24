
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c011b8(int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
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
  
  pcVar8 = (char *)(_UNK_02c013f0 + 0x2c011d0);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c013f4 + 0x2c011e4));
    func_0x01438628(*(undefined4 *)(_UNK_02c013f8 + 0x2c011f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c013fc + 0x2c011fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c01400 + 0x2c01208));
    func_0x01438628(*(undefined4 *)(_UNK_02c01404 + 0x2c01214));
    func_0x01438628(*(undefined4 *)(_UNK_02c01408 + 0x2c01220));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x02953fd4(0xfb1,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0xfb1,0);
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
  iVar3 = *(int *)(param_1 + 0xd4);
  if (param_2 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02c3f4b4(param_2,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x046ccb14(iVar3,uVar7,**(undefined4 **)(_UNK_02c0140c + 0x2c012ac));
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0xd4);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar7 = func_0x02c3f4b4(param_2,0);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c01410 + 0x2c012e8));
    func_0x024eed9c(uVar5,**(undefined4 **)(_UNK_02c01414 + 0x2c012fc));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x046cc8a0(iVar3,uVar7,uVar5,**(undefined4 **)(_UNK_02c01418 + 0x2c01324));
  }
  iVar3 = *(int *)(param_1 + 0xd4);
  if (param_2 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02c3f4b4(param_2,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x046cc810(iVar3,uVar7,**(undefined4 **)(_UNK_02c0141c + 0x2c01368));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar6 = *(int *)(iVar3 + 8);
  uVar9 = *(uint *)(iVar3 + 0xc);
  piVar4 = *(int **)(_UNK_02c01420 + 0x2c013a0);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  iVar10 = *piVar4;
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar6 + 0xc) <= uVar9) {
    (*(code *)&SUB_04cfda38)
              (iVar3,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
    return;
  }
  *(uint *)(iVar3 + 0xc) = uVar9 + 1;
  piVar4 = (int *)(iVar6 + uVar9 * 4 + 0x10);
  *piVar4 = param_2;
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)piVar4 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

