
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c34d88(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r4;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar6;
  undefined4 unaff_r7;
  undefined4 uVar7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined8 in_stack_ffffffe0;
  uint uVar9;
  longlong lVar8;
  
  uVar9 = (uint)((ulonglong)in_stack_ffffffe0 >> 0x20);
  pcVar4 = (char *)(_UNK_02c34fd8 + 0x2c34da0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c34fdc + 0x2c34db4));
    func_0x01438628(*(undefined4 *)(_UNK_02c34fe0 + 0x2c34dc0));
    func_0x01438628(*(undefined4 *)(_UNK_02c34fe4 + 0x2c34dcc));
    func_0x01438628(*(undefined4 *)(_UNK_02c34fe8 + 0x2c34dd8));
    func_0x01438628(*(undefined4 *)(_UNK_02c34fec + 0x2c34de4));
    func_0x01438628(*(undefined4 *)(_UNK_02c34ff0 + 0x2c34df0));
    func_0x01438628(*(undefined4 *)(_UNK_02c34ff4 + 0x2c34dfc));
    func_0x01438628(*(undefined4 *)(_UNK_02c34ff8 + 0x2c34e08));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x024eecb8(param_1,0);
  pcVar4 = (char *)(_UNK_02c34ffc + 0x2c34e2c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c35000 + 0x2c34e40));
    *pcVar4 = '\x01';
  }
  iVar3 = *(int *)(**(int **)(_UNK_02c35004 + 0x2c34e58) + 0x5c);
  uVar5 = *(undefined4 *)(iVar3 + 0xc);
  uVar6 = *(undefined4 *)(iVar3 + 0x10);
  uVar7 = *(undefined4 *)(iVar3 + 0x14);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x024ef328(iVar2,uVar5,uVar6,uVar7,0);
  if (*(int *)(**(int **)(_UNK_02c35008 + 0x2c34e94) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x03b2c734(**(undefined4 **)(_UNK_02c3500c + 0x2c34eb0));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x029b3f20(iVar2,**(undefined4 **)(_UNK_02c35010 + 0x2c34ed4),0);
  if (iVar2 < 1) {
    iVar2 = 0x27db;
  }
  if (*(int *)(**(int **)(_UNK_02c35014 + 0x2c34ef4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c35018 + 0x2c34f10));
  uVar5 = FUN_02c19900(param_1);
  uVar6 = FUN_02c0c0ac(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  lVar8 = (ulonglong)uVar9 << 0x20;
  FUN_02bd3648(iVar3,uVar5,iVar2,1,9,uVar6,0);
  FUN_02c230dc(param_1,**(undefined4 **)(_UNK_02c3501c + 0x2c34f70),0);
  FUN_02c2d7ec(param_1);
  if (*(int *)(**(int **)(_UNK_02c35020 + 0x2c34f8c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c35024 + 0x2c34fa8));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar4 = (char *)(_UNK_02029ad0 + 0x20299ac);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02029ad4 + 0x20299c0),0x12,0,0,lVar8,unaff_r4,unaff_r5,
                    unaff_r6,unaff_r7,unaff_r8,unaff_lr);
    func_0x01438628(*(undefined4 *)(_UNK_02029ad8 + 0x20299cc));
    func_0x01438628(*(undefined4 *)(_UNK_02029adc + 0x20299d8));
    *pcVar4 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x207,0);
  if (iVar3 == 0) {
    if (*(int *)(**(int **)(_UNK_02029ae0 + 0x2029a3c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_02029ae4 + 0x2029a58));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x029b4dd0(iVar3,0x12,0);
    if ((iVar3 != 0) &&
       (iVar1 = func_0x01523ccc(iVar3,**(undefined4 **)(_UNK_02029ae8 + 0x2029a98),0), iVar1 == 0))
    {
      pcVar4 = (char *)(_UNK_02029dbc + 0x2029b10);
      if (*pcVar4 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02029dc0 + 0x2029b24));
        func_0x01438628(*(undefined4 *)(_UNK_02029dc4 + 0x2029b30));
        *pcVar4 = '\x01';
      }
      iVar1 = func_0x02953fd4(0x20a,0);
      if (iVar1 == 0) {
        iVar2 = func_0x02029674(iVar2,1,iVar3);
        if (*(int *)(**(int **)(_UNK_02029dc8 + 0x2029ba8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x024ef144(iVar2,0,0);
        uVar5 = 0xbf800000;
        if (iVar3 != 0) {
          if (*(int *)(**(int **)(_UNK_02029dcc + 0x2029be0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0283f180(iVar2,0,0);
          if (0 < iVar3) {
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar5 = func_0x024f30c0(iVar2,0);
          }
        }
      }
      else {
        iVar1 = func_0x029540a4(0x20a,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = func_0x028710a0(iVar1,iVar2,iVar3,0,0);
      }
      return uVar5;
    }
    uVar5 = 0xbf800000;
  }
  else {
    iVar3 = func_0x029540a4(0x207,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar5 = func_0x02871198(iVar3,iVar2,0x12,0,0);
  }
  return uVar5;
}

