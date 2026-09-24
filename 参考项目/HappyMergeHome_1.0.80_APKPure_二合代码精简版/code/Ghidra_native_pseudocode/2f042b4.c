
/* WARNING: Possible PIC construction at 0x02f1405c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f14060) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_02f142b4(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *unaff_r4;
  int unaff_r5;
  undefined4 uVar8;
  undefined4 unaff_r6;
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
  
  iVar4 = func_0x02953fd4(0x6c44,0);
  if (iVar4 == 0) {
    unaff_r4 = (char *)(_UNK_02f14270 + 0x2f13fa4);
    if (*unaff_r4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02f14274 + 0x2f13fb8));
      func_0x01438628(*(undefined4 *)(_UNK_02f14278 + 0x2f13fc4));
      func_0x01438628(*(undefined4 *)(_UNK_02f1427c + 0x2f13fd0));
      func_0x01438628(*(undefined4 *)(_UNK_02f14280 + 0x2f13fdc));
      func_0x01438628(*(undefined4 *)(_UNK_02f14284 + 0x2f13fe8));
      func_0x01438628(*(undefined4 *)(_UNK_02f14288 + 0x2f13ff4));
      func_0x01438628(*(undefined4 *)(_UNK_02f1428c + 0x2f14000));
      func_0x01438628(*(undefined4 *)(_UNK_02f14290 + 0x2f1400c));
      *unaff_r4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iVar4 = func_0x02953fd4(0x6c45,0);
    if (iVar4 == 0) {
      if (*(int *)(**(int **)(_UNK_02f14294 + 0x2f14074) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f14298 + 0x2f14090));
      iVar5 = FUN_02f0ab60(param_1);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar5 + 0x2c);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x0205c48c(iVar4,uVar8,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar4 + 0xc);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_48,iVar5,**(undefined4 **)(_UNK_02f1429c + 0x2f14104));
      iVar5 = 0;
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      puVar7 = *(undefined4 **)(_UNK_02f142a0 + 0x2f14124);
      puVar9 = *(undefined4 **)(_UNK_02f142a4 + 0x2f1412c);
      while (iVar2 = func_0x04878f14(&uStack_38,*puVar7), iVar3 = iStack_2c, iVar2 != 0) {
        iVar2 = FUN_02f0ab60(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x40);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar8 = *(undefined4 *)(iVar3 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x04cd2d7c(iVar2,uVar8,*puVar9);
        iVar5 = iVar5 + iVar3;
      }
      func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02f142ac + 0x2f1419c));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0xc);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      fVar10 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
      fVar1 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
      return fVar10 / fVar1;
    }
    iVar4 = func_0x029540a4(0x6c45,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x2f14060;
    unaff_r5 = iVar4;
    register0x00000054 = (BADSPACEBASE *)&uStack_48;
  }
  else {
    iVar4 = func_0x029540a4(0x6c44,0);
    if (iVar4 == 0) {
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
  iVar5 = *(int *)(iVar4 + 0x10);
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
  iVar5 = *(int *)(iVar4 + 8);
  uVar8 = *(undefined4 *)(iVar4 + 0xc);
  iVar4 = *(int *)(iVar4 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar6 = 2;
  if (iVar4 == 0) {
    uVar6 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x024f56d0(iVar5,uVar8,(undefined1 *)((int)register0x00000054 + -0x30),uVar6);
  fVar1 = (float)func_0x024f5720((undefined1 *)((int)register0x00000054 + -0x30),0,0);
  return fVar1;
}

