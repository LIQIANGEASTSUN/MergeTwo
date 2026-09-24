
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_017a6808(int param_1)

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
  
  pcVar4 = (char *)(_UNK_017a6b40 + 0x17a6820);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017a6b44 + 0x17a6834));
    func_0x01438628(*(undefined4 *)(_UNK_017a6b48 + 0x17a6840));
    func_0x01438628(*(undefined4 *)(_UNK_017a6b4c + 0x17a684c));
    func_0x01438628(*(undefined4 *)(_UNK_017a6b50 + 0x17a6858));
    func_0x01438628(*(undefined4 *)(_UNK_017a6b54 + 0x17a6864));
    func_0x01438628(*(undefined4 *)(_UNK_017a6b58 + 0x17a6870));
    func_0x01438628(*(undefined4 *)(_UNK_017a6b5c + 0x17a687c));
    func_0x01438628(*(undefined4 *)(_UNK_017a6b60 + 0x17a6888));
    func_0x01438628(*(undefined4 *)(_UNK_017a6b64 + 0x17a6894));
    func_0x01438628(*(undefined4 *)(_UNK_017a6b68 + 0x17a68a0));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8e82,0);
  if (iVar1 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x20) == 0 && *(int *)(param_1 + 0x24) == 0) {
      if (*(int *)(**(int **)(_UNK_017a6b6c + 0x17a6920) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017a6b70 + 0x17a693c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_017a6b74 + 0x17a695c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x30c) == 0) {
        uVar5 = 0;
        iVar1 = 0;
      }
      else {
        iVar1 = func_0x024f10ac(*(int *)(iVar1 + 0x30c),**(undefined4 **)(_UNK_017a6b80 + 0x17a698c)
                               );
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f10bc(&uStack_30,iVar1,**(undefined4 **)(_UNK_017a6b84 + 0x17a69b4));
        bVar7 = true;
        puVar6 = *(undefined4 **)(_UNK_017a6b88 + 0x17a69d4);
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
        func_0x024f10c0(&uStack_30,**(undefined4 **)(_UNK_017a6b8c + 0x17a6a28));
        if (!bVar7) {
          return 0;
        }
      }
      uVar8 = CONCAT44(iVar1,uVar5);
      if (*(int *)(**(int **)(_UNK_017a6b78 + 0x17a6a58) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017a6b7c + 0x17a6a74));
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
    iVar1 = func_0x029540a4(0x8e82,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x0286a3a0(iVar1,param_1,0);
  }
  return uVar8;
}

