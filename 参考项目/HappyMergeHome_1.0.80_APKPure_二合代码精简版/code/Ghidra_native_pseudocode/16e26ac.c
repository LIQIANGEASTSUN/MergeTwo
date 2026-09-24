
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_016f26ac(int param_1)

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
  
  pcVar4 = (char *)(_UNK_016f29e4 + 0x16f26c4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f29e8 + 0x16f26d8));
    func_0x01438628(*(undefined4 *)(_UNK_016f29ec + 0x16f26e4));
    func_0x01438628(*(undefined4 *)(_UNK_016f29f0 + 0x16f26f0));
    func_0x01438628(*(undefined4 *)(_UNK_016f29f4 + 0x16f26fc));
    func_0x01438628(*(undefined4 *)(_UNK_016f29f8 + 0x16f2708));
    func_0x01438628(*(undefined4 *)(_UNK_016f29fc + 0x16f2714));
    func_0x01438628(*(undefined4 *)(_UNK_016f2a00 + 0x16f2720));
    func_0x01438628(*(undefined4 *)(_UNK_016f2a04 + 0x16f272c));
    func_0x01438628(*(undefined4 *)(_UNK_016f2a08 + 0x16f2738));
    func_0x01438628(*(undefined4 *)(_UNK_016f2a0c + 0x16f2744));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8aa3,0);
  if (iVar1 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x20) == 0 && *(int *)(param_1 + 0x24) == 0) {
      if (*(int *)(**(int **)(_UNK_016f2a10 + 0x16f27c4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016f2a14 + 0x16f27e0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_016f2a18 + 0x16f2800));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 700) == 0) {
        uVar5 = 0;
        iVar1 = 0;
      }
      else {
        iVar1 = func_0x024f10ac(*(int *)(iVar1 + 700),**(undefined4 **)(_UNK_016f2a24 + 0x16f2830));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f10bc(&uStack_30,iVar1,**(undefined4 **)(_UNK_016f2a28 + 0x16f2858));
        bVar7 = true;
        puVar6 = *(undefined4 **)(_UNK_016f2a2c + 0x16f2878);
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
        func_0x024f10c0(&uStack_30,**(undefined4 **)(_UNK_016f2a30 + 0x16f28cc));
        if (!bVar7) {
          return 0;
        }
      }
      uVar8 = CONCAT44(iVar1,uVar5);
      if (*(int *)(**(int **)(_UNK_016f2a1c + 0x16f28fc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_016f2a20 + 0x16f2918));
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
    iVar1 = func_0x029540a4(0x8aa3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x0286a3a0(iVar1,param_1,0);
  }
  return uVar8;
}

