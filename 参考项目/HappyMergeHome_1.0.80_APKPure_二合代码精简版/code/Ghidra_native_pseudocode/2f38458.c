
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02f48458(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02f48790 + 0x2f48470);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f48794 + 0x2f48484));
    func_0x01438628(*(undefined4 *)(_UNK_02f48798 + 0x2f48490));
    func_0x01438628(*(undefined4 *)(_UNK_02f4879c + 0x2f4849c));
    func_0x01438628(*(undefined4 *)(_UNK_02f487a0 + 0x2f484a8));
    func_0x01438628(*(undefined4 *)(_UNK_02f487a4 + 0x2f484b4));
    func_0x01438628(*(undefined4 *)(_UNK_02f487a8 + 0x2f484c0));
    func_0x01438628(*(undefined4 *)(_UNK_02f487ac + 0x2f484cc));
    func_0x01438628(*(undefined4 *)(_UNK_02f487b0 + 0x2f484d8));
    func_0x01438628(*(undefined4 *)(_UNK_02f487b4 + 0x2f484e4));
    func_0x01438628(*(undefined4 *)(_UNK_02f487b8 + 0x2f484f0));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x6e07,0);
  if (iVar1 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x20) == 0 && *(int *)(param_1 + 0x24) == 0) {
      if (*(int *)(**(int **)(_UNK_02f487bc + 0x2f48570) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f487c0 + 0x2f4858c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02f487c4 + 0x2f485ac));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x37c) == 0) {
        uVar5 = 0;
        iVar1 = 0;
      }
      else {
        iVar1 = func_0x04753840(*(int *)(iVar1 + 0x37c),**(undefined4 **)(_UNK_02f487d0 + 0x2f485dc)
                               );
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03e1c764(&uStack_30,iVar1,**(undefined4 **)(_UNK_02f487d4 + 0x2f48604));
        bVar7 = true;
        puVar6 = *(undefined4 **)(_UNK_02f487d8 + 0x2f48624);
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
        func_0x048b7490(&uStack_30,**(undefined4 **)(_UNK_02f487dc + 0x2f48678));
        if (!bVar7) {
          return 0;
        }
      }
      uVar8 = CONCAT44(iVar1,uVar5);
      if (*(int *)(**(int **)(_UNK_02f487c8 + 0x2f486a8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f487cc + 0x2f486c4));
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
    iVar1 = func_0x029540a4(0x6e07,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x0286a3a0(iVar1,param_1,0);
  }
  return uVar8;
}

