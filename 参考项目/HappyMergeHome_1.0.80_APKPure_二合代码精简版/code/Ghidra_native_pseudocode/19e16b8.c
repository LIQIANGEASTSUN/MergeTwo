
/* WARNING: Possible PIC construction at 0x019f1744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02868ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019f1824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019ec0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02869338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b0528: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b052c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_019f16b8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  char *pcVar5;
  undefined4 unaff_r6;
  int *piVar6;
  int iVar7;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  pcVar5 = (char *)(_UNK_019f186c + 0x19f16cc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019f1870 + 0x19f16e0));
    func_0x01438628(*(undefined4 *)(_UNK_019f1874 + 0x19f16ec));
    func_0x01438628(*(undefined4 *)(_UNK_019f1878 + 0x19f16f8));
    func_0x01438628(*(undefined4 *)(_UNK_019f187c + 0x19f1704));
    func_0x01438628(*(undefined4 *)(_UNK_019f1880 + 0x19f1710));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x370f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_019f1884 + 0x19f1768) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019f1888 + 0x19f1784));
    piVar6 = *(int **)(_UNK_019f188c + 0x19f1798);
    iVar2 = *piVar6;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar6;
    }
    iVar7 = **(int **)(_UNK_019f1890 + 0x19f17b8);
    iVar3 = *(int *)(iVar7 + 0x1c);
    uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xb14);
    if (iVar3 == 0) {
      func_0x014909d8(iVar7);
      iVar3 = *(int *)(iVar7 + 0x1c);
    }
    iVar2 = *(int *)(iVar3 + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x0149097c();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x0149097c();
    }
    if (iVar1 == 0) {
      unaff_lr = 0x19f1828;
      unaff_r4 = param_1;
      unaff_r5 = 0;
      unaff_r6 = uVar4;
      register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
    }
    else {
      iVar1 = func_0x02b0c90c(iVar1,uVar4,**(undefined4 **)(iVar2 + 0x5c),0);
      if ((iVar1 == 0) ||
         (iVar1 = func_0x035e8140(iVar1,**(undefined4 **)(_UNK_019f1894 + 0x19f1850)), iVar1 == 0))
      {
        return 0;
      }
      iVar2 = func_0x02953fd4(0x3710,0);
      if (iVar2 == 0) {
        piVar6 = (int *)(iVar1 + 0x54);
        *piVar6 = param_1;
        func_0x014385cc(piVar6,param_1);
        func_0x019ec10c(iVar1);
        if (*piVar6 != 0) {
          return *piVar6;
        }
      }
      else {
        iVar2 = func_0x029540a4(0x3710,0);
        if (iVar2 == 0) {
          unaff_lr = 0x19ec0c4;
          unaff_r6 = 0;
          unaff_r4 = iVar1;
          unaff_r5 = param_1;
          register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
        }
        else {
          uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          iStack_38 = 0;
          uStack_28 = 0;
          iStack_20 = unaff_r4;
          func_0x024f56c0(&iStack_50,0,param_1,0);
          iStack_38 = iStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
          if (*(int *)(iVar2 + 0x10) != 0) {
            func_0x01523a6c(&iStack_38,*(int *)(iVar2 + 0x10),0);
          }
          func_0x01523a6c(&iStack_38,iVar1,0);
          func_0x01523a6c(&iStack_38,param_1,0);
          unaff_r6 = *(undefined4 *)(iVar2 + 0xc);
          unaff_r4 = *(int *)(iVar2 + 0x10);
          if (*(int *)(iVar2 + 8) != 0) {
            uVar4 = 3;
            if (unaff_r4 == 0) {
              uVar4 = 2;
            }
            uStack_58 = 0;
            uStack_54 = 0;
            iVar1 = func_0x024f56d0(*(int *)(iVar2 + 8),unaff_r6,&iStack_38,uVar4);
            return iVar1;
          }
          unaff_lr = 0x286933c;
          unaff_r5 = 0;
          register0x00000054 = (BADSPACEBASE *)&uStack_58;
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x370f,0);
    if (iVar1 == 0) {
      unaff_lr = 0x19f1748;
      unaff_r4 = param_1;
      unaff_r5 = 0;
      register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
    }
    else {
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_30 = 0;
      iStack_20 = 0;
      func_0x024f56c0(&uStack_48,0,0);
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      uStack_24 = uStack_3c;
      iStack_20 = iStack_38;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01523a6c(&uStack_30,param_1,0);
      if (*(int *)(iVar1 + 8) != 0) {
        uVar4 = 2;
        if (*(int *)(iVar1 + 0x10) == 0) {
          uVar4 = 1;
        }
        iStack_50 = 0;
        uStack_4c = 0;
        iVar1 = func_0x024f56d0(*(int *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),&uStack_30,uVar4);
        return iVar1;
      }
      unaff_lr = 0x2868ea8;
      unaff_r4 = *(int *)(iVar1 + 0x10);
      unaff_r5 = 0;
      unaff_r6 = *(undefined4 *)(iVar1 + 0xc);
      register0x00000054 = (BADSPACEBASE *)&iStack_50;
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
  *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x14) = 0x14b0524;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r11;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = 0x14b052c;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x24) = unaff_r5;
  piVar6 = (int *)((int)register0x00000054 + -0x28);
  *piVar6 = unaff_r4;
  iVar1 = _UNK_014b0564 + 0x14b054c;
  iVar2 = _UNK_014b0568 + 0x14b0550;
  uVar4 = func_0x014654bc();
  *(undefined4 *)((int)register0x00000054 + -0x1c) =
       *(undefined4 *)((int)register0x00000054 + -0x1c);
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r11;
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x24);
  *piVar6 = *piVar6;
  func_0x0142c478(uVar4,iVar1,iVar2);
  iVar1 = func_0x0149d458();
  func_0x0147f99c();
  if (*(int *)((int)register0x00000054 + -0xc) != 0) {
    uVar4 = func_0x0149158c((undefined1 *)((int)register0x00000054 + -0x10));
    func_0x01482ce4(iVar1 + 0xc,uVar4);
  }
  return iVar1;
}

