
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_01c1076c(undefined4 param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint in_fpscr;
  float fVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_01c10a50 + 0x1c10784);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c10a54 + 0x1c10798));
    func_0x01438628(*(undefined4 *)(_UNK_01c10a58 + 0x1c107a4));
    func_0x01438628(*(undefined4 *)(_UNK_01c10a5c + 0x1c107b0));
    func_0x01438628(*(undefined4 *)(_UNK_01c10a60 + 0x1c107bc));
    func_0x01438628(*(undefined4 *)(_UNK_01c10a64 + 0x1c107c8));
    func_0x01438628(*(undefined4 *)(_UNK_01c10a68 + 0x1c107d4));
    func_0x01438628(*(undefined4 *)(_UNK_01c10a6c + 0x1c107e0));
    func_0x01438628(*(undefined4 *)(_UNK_01c10a70 + 0x1c107ec));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x34e7,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01c10a74 + 0x1c10854) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01c10a78 + 0x1c10870));
    iVar3 = FUN_01c0e5e0(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar3 + 0x2c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x020b141c(iVar1,uVar8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar1 + 0xc);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x0152da0c(&uStack_48,iVar3,**(undefined4 **)(_UNK_01c10a7c + 0x1c108e4));
    iVar3 = 0;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar7 = *(undefined4 **)(_UNK_01c10a80 + 0x1c10904);
    puVar9 = *(undefined4 **)(_UNK_01c10a84 + 0x1c1090c);
    while (iVar4 = func_0x015109ec(&uStack_38,*puVar7), iVar5 = iStack_2c, iVar4 != 0) {
      iVar4 = FUN_01c0e5e0(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x40);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar5 + 8);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024f0f34(iVar4,uVar8,*puVar9);
      iVar3 = iVar3 + iVar5;
    }
    func_0x0152da2c(&uStack_38,**(undefined4 **)(_UNK_01c10a8c + 0x1c1097c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    fVar2 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
    fVar2 = fVar2 / fVar10;
  }
  else {
    iVar1 = func_0x029540a4(0x34e7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    fVar2 = (float)func_0x0286a2d4(iVar1,param_1,0);
  }
  return fVar2;
}

