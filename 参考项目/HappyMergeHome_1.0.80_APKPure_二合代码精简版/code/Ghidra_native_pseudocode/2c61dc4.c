
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c71dc4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
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
  
  pcVar5 = (char *)(_UNK_02c72030 + 0x2c71dd8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c72034 + 0x2c71dec));
    func_0x01438628(*(undefined4 *)(_UNK_02c72038 + 0x2c71df8));
    func_0x01438628(*(undefined4 *)(_UNK_02c7203c + 0x2c71e04));
    func_0x01438628(*(undefined4 *)(_UNK_02c72040 + 0x2c71e10));
    func_0x01438628(*(undefined4 *)(_UNK_02c72044 + 0x2c71e1c));
    func_0x01438628(*(undefined4 *)(_UNK_02c72048 + 0x2c71e28));
    func_0x01438628(*(undefined4 *)(_UNK_02c7204c + 0x2c71e34));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6030,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6030,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02c72050 + 0x2c71e8c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c72054 + 0x2c71ea8));
  piVar7 = *(int **)(_UNK_02c72058 + 0x2c71ebc);
  iVar4 = *piVar7;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
    iVar4 = *piVar7;
  }
  iVar8 = **(int **)(_UNK_02c7205c + 0x2c71edc);
  iVar2 = *(int *)(iVar8 + 0x1c);
  uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x1dc);
  if (iVar2 == 0) {
    func_0x014909d8(iVar8);
    iVar2 = *(int *)(iVar8 + 0x1c);
  }
  iVar4 = *(int *)(iVar2 + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = func_0x0149097c();
  }
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = func_0x0149097c();
  }
  uVar3 = **(undefined4 **)(iVar4 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar7 = (int *)func_0x02b0c90c(iVar1,uVar6,uVar3,0);
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c72060 + 0x2c71f74));
  func_0x0152e3ec(iVar1,param_1,**(undefined4 **)(_UNK_02c72064 + 0x2c71f90),0);
  iVar4 = *(int *)(param_1 + 0x8c);
  if (piVar7 == (int *)0x0) {
    func_0x014388e4();
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = *(int **)(_UNK_02c72068 + 0x2c71fb0);
    iVar2 = *piVar9;
    if (((uint)*(byte *)(*piVar7 + 0xb8) < (uint)*(byte *)(iVar2 + 0xb8)) ||
       (*(int *)(*(int *)(*piVar7 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
      func_0x014388e4();
      iVar2 = *piVar9;
    }
    piVar9 = (int *)0x0;
    if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar7 + 0xb8)) &&
       (piVar9 = piVar7,
       *(int *)(*(int *)(*piVar7 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
      piVar9 = (int *)0x0;
    }
  }
  pcVar5 = (char *)(_UNK_02c85a4c + 0x2c8591c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c85a50 + 0x2c85930),iVar1,iVar4,0);
    func_0x01438628(*(undefined4 *)(_UNK_02c85a54 + 0x2c8593c));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x6032,0);
  if (iVar2 == 0) {
    piVar9[0xc] = iVar1;
    func_0x014385cc(piVar9 + 0xc,iVar1);
    iVar1 = piVar9[0xd];
    if (*(int *)(**(int **)(_UNK_02c85a58 + 0x2c859b4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c85a5c + 0x2c859d4));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_02c488f4(iVar2,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar4 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x024f0e8c(iVar2,uVar6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    (*(code *)&UNK_05e61cf0)(iVar1,uVar6,0);
    return;
  }
  iVar2 = func_0x029540a4(0x6032,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_20 = 0;
  func_0x028691b4(iVar2,piVar9,iVar1,iVar4);
  return;
}

