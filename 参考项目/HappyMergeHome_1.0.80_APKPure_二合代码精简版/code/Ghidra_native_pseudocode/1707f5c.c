
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01717f5c(int param_1)

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
  
  pcVar4 = (char *)(_UNK_01718294 + 0x1717f74);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01718298 + 0x1717f88));
    func_0x01438628(*(undefined4 *)(_UNK_0171829c + 0x1717f94));
    func_0x01438628(*(undefined4 *)(_UNK_017182a0 + 0x1717fa0));
    func_0x01438628(*(undefined4 *)(_UNK_017182a4 + 0x1717fac));
    func_0x01438628(*(undefined4 *)(_UNK_017182a8 + 0x1717fb8));
    func_0x01438628(*(undefined4 *)(_UNK_017182ac + 0x1717fc4));
    func_0x01438628(*(undefined4 *)(_UNK_017182b0 + 0x1717fd0));
    func_0x01438628(*(undefined4 *)(_UNK_017182b4 + 0x1717fdc));
    func_0x01438628(*(undefined4 *)(_UNK_017182b8 + 0x1717fe8));
    func_0x01438628(*(undefined4 *)(_UNK_017182bc + 0x1717ff4));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8b80,0);
  if (iVar1 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x20) == 0 && *(int *)(param_1 + 0x24) == 0) {
      if (*(int *)(**(int **)(_UNK_017182c0 + 0x1718074) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017182c4 + 0x1718090));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_017182c8 + 0x17180b0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x3a0) == 0) {
        uVar5 = 0;
        iVar1 = 0;
      }
      else {
        iVar1 = func_0x024f10ac(*(int *)(iVar1 + 0x3a0),**(undefined4 **)(_UNK_017182d4 + 0x17180e0)
                               );
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f10bc(&uStack_30,iVar1,**(undefined4 **)(_UNK_017182d8 + 0x1718108));
        bVar7 = true;
        puVar6 = *(undefined4 **)(_UNK_017182dc + 0x1718128);
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
        func_0x024f10c0(&uStack_30,**(undefined4 **)(_UNK_017182e0 + 0x171817c));
        if (!bVar7) {
          return 0;
        }
      }
      uVar8 = CONCAT44(iVar1,uVar5);
      if (*(int *)(**(int **)(_UNK_017182cc + 0x17181ac) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017182d0 + 0x17181c8));
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
    iVar1 = func_0x029540a4(0x8b80,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x0286a3a0(iVar1,param_1,0);
  }
  return uVar8;
}

