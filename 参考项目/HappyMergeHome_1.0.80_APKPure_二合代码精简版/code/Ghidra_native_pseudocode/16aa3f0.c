
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_016ba3f0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_016ba728 + 0x16ba408);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016ba72c + 0x16ba41c));
    func_0x01438628(*(undefined4 *)(_UNK_016ba730 + 0x16ba428));
    func_0x01438628(*(undefined4 *)(_UNK_016ba734 + 0x16ba434));
    func_0x01438628(*(undefined4 *)(_UNK_016ba738 + 0x16ba440));
    func_0x01438628(*(undefined4 *)(_UNK_016ba73c + 0x16ba44c));
    func_0x01438628(*(undefined4 *)(_UNK_016ba740 + 0x16ba458));
    func_0x01438628(*(undefined4 *)(_UNK_016ba744 + 0x16ba464));
    func_0x01438628(*(undefined4 *)(_UNK_016ba748 + 0x16ba470));
    func_0x01438628(*(undefined4 *)(_UNK_016ba74c + 0x16ba47c));
    func_0x01438628(*(undefined4 *)(_UNK_016ba750 + 0x16ba488));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8923,0);
  if (iVar1 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x20) == 0 && *(int *)(param_1 + 0x24) == 0) {
      if (*(int *)(**(int **)(_UNK_016ba754 + 0x16ba508) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016ba758 + 0x16ba524));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_016ba75c + 0x16ba544));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x35c) == 0) {
        uVar5 = 0;
        iVar1 = 0;
      }
      else {
        iVar1 = func_0x024f10ac(*(int *)(iVar1 + 0x35c),**(undefined4 **)(_UNK_016ba768 + 0x16ba574)
                               );
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f10bc(&uStack_30,iVar1,**(undefined4 **)(_UNK_016ba76c + 0x16ba59c));
        bVar7 = true;
        puVar6 = *(undefined4 **)(_UNK_016ba770 + 0x16ba5bc);
        uVar5 = 0;
        iVar1 = 0;
        while (iVar2 = func_0x015162bc(&uStack_30,*puVar6), iVar2 != 0) {
          if (iStack_24 != 0) {
            uVar3 = *(uint *)(iStack_24 + 0x28);
            iVar2 = *(int *)(iStack_24 + 0x2c);
            if (((int)(iVar1 - (iVar2 + (uint)(uVar5 < uVar3))) < 0 !=
                 (SBORROW4(iVar1,iVar2) != SBORROW4(iVar1 - iVar2,(uint)(uVar5 < uVar3)))) &&
               (uVar5 = uVar3, iVar1 = iVar2, *(char *)(iStack_24 + 0x40) == '\0')) {
              bVar7 = false;
            }
          }
        }
        func_0x024f10c0(&uStack_30,**(undefined4 **)(_UNK_016ba774 + 0x16ba610));
        if (!bVar7) {
          return 0;
        }
      }
      uVar8 = CONCAT44(iVar1,uVar5);
      if (*(int *)(**(int **)(_UNK_016ba760 + 0x16ba640) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_016ba764 + 0x16ba65c));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar9 = func_0x026ffbe0(iVar2,0);
      iVar2 = (int)((ulonglong)uVar9 >> 0x20);
      bVar7 = (uint)uVar9 < uVar5;
      if ((int)(iVar2 - (iVar1 + (uint)bVar7)) < 0 !=
          (SBORROW4(iVar2,iVar1) != SBORROW4(iVar2 - iVar1,(uint)bVar7))) {
        uVar8 = 0;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8923,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x0286a3a0(iVar1,param_1,0);
  }
  return uVar8;
}

