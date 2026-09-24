
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_03182088(int param_1)

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
  
  pcVar4 = (char *)(_UNK_031823c0 + 0x31820a0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031823c4 + 0x31820b4));
    func_0x01438628(*(undefined4 *)(_UNK_031823c8 + 0x31820c0));
    func_0x01438628(*(undefined4 *)(_UNK_031823cc + 0x31820cc));
    func_0x01438628(*(undefined4 *)(_UNK_031823d0 + 0x31820d8));
    func_0x01438628(*(undefined4 *)(_UNK_031823d4 + 0x31820e4));
    func_0x01438628(*(undefined4 *)(_UNK_031823d8 + 0x31820f0));
    func_0x01438628(*(undefined4 *)(_UNK_031823dc + 0x31820fc));
    func_0x01438628(*(undefined4 *)(_UNK_031823e0 + 0x3182108));
    func_0x01438628(*(undefined4 *)(_UNK_031823e4 + 0x3182114));
    func_0x01438628(*(undefined4 *)(_UNK_031823e8 + 0x3182120));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7b9c,0);
  if (iVar1 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x20) == 0 && *(int *)(param_1 + 0x24) == 0) {
      if (*(int *)(**(int **)(_UNK_031823ec + 0x31821a0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031823f0 + 0x31821bc));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_031823f4 + 0x31821dc));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x208) == 0) {
        uVar5 = 0;
        iVar1 = 0;
      }
      else {
        iVar1 = func_0x04753840(*(int *)(iVar1 + 0x208),**(undefined4 **)(_UNK_03182400 + 0x318220c)
                               );
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03e1c764(&uStack_30,iVar1,**(undefined4 **)(_UNK_03182404 + 0x3182234));
        bVar7 = true;
        puVar6 = *(undefined4 **)(_UNK_03182408 + 0x3182254);
        uVar5 = 0;
        iVar1 = 0;
        while (iVar2 = func_0x048b7494(&uStack_30,*puVar6), iVar2 != 0) {
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
        func_0x048b7490(&uStack_30,**(undefined4 **)(_UNK_0318240c + 0x31822a8));
        if (!bVar7) {
          return 0;
        }
      }
      uVar8 = CONCAT44(iVar1,uVar5);
      if (*(int *)(**(int **)(_UNK_031823f8 + 0x31822d8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_031823fc + 0x31822f4));
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
    iVar1 = func_0x029540a4(0x7b9c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x0286a3a0(iVar1,param_1,0);
  }
  return uVar8;
}

