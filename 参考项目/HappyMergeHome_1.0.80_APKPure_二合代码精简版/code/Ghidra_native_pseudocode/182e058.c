
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0183e058(int param_1)

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
  
  pcVar4 = (char *)(_UNK_0183e390 + 0x183e070);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0183e394 + 0x183e084));
    func_0x01438628(*(undefined4 *)(_UNK_0183e398 + 0x183e090));
    func_0x01438628(*(undefined4 *)(_UNK_0183e39c + 0x183e09c));
    func_0x01438628(*(undefined4 *)(_UNK_0183e3a0 + 0x183e0a8));
    func_0x01438628(*(undefined4 *)(_UNK_0183e3a4 + 0x183e0b4));
    func_0x01438628(*(undefined4 *)(_UNK_0183e3a8 + 0x183e0c0));
    func_0x01438628(*(undefined4 *)(_UNK_0183e3ac + 0x183e0cc));
    func_0x01438628(*(undefined4 *)(_UNK_0183e3b0 + 0x183e0d8));
    func_0x01438628(*(undefined4 *)(_UNK_0183e3b4 + 0x183e0e4));
    func_0x01438628(*(undefined4 *)(_UNK_0183e3b8 + 0x183e0f0));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x9249,0);
  if (iVar1 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x20) == 0 && *(int *)(param_1 + 0x24) == 0) {
      if (*(int *)(**(int **)(_UNK_0183e3bc + 0x183e170) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0183e3c0 + 0x183e18c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0183e3c4 + 0x183e1ac));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x310) == 0) {
        uVar5 = 0;
        iVar1 = 0;
      }
      else {
        iVar1 = func_0x024f10ac(*(int *)(iVar1 + 0x310),**(undefined4 **)(_UNK_0183e3d0 + 0x183e1dc)
                               );
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f10bc(&uStack_30,iVar1,**(undefined4 **)(_UNK_0183e3d4 + 0x183e204));
        bVar7 = true;
        puVar6 = *(undefined4 **)(_UNK_0183e3d8 + 0x183e224);
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
        func_0x024f10c0(&uStack_30,**(undefined4 **)(_UNK_0183e3dc + 0x183e278));
        if (!bVar7) {
          return 0;
        }
      }
      uVar8 = CONCAT44(iVar1,uVar5);
      if (*(int *)(**(int **)(_UNK_0183e3c8 + 0x183e2a8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0183e3cc + 0x183e2c4));
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
    iVar1 = func_0x029540a4(0x9249,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x0286a3a0(iVar1,param_1,0);
  }
  return uVar8;
}

