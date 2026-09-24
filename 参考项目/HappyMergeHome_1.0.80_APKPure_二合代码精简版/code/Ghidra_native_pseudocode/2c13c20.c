
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_02c23c20(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r2;
  int extraout_r2_00;
  undefined4 uVar3;
  undefined4 extraout_r3;
  int unaff_r4;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  int iStack_30;
  int iStack_2c;
  
  pcVar5 = (char *)(_UNK_02c23cf4 + 0x2c23c34);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c23cf8 + 0x2c23c48));
    func_0x01438628(*(undefined4 *)(_UNK_02c23cfc + 0x2c23c54));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5eee,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5eee,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_028699e4 + 0x2869904);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028699e8 + 0x2869918),param_1,0);
      *pcVar5 = '\x01';
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = 0;
    func_0x024f56c0(&stack0xffffffb8,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&iStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar7,&iStack_30,uVar3);
    iVar1 = func_0x035daef8(&iStack_30,0,**(undefined4 **)(_UNK_028699ec + 0x28699d4));
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0xa4);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x014e94d8(iVar1,0);
  if (*(int *)(**(int **)(_UNK_02c23d00 + 0x2c23ccc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = **(int **)(_UNK_02c23d04 + 0x2c23ce8);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x024f83cc(*(undefined4 *)(iRam0368018c + 0x3680078));
    func_0x024f83cc(*(undefined4 *)(iRam03680190 + 0x3680084));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x024f83f8(iVar1);
    }
  }
  if (*(int *)(**(int **)(iRam03680194 + 0x36800a4) + 0x74) == 0) {
    func_0x024f83d8();
  }
  iVar6 = 0;
  func_0x024f9338(uVar7,**(undefined4 **)(iRam03680198 + 0x36800c8),0);
  iVar4 = func_0x024f9348(uVar7,0);
  iVar8 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = func_0x024f83fc(iVar8);
  }
  if ((iVar4 != 0) && (iVar6 = func_0x024f83e4(iVar4,iVar8), iVar6 == 0)) {
    func_0x024f84a0(iVar4,iVar8);
    iVar6 = 0;
  }
  iVar2 = func_0x024eec50(iVar6,0,0);
  if (iVar2 != 0) {
    func_0x024f83b8(*(undefined4 *)(iRam0368019c + 0x3680158));
    uVar7 = func_0x024f83c8();
    uVar3 = func_0x024f83b8(*(undefined4 *)(iRam036801a0 + 0x368016c));
    func_0x024f9358(uVar7,uVar3,0);
    func_0x024f83c0(uVar7,iVar1);
    uVar9 = func_0x024f83bc();
    iStack_30 = iVar4;
    iStack_2c = iVar8;
    if (*(int *)(unaff_r4 + 0x1c) == 0) {
      func_0x024f83cc(*(undefined4 *)(iRam036802fc + 0x36801d8));
      func_0x024f83cc(*(undefined4 *)(iRam03680300 + 0x36801e4));
      if (*(int *)(unaff_r4 + 0x1c) == 0) {
        func_0x024f83f8(unaff_r4);
      }
    }
    if (*(int *)(**(int **)(iRam03680304 + 0x3680204) + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar8 = 0;
    func_0x024f9338((int)uVar9,**(undefined4 **)(iRam03680308 + 0x3680228),0);
    iVar1 = func_0x024f9368((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),extraout_r2,extraout_r3);
    iVar4 = **(int **)(unaff_r4 + 0x1c);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_0x024f83fc(iVar4);
    }
    if ((iVar1 != 0) && (iVar8 = func_0x024f83e4(iVar1,iVar4), iVar8 == 0)) {
      func_0x024f84a0(iVar1,iVar4);
      iVar8 = 0;
    }
    iVar1 = func_0x024eec50(iVar8,0,0);
    if (iVar1 != 0) {
      func_0x024f83b8(*(undefined4 *)(iRam0368030c + 0x36802c8));
      uVar7 = func_0x024f83c8();
      uVar3 = func_0x024f83b8(*(undefined4 *)(iRam03680310 + 0x36802dc));
      func_0x024f9358(uVar7,uVar3,0);
      func_0x024f83c0(uVar7,unaff_r4);
      uVar9 = func_0x024f83bc();
      if ((*(int *)(extraout_r2_00 + 0x1c) == 0) &&
         (func_0x024f83cc(*(undefined4 *)(_UNK_03680388 + 0x368033c)),
         *(int *)(extraout_r2_00 + 0x1c) == 0)) {
        func_0x024f83f8(extraout_r2_00);
      }
      if (*(int *)(**(int **)(_UNK_0368038c + 0x368035c) + 0x74) == 0) {
        func_0x024f83d8();
      }
      iVar1 = *(int *)(*(int *)(extraout_r2_00 + 0x1c) + 4);
      if ((*(int *)(iVar1 + 0x1c) == 0) &&
         (func_0x024f83cc(*(undefined4 *)(_UNK_03680460 + 0x36803bc)), *(int *)(iVar1 + 0x1c) == 0))
      {
        func_0x024f83f8(iVar1);
      }
      if (*(int *)(**(int **)(_UNK_03680464 + 0x36803dc) + 0x74) == 0) {
        func_0x024f83d8();
      }
      iVar8 = 0;
      iVar4 = func_0x024f9378((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0);
      iVar1 = **(int **)(iVar1 + 0x1c);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x024f83fc(iVar1);
      }
      if ((iVar4 != 0) && (iVar8 = func_0x024f83e4(iVar4,iVar1), iVar8 == 0)) {
        func_0x024f84a0(iVar4,iVar1);
        iVar8 = 0;
      }
      return iVar8;
    }
    return iVar8;
  }
  return iVar6;
}

