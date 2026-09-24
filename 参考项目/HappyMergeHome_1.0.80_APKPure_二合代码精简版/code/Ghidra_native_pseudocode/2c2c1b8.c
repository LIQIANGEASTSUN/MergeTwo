
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c3c1b8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_02c3c834 + 0x2c3c1d8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3c838 + 0x2c3c1f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c83c + 0x2c3c1fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c840 + 0x2c3c208));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c844 + 0x2c3c214));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c848 + 0x2c3c220));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c84c + 0x2c3c22c));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c850 + 0x2c3c238));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c854 + 0x2c3c244));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c858 + 0x2c3c250));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c85c + 0x2c3c25c));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c860 + 0x2c3c268));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c864 + 0x2c3c274));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c868 + 0x2c3c280));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xe80,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xe80,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028955bc(iVar1,param_1,param_2,param_3,param_4,0);
    return;
  }
  iVar1 = **(int **)(**(int **)(_UNK_02c3c86c + 0x2c3c2f4) + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b67784(iVar1,0);
  if (iVar1 != 0) {
    return;
  }
  func_0x02c3c8b4(param_1);
  if (param_2 == 0) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  func_0x014385cc((int *)(param_1 + 0xc),param_2);
  iVar2 = *(int *)(param_2 + 0x3c);
  iVar1 = extraout_r1;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
  }
  if (iVar2 != 0 && iVar1 != 0) {
    uVar6 = func_0x03554cb4(iVar2,**(undefined4 **)(_UNK_02c3c870 + 0x2c3c390));
    iVar1 = func_0x02c3c930(param_1,uVar6,1);
    if ((((iVar1 != 0) || (iVar1 = func_0x02c3cb44(param_1,uVar6,param_3), iVar1 != 0)) ||
        (iVar1 = func_0x02c3cddc(param_1,uVar6,param_3), iVar1 != 0)) ||
       (iVar1 = func_0x02c3c930(param_1,uVar6,0), iVar1 != 0)) {
      func_0x02c3c9b0(param_1);
      return;
    }
  }
  iVar1 = FUN_02c3b0a4(param_1,param_2);
  if (param_4 == 0) {
    if (iVar1 == 0) {
      return;
    }
    goto LAB_02c3c4cc;
  }
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c3c878 + 0x2c3c410));
    func_0x024f0510(iVar1,**(undefined4 **)(_UNK_02c3c87c + 0x2c3c424));
    uVar6 = *(undefined4 *)(param_2 + 8);
    if (iVar1 != 0) goto LAB_02c3c438;
    func_0x014388e4();
    iVar1 = 0;
    iVar2 = func_0x024f0f34(0,uVar6,**(undefined4 **)(_UNK_02c3c880 + 0x2c3c714));
    if (iVar2 != 0) {
      return;
    }
    uVar6 = *(undefined4 *)(param_2 + 8);
    func_0x014388e4();
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 8);
LAB_02c3c438:
    iVar2 = func_0x024f0f34(iVar1,uVar6,**(undefined4 **)(_UNK_02c3c874 + 0x2c3c448));
    if (iVar2 != 0) goto LAB_02c3c4cc;
    uVar6 = *(undefined4 *)(param_2 + 8);
  }
  iVar8 = *(int *)(iVar1 + 8);
  uVar7 = *(uint *)(iVar1 + 0xc);
  piVar4 = *(int **)(_UNK_02c3c884 + 0x2c3c480);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar2 = *piVar4;
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar7 + 1;
    *(undefined4 *)(iVar8 + uVar7 * 4 + 0x10) = uVar6;
  }
  else {
    func_0x024f0520(iVar1,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
  }
LAB_02c3c4cc:
  if (*(int *)(iVar1 + 0xc) != 0) {
    func_0x024ef7ac(&uStack_48,iVar1,**(undefined4 **)(_UNK_02c3c888 + 0x2c3c4ec));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
LAB_02c3c500:
    do {
      do {
        iVar1 = func_0x04873f24(&uStack_38,**(undefined4 **)(_UNK_02c3c8a4 + 0x2c3c50c));
        uVar6 = uStack_2c;
        if (iVar1 == 0) goto LAB_02c3c6dc;
        if (*(int *)(**(int **)(_UNK_02c3c88c + 0x2c3c528) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c3c890 + 0x2c3c548));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x029a6fa8(iVar1,uVar6,0);
      } while (iVar1 == 0);
      uVar9 = FUN_02c3bd98(param_1,iVar1);
      iVar2 = (int)((ulonglong)uVar9 >> 0x20);
      iVar8 = (int)uVar9;
      iVar3 = *(int *)(iVar1 + 0x3c);
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 0xc);
      }
      if (iVar3 != 0 && iVar2 != 0) {
        iVar8 = func_0x03554cb4(iVar3,**(undefined4 **)(_UNK_02c3c894 + 0x2c3c634));
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f0f34(iVar8,uVar6,**(undefined4 **)(_UNK_02c3c898 + 0x2c3c654));
        if (iVar2 != 0) goto LAB_02c3c59c;
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar8 + 8);
        uVar7 = *(uint *)(iVar8 + 0xc);
        piVar4 = *(int **)(_UNK_02c3c89c + 0x2c3c694);
        *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
        iVar2 = *piVar4;
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (uVar7 < *(uint *)(iVar3 + 0xc)) {
          *(uint *)(iVar8 + 0xc) = uVar7 + 1;
          *(undefined4 *)(iVar3 + uVar7 * 4 + 0x10) = uVar6;
        }
        else {
          func_0x024f0520(iVar8,uVar6,
                          *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
        }
      }
      else {
LAB_02c3c59c:
        if (iVar8 == 0) goto LAB_02c3c500;
      }
      if (*(int *)(iVar8 + 0xc) == 0) goto LAB_02c3c500;
      iVar2 = func_0x02c3c930(param_1,iVar8,1);
      if (iVar2 != 0) {
        func_0x02c3c9b0(param_1);
LAB_02c3c760:
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02c3c8a0 + 0x2c3c76c));
        return;
      }
      iVar2 = func_0x02c3cb44(param_1,iVar8,param_3);
      if (iVar2 != 0) {
        func_0x02c3c9b0(param_1);
        goto LAB_02c3c760;
      }
      iVar2 = func_0x02c3cddc(param_1,iVar8,param_3);
      if (iVar2 != 0) {
        func_0x02c3c9b0(param_1);
        goto LAB_02c3c760;
      }
      iVar2 = func_0x02c3c930(param_1,iVar8,0);
      if (iVar2 != 0) {
        func_0x02c3c9b0(param_1);
        goto LAB_02c3c760;
      }
      iVar2 = *(int *)(iVar1 + 0x3c);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
    } while (iVar2 == 0 || iVar1 == 0);
LAB_02c3c6dc:
    func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02c3c8a8 + 0x2c3c6e8));
    func_0x02c3c8b4(param_1);
  }
  return;
}

