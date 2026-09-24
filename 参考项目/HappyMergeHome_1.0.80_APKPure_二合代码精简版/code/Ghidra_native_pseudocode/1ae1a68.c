
/* WARNING: Possible PIC construction at 0x01af1cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01af1d68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01af1cd4) */
/* WARNING: Removing unreachable block (ram,0x01af1cfc) */
/* WARNING: Removing unreachable block (ram,0x01af1d08) */
/* WARNING: Removing unreachable block (ram,0x01af1d18) */
/* WARNING: Removing unreachable block (ram,0x01af1d1c) */
/* WARNING: Removing unreachable block (ram,0x01af1d28) */
/* WARNING: Removing unreachable block (ram,0x01af1d2c) */
/* WARNING: Removing unreachable block (ram,0x01af1d40) */
/* WARNING: Removing unreachable block (ram,0x01af1d44) */
/* WARNING: Removing unreachable block (ram,0x01af1d54) */
/* WARNING: Removing unreachable block (ram,0x01af1d58) */
/* WARNING: Removing unreachable block (ram,0x01af1d6c) */
/* WARNING: Removing unreachable block (ram,0x01af1d94) */
/* WARNING: Removing unreachable block (ram,0x01af1da0) */
/* WARNING: Removing unreachable block (ram,0x01af1db0) */
/* WARNING: Removing unreachable block (ram,0x01af1db4) */
/* WARNING: Removing unreachable block (ram,0x01af1dc0) */
/* WARNING: Removing unreachable block (ram,0x01af1dc4) */
/* WARNING: Removing unreachable block (ram,0x01af1dd8) */
/* WARNING: Removing unreachable block (ram,0x01af1ddc) */
/* WARNING: Removing unreachable block (ram,0x01af1dec) */
/* WARNING: Removing unreachable block (ram,0x01af1df0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01af1a68(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uStack_60;
  int *piStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  undefined4 *puStack_30;
  int *piStack_2c;
  
  pcVar4 = (char *)(_UNK_01af1e0c + 0x1af1a7c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af1e10 + 0x1af1a90));
    func_0x01438628(*(undefined4 *)(_UNK_01af1e14 + 0x1af1a9c));
    func_0x01438628(*(undefined4 *)(_UNK_01af1e18 + 0x1af1aa8));
    func_0x01438628(*(undefined4 *)(_UNK_01af1e1c + 0x1af1ab4));
    func_0x01438628(*(undefined4 *)(_UNK_01af1e20 + 0x1af1ac0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xd1d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xd1d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puStack_30 = (undefined4 *)0x0;
    func_0x024f56c0(&puStack_48,0,0);
    puStack_30 = puStack_48;
    piStack_2c = (int *)iStack_44;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&puStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&puStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    uVar7 = func_0x024f56d0(iVar5,uVar7,&puStack_30,uVar3);
    return uVar7;
  }
  iVar1 = FUN_01ae46e8(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_01ae46e8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x024f0708(iVar1,**(undefined4 **)(_UNK_01af1e24 + 0x1af1b50));
  iVar1 = FUN_01ae46e8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x026bf128(iVar1,0,0);
  iVar1 = FUN_01ae46e8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  if (iVar1 != 0) {
    func_0x026bf898(iVar1,1,0);
    func_0x026bf954(iVar1,0,0);
  }
  iVar1 = FUN_01ae46e8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x18) != 0) {
    func_0x026bfa18(*(int *)(iVar1 + 0x18),0,0);
  }
  if (*(int *)(**(int **)(_UNK_01af1e28 + 0x1af1c00) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_01af1e2c + 0x1af1c1c);
  iVar1 = func_0x014e9518(*puVar9);
  piVar8 = *(int **)(_UNK_01af1e30 + 0x1af1c30);
  iVar5 = *piVar8;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar8;
  }
  piVar10 = *(int **)(_UNK_01af1e34 + 0x1af1c50);
  iVar6 = *piVar10;
  uVar7 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x374);
  iVar5 = *(int *)(iVar6 + 0x1c);
  if (iVar5 == 0) {
    func_0x014909d8(iVar6);
    iVar5 = *(int *)(iVar6 + 0x1c);
  }
  iVar5 = *(int *)(iVar5 + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x0149097c();
  }
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x0149097c();
  }
  uVar3 = **(undefined4 **)(iVar5 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar4 = (char *)(_UNK_029903f0 + 0x29901d4);
  iStack_44 = iVar1;
  iStack_40 = iVar1;
  uStack_3c = uVar7;
  uStack_38 = uVar3;
  piStack_34 = piVar8;
  puStack_30 = puVar9;
  piStack_2c = piVar10;
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar7,uVar3,0);
    func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
    func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
    func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
    *pcVar4 = '\x01';
  }
  puStack_48 = (undefined4 *)0x0;
  uStack_4c = 0;
  iVar5 = func_0x02953fd4(0x226,0);
  if (iVar5 == 0) {
    iVar5 = *(int *)(iVar1 + 0x14);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x04753c80(iVar5,uVar7,**(undefined4 **)(_UNK_02990404 + 0x2990298));
    uVar2 = 0;
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar1 + 0x14);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x0475399c(iVar5,uVar7,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
      if (iVar5 != 0) {
        iVar5 = *(int *)(iVar1 + 0x10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x024f2f10(iVar5,0);
        if (iVar5 == 0) {
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x024f2f20(iVar1,200,0);
          if (iVar1 == 0) {
            return 0;
          }
        }
        puStack_54 = &puStack_48;
        puStack_58 = &uStack_50;
        piStack_5c = &iStack_44;
        uStack_60 = 0;
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
        func_0x0298fd74(uVar2,uVar7,uVar3);
        iVar1 = *(int *)(iStack_44 + 0x18);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03a39760(iVar1,uVar2,**(undefined4 **)(_UNK_02990410 + 0x299038c));
        func_0x010b8c68(&uStack_60);
        uVar2 = 1;
      }
    }
  }
  else {
    iVar5 = func_0x029540a4(0x226,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02871898(iVar5,iVar1,uVar7,uVar3,0);
  }
  return uVar2;
}

