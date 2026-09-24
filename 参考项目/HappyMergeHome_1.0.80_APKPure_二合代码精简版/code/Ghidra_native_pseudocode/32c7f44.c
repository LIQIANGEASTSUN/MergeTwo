
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_032d7f44(int param_1)

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
  
  pcVar4 = (char *)(_UNK_032d827c + 0x32d7f5c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d8280 + 0x32d7f70));
    func_0x01438628(*(undefined4 *)(_UNK_032d8284 + 0x32d7f7c));
    func_0x01438628(*(undefined4 *)(_UNK_032d8288 + 0x32d7f88));
    func_0x01438628(*(undefined4 *)(_UNK_032d828c + 0x32d7f94));
    func_0x01438628(*(undefined4 *)(_UNK_032d8290 + 0x32d7fa0));
    func_0x01438628(*(undefined4 *)(_UNK_032d8294 + 0x32d7fac));
    func_0x01438628(*(undefined4 *)(_UNK_032d8298 + 0x32d7fb8));
    func_0x01438628(*(undefined4 *)(_UNK_032d829c + 0x32d7fc4));
    func_0x01438628(*(undefined4 *)(_UNK_032d82a0 + 0x32d7fd0));
    func_0x01438628(*(undefined4 *)(_UNK_032d82a4 + 0x32d7fdc));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x83bb,0);
  if (iVar1 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x20) == 0 && *(int *)(param_1 + 0x24) == 0) {
      if (*(int *)(**(int **)(_UNK_032d82a8 + 0x32d805c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032d82ac + 0x32d8078));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_032d82b0 + 0x32d8098));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x32c) == 0) {
        uVar5 = 0;
        iVar1 = 0;
      }
      else {
        iVar1 = func_0x04753840(*(int *)(iVar1 + 0x32c),**(undefined4 **)(_UNK_032d82bc + 0x32d80c8)
                               );
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03e1c764(&uStack_30,iVar1,**(undefined4 **)(_UNK_032d82c0 + 0x32d80f0));
        bVar7 = true;
        puVar6 = *(undefined4 **)(_UNK_032d82c4 + 0x32d8110);
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
        func_0x048b7490(&uStack_30,**(undefined4 **)(_UNK_032d82c8 + 0x32d8164));
        if (!bVar7) {
          return 0;
        }
      }
      uVar8 = CONCAT44(iVar1,uVar5);
      if (*(int *)(**(int **)(_UNK_032d82b4 + 0x32d8194) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032d82b8 + 0x32d81b0));
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
    iVar1 = func_0x029540a4(0x83bb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x0286a3a0(iVar1,param_1,0);
  }
  return uVar8;
}

