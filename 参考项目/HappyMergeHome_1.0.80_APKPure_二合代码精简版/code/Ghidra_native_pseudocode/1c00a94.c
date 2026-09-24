
/* WARNING: Possible PIC construction at 0x01c1083c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01c10840) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_01c10a94(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar8;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *puVar9;
  undefined4 unaff_lr;
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
  
  iVar3 = func_0x02953fd4(0x34e6,0);
  if (iVar3 == 0) {
    unaff_r4 = (char *)(_UNK_01c10a50 + 0x1c10784);
    if (*unaff_r4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01c10a54 + 0x1c10798));
      func_0x01438628(*(undefined4 *)(_UNK_01c10a58 + 0x1c107a4));
      func_0x01438628(*(undefined4 *)(_UNK_01c10a5c + 0x1c107b0));
      func_0x01438628(*(undefined4 *)(_UNK_01c10a60 + 0x1c107bc));
      func_0x01438628(*(undefined4 *)(_UNK_01c10a64 + 0x1c107c8));
      func_0x01438628(*(undefined4 *)(_UNK_01c10a68 + 0x1c107d4));
      func_0x01438628(*(undefined4 *)(_UNK_01c10a6c + 0x1c107e0));
      func_0x01438628(*(undefined4 *)(_UNK_01c10a70 + 0x1c107ec));
      *unaff_r4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iVar3 = func_0x02953fd4(0x34e7,0);
    if (iVar3 == 0) {
      if (*(int *)(**(int **)(_UNK_01c10a74 + 0x1c10854) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01c10a78 + 0x1c10870));
      iVar5 = FUN_01c0e5e0(param_1);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar5 + 0x2c);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x020b141c(iVar3,uVar8,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar3 + 0xc);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_48,iVar5,**(undefined4 **)(_UNK_01c10a7c + 0x1c108e4));
      iVar5 = 0;
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      puVar7 = *(undefined4 **)(_UNK_01c10a80 + 0x1c10904);
      puVar9 = *(undefined4 **)(_UNK_01c10a84 + 0x1c1090c);
      while (iVar1 = func_0x015109ec(&uStack_38,*puVar7), iVar2 = iStack_2c, iVar1 != 0) {
        iVar1 = FUN_01c0e5e0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x40);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar8 = *(undefined4 *)(iVar2 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f0f34(iVar1,uVar8,*puVar9);
        iVar5 = iVar5 + iVar2;
      }
      func_0x0152da2c(&uStack_38,**(undefined4 **)(_UNK_01c10a8c + 0x1c1097c));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      fVar10 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
      fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(iVar3 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
      return fVar10 / fVar4;
    }
    iVar3 = func_0x029540a4(0x34e7,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x1c10840;
    unaff_r5 = iVar3;
    register0x00000054 = (BADSPACEBASE *)&uStack_48;
  }
  else {
    iVar3 = func_0x029540a4(0x34e6,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(char **)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x024f56c0((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar5 = *(int *)(iVar3 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar5 != 0) {
    func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),iVar5,0);
  }
  func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar5 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar6 = 2;
  if (iVar3 == 0) {
    uVar6 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x024f56d0(iVar5,uVar8,(undefined1 *)((int)register0x00000054 + -0x30),uVar6);
  fVar4 = (float)func_0x024f5720((undefined1 *)((int)register0x00000054 + -0x30),0,0);
  return fVar4;
}

