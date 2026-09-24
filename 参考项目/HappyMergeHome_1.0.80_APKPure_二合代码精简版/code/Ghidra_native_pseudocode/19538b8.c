
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_019638b8(int param_1)

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
  
  pcVar4 = (char *)(_UNK_01963bf0 + 0x19638d0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01963bf4 + 0x19638e4));
    func_0x01438628(*(undefined4 *)(_UNK_01963bf8 + 0x19638f0));
    func_0x01438628(*(undefined4 *)(_UNK_01963bfc + 0x19638fc));
    func_0x01438628(*(undefined4 *)(_UNK_01963c00 + 0x1963908));
    func_0x01438628(*(undefined4 *)(_UNK_01963c04 + 0x1963914));
    func_0x01438628(*(undefined4 *)(_UNK_01963c08 + 0x1963920));
    func_0x01438628(*(undefined4 *)(_UNK_01963c0c + 0x196392c));
    func_0x01438628(*(undefined4 *)(_UNK_01963c10 + 0x1963938));
    func_0x01438628(*(undefined4 *)(_UNK_01963c14 + 0x1963944));
    func_0x01438628(*(undefined4 *)(_UNK_01963c18 + 0x1963950));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x9924,0);
  if (iVar1 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x20) == 0 && *(int *)(param_1 + 0x24) == 0) {
      if (*(int *)(**(int **)(_UNK_01963c1c + 0x19639d0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01963c20 + 0x19639ec));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01963c24 + 0x1963a0c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x39c) == 0) {
        uVar5 = 0;
        iVar1 = 0;
      }
      else {
        iVar1 = func_0x024f10ac(*(int *)(iVar1 + 0x39c),**(undefined4 **)(_UNK_01963c30 + 0x1963a3c)
                               );
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f10bc(&uStack_30,iVar1,**(undefined4 **)(_UNK_01963c34 + 0x1963a64));
        bVar7 = true;
        puVar6 = *(undefined4 **)(_UNK_01963c38 + 0x1963a84);
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
        func_0x024f10c0(&uStack_30,**(undefined4 **)(_UNK_01963c3c + 0x1963ad8));
        if (!bVar7) {
          return 0;
        }
      }
      uVar8 = CONCAT44(iVar1,uVar5);
      if (*(int *)(**(int **)(_UNK_01963c28 + 0x1963b08) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01963c2c + 0x1963b24));
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
    iVar1 = func_0x029540a4(0x9924,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x0286a3a0(iVar1,param_1,0);
  }
  return uVar8;
}

